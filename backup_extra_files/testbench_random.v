`timescale 1ns / 1ps

module testbench_random;

    // =========================================================
    // Shared stimulus
    // =========================================================
    reg clk;
    reg rst;
    reg [2:0] coin;
    reg [2:0] selezione;
    reg conferma;
    reg annulla;

    integer cycle_count;
    integer transaction_count;
    integer seed;
    integer credit_model;
    integer stock_p1;
    integer stock_p2;
    integer stock_p3;
    integer stock_p4;

    localparam integer RANDOM_CYCLES = 500;

    // =========================================================
    // Behavioral / Structural outputs
    // =========================================================
    wire [5:0] credito_b, credito_s;
    wire       p1_b, p2_b, p3_b, p4_b;
    wire       p1_s, p2_s, p3_s, p4_s;
    wire [1:0] errore_b, errore_s;
    wire [5:0] resto_b, resto_s;
    wire [9:0] disp_b, disp_s;
    wire [5:0] c01_b, c02_b, c05_b, c10_b;
    wire [5:0] c01_s, c02_s, c05_s, c10_s;

    // =========================================================
    // DUTs
    // =========================================================
    vending_behavioral beh_inst (
        .clk(clk), .rst(rst),
        .coin(coin), .selezione(selezione), .conferma(conferma), .annulla(annulla),
        .credito(credito_b),
        .prodotto1(p1_b), .prodotto2(p2_b), .prodotto3(p3_b), .prodotto4(p4_b),
        .errore(errore_b), .resto(resto_b), .disponibile(disp_b),
        .coin_01(c01_b), .coin_02(c02_b), .coin_05(c05_b), .coin_10(c10_b)
    );

    vending_structural str_inst (
        .clk(clk), .rst(rst),
        .coin(coin), .selezione(selezione), .conferma(conferma), .annulla(annulla),
        .credito(credito_s),
        .prodotto1(p1_s), .prodotto2(p2_s), .prodotto3(p3_s), .prodotto4(p4_s),
        .errore(errore_s), .resto(resto_s), .disponibile(disp_s),
        .coin_01(c01_s), .coin_02(c02_s), .coin_05(c05_s), .coin_10(c10_s)
    );

    // =========================================================
    // Clock
    // =========================================================
    always #5 clk = ~clk;

    // =========================================================
    // Helpers
    // =========================================================
    function integer coin_value;
        input [2:0] code;
        begin
            case (code)
                3'b100: coin_value = 1;
                3'b101: coin_value = 2;
                3'b110: coin_value = 5;
                3'b111: coin_value = 10;
                default: coin_value = 0;
            endcase
        end
    endfunction

    function integer price_value;
        input [2:0] code;
        begin
            case (code)
                3'b100: price_value = 3;
                3'b101: price_value = 5;
                3'b110: price_value = 8;
                3'b111: price_value = 12;
                default: price_value = 0;
            endcase
        end
    endfunction

    function [2:0] random_legal_coin;
        input integer r;
        begin
            case (r % 5)
                0: random_legal_coin = 3'b000;
                1: random_legal_coin = 3'b100;
                2: random_legal_coin = 3'b101;
                3: random_legal_coin = 3'b110;
                default: random_legal_coin = 3'b111;
            endcase
        end
    endfunction

    function [2:0] random_legal_selection;
        input integer r;
        begin
            case (r % 5)
                0: random_legal_selection = 3'b000;
                1: random_legal_selection = 3'b100;
                2: random_legal_selection = 3'b101;
                3: random_legal_selection = 3'b110;
                default: random_legal_selection = 3'b111;
            endcase
        end
    endfunction

    function [2:0] choose_valid_product;
        input integer r;
        begin
            choose_valid_product = 3'b000;
            case (r % 4)
                0: if (stock_p1 > 0 && credit_model >= price_value(3'b100)) choose_valid_product = 3'b100;
                1: if (stock_p2 > 0 && credit_model >= price_value(3'b101)) choose_valid_product = 3'b101;
                2: if (stock_p3 > 0 && credit_model >= price_value(3'b110)) choose_valid_product = 3'b110;
                3: if (stock_p4 > 0 && credit_model >= price_value(3'b111)) choose_valid_product = 3'b111;
            endcase

            if (choose_valid_product == 3'b000) begin
                if (stock_p1 > 0 && credit_model >= price_value(3'b100)) choose_valid_product = 3'b100;
                else if (stock_p2 > 0 && credit_model >= price_value(3'b101)) choose_valid_product = 3'b101;
                else if (stock_p3 > 0 && credit_model >= price_value(3'b110)) choose_valid_product = 3'b110;
                else if (stock_p4 > 0 && credit_model >= price_value(3'b111)) choose_valid_product = 3'b111;
            end
        end
    endfunction

    function [2:0] choose_insufficient_product;
        input integer r;
        begin
            choose_insufficient_product = 3'b000;
            case (r % 4)
                0: if (stock_p1 > 0 && credit_model < price_value(3'b100)) choose_insufficient_product = 3'b100;
                1: if (stock_p2 > 0 && credit_model < price_value(3'b101)) choose_insufficient_product = 3'b101;
                2: if (stock_p3 > 0 && credit_model < price_value(3'b110)) choose_insufficient_product = 3'b110;
                3: if (stock_p4 > 0 && credit_model < price_value(3'b111)) choose_insufficient_product = 3'b111;
            endcase

            if (choose_insufficient_product == 3'b000) begin
                if (stock_p4 > 0 && credit_model < price_value(3'b111)) choose_insufficient_product = 3'b111;
                else if (stock_p3 > 0 && credit_model < price_value(3'b110)) choose_insufficient_product = 3'b110;
                else if (stock_p2 > 0 && credit_model < price_value(3'b101)) choose_insufficient_product = 3'b101;
                else if (stock_p1 > 0 && credit_model < price_value(3'b100)) choose_insufficient_product = 3'b100;
            end
        end
    endfunction

    task automatic fail_mismatch;
        input [8*32-1:0] signal_name;
        input [31:0] behavioral_value;
        input [31:0] structural_value;
        begin
            $display(
                "MISMATCH time=%0t cycle=%0d signal=%0s behavioral=%0d structural=%0d",
                $time, cycle_count, signal_name, behavioral_value, structural_value
            );
            $fatal(1, "Randomized comparison failed");
        end
    endtask

    task automatic compare_outputs;
        begin
            if (credito_b !== credito_s) fail_mismatch("credito", {26'd0, credito_b}, {26'd0, credito_s});
            if (resto_b !== resto_s)     fail_mismatch("resto", {26'd0, resto_b}, {26'd0, resto_s});
            if (errore_b !== errore_s)    fail_mismatch("errore", {30'd0, errore_b}, {30'd0, errore_s});
            if (disp_b !== disp_s)       fail_mismatch("disponibile", {22'd0, disp_b}, {22'd0, disp_s});

            if (p1_b !== p1_s) fail_mismatch("prodotto1", {31'd0, p1_b}, {31'd0, p1_s});
            if (p2_b !== p2_s) fail_mismatch("prodotto2", {31'd0, p2_b}, {31'd0, p2_s});
            if (p3_b !== p3_s) fail_mismatch("prodotto3", {31'd0, p3_b}, {31'd0, p3_s});
            if (p4_b !== p4_s) fail_mismatch("prodotto4", {31'd0, p4_b}, {31'd0, p4_s});

            if (c01_b !== c01_s) fail_mismatch("coin_01", {26'd0, c01_b}, {26'd0, c01_s});
            if (c02_b !== c02_s) fail_mismatch("coin_02", {26'd0, c02_b}, {26'd0, c02_s});
            if (c05_b !== c05_s) fail_mismatch("coin_05", {26'd0, c05_b}, {26'd0, c05_s});
            if (c10_b !== c10_s) fail_mismatch("coin_10", {26'd0, c10_b}, {26'd0, c10_s});
        end
    endtask

    task automatic drive_inputs;
        input [2:0] coin_i;
        input [2:0] selezione_i;
        input conferma_i;
        input annulla_i;
        begin
            coin = coin_i;
            selezione = selezione_i;
            conferma = conferma_i;
            annulla = annulla_i;
        end
    endtask

    task automatic step_and_compare;
        input [2:0] coin_i;
        input [2:0] selezione_i;
        input conferma_i;
        input annulla_i;
        begin
            @(negedge clk);
            drive_inputs(coin_i, selezione_i, conferma_i, annulla_i);
            @(posedge clk);
            cycle_count = cycle_count + 1;
            #1;
            if (rst) compare_outputs();
        end
    endtask

    task automatic step_init_config;
        input [5:0] config_word;
        begin
            @(negedge clk);
            coin = config_word[5:3];
            selezione = config_word[2:0];
            conferma = 1'b0;
            annulla = 1'b0;
            @(posedge clk);
            cycle_count = cycle_count + 1;
            #1;
            if (rst) compare_outputs();
        end
    endtask

    task automatic apply_random_cycle;
        integer r;
        integer action;
        reg [2:0] next_coin;
        reg [2:0] next_selezione;
        reg next_conferma;
        reg next_annulla;
        reg [2:0] product_code;
        begin
            r = $random(seed) & 32'h7fffffff;
            action = r % 100;

            next_coin = 3'b000;
            next_selezione = 3'b000;
            next_conferma = 1'b0;
            next_annulla = 1'b0;

            if (action < 55) begin
                next_coin = random_legal_coin(r >> 3);
                if (next_coin == 3'b000) begin
                    next_coin = random_legal_coin(r >> 6);
                    if (next_coin == 3'b000) next_coin = 3'b100;
                end
                credit_model = credit_model + coin_value(next_coin);
                transaction_count = transaction_count + 1;
            end
            else if (action < 70) begin
                // idle / no-op
            end
            else if (action < 80) begin
                if (credit_model > 0) begin
                    next_annulla = 1'b1;
                    credit_model = 0;
                    transaction_count = transaction_count + 1;
                end
            end
            else if (action < 90) begin
                product_code = choose_valid_product(r >> 2);
                if (product_code == 3'b000) begin
                    next_coin = random_legal_coin(r >> 5);
                    if (next_coin == 3'b000) next_coin = 3'b100;
                    credit_model = credit_model + coin_value(next_coin);
                    transaction_count = transaction_count + 1;
                end
                else begin
                    next_selezione = product_code;
                    next_conferma = 1'b1;
                    transaction_count = transaction_count + 1;
                    case (product_code)
                        3'b100: stock_p1 = stock_p1 - 1;
                        3'b101: stock_p2 = stock_p2 - 1;
                        3'b110: stock_p3 = stock_p3 - 1;
                        3'b111: stock_p4 = stock_p4 - 1;
                        default: begin
                            // No product selected.
                        end
                    endcase
                    credit_model = 0;
                end
            end
            else begin
                product_code = choose_insufficient_product(r >> 2);
                if (product_code != 3'b000) begin
                    next_selezione = product_code;
                    next_conferma = 1'b1;
                    transaction_count = transaction_count + 1;
                end
                else begin
                    next_coin = random_legal_coin(r >> 5);
                    if (next_coin == 3'b000) next_coin = 3'b101;
                    credit_model = credit_model + coin_value(next_coin);
                    transaction_count = transaction_count + 1;
                end
            end

            step_and_compare(next_coin, next_selezione, next_conferma, next_annulla);
        end
    endtask

    // =========================================================
    // Main stimulus
    // =========================================================
    initial begin
        $dumpfile("simulazione_random.vcd");
        $dumpvars(0, testbench_random);

        if (!$value$plusargs("SEED=%h", seed)) begin
            seed = 32'h1ACE_B00C;
        end

        clk = 1'b0;
        rst = 1'b0;
        coin = 3'b000;
        selezione = 3'b000;
        conferma = 1'b0;
        annulla = 1'b0;

        cycle_count = 0;
        transaction_count = 0;
        credit_model = 0;
        stock_p1 = 5;
        stock_p2 = 5;
        stock_p3 = 5;
        stock_p4 = 2;

        #20 rst = 1'b1;

        $display("--- RANDOMIZED COMPARISON CAMPAIGN START ---");
        $display("seed=0x%08h (%0d)", seed, seed);

        // Deterministic 12-cycle configuration, same project setup used by the existing tests.
        step_init_config(6'd5);
        step_init_config(6'd3);
        step_init_config(6'd5);
        step_init_config(6'd5);
        step_init_config(6'd5);
        step_init_config(6'd8);
        step_init_config(6'd2);
        step_init_config(6'd12);
        step_init_config(6'd10);
        step_init_config(6'd10);
        step_init_config(6'd10);
        step_init_config(6'd2);

        // Constrained-random phase: coins first, then selection/cancel/idle.
        repeat (RANDOM_CYCLES) begin
            apply_random_cycle();
        end

        $display(
            "--- RANDOMIZED COMPARISON PASSED cycles=%0d random_cycles=%0d transactions=%0d ---",
            cycle_count, RANDOM_CYCLES, transaction_count
        );
        $finish;
    end

endmodule
