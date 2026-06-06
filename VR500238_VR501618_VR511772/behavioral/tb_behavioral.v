`timescale 1ns / 1ps

module tb_behavioral;

    reg clk;
    reg rst;
    reg [2:0] coin;
    reg [2:0] selezione;
    reg conferma;
    reg annulla;

    wire [5:0] credito;
    wire prodotto1, prodotto2, prodotto3, prodotto4;
    wire [1:0] errore;
    wire [5:0] resto;
    wire [9:0] disponibile;
    wire [5:0] coin_01, coin_02, coin_05, coin_10;
    integer report_fd;
    reg [8*128-1:0] current_test_name;
    reg [2:0] last_coin;
    reg [2:0] last_selezione;
    reg last_conferma;
    reg last_annulla;

    vending_behavioral dut (
        .clk(clk),
        .rst(rst),
        .coin(coin),
        .selezione(selezione),
        .conferma(conferma),
        .annulla(annulla),
        .credito(credito),
        .prodotto1(prodotto1),
        .prodotto2(prodotto2),
        .prodotto3(prodotto3),
        .prodotto4(prodotto4),
        .errore(errore),
        .resto(resto),
        .disponibile(disponibile),
        .coin_01(coin_01),
        .coin_02(coin_02),
        .coin_05(coin_05),
        .coin_10(coin_10)
    );

    always #5 clk = ~clk;

    task drive_inputs;
        input [2:0] coin_i;
        input [2:0] selezione_i;
        input conferma_i;
        input annulla_i;
        begin
            coin = coin_i;
            selezione = selezione_i;
            conferma = conferma_i;
            annulla = annulla_i;
            last_coin = coin_i;
            last_selezione = selezione_i;
            last_conferma = conferma_i;
            last_annulla = annulla_i;
        end
    endtask

    task step;
        input [2:0] coin_i;
        input [2:0] selezione_i;
        input conferma_i;
        input annulla_i;
        begin
            coin = coin_i;
            selezione = selezione_i;
            conferma = conferma_i;
            annulla = annulla_i;
            last_coin = coin_i;
            last_selezione = selezione_i;
            last_conferma = conferma_i;
            last_annulla = annulla_i;
            @(posedge clk);
            #1;
        end
    endtask

    task check_eq1;
        input [8*32-1:0] label;
        input got;
        input exp;
        begin
            if (got !== exp) begin
                $display("FAIL %0s time=%0t got=%0d exp=%0d", label, $time, got, exp);
                $fatal(1);
            end
        end
    endtask

    task check_eq2;
        input [8*32-1:0] label;
        input [1:0] got;
        input [1:0] exp;
        begin
            if (got !== exp) begin
                $display("FAIL %0s time=%0t got=%0d exp=%0d", label, $time, got, exp);
                $fatal(1);
            end
        end
    endtask

    task check_eq6;
        input [8*32-1:0] label;
        input [5:0] got;
        input [5:0] exp;
        begin
            if (got !== exp) begin
                $display("FAIL %0s time=%0t got=%0d exp=%0d", label, $time, got, exp);
                $fatal(1);
            end
        end
    endtask

    task check_eq10;
        input [8*32-1:0] label;
        input [9:0] got;
        input [9:0] exp;
        begin
            if (got !== exp) begin
                $display("FAIL %0s time=%0t got=%0d exp=%0d", label, $time, got, exp);
                $fatal(1);
            end
        end
    endtask

    task announce_test;
        input [8*128-1:0] name;
        begin
            current_test_name = name;
            $display("%0s", name);
            if (report_fd != 0) $fdisplay(report_fd, "%0s", name);
        end
    endtask

    task pass_test;
        input [8*128-1:0] name;
        begin
            /* PASS is emitted by check_outputs for each successful case. */
        end
    endtask

    task print_case_report;
        input [5:0] exp_credito;
        input exp_p1;
        input exp_p2;
        input exp_p3;
        input exp_p4;
        input [1:0] exp_errore;
        input [5:0] exp_resto;
        input [9:0] exp_disp;
        input [5:0] exp_c01;
        input [5:0] exp_c02;
        input [5:0] exp_c05;
        input [5:0] exp_c10;
        begin
            $display("IN : coin=%03b selezione=%03b conferma=%0d annulla=%0d", last_coin, last_selezione, last_conferma, last_annulla);
            $display("OUT: credito=%0d prodotto=%b errore=%02b resto=%0d disponibile=%0d coin_01=%0d coin_02=%0d coin_05=%0d coin_10=%0d",
                credito, {prodotto1, prodotto2, prodotto3, prodotto4}, errore, resto, disponibile, coin_01, coin_02, coin_05, coin_10);
            $display("EXP: credito=%0d prodotto=%b errore=%02b resto=%0d disponibile=%0d coin_01=%0d coin_02=%0d coin_05=%0d coin_10=%0d",
                exp_credito, {exp_p1, exp_p2, exp_p3, exp_p4}, exp_errore, exp_resto, exp_disp, exp_c01, exp_c02, exp_c05, exp_c10);
            $display("[PASS] %0s", current_test_name);
            $display("");
            if (report_fd != 0) begin
                $fdisplay(report_fd, "IN : coin=%03b selezione=%03b conferma=%0d annulla=%0d", last_coin, last_selezione, last_conferma, last_annulla);
                $fdisplay(report_fd, "OUT: credito=%0d prodotto=%b errore=%02b resto=%0d disponibile=%0d coin_01=%0d coin_02=%0d coin_05=%0d coin_10=%0d",
                    credito, {prodotto1, prodotto2, prodotto3, prodotto4}, errore, resto, disponibile, coin_01, coin_02, coin_05, coin_10);
                $fdisplay(report_fd, "EXP: credito=%0d prodotto=%b errore=%02b resto=%0d disponibile=%0d coin_01=%0d coin_02=%0d coin_05=%0d coin_10=%0d",
                    exp_credito, {exp_p1, exp_p2, exp_p3, exp_p4}, exp_errore, exp_resto, exp_disp, exp_c01, exp_c02, exp_c05, exp_c10);
                $fdisplay(report_fd, "[PASS] %0s", current_test_name);
                $fdisplay(report_fd, "");
            end
        end
    endtask

    task check_outputs;
        input [5:0] exp_credito;
        input exp_p1;
        input exp_p2;
        input exp_p3;
        input exp_p4;
        input [1:0] exp_errore;
        input [5:0] exp_resto;
        input [9:0] exp_disp;
        input [5:0] exp_c01;
        input [5:0] exp_c02;
        input [5:0] exp_c05;
        input [5:0] exp_c10;
        begin
            check_eq6("credito", credito, exp_credito);
            check_eq1("prodotto1", prodotto1, exp_p1);
            check_eq1("prodotto2", prodotto2, exp_p2);
            check_eq1("prodotto3", prodotto3, exp_p3);
            check_eq1("prodotto4", prodotto4, exp_p4);
            check_eq2("errore", errore, exp_errore);
            check_eq6("resto", resto, exp_resto);
            check_eq10("disponibile", disponibile, exp_disp);
            check_eq6("coin_01", coin_01, exp_c01);
            check_eq6("coin_02", coin_02, exp_c02);
            check_eq6("coin_05", coin_05, exp_c05);
            check_eq6("coin_10", coin_10, exp_c10);
            print_case_report(exp_credito, exp_p1, exp_p2, exp_p3, exp_p4, exp_errore, exp_resto, exp_disp, exp_c01, exp_c02, exp_c05, exp_c10);
        end
    endtask

    task init_word;
        input [5:0] cfg_value;
        begin
            step(cfg_value[5:3], cfg_value[2:0], 1'b0, 1'b0);
        end
    endtask

    task run_init_sequence;
        begin
            init_word(6'd5);
            init_word(6'd3);
            init_word(6'd5);
            init_word(6'd5);
            init_word(6'd5);
            init_word(6'd8);
            init_word(6'd2);
            init_word(6'd12);
            init_word(6'd10);
            init_word(6'd10);
            init_word(6'd10);
            init_word(6'd2);
            step(3'b000, 3'b000, 1'b0, 1'b0);
        end
    endtask

    initial begin
        $dumpfile("simulazione_behavioral.vcd");
        $dumpvars(0, tb_behavioral);
        report_fd = $fopen("risultati/output_behavioral.txt", "w");
        if (report_fd == 0) begin
            $display("Unable to open risultati/output_behavioral.txt");
            $fatal(1);
        end

        clk = 1'b0;
        rst = 1'b0;
        coin = 3'b000;
        selezione = 3'b000;
        conferma = 1'b0;
        annulla = 1'b0;
        last_coin = 3'b000;
        last_selezione = 3'b000;
        last_conferma = 1'b0;
        last_annulla = 1'b0;
        current_test_name = "";

        #20 rst = 1'b1;
        
        announce_test("[TEST 01] Init macchina e caricamento configurazione");
        run_init_sequence();

        check_outputs(6'd0, 1'b0, 1'b0, 1'b0, 1'b0, 2'b00, 6'd0, 10'd100, 6'd0, 6'd0, 6'd0, 6'd0);
        pass_test("[TEST 01] Init macchina e caricamento configurazione");

        announce_test("[TEST 02] Inserimento moneta da 0.1 euro");
        step(3'b100, 3'b000, 1'b0, 1'b0);
        check_outputs(6'd1, 1'b0, 1'b0, 1'b0, 1'b0, 2'b00, 6'd0, 10'd101, 6'd0, 6'd0, 6'd0, 6'd0);
        pass_test("[TEST 02] Inserimento moneta da 0.1 euro");

        announce_test("[TEST 03] Inserimento moneta da 0.2 euro");
        step(3'b101, 3'b000, 1'b0, 1'b0);
        check_outputs(6'd3, 1'b0, 1'b0, 1'b0, 1'b0, 2'b00, 6'd0, 10'd103, 6'd0, 6'd0, 6'd0, 6'd0);
        pass_test("[TEST 03] Inserimento moneta da 0.2 euro");

        announce_test("[TEST 04] Acquisto prodotto 1 con credito esatto");
        step(3'b000, 3'b100, 1'b1, 1'b0);
        check_outputs(6'd0, 1'b1, 1'b0, 1'b0, 1'b0, 2'b00, 6'd0, 10'd103, 6'd0, 6'd0, 6'd0, 6'd0);
        pass_test("[TEST 04] Acquisto prodotto 1 con credito esatto");

        announce_test("[TEST 05] Acquisto prodotto 1 con credito esatto - reset uscite");
        step(3'b000, 3'b000, 1'b0, 1'b0);
        check_outputs(6'd0, 1'b0, 1'b0, 1'b0, 1'b0, 2'b00, 6'd0, 10'd103, 6'd0, 6'd0, 6'd0, 6'd0);
        pass_test("[TEST 05] Acquisto prodotto 1 con credito esatto - reset uscite");

        announce_test("[TEST 06] Inserimento credito per prodotto 2");
        step(3'b111, 3'b000, 1'b0, 1'b0);
        check_outputs(6'd10, 1'b0, 1'b0, 1'b0, 1'b0, 2'b00, 6'd0, 10'd113, 6'd0, 6'd0, 6'd0, 6'd0);
        pass_test("[TEST 06] Inserimento credito per prodotto 2");

        announce_test("[TEST 07] Acquisto prodotto 2 con resto");
        step(3'b000, 3'b101, 1'b1, 1'b0);
        check_outputs(6'd0, 1'b0, 1'b1, 1'b0, 1'b0, 2'b00, 6'd5, 10'd108, 6'd0, 6'd0, 6'd1, 6'd0);
        pass_test("[TEST 07] Acquisto prodotto 2 con resto");

        announce_test("[TEST 08] Acquisto prodotto 2 con resto - reset uscite");
        step(3'b000, 3'b000, 1'b0, 1'b0);
        check_outputs(6'd0, 1'b0, 1'b0, 1'b0, 1'b0, 2'b00, 6'd0, 10'd108, 6'd0, 6'd0, 6'd0, 6'd0);
        pass_test("[TEST 08] Acquisto prodotto 2 con resto - reset uscite");

        announce_test("[TEST 09] Inserimento credito per prodotto 3");
        step(3'b111, 3'b000, 1'b0, 1'b0);
        check_outputs(6'd10, 1'b0, 1'b0, 1'b0, 1'b0, 2'b00, 6'd0, 10'd118, 6'd0, 6'd0, 6'd0, 6'd0);
        step(3'b110, 3'b000, 1'b0, 1'b0);
        check_outputs(6'd15, 1'b0, 1'b0, 1'b0, 1'b0, 2'b00, 6'd0, 10'd123, 6'd0, 6'd0, 6'd0, 6'd0);
        pass_test("[TEST 09] Inserimento credito per prodotto 3");

        announce_test("[TEST 10] Acquisto prodotto 3 con resto frazionato");
        step(3'b000, 3'b110, 1'b1, 1'b0);
        check_outputs(6'd0, 1'b0, 1'b0, 1'b1, 1'b0, 2'b00, 6'd7, 10'd116, 6'd0, 6'd1, 6'd1, 6'd0);
        pass_test("[TEST 10] Acquisto prodotto 3 con resto frazionato");

        announce_test("[TEST 11] Acquisto prodotto 3 con resto frazionato - reset uscite");
        step(3'b000, 3'b000, 1'b0, 1'b0);
        check_outputs(6'd0, 1'b0, 1'b0, 1'b0, 1'b0, 2'b00, 6'd0, 10'd116, 6'd0, 6'd0, 6'd0, 6'd0);
        pass_test("[TEST 11] Acquisto prodotto 3 con resto frazionato - reset uscite");

        announce_test("[TEST 12] Credito insufficiente per prodotto 4");
        step(3'b100, 3'b000, 1'b0, 1'b0);
        check_outputs(6'd1, 1'b0, 1'b0, 1'b0, 1'b0, 2'b00, 6'd0, 10'd117, 6'd0, 6'd0, 6'd0, 6'd0);
        step(3'b000, 3'b111, 1'b1, 1'b0);
        check_outputs(6'd1, 1'b0, 1'b0, 1'b0, 1'b0, 2'b01, 6'd12, 10'd117, 6'd0, 6'd0, 6'd0, 6'd0);
        pass_test("[TEST 12] Credito insufficiente per prodotto 4");

        announce_test("[TEST 13] Credito insufficiente per prodotto 4 - reset uscite");
        step(3'b000, 3'b000, 1'b0, 1'b0);
        check_outputs(6'd1, 1'b0, 1'b0, 1'b0, 1'b0, 2'b00, 6'd0, 10'd117, 6'd0, 6'd0, 6'd0, 6'd0);
        pass_test("[TEST 13] Credito insufficiente per prodotto 4 - reset uscite");

        announce_test("[TEST 14] Annullamento credito residuo");
        step(3'b000, 3'b000, 1'b0, 1'b1);
        check_outputs(6'd0, 1'b0, 1'b0, 1'b0, 1'b0, 2'b00, 6'd1, 10'd116, 6'd1, 6'd0, 6'd0, 6'd0);
        pass_test("[TEST 14] Annullamento credito residuo");

        announce_test("[TEST 15] Annullamento credito residuo - reset uscite");
        step(3'b000, 3'b000, 1'b0, 1'b0);
        check_outputs(6'd0, 1'b0, 1'b0, 1'b0, 1'b0, 2'b00, 6'd0, 10'd116, 6'd0, 6'd0, 6'd0, 6'd0);
        pass_test("[TEST 15] Annullamento credito residuo - reset uscite");

        announce_test("[TEST 16] Inserimento credito per annullamento transazione");
        step(3'b111, 3'b000, 1'b0, 1'b0);
        step(3'b101, 3'b000, 1'b0, 1'b0);
        pass_test("[TEST 16] Inserimento credito per annullamento transazione");

        announce_test("[TEST 17] Acquisto prodotto 4 con credito sufficiente");
        step(3'b000, 3'b111, 1'b1, 1'b0);
        check_outputs(6'd0, 1'b0, 1'b0, 1'b0, 1'b1, 2'b00, 6'd0, 10'd128, 6'd0, 6'd0, 6'd0, 6'd0);
        pass_test("[TEST 17] Acquisto prodotto 4 con credito sufficiente");

        announce_test("[TEST 18] Acquisto prodotto 4 con credito sufficiente - reset uscite");
        step(3'b000, 3'b000, 1'b0, 1'b0);
        check_outputs(6'd0, 1'b0, 1'b0, 1'b0, 1'b0, 2'b00, 6'd0, 10'd128, 6'd0, 6'd0, 6'd0, 6'd0);
        pass_test("[TEST 18] Acquisto prodotto 4 con credito sufficiente - reset uscite");

        announce_test("[TEST 19] Inserimento credito per annullamento transazione con saldo alto");
        step(3'b111, 3'b000, 1'b0, 1'b0);
        step(3'b101, 3'b000, 1'b0, 1'b0);
        pass_test("[TEST 19] Inserimento credito per annullamento transazione con saldo alto");

        announce_test("[TEST 20] Acquisto prodotto 4 con credito alto");
        step(3'b000, 3'b111, 1'b1, 1'b0);
        check_outputs(6'd0, 1'b0, 1'b0, 1'b0, 1'b1, 2'b00, 6'd0, 10'd140, 6'd0, 6'd0, 6'd0, 6'd0);
        pass_test("[TEST 20] Acquisto prodotto 4 con credito alto");

        announce_test("[TEST 21] Acquisto prodotto 4 con credito alto - reset uscite");
        step(3'b000, 3'b000, 1'b0, 1'b0);
        check_outputs(6'd0, 1'b0, 1'b0, 1'b0, 1'b0, 2'b00, 6'd0, 10'd140, 6'd0, 6'd0, 6'd0, 6'd0);
        pass_test("[TEST 21] Acquisto prodotto 4 con credito alto - reset uscite");

        announce_test("[TEST 22] Inserimento credito per acquisto prodotto 4 con esito errore");
        step(3'b111, 3'b000, 1'b0, 1'b0);
        step(3'b101, 3'b000, 1'b0, 1'b0);
        pass_test("[TEST 22] Inserimento credito per acquisto prodotto 4 con esito errore");

        announce_test("[TEST 23] Acquisto prodotto 4 con disponibilita non sufficiente");
        step(3'b000, 3'b111, 1'b1, 1'b0);
        check_outputs(6'd12, 1'b0, 1'b0, 1'b0, 1'b0, 2'b10, 6'd0, 10'd152, 6'd0, 6'd0, 6'd0, 6'd0);
        pass_test("[TEST 23] Acquisto prodotto 4 con disponibilita non sufficiente");

        announce_test("[TEST 24] Acquisto prodotto 4 con disponibilita non sufficiente - reset uscite");
        step(3'b000, 3'b000, 1'b0, 1'b0);
        check_outputs(6'd12, 1'b0, 1'b0, 1'b0, 1'b0, 2'b00, 6'd0, 10'd152, 6'd0, 6'd0, 6'd0, 6'd0);
        pass_test("[TEST 24] Acquisto prodotto 4 con disponibilita non sufficiente - reset uscite");

        announce_test("[TEST 25] Annullamento transazione finale");
        step(3'b000, 3'b000, 1'b0, 1'b1);
        check_outputs(6'd0, 1'b0, 1'b0, 1'b0, 1'b0, 2'b00, 6'd12, 10'd140, 6'd0, 6'd1, 6'd0, 6'd1);
        pass_test("[TEST 25] Annullamento transazione finale");

        announce_test("[TEST 26] Annullamento transazione finale - reset uscite");
        step(3'b000, 3'b000, 1'b0, 1'b0);
        check_outputs(6'd0, 1'b0, 1'b0, 1'b0, 1'b0, 2'b00, 6'd0, 10'd140, 6'd0, 6'd0, 6'd0, 6'd0);
        pass_test("[TEST 26] Annullamento transazione finale - reset uscite");

        announce_test("[TEST 27] Inserimento credito per selezione invalida");
        step(3'b100, 3'b000, 1'b0, 1'b0);
        step(3'b000, 3'b000, 1'b0, 1'b0);
        pass_test("[TEST 27] Inserimento credito per selezione invalida");

        announce_test("[TEST 28] Selezione invalida con codice non supportato");
        check_outputs(6'd1, 1'b0, 1'b0, 1'b0, 1'b0, 2'b00, 6'd0, 10'd141, 6'd0, 6'd0, 6'd0, 6'd0);
        step(3'b000, 3'b001, 1'b1, 1'b0);
        check_outputs(6'd1, 1'b0, 1'b0, 1'b0, 1'b0, 2'b10, 6'd0, 10'd141, 6'd0, 6'd0, 6'd0, 6'd0);
        pass_test("[TEST 28] Selezione invalida con codice non supportato");

        announce_test("[TEST 29] Selezione invalida con codice non supportato - reset uscite");
        step(3'b000, 3'b000, 1'b0, 1'b0);
        check_outputs(6'd1, 1'b0, 1'b0, 1'b0, 1'b0, 2'b00, 6'd0, 10'd141, 6'd0, 6'd0, 6'd0, 6'd0);
        pass_test("[TEST 29] Selezione invalida con codice non supportato - reset uscite");

        announce_test("[TEST 30] Inserimento credito per confronto finale");
        step(3'b111, 3'b000, 1'b0, 1'b0);
        step(3'b110, 3'b000, 1'b0, 1'b0);
        step(3'b101, 3'b000, 1'b0, 1'b0);
        pass_test("[TEST 30] Inserimento credito per confronto finale");

        announce_test("[TEST 31] Confronto finale / reset uscite temporanee");
        step(3'b000, 3'b000, 1'b0, 1'b1);
        check_outputs(6'd0, 1'b0, 1'b0, 1'b0, 1'b0, 2'b00, 6'd18, 10'd140, 6'd1, 6'd1, 6'd1, 6'd1);
        pass_test("[TEST 31] Confronto finale / reset uscite temporanee");

        announce_test("[TEST 32] Confronto finale / reset uscite temporanee - reset uscite");
        step(3'b000, 3'b000, 1'b0, 1'b0);
        check_outputs(6'd0, 1'b0, 1'b0, 1'b0, 1'b0, 2'b00, 6'd0, 10'd140, 6'd0, 6'd0, 6'd0, 6'd0);
        pass_test("[TEST 32] Confronto finale / reset uscite temporanee - reset uscite");

        announce_test("[TEST 33] Aggiornamento disponibilita finale");
        step(3'b111, 3'b000, 1'b0, 1'b0);
        check_outputs(6'd10, 1'b0, 1'b0, 1'b0, 1'b0, 2'b00, 6'd0, 10'd150, 6'd0, 6'd0, 6'd0, 6'd0);
        pass_test("[TEST 33] Aggiornamento disponibilita finale");

        rst = 1'b0;
        #1;
        announce_test("[TEST 34] Reset asincrono / uscite temporanee azzerate");
        check_outputs(6'd0, 1'b0, 1'b0, 1'b0, 1'b0, 2'b00, 6'd0, 10'd0, 6'd0, 6'd0, 6'd0, 6'd0);
        pass_test("[TEST 34] Reset asincrono / uscite temporanee azzerate");
        rst = 1'b1;

        announce_test("[TEST 35] Reinizializzazione finale");
        run_init_sequence();
        check_outputs(6'd0, 1'b0, 1'b0, 1'b0, 1'b0, 2'b00, 6'd0, 10'd100, 6'd0, 6'd0, 6'd0, 6'd0);
        pass_test("[TEST 35] Reinizializzazione finale");

        $display("ALL TESTS PASSED");
        if (report_fd != 0) $fdisplay(report_fd, "ALL TESTS PASSED");
        if (report_fd != 0) $fclose(report_fd);
        $finish;
    end

endmodule
