`timescale 1ns / 1ps

module vending_fsm (
    input  wire       clk,
    input  wire       rst,

    input  wire [2:0] coin,
    input  wire [2:0] selezione,
    input  wire       conferma,
    input  wire       annulla,

    // flags dal datapath (valutati nel ciclo di conferma)
    input  wire       is_credito_suff,
    input  wire       is_stock_ok,

    // INIT control
    output reg        mode_init,
    output reg [3:0]  init_counter,

    // azzera impulsi/uscite in IDLE (come behavioral)
    output reg        clear_outputs,

    // operazioni su datapath
    output reg        do_add_coin,
    output reg        do_cancel,
    output reg        do_err,         // conferma ma errore
    output reg        do_ok,          // conferma ok (produce impulso prodotto + dec stock + latch prezzo)
    output reg        do_erogazione,  // ciclo dopo do_ok: calcolo greedy + resto + update monete

    // selezione latched per erogazione (usata per prodotto/stock)
    output reg [2:0]  sel_latched,

    // prodotto impulso (nel ciclo do_ok)
    output reg        prodotto1,
    output reg        prodotto2,
    output reg        prodotto3,
    output reg        prodotto4
);

    // Stati = uguali al behavioral
    localparam [1:0]
        S_INIT       = 2'b00,
        S_IDLE       = 2'b01,
        S_OPERATIVA  = 2'b10,
        S_EROGAZIONE = 2'b11;

    reg [1:0] stato, next_stato;

    // Selezioni valide: 100, 101, 110, 111.
    // Le selezioni 001, 010, 011 sono invalide e non devono causare erogazione.
    wire valid_sel = (selezione == 3'b100) ||
                     (selezione == 3'b101) ||
                     (selezione == 3'b110) ||
                     (selezione == 3'b111);

    // sequenziale stato + init counter
    always @(posedge clk or negedge rst) begin
        if (!rst) begin
            stato <= S_INIT;
            init_counter <= 4'd0;
        end else begin
            stato <= next_stato;
            if (stato == S_INIT) begin
                if (init_counter < 4'd11) init_counter <= init_counter + 4'd1;
                else init_counter <= 4'd0; // pulizia
            end
        end
    end

    // latch selezione quando conferma (come behavioral usa selezione “live”, ma qui la fissiamo)
    always @(posedge clk or negedge rst) begin
        if (!rst) begin
            sel_latched <= 3'b000;
        end else if (conferma && valid_sel) begin
            sel_latched <= selezione;
        end
    end

    // combinatoria
    always @(*) begin
        // default
        mode_init     = 1'b0;
        clear_outputs = 1'b0;

        do_add_coin   = 1'b0;
        do_cancel     = 1'b0;
        do_err        = 1'b0;
        do_ok         = 1'b0;
        do_erogazione = 1'b0;

        prodotto1 = 1'b0;
        prodotto2 = 1'b0;
        prodotto3 = 1'b0;
        prodotto4 = 1'b0;

        next_stato = stato;

        case (stato)
            S_INIT: begin
                mode_init = 1'b1;
                // 12 cicli: 0..11. Al “12° valore” (counter==11) vai a IDLE.
                if (init_counter == 4'd11) next_stato = S_IDLE;
                else next_stato = S_INIT;
            end

            S_IDLE: begin
                // behavioral in IDLE azzera sempre impulsi/uscite
                clear_outputs = 1'b1;

                if (coin != 3'b000) begin
                    // coin vale in questo ciclo
                    do_add_coin = 1'b1;
                    next_stato  = S_OPERATIVA;
                end else begin
                    next_stato = S_IDLE;
                end
            end

            S_OPERATIVA: begin
                if (coin != 3'b000) begin
                    do_add_coin = 1'b1;     // coin vale nel ciclo corrente
                    next_stato  = S_OPERATIVA;
                end
                else if (annulla) begin
                    do_cancel  = 1'b1;      // resto = credito, credito=0, disponibile -= credito
                    next_stato = S_IDLE;
                end
                else if (conferma) begin
                    // decide in base ai flag del datapath solo se la selezione è valida.
                    // Con selezione invalida si imita il behavioral: nessuna erogazione,
                    // nessun azzeramento credito, nessun aggiornamento disponibile/resto.
                    if (!valid_sel) begin
                        do_err    = 1'b1;
                        next_stato = S_IDLE;
                    end
                    else if (is_credito_suff && is_stock_ok) begin
                        do_ok = 1'b1;       // impulso prodotto + dec stock + latch prezzo
                        case (selezione)
                            3'b100: prodotto1 = 1'b1;
                            3'b101: prodotto2 = 1'b1;
                            3'b110: prodotto3 = 1'b1;
                            3'b111: prodotto4 = 1'b1;
                            default: ;
                        endcase
                        next_stato = S_EROGAZIONE;
                    end else begin
                        do_err    = 1'b1;   // errore + (se credito insuff) resto=prezzo
                        next_stato = S_IDLE;
                    end
                end
                else begin
                    next_stato = S_OPERATIVA;
                end
            end

            S_EROGAZIONE: begin
                // Nel behavioral: qui calcoli greedy, resto, aggiorni monete/disponibile, credito=0 e torni IDLE.
                do_erogazione = 1'b1;
                next_stato = S_IDLE;
            end

            default: begin
                next_stato = S_INIT;
            end
        endcase
    end

endmodule
