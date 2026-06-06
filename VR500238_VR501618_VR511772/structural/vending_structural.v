`timescale 1ns / 1ps
`include "structural/components.v"

module vending_structural (
    input  wire       clk,
    input  wire       rst,
    input  wire [2:0] coin,
    input  wire [2:0] selezione,
    input  wire       conferma,
    input  wire       annulla,

    output wire [5:0] credito,
    output wire       prodotto1,
    output wire       prodotto2,
    output wire       prodotto3,
    output wire       prodotto4,
    output wire [1:0] errore,
    output wire [5:0] resto,
    output wire [9:0] disponibile,

    output wire [5:0] coin_01,
    output wire [5:0] coin_02,
    output wire [5:0] coin_05,
    output wire [5:0] coin_10
);

    wire       mode_init;
    wire [3:0] init_counter_w;
    wire       clear_outputs;
    wire       do_add_coin;
    wire       do_cancel;
    wire       do_err;
    wire       do_ok;
    wire       do_erogazione;
    wire [2:0] sel_latched;
    wire       c_prod1;
    wire       c_prod2;
    wire       c_prod3;
    wire       c_prod4;

    wire [5:0] qty_p1_q;
    wire [5:0] qty_p2_q;
    wire [5:0] qty_p3_q;
    wire [5:0] qty_p4_q;
    wire [5:0] price_p1_q;
    wire [5:0] price_p2_q;
    wire [5:0] price_p3_q;
    wire [5:0] price_p4_q;
    wire [5:0] qty_c01_q;
    wire [5:0] qty_c02_q;
    wire [5:0] qty_c05_q;
    wire [5:0] qty_c10_q;
    wire [5:0] current_price_q;
    wire [5:0] credito_q;
    wire [9:0] disponibile_q;
    wire [1:0] errore_q;
    wire [5:0] resto_q;
    wire prod1_q;
    wire prod2_q;
    wire prod3_q;
    wire prod4_q;
    wire [5:0] coin01_q;
    wire [5:0] coin02_q;
    wire [5:0] coin05_q;
    wire [5:0] coin10_q;

    assign credito = credito_q;
    assign disponibile = disponibile_q;
    assign errore = errore_q;
    assign resto = resto_q;
    assign prodotto1 = prod1_q;
    assign prodotto2 = prod2_q;
    assign prodotto3 = prod3_q;
    assign prodotto4 = prod4_q;
    assign coin_01 = coin01_q;
    assign coin_02 = coin02_q;
    assign coin_05 = coin05_q;
    assign coin_10 = coin10_q;

    wire valid_sel = (selezione == 3'b100) ||
                     (selezione == 3'b101) ||
                     (selezione == 3'b110) ||
                     (selezione == 3'b111);

    wire [1:0] sel_idx = selezione[1:0];

    wire [5:0] sel_price;
    wire [5:0] sel_qty;

    Mux4 #(6) mux_price (price_p1_q, price_p2_q, price_p3_q, price_p4_q, sel_idx, sel_price);
    Mux4 #(6) mux_qty   (qty_p1_q,   qty_p2_q,   qty_p3_q,   qty_p4_q,   sel_idx, sel_qty);

    wire credito_ge_selprice;
    ComparatoreGE #(6) cmp_credito (credito_q, sel_price, credito_ge_selprice);
    wire credito_insuff = valid_sel && !credito_ge_selprice;
    wire stock_empty = valid_sel && (sel_qty == 6'd0);
    wire [1:0] err_calc = valid_sel ? {stock_empty, credito_insuff} : 2'b10;

    vending_fsm fsm (
        .clk(clk),
        .rst(rst),
        .coin(coin),
        .selezione(selezione),
        .conferma(conferma),
        .annulla(annulla),
        .is_credito_suff(credito_ge_selprice),
        .is_stock_ok(!stock_empty),
        .mode_init(mode_init),
        .init_counter(init_counter_w),
        .clear_outputs(clear_outputs),
        .do_add_coin(do_add_coin),
        .do_cancel(do_cancel),
        .do_err(do_err),
        .do_ok(do_ok),
        .do_erogazione(do_erogazione),
        .sel_latched(sel_latched),
        .prodotto1(c_prod1),
        .prodotto2(c_prod2),
        .prodotto3(c_prod3),
        .prodotto4(c_prod4)
    );

    wire [5:0] purchase_change = credito_q - sel_price;
    wire [5:0] payout_amount = do_ok ? purchase_change : credito_q;
    wire payout_active = do_ok | do_cancel;

    wire [5:0] c10_calc;
    wire [5:0] c05_calc;
    wire [5:0] c02_calc;
    wire [5:0] c01_calc;
    wire [5:0] qc10_next;
    wire [5:0] qc05_next;
    wire [5:0] qc02_next;
    wire [5:0] qc01_next;

    GreedyLogic greedy_inst (
        .do_erogazione(payout_active),
        .change6(payout_amount),
        .qty_c10_curr(qty_c10_q),
        .qty_c05_curr(qty_c05_q),
        .qty_c02_curr(qty_c02_q),
        .qty_c01_curr(qty_c01_q),
        .c10_to_emit(c10_calc),
        .c05_to_emit(c05_calc),
        .c02_to_emit(c02_calc),
        .c01_to_emit(c01_calc),
        .qc10_next(qc10_next),
        .qc05_next(qc05_next),
        .qc02_next(qc02_next),
        .qc01_next(qc01_next)
    );

    wire [9:0] payout_returned =
        ({4'd0, c10_calc} * 10'd10) +
        ({4'd0, c05_calc} * 10'd5) +
        ({4'd0, c02_calc} * 10'd2) +
        {4'd0, c01_calc};

    wire [9:0] available_after_payout =
        (payout_returned > disponibile_q) ? 10'd0 : (disponibile_q - payout_returned);

    reg [5:0] coin_value;
    always @(*) begin
        case (coin)
            3'b100: coin_value = 6'd1;
            3'b101: coin_value = 6'd2;
            3'b110: coin_value = 6'd5;
            3'b111: coin_value = 6'd10;
            default: coin_value = 6'd0;
        endcase
    end

    wire [5:0] cfg_value = {coin, selezione};
    wire [9:0] cfg_value_10 = {4'd0, cfg_value};
    wire [9:0] disp_init_c01 = cfg_value_10;
    wire [9:0] disp_init_c02 = disponibile_q + (cfg_value_10 << 1);
    wire [9:0] disp_init_c05 = disponibile_q + (cfg_value_10 + (cfg_value_10 << 2));
    wire [9:0] disp_init_c10 = disponibile_q + ((cfg_value_10 << 3) + (cfg_value_10 << 1));

    wire [9:0] coin_value_10 = {4'd0, coin_value};
    wire [9:0] disponibile_plus_coin = disponibile_q + coin_value_10;

    wire init_qty_p1   = mode_init & (init_counter_w == 4'd0);
    wire init_price_p1 = mode_init & (init_counter_w == 4'd1);
    wire init_qty_p2   = mode_init & (init_counter_w == 4'd2);
    wire init_price_p2 = mode_init & (init_counter_w == 4'd3);
    wire init_qty_p3   = mode_init & (init_counter_w == 4'd4);
    wire init_price_p3 = mode_init & (init_counter_w == 4'd5);
    wire init_qty_p4   = mode_init & (init_counter_w == 4'd6);
    wire init_price_p4 = mode_init & (init_counter_w == 4'd7);
    wire init_c01 = mode_init & (init_counter_w == 4'd8);
    wire init_c02 = mode_init & (init_counter_w == 4'd9);
    wire init_c05 = mode_init & (init_counter_w == 4'd10);
    wire init_c10 = mode_init & (init_counter_w == 4'd11);

    wire do_p1 = do_ok & (selezione == 3'b100);
    wire do_p2 = do_ok & (selezione == 3'b101);
    wire do_p3 = do_ok & (selezione == 3'b110);
    wire do_p4 = do_ok & (selezione == 3'b111);

    wire add_c01 = do_add_coin & (coin == 3'b100);
    wire add_c02 = do_add_coin & (coin == 3'b101);
    wire add_c05 = do_add_coin & (coin == 3'b110);
    wire add_c10 = do_add_coin & (coin == 3'b111);

    wire [5:0] qty_p1_dec = qty_p1_q - 6'd1;
    wire [5:0] qty_p2_dec = qty_p2_q - 6'd1;
    wire [5:0] qty_p3_dec = qty_p3_q - 6'd1;
    wire [5:0] qty_p4_dec = qty_p4_q - 6'd1;
    wire [5:0] qty_c01_inc = qty_c01_q + 6'd1;
    wire [5:0] qty_c02_inc = qty_c02_q + 6'd1;
    wire [5:0] qty_c05_inc = qty_c05_q + 6'd1;
    wire [5:0] qty_c10_inc = qty_c10_q + 6'd1;

    wire [5:0] qty_p1_d = init_qty_p1 ? cfg_value : (do_p1 ? qty_p1_dec : qty_p1_q);
    wire [5:0] qty_p2_d = init_qty_p2 ? cfg_value : (do_p2 ? qty_p2_dec : qty_p2_q);
    wire [5:0] qty_p3_d = init_qty_p3 ? cfg_value : (do_p3 ? qty_p3_dec : qty_p3_q);
    wire [5:0] qty_p4_d = init_qty_p4 ? cfg_value : (do_p4 ? qty_p4_dec : qty_p4_q);

    wire [5:0] price_p1_d = init_price_p1 ? cfg_value : price_p1_q;
    wire [5:0] price_p2_d = init_price_p2 ? cfg_value : price_p2_q;
    wire [5:0] price_p3_d = init_price_p3 ? cfg_value : price_p3_q;
    wire [5:0] price_p4_d = init_price_p4 ? cfg_value : price_p4_q;

    wire [5:0] qty_c01_d = init_c01 ? cfg_value : (add_c01 ? qty_c01_inc : (payout_active ? qc01_next : qty_c01_q));
    wire [5:0] qty_c02_d = init_c02 ? cfg_value : (add_c02 ? qty_c02_inc : (payout_active ? qc02_next : qty_c02_q));
    wire [5:0] qty_c05_d = init_c05 ? cfg_value : (add_c05 ? qty_c05_inc : (payout_active ? qc05_next : qty_c05_q));
    wire [5:0] qty_c10_d = init_c10 ? cfg_value : (add_c10 ? qty_c10_inc : (payout_active ? qc10_next : qty_c10_q));

    wire [5:0] current_price_d = do_ok ? sel_price : current_price_q;

    wire [5:0] credito_plus_coin = credito_q + coin_value;
    wire [5:0] credito_d = mode_init ? 6'd0 : (payout_active ? 6'd0 : (do_add_coin ? credito_plus_coin : credito_q));

    wire [9:0] disponibile_d =
        init_c01 ? disp_init_c01 :
        init_c02 ? disp_init_c02 :
        init_c05 ? disp_init_c05 :
        init_c10 ? disp_init_c10 :
        do_add_coin ? disponibile_plus_coin :
        payout_active ? available_after_payout :
        disponibile_q;

    wire [1:0] errore_d = do_err ? err_calc : (clear_outputs ? 2'b00 : errore_q);
    wire [5:0] resto_err_value = (valid_sel && credito_insuff) ? sel_price : 6'd0;
    wire [5:0] resto_d = payout_active ? payout_returned[5:0] : (do_err ? resto_err_value : (clear_outputs ? 6'd0 : resto_q));

    wire prod1_d = clear_outputs ? 1'b0 : (do_ok ? c_prod1 : prod1_q);
    wire prod2_d = clear_outputs ? 1'b0 : (do_ok ? c_prod2 : prod2_q);
    wire prod3_d = clear_outputs ? 1'b0 : (do_ok ? c_prod3 : prod3_q);
    wire prod4_d = clear_outputs ? 1'b0 : (do_ok ? c_prod4 : prod4_q);

    wire [5:0] coin01_d = payout_active ? c01_calc : (clear_outputs ? 6'd0 : coin01_q);
    wire [5:0] coin02_d = payout_active ? c02_calc : (clear_outputs ? 6'd0 : coin02_q);
    wire [5:0] coin05_d = payout_active ? c05_calc : (clear_outputs ? 6'd0 : coin05_q);
    wire [5:0] coin10_d = payout_active ? c10_calc : (clear_outputs ? 6'd0 : coin10_q);

    wire we_qty_p1   = init_qty_p1 | do_p1;
    wire we_qty_p2   = init_qty_p2 | do_p2;
    wire we_qty_p3   = init_qty_p3 | do_p3;
    wire we_qty_p4   = init_qty_p4 | do_p4;
    wire we_price_p1 = init_price_p1;
    wire we_price_p2 = init_price_p2;
    wire we_price_p3 = init_price_p3;
    wire we_price_p4 = init_price_p4;
    wire we_c01 = init_c01 | add_c01 | payout_active;
    wire we_c02 = init_c02 | add_c02 | payout_active;
    wire we_c05 = init_c05 | add_c05 | payout_active;
    wire we_c10 = init_c10 | add_c10 | payout_active;
    wire we_current_price = do_ok;
    wire we_credito = mode_init | do_add_coin | payout_active;
    wire we_disponibile = init_c01 | init_c02 | init_c05 | init_c10 | do_add_coin | payout_active;
    wire we_errore = clear_outputs | do_err;
    wire we_resto = clear_outputs | do_err | payout_active;
    wire we_prod = clear_outputs | do_ok;
    wire we_coin_out = clear_outputs | payout_active;

    RegistroPP #(6) R_qty_p1   (.clk(clk), .rst(rst), .enable(we_qty_p1), .D(qty_p1_d), .Q(qty_p1_q));
    RegistroPP #(6) R_qty_p2   (.clk(clk), .rst(rst), .enable(we_qty_p2), .D(qty_p2_d), .Q(qty_p2_q));
    RegistroPP #(6) R_qty_p3   (.clk(clk), .rst(rst), .enable(we_qty_p3), .D(qty_p3_d), .Q(qty_p3_q));
    RegistroPP #(6) R_qty_p4   (.clk(clk), .rst(rst), .enable(we_qty_p4), .D(qty_p4_d), .Q(qty_p4_q));

    RegistroPP #(6) R_price_p1 (.clk(clk), .rst(rst), .enable(we_price_p1), .D(price_p1_d), .Q(price_p1_q));
    RegistroPP #(6) R_price_p2 (.clk(clk), .rst(rst), .enable(we_price_p2), .D(price_p2_d), .Q(price_p2_q));
    RegistroPP #(6) R_price_p3 (.clk(clk), .rst(rst), .enable(we_price_p3), .D(price_p3_d), .Q(price_p3_q));
    RegistroPP #(6) R_price_p4 (.clk(clk), .rst(rst), .enable(we_price_p4), .D(price_p4_d), .Q(price_p4_q));

    RegistroPP #(6) R_c01      (.clk(clk), .rst(rst), .enable(we_c01), .D(qty_c01_d), .Q(qty_c01_q));
    RegistroPP #(6) R_c02      (.clk(clk), .rst(rst), .enable(we_c02), .D(qty_c02_d), .Q(qty_c02_q));
    RegistroPP #(6) R_c05      (.clk(clk), .rst(rst), .enable(we_c05), .D(qty_c05_d), .Q(qty_c05_q));
    RegistroPP #(6) R_c10      (.clk(clk), .rst(rst), .enable(we_c10), .D(qty_c10_d), .Q(qty_c10_q));

    RegistroPP #(6) R_curprice (.clk(clk), .rst(rst), .enable(we_current_price), .D(current_price_d), .Q(current_price_q));
    RegistroPP #(6) R_credito  (.clk(clk), .rst(rst), .enable(we_credito), .D(credito_d), .Q(credito_q));
    RegistroPP #(10) R_disp    (.clk(clk), .rst(rst), .enable(we_disponibile), .D(disponibile_d), .Q(disponibile_q));
    RegistroPP #(2)  R_err     (.clk(clk), .rst(rst), .enable(we_errore), .D(errore_d), .Q(errore_q));
    RegistroPP #(6)  R_resto   (.clk(clk), .rst(rst), .enable(we_resto), .D(resto_d), .Q(resto_q));
    RegistroPP #(1)  R_p1      (.clk(clk), .rst(rst), .enable(we_prod), .D(prod1_d), .Q(prod1_q));
    RegistroPP #(1)  R_p2      (.clk(clk), .rst(rst), .enable(we_prod), .D(prod2_d), .Q(prod2_q));
    RegistroPP #(1)  R_p3      (.clk(clk), .rst(rst), .enable(we_prod), .D(prod3_d), .Q(prod3_q));
    RegistroPP #(1)  R_p4      (.clk(clk), .rst(rst), .enable(we_prod), .D(prod4_d), .Q(prod4_q));
    RegistroPP #(6)  R_out01   (.clk(clk), .rst(rst), .enable(we_coin_out), .D(coin01_d), .Q(coin01_q));
    RegistroPP #(6)  R_out02   (.clk(clk), .rst(rst), .enable(we_coin_out), .D(coin02_d), .Q(coin02_q));
    RegistroPP #(6)  R_out05   (.clk(clk), .rst(rst), .enable(we_coin_out), .D(coin05_d), .Q(coin05_q));
    RegistroPP #(6)  R_out10   (.clk(clk), .rst(rst), .enable(we_coin_out), .D(coin10_d), .Q(coin10_q));

endmodule
