`timescale 1ns / 1ps

module vending_behavioral (
    input clk,
    input rst,
    input [2:0] coin,
    input [2:0] selezione,
    input conferma,
    input annulla,

    output reg [5:0] credito,
    output reg prodotto1,
    output reg prodotto2,
    output reg prodotto3,
    output reg prodotto4,
    output reg [1:0] errore,
    output reg [5:0] resto,
    output reg [9:0] disponibile,

    output reg [5:0] coin_01,
    output reg [5:0] coin_02,
    output reg [5:0] coin_05,
    output reg [5:0] coin_10
);

    localparam [1:0]
        S_INIT       = 2'b00,
        S_IDLE       = 2'b01,
        S_OPERATIVA  = 2'b10,
        S_EROGAZIONE = 2'b11;

    reg [1:0] stato;
    reg [3:0] init_counter;

    reg [5:0] qty_p1, qty_p2, qty_p3, qty_p4;
    reg [5:0] price_p1, price_p2, price_p3, price_p4;
    reg [5:0] qty_c01, qty_c02, qty_c05, qty_c10;
    reg [5:0] current_price;

    reg [5:0] greedy_out_01;
    reg [5:0] greedy_out_02;
    reg [5:0] greedy_out_05;
    reg [5:0] greedy_out_10;
    reg [5:0] greedy_next_01;
    reg [5:0] greedy_next_02;
    reg [5:0] greedy_next_05;
    reg [5:0] greedy_next_10;
    reg [5:0] greedy_returned;

    reg [9:0] init_value;

    function [5:0] coin_value;
        input [2:0] code;
        begin
            case (code)
                3'b100: coin_value = 6'd1;
                3'b101: coin_value = 6'd2;
                3'b110: coin_value = 6'd5;
                3'b111: coin_value = 6'd10;
                default: coin_value = 6'd0;
            endcase
        end
    endfunction

    task greedy_return;
        input [5:0] amount;
        output [5:0] out10;
        output [5:0] out05;
        output [5:0] out02;
        output [5:0] out01;
        output [5:0] next10;
        output [5:0] next05;
        output [5:0] next02;
        output [5:0] next01;
        output [5:0] returned;
        reg [5:0] remain;
        reg [5:0] take;
        begin
            out10 = 6'd0;
            out05 = 6'd0;
            out02 = 6'd0;
            out01 = 6'd0;
            next10 = qty_c10;
            next05 = qty_c05;
            next02 = qty_c02;
            next01 = qty_c01;
            remain = amount;
            returned = 6'd0;

            take = remain / 6'd10;
            if (take > qty_c10) take = qty_c10;
            out10 = take;
            next10 = qty_c10 - take;
            remain = remain - (take * 6'd10);

            take = remain / 6'd5;
            if (take > qty_c05) take = qty_c05;
            out05 = take;
            next05 = qty_c05 - take;
            remain = remain - (take * 6'd5);

            take = remain / 6'd2;
            if (take > qty_c02) take = qty_c02;
            out02 = take;
            next02 = qty_c02 - take;
            remain = remain - (take * 6'd2);

            take = remain;
            if (take > qty_c01) take = qty_c01;
            out01 = take;
            next01 = qty_c01 - take;
            remain = remain - take;

            returned = amount - remain;
        end
    endtask

    always @(posedge clk or negedge rst) begin
        if (!rst) begin
            stato <= S_INIT;
            init_counter <= 4'd0;
            credito <= 6'd0;
            prodotto1 <= 1'b0;
            prodotto2 <= 1'b0;
            prodotto3 <= 1'b0;
            prodotto4 <= 1'b0;
            errore <= 2'b00;
            resto <= 6'd0;
            disponibile <= 10'd0;
            coin_01 <= 6'd0;
            coin_02 <= 6'd0;
            coin_05 <= 6'd0;
            coin_10 <= 6'd0;
            qty_p1 <= 6'd0;
            qty_p2 <= 6'd0;
            qty_p3 <= 6'd0;
            qty_p4 <= 6'd0;
            price_p1 <= 6'd0;
            price_p2 <= 6'd0;
            price_p3 <= 6'd0;
            price_p4 <= 6'd0;
            qty_c01 <= 6'd0;
            qty_c02 <= 6'd0;
            qty_c05 <= 6'd0;
            qty_c10 <= 6'd0;
            current_price <= 6'd0;
        end
        else begin
            case (stato)
                S_INIT: begin
                    credito <= 6'd0;
                    prodotto1 <= 1'b0;
                    prodotto2 <= 1'b0;
                    prodotto3 <= 1'b0;
                    prodotto4 <= 1'b0;
                    errore <= 2'b00;
                    resto <= 6'd0;
                    coin_01 <= 6'd0;
                    coin_02 <= 6'd0;
                    coin_05 <= 6'd0;
                    coin_10 <= 6'd0;
                    current_price <= 6'd0;
                    init_value = {4'd0, coin, selezione};

                    case (init_counter)
                        4'd0:  qty_p1   <= init_value[5:0];
                        4'd1:  price_p1 <= init_value[5:0];
                        4'd2:  qty_p2   <= init_value[5:0];
                        4'd3:  price_p2 <= init_value[5:0];
                        4'd4:  qty_p3   <= init_value[5:0];
                        4'd5:  price_p3 <= init_value[5:0];
                        4'd6:  qty_p4   <= init_value[5:0];
                        4'd7:  price_p4 <= init_value[5:0];
                        4'd8: begin
                            qty_c01 <= init_value[5:0];
                        end
                        4'd9: begin
                            qty_c02 <= init_value[5:0];
                        end
                        4'd10: begin
                            qty_c05 <= init_value[5:0];
                        end
                        4'd11: begin
                            qty_c10 <= init_value[5:0];
                            disponibile <= {4'd0, qty_c01} +
                                           ({4'd0, qty_c02} << 1) +
                                           ({4'd0, qty_c05} + ({4'd0, qty_c05} << 2)) +
                                           (({4'd0, init_value[5:0]} << 3) + ({4'd0, init_value[5:0]} << 1));
                            stato <= S_IDLE;
                            init_counter <= 4'd0;
                        end
                        default: begin
                        end
                    endcase

                    if (init_counter < 4'd11) begin
                        init_counter <= init_counter + 4'd1;
                    end
                end

                S_IDLE: begin
                    prodotto1 <= 1'b0;
                    prodotto2 <= 1'b0;
                    prodotto3 <= 1'b0;
                    prodotto4 <= 1'b0;
                    errore <= 2'b00;
                    resto <= 6'd0;
                    coin_01 <= 6'd0;
                    coin_02 <= 6'd0;
                    coin_05 <= 6'd0;
                    coin_10 <= 6'd0;

                    if (annulla) begin
                        greedy_return(
                            credito,
                            greedy_out_10, greedy_out_05, greedy_out_02, greedy_out_01,
                            greedy_next_10, greedy_next_05, greedy_next_02, greedy_next_01,
                            greedy_returned
                        );
                        coin_10 <= greedy_out_10;
                        coin_05 <= greedy_out_05;
                        coin_02 <= greedy_out_02;
                        coin_01 <= greedy_out_01;
                        qty_c10 <= greedy_next_10;
                        qty_c05 <= greedy_next_05;
                        qty_c02 <= greedy_next_02;
                        qty_c01 <= greedy_next_01;
                        resto <= greedy_returned;
                        if ({4'd0, greedy_returned} > disponibile) begin
                            disponibile <= 10'd0;
                        end
                        else begin
                            disponibile <= disponibile - {4'd0, greedy_returned};
                        end
                        credito <= 6'd0;
                        stato <= S_IDLE;
                    end
                    else if (coin_value(coin) != 6'd0) begin
                        credito <= credito + coin_value(coin);
                        disponibile <= disponibile + {4'd0, coin_value(coin)};
                        case (coin)
                            3'b100: qty_c01 <= qty_c01 + 6'd1;
                            3'b101: qty_c02 <= qty_c02 + 6'd1;
                            3'b110: qty_c05 <= qty_c05 + 6'd1;
                            3'b111: qty_c10 <= qty_c10 + 6'd1;
                            default: begin
                            end
                        endcase
                        stato <= S_OPERATIVA;
                    end
                    else begin
                        stato <= S_IDLE;
                    end
                end

                S_OPERATIVA: begin
                    prodotto1 <= 1'b0;
                    prodotto2 <= 1'b0;
                    prodotto3 <= 1'b0;
                    prodotto4 <= 1'b0;
                    errore <= 2'b00;
                    resto <= 6'd0;
                    coin_01 <= 6'd0;
                    coin_02 <= 6'd0;
                    coin_05 <= 6'd0;
                    coin_10 <= 6'd0;

                    if (annulla) begin
                        greedy_return(
                            credito,
                            greedy_out_10, greedy_out_05, greedy_out_02, greedy_out_01,
                            greedy_next_10, greedy_next_05, greedy_next_02, greedy_next_01,
                            greedy_returned
                        );

                        coin_10 <= greedy_out_10;
                        coin_05 <= greedy_out_05;
                        coin_02 <= greedy_out_02;
                        coin_01 <= greedy_out_01;
                        qty_c10 <= greedy_next_10;
                        qty_c05 <= greedy_next_05;
                        qty_c02 <= greedy_next_02;
                        qty_c01 <= greedy_next_01;
                        resto <= greedy_returned;
                        if ({4'd0, greedy_returned} > disponibile) begin
                            disponibile <= 10'd0;
                        end
                        else begin
                            disponibile <= disponibile - {4'd0, greedy_returned};
                        end
                        credito <= 6'd0;
                        stato <= S_IDLE;
                    end
                    else if (coin_value(coin) != 6'd0) begin
                        credito <= credito + coin_value(coin);
                        disponibile <= disponibile + {4'd0, coin_value(coin)};
                        case (coin)
                            3'b100: qty_c01 <= qty_c01 + 6'd1;
                            3'b101: qty_c02 <= qty_c02 + 6'd1;
                            3'b110: qty_c05 <= qty_c05 + 6'd1;
                            3'b111: qty_c10 <= qty_c10 + 6'd1;
                            default: begin
                            end
                        endcase
                    end
                    else if (conferma) begin
                        case (selezione)
                            3'b100: begin
                                if (qty_p1 == 6'd0) begin
                                    errore <= (credito < price_p1) ? 2'b11 : 2'b10;
                                    if (credito < price_p1) resto <= price_p1;
                                    stato <= S_IDLE;
                                end
                                else if (credito < price_p1) begin
                                    errore <= 2'b01;
                                    resto <= price_p1;
                                    stato <= S_IDLE;
                                end
                                else begin
                                    greedy_return(
                                        credito - price_p1,
                                        greedy_out_10, greedy_out_05, greedy_out_02, greedy_out_01,
                                        greedy_next_10, greedy_next_05, greedy_next_02, greedy_next_01,
                                        greedy_returned
                                    );

                                    prodotto1 <= 1'b1;
                                    qty_p1 <= qty_p1 - 6'd1;
                                    current_price <= price_p1;
                                    coin_10 <= greedy_out_10;
                                    coin_05 <= greedy_out_05;
                                    coin_02 <= greedy_out_02;
                                    coin_01 <= greedy_out_01;
                                    qty_c10 <= greedy_next_10;
                                    qty_c05 <= greedy_next_05;
                                    qty_c02 <= greedy_next_02;
                                    qty_c01 <= greedy_next_01;
                                    resto <= greedy_returned;
                                    if ({4'd0, greedy_returned} > disponibile) begin
                                        disponibile <= 10'd0;
                                    end
                                    else begin
                                        disponibile <= disponibile - {4'd0, greedy_returned};
                                    end
                                    credito <= 6'd0;
                                    stato <= S_EROGAZIONE;
                                end
                            end

                            3'b101: begin
                                if (qty_p2 == 6'd0) begin
                                    errore <= (credito < price_p2) ? 2'b11 : 2'b10;
                                    if (credito < price_p2) resto <= price_p2;
                                    stato <= S_IDLE;
                                end
                                else if (credito < price_p2) begin
                                    errore <= 2'b01;
                                    resto <= price_p2;
                                    stato <= S_IDLE;
                                end
                                else begin
                                    greedy_return(
                                        credito - price_p2,
                                        greedy_out_10, greedy_out_05, greedy_out_02, greedy_out_01,
                                        greedy_next_10, greedy_next_05, greedy_next_02, greedy_next_01,
                                        greedy_returned
                                    );

                                    prodotto2 <= 1'b1;
                                    qty_p2 <= qty_p2 - 6'd1;
                                    current_price <= price_p2;
                                    coin_10 <= greedy_out_10;
                                    coin_05 <= greedy_out_05;
                                    coin_02 <= greedy_out_02;
                                    coin_01 <= greedy_out_01;
                                    qty_c10 <= greedy_next_10;
                                    qty_c05 <= greedy_next_05;
                                    qty_c02 <= greedy_next_02;
                                    qty_c01 <= greedy_next_01;
                                    resto <= greedy_returned;
                                    if ({4'd0, greedy_returned} > disponibile) begin
                                        disponibile <= 10'd0;
                                    end
                                    else begin
                                        disponibile <= disponibile - {4'd0, greedy_returned};
                                    end
                                    credito <= 6'd0;
                                    stato <= S_EROGAZIONE;
                                end
                            end

                            3'b110: begin
                                if (qty_p3 == 6'd0) begin
                                    errore <= (credito < price_p3) ? 2'b11 : 2'b10;
                                    if (credito < price_p3) resto <= price_p3;
                                    stato <= S_IDLE;
                                end
                                else if (credito < price_p3) begin
                                    errore <= 2'b01;
                                    resto <= price_p3;
                                    stato <= S_IDLE;
                                end
                                else begin
                                    greedy_return(
                                        credito - price_p3,
                                        greedy_out_10, greedy_out_05, greedy_out_02, greedy_out_01,
                                        greedy_next_10, greedy_next_05, greedy_next_02, greedy_next_01,
                                        greedy_returned
                                    );

                                    prodotto3 <= 1'b1;
                                    qty_p3 <= qty_p3 - 6'd1;
                                    current_price <= price_p3;
                                    coin_10 <= greedy_out_10;
                                    coin_05 <= greedy_out_05;
                                    coin_02 <= greedy_out_02;
                                    coin_01 <= greedy_out_01;
                                    qty_c10 <= greedy_next_10;
                                    qty_c05 <= greedy_next_05;
                                    qty_c02 <= greedy_next_02;
                                    qty_c01 <= greedy_next_01;
                                    resto <= greedy_returned;
                                    if ({4'd0, greedy_returned} > disponibile) begin
                                        disponibile <= 10'd0;
                                    end
                                    else begin
                                        disponibile <= disponibile - {4'd0, greedy_returned};
                                    end
                                    credito <= 6'd0;
                                    stato <= S_EROGAZIONE;
                                end
                            end

                            3'b111: begin
                                if (qty_p4 == 6'd0) begin
                                    errore <= (credito < price_p4) ? 2'b11 : 2'b10;
                                    if (credito < price_p4) resto <= price_p4;
                                    stato <= S_IDLE;
                                end
                                else if (credito < price_p4) begin
                                    errore <= 2'b01;
                                    resto <= price_p4;
                                    stato <= S_IDLE;
                                end
                                else begin
                                    greedy_return(
                                        credito - price_p4,
                                        greedy_out_10, greedy_out_05, greedy_out_02, greedy_out_01,
                                        greedy_next_10, greedy_next_05, greedy_next_02, greedy_next_01,
                                        greedy_returned
                                    );

                                    prodotto4 <= 1'b1;
                                    qty_p4 <= qty_p4 - 6'd1;
                                    current_price <= price_p4;
                                    coin_10 <= greedy_out_10;
                                    coin_05 <= greedy_out_05;
                                    coin_02 <= greedy_out_02;
                                    coin_01 <= greedy_out_01;
                                    qty_c10 <= greedy_next_10;
                                    qty_c05 <= greedy_next_05;
                                    qty_c02 <= greedy_next_02;
                                    qty_c01 <= greedy_next_01;
                                    resto <= greedy_returned;
                                    if ({4'd0, greedy_returned} > disponibile) begin
                                        disponibile <= 10'd0;
                                    end
                                    else begin
                                        disponibile <= disponibile - {4'd0, greedy_returned};
                                    end
                                    credito <= 6'd0;
                                    stato <= S_EROGAZIONE;
                                end
                            end

                            default: begin
                                errore <= 2'b10;
                                stato <= S_IDLE;
                            end
                        endcase
                    end
                    else begin
                        stato <= S_OPERATIVA;
                    end
                end

                S_EROGAZIONE: begin
                    prodotto1 <= 1'b0;
                    prodotto2 <= 1'b0;
                    prodotto3 <= 1'b0;
                    prodotto4 <= 1'b0;
                    errore <= 2'b00;
                    resto <= 6'd0;
                    coin_01 <= 6'd0;
                    coin_02 <= 6'd0;
                    coin_05 <= 6'd0;
                    coin_10 <= 6'd0;
                    stato <= S_IDLE;
                end

                default: begin
                    stato <= S_INIT;
                end
            endcase
        end
    end

endmodule
