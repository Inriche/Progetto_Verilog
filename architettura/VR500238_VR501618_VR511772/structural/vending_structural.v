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

    // =========================
    // CTRL signals dalla FSM
    // =========================
    wire       mode_init;
    wire [3:0] init_counter_w;

    wire       clear_outputs;
    wire       do_add_coin;
    wire       do_cancel;
    wire       do_err;
    wire       do_ok;
    wire       do_erogazione;

    wire [2:0] sel_latched; // (non indispensabile qui, ma lasciato per completezza)
    wire       c_prod1, c_prod2, c_prod3, c_prod4;

    // =========================
    // FSM (controller)
    // =========================
    // Flags dal datapath (calcolati combinatoriamente più sotto)
    wire is_credito_suff;
    wire is_stock_ok;

    vending_fsm CTRL (
        .clk(clk), .rst(rst),
        .coin(coin), .selezione(selezione), .conferma(conferma), .annulla(annulla),
        .is_credito_suff(is_credito_suff),
        .is_stock_ok(is_stock_ok),
        .mode_init(mode_init),
        .init_counter(init_counter_w),
        .clear_outputs(clear_outputs),
        .do_add_coin(do_add_coin),
        .do_cancel(do_cancel),
        .do_err(do_err),
        .do_ok(do_ok),
        .do_erogazione(do_erogazione),
        .sel_latched(sel_latched),
        .prodotto1(c_prod1), .prodotto2(c_prod2), .prodotto3(c_prod3), .prodotto4(c_prod4)
    );

    // =========================
    // INIT data (6 bit) come specifica
    // =========================
    wire [5:0] init_data = {coin, selezione};

    // =========================
    // DECODIFICA MONETA (combinatoria)
    // =========================
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

    // =========================
    // REGISTRI DI STATO (datapath) realizzati con RegistroPP
    // =========================
    // Prodotti: qty e price
    wire [5:0] qty_p1_q, qty_p2_q, qty_p3_q, qty_p4_q;
    wire [5:0] price_p1_q, price_p2_q, price_p3_q, price_p4_q;

    // Monete disponibili per il resto
    wire [5:0] qty_c01_q, qty_c02_q, qty_c05_q, qty_c10_q;

    // Prezzo del prodotto confermato (usato in EROGAZIONE)
    wire [5:0] current_price_q;

    // Uscite registrate (impulsivi/visibili fino a clear_outputs)
    wire [5:0] credito_q;
    wire [9:0] disponibile_q;
    wire [1:0] errore_q;
    wire [5:0] resto_q;

    wire prod1_q, prod2_q, prod3_q, prod4_q;
    wire [5:0] coin01_q, coin02_q, coin05_q, coin10_q;

    // Collego alle porte esterne
    assign credito     = credito_q;
    assign disponibile = disponibile_q;
    assign errore      = errore_q;
    assign resto       = resto_q;

    assign prodotto1   = prod1_q;
    assign prodotto2   = prod2_q;
    assign prodotto3   = prod3_q;
    assign prodotto4   = prod4_q;

    assign coin_01     = coin01_q;
    assign coin_02     = coin02_q;
    assign coin_05     = coin05_q;
    assign coin_10     = coin10_q;

    // =========================
    // SELEZIONE -> indice per Mux4 (100..111 -> 00..11)
    // =========================
    wire valid_sel = (selezione == 3'b100) ||
                     (selezione == 3'b101) ||
                     (selezione == 3'b110) ||
                     (selezione == 3'b111);

    wire [1:0] sel_idx = selezione[1:0];

    // Prezzo e qty correnti (da mux strutturali)
    wire [5:0] sel_price;
    wire [5:0] sel_qty;

    Mux4 #(6) mux_price (price_p1_q, price_p2_q, price_p3_q, price_p4_q, sel_idx, sel_price);
    Mux4 #(6) mux_qty   (qty_p1_q,   qty_p2_q,   qty_p3_q,   qty_p4_q,   sel_idx, sel_qty);

    // Flags per FSM (structural-friendly)
    wire credito_ge_selprice;
    ComparatoreGE #(6) cmp_credito (credito_q, sel_price, credito_ge_selprice);
    assign is_credito_suff = valid_sel && credito_ge_selprice;
    assign is_stock_ok = valid_sel && (sel_qty != 6'd0);

    // =========================
    // DATAPATH: calcoli combinatori con componenti
    // =========================

    // credito + coin_value (6 bit)
    wire [5:0] credito_plus_coin;
    Sommatore #(6) add_cred (credito_q, coin_value, credito_plus_coin);

    // disponibile + coin_value (10 bit): estendo coin_value a 10
    wire [9:0] coin_value_10 = {4'd0, coin_value};
    wire [9:0] disponibile_plus_coin;
    Sommatore #(10) add_disp (disponibile_q, coin_value_10, disponibile_plus_coin);

    // change = credito - current_price (6 bit)
    wire [5:0] change6;
    Sottrattore #(6) sub_change (credito_q, current_price_q, change6);
    wire [9:0] change10 = {4'd0, change6};

    // disponibile - credito (annulla)
    wire [9:0] credito10 = {4'd0, credito_q};
    wire [9:0] disponibile_minus_credito;
    Sottrattore #(10) sub_disp_cancel (disponibile_q, credito10, disponibile_minus_credito);

    // disponibile - change (erogazione)
    wire [9:0] disponibile_minus_change;
    Sottrattore #(10) sub_disp_change (disponibile_q, change10, disponibile_minus_change);

    //GREEDY

    wire [5:0] c10_calc, c05_calc, c02_calc, c01_calc;
    wire [5:0] qc10_next, qc05_next, qc02_next, qc01_next;

    GreedyLogic greedy_inst (
        .do_erogazione(do_erogazione),
        .change6(change6),
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



    // =========================
    // GENERAZIONE ENABLE per init dei registri (12 cicli)
    // =========================
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

    // =========================
    // UPDATE qty prodotti su do_ok (decremento selezionato)
    // =========================
    wire sel_p1 = (selezione == 3'b100);
    wire sel_p2 = (selezione == 3'b101);
    wire sel_p3 = (selezione == 3'b110);
    wire sel_p4 = (selezione == 3'b111);

    wire do_dec_p1 = do_ok & sel_p1;
    wire do_dec_p2 = do_ok & sel_p2;
    wire do_dec_p3 = do_ok & sel_p3;
    wire do_dec_p4 = do_ok & sel_p4;

    wire [5:0] qty_p1_dec = qty_p1_q - 6'd1;
    wire [5:0] qty_p2_dec = qty_p2_q - 6'd1;
    wire [5:0] qty_p3_dec = qty_p3_q - 6'd1;
    wire [5:0] qty_p4_dec = qty_p4_q - 6'd1;

    // D per qty prodotti (priorità: init > dec > hold)
    wire [5:0] qty_p1_d = init_qty_p1   ? init_data : (do_dec_p1 ? qty_p1_dec : qty_p1_q);
    wire [5:0] qty_p2_d = init_qty_p2   ? init_data : (do_dec_p2 ? qty_p2_dec : qty_p2_q);
    wire [5:0] qty_p3_d = init_qty_p3   ? init_data : (do_dec_p3 ? qty_p3_dec : qty_p3_q);
    wire [5:0] qty_p4_d = init_qty_p4   ? init_data : (do_dec_p4 ? qty_p4_dec : qty_p4_q);

    // enable qty prodotti
    wire we_qty_p1 = init_qty_p1 | do_dec_p1;
    wire we_qty_p2 = init_qty_p2 | do_dec_p2;
    wire we_qty_p3 = init_qty_p3 | do_dec_p3;
    wire we_qty_p4 = init_qty_p4 | do_dec_p4;

    // Price D/en
    wire [5:0] price_p1_d = init_price_p1 ? init_data : price_p1_q;
    wire [5:0] price_p2_d = init_price_p2 ? init_data : price_p2_q;
    wire [5:0] price_p3_d = init_price_p3 ? init_data : price_p3_q;
    wire [5:0] price_p4_d = init_price_p4 ? init_data : price_p4_q;

    wire we_price_p1 = init_price_p1;
    wire we_price_p2 = init_price_p2;
    wire we_price_p3 = init_price_p3;
    wire we_price_p4 = init_price_p4;

    // Coin stock D/en (init > erogazione > hold)
    wire [5:0] qty_c01_d = init_c01 ? init_data : (do_erogazione ? qc01_next : qty_c01_q);
    wire [5:0] qty_c02_d = init_c02 ? init_data : (do_erogazione ? qc02_next : qty_c02_q);
    wire [5:0] qty_c05_d = init_c05 ? init_data : (do_erogazione ? qc05_next : qty_c05_q);
    wire [5:0] qty_c10_d = init_c10 ? init_data : (do_erogazione ? qc10_next : qty_c10_q);

    wire we_c01 = init_c01 | do_erogazione;
    wire we_c02 = init_c02 | do_erogazione;
    wire we_c05 = init_c05 | do_erogazione;
    wire we_c10 = init_c10 | do_erogazione;

    // current_price register: si carica su do_ok
    wire [5:0] current_price_d = do_ok ? sel_price : current_price_q;
    wire we_current_price = do_ok;

    // =========================
    // OUTPUTS (impulsivi / visibili finché clear_outputs)
    // =========================

    // PRODOTTI: hold fino a clear_outputs
    wire prod1_d = clear_outputs ? 1'b0 : (do_ok ? c_prod1 : prod1_q);
    wire prod2_d = clear_outputs ? 1'b0 : (do_ok ? c_prod2 : prod2_q);
    wire prod3_d = clear_outputs ? 1'b0 : (do_ok ? c_prod3 : prod3_q);
    wire prod4_d = clear_outputs ? 1'b0 : (do_ok ? c_prod4 : prod4_q);

    wire we_prod = clear_outputs | do_ok;

    // ERRORE: set su do_err, clear in IDLE
    wire [1:0] err_calc = valid_sel ? { (sel_qty == 6'd0), (credito_q < sel_price) } : 2'b10;
    wire [1:0] errore_d = clear_outputs ? 2'b00 : (do_err ? err_calc : errore_q);
    wire we_errore = clear_outputs | do_err;

    // RESTO: do_cancel -> credito, do_err (credito insuff) -> prezzo, do_erogazione -> change, clear in IDLE
    wire [5:0] resto_from_cancel = credito_q;
    wire [5:0] resto_from_err = err_calc[0] ? sel_price : 6'd0;
    wire [5:0] resto_from_erog   = change6;

    wire credito_insuff = (credito_q < sel_price);

    wire [5:0] resto_d =
        clear_outputs ? 6'd0 :
        (do_erogazione ? resto_from_erog :
         (do_cancel ? resto_from_cancel :
          (do_err && credito_insuff ? resto_from_err : resto_q)));

    wire we_resto = clear_outputs | do_cancel | do_erogazione | do_err;

    // COIN OUT: set su do_erogazione, clear in IDLE
    wire [5:0] coin10_d = clear_outputs ? 6'd0 : (do_erogazione ? c10_calc : coin10_q);
    wire [5:0] coin05_d = clear_outputs ? 6'd0 : (do_erogazione ? c05_calc : coin05_q);
    wire [5:0] coin02_d = clear_outputs ? 6'd0 : (do_erogazione ? c02_calc : coin02_q);
    wire [5:0] coin01_d = clear_outputs ? 6'd0 : (do_erogazione ? c01_calc : coin01_q);

    wire we_coin_out = clear_outputs | do_erogazione;

    // CREDITO: add coin (stesso ciclo), cancel/erogazione -> 0
    wire [5:0] credito_d =
        (do_cancel || do_erogazione) ? 6'd0 :
        (do_add_coin ? credito_plus_coin : credito_q);

    wire we_credito = do_add_coin | do_cancel | do_erogazione;

    // DISPONIBILE: add coin, cancel (disp - credito), erogazione (disp - change)
    wire [9:0] disponibile_d =
        do_cancel     ? disponibile_minus_credito :
        do_erogazione ? disponibile_minus_change :
        (do_add_coin  ? disponibile_plus_coin : disponibile_q);

    wire we_disponibile = do_add_coin | do_cancel | do_erogazione;

    // =========================
    // ISTANZE REGISTRI (RegistroPP) — il datapath è “structural”
    // =========================

    // qty prodotti
    RegistroPP #(6) R_qty_p1   (.clk(clk), .rst(rst), .enable(we_qty_p1), .D(qty_p1_d), .Q(qty_p1_q));
    RegistroPP #(6) R_qty_p2   (.clk(clk), .rst(rst), .enable(we_qty_p2), .D(qty_p2_d), .Q(qty_p2_q));
    RegistroPP #(6) R_qty_p3   (.clk(clk), .rst(rst), .enable(we_qty_p3), .D(qty_p3_d), .Q(qty_p3_q));
    RegistroPP #(6) R_qty_p4   (.clk(clk), .rst(rst), .enable(we_qty_p4), .D(qty_p4_d), .Q(qty_p4_q));

    // price prodotti
    RegistroPP #(6) R_price_p1 (.clk(clk), .rst(rst), .enable(we_price_p1), .D(price_p1_d), .Q(price_p1_q));
    RegistroPP #(6) R_price_p2 (.clk(clk), .rst(rst), .enable(we_price_p2), .D(price_p2_d), .Q(price_p2_q));
    RegistroPP #(6) R_price_p3 (.clk(clk), .rst(rst), .enable(we_price_p3), .D(price_p3_d), .Q(price_p3_q));
    RegistroPP #(6) R_price_p4 (.clk(clk), .rst(rst), .enable(we_price_p4), .D(price_p4_d), .Q(price_p4_q));

    // qty monete
    RegistroPP #(6) R_c01      (.clk(clk), .rst(rst), .enable(we_c01), .D(qty_c01_d), .Q(qty_c01_q));
    RegistroPP #(6) R_c02      (.clk(clk), .rst(rst), .enable(we_c02), .D(qty_c02_d), .Q(qty_c02_q));
    RegistroPP #(6) R_c05      (.clk(clk), .rst(rst), .enable(we_c05), .D(qty_c05_d), .Q(qty_c05_q));
    RegistroPP #(6) R_c10      (.clk(clk), .rst(rst), .enable(we_c10), .D(qty_c10_d), .Q(qty_c10_q));

    // prezzo corrente
    RegistroPP #(6) R_curprice (.clk(clk), .rst(rst), .enable(we_current_price), .D(current_price_d), .Q(current_price_q));

    // credito
    RegistroPP #(6) R_credito  (.clk(clk), .rst(rst), .enable(we_credito), .D(credito_d), .Q(credito_q));

    // disponibile (10 bit)
    RegistroPP #(10) R_disp    (.clk(clk), .rst(rst), .enable(we_disponibile), .D(disponibile_d), .Q(disponibile_q));

    // errore/resto
    RegistroPP #(2)  R_err     (.clk(clk), .rst(rst), .enable(we_errore), .D(errore_d), .Q(errore_q));
    RegistroPP #(6)  R_resto   (.clk(clk), .rst(rst), .enable(we_resto), .D(resto_d), .Q(resto_q));

    // prodotti
    RegistroPP #(1)  R_p1      (.clk(clk), .rst(rst), .enable(we_prod), .D(prod1_d), .Q(prod1_q));
    RegistroPP #(1)  R_p2      (.clk(clk), .rst(rst), .enable(we_prod), .D(prod2_d), .Q(prod2_q));
    RegistroPP #(1)  R_p3      (.clk(clk), .rst(rst), .enable(we_prod), .D(prod3_d), .Q(prod3_q));
    RegistroPP #(1)  R_p4      (.clk(clk), .rst(rst), .enable(we_prod), .D(prod4_d), .Q(prod4_q));

    // coin out
    RegistroPP #(6)  R_out01   (.clk(clk), .rst(rst), .enable(we_coin_out), .D(coin01_d), .Q(coin01_q));
    RegistroPP #(6)  R_out02   (.clk(clk), .rst(rst), .enable(we_coin_out), .D(coin02_d), .Q(coin02_q));
    RegistroPP #(6)  R_out05   (.clk(clk), .rst(rst), .enable(we_coin_out), .D(coin05_d), .Q(coin05_q));
    RegistroPP #(6)  R_out10   (.clk(clk), .rst(rst), .enable(we_coin_out), .D(coin10_d), .Q(coin10_q));

endmodule
