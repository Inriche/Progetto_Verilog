`timescale 1ns / 1ps

module testbench;

    // ==========================================
    // 1. INPUT COMUNI
    // ==========================================
    reg clk;
    reg rst;
    reg [2:0] coin;
    reg [2:0] selezione;
    reg conferma;
    reg annulla;

    // ==========================================
    // 2. OUTPUT DA CONFRONTARE
    // ==========================================
    // Suffix _b per Behavioral, _s per Structural
    wire [5:0] credito_b, credito_s;
    wire p1_b, p2_b, p3_b, p4_b;
    wire p1_s, p2_s, p3_s, p4_s;
    wire [1:0] errore_b, errore_s;
    wire [5:0] resto_b, resto_s;
    wire [9:0] disp_b, disp_s;
    
    // Output Gruppo da 3 (Monete resto)
    wire [5:0] c01_b, c02_b, c05_b, c10_b;
    wire [5:0] c01_s, c02_s, c05_s, c10_s;

    // ==========================================
    // 3. ISTANZIAZIONE DEI DUE MODELLI
    // ==========================================
    
    // Modello Behavioral (Il riferimento "Golden Model")
    vending_behavioral beh_inst (
        .clk(clk), .rst(rst),
        .coin(coin), .selezione(selezione), .conferma(conferma), .annulla(annulla),
        .credito(credito_b),
        .prodotto1(p1_b), .prodotto2(p2_b), .prodotto3(p3_b), .prodotto4(p4_b),
        .errore(errore_b), .resto(resto_b), .disponibile(disp_b),
        .coin_01(c01_b), .coin_02(c02_b), .coin_05(c05_b), .coin_10(c10_b)
    );

    // Modello Structural (Il circuito da verificare)
    vending_structural str_inst (
        .clk(clk), .rst(rst),
        .coin(coin), .selezione(selezione), .conferma(conferma), .annulla(annulla),
        .credito(credito_s),
        .prodotto1(p1_s), .prodotto2(p2_s), .prodotto3(p3_s), .prodotto4(p4_s),
        .errore(errore_s), .resto(resto_s), .disponibile(disp_s),
        .coin_01(c01_s), .coin_02(c02_s), .coin_05(c05_s), .coin_10(c10_s)
    );

    // ==========================================
    // 4. CLOCK E MONITORAGGIO ERRORI
    // ==========================================
    always #5 clk = ~clk;

    // Check automatico ad ogni fronte di discesa (quando le uscite sono stabili)
    always @(negedge clk) begin
        if (rst) begin // Ignora durante il reset
            if (credito_b !== credito_s) $display("ERRORE al tempo %t: Credito diverso! Beh:%d Str:%d", $time, credito_b, credito_s);
            if (resto_b !== resto_s)     $display("ERRORE al tempo %t: Resto diverso! Beh:%d Str:%d", $time, resto_b, resto_s);
            if (errore_b !== errore_s)   $display("ERRORE al tempo %t: Codice Errore diverso!", $time);
            
            // Verifica Prodotti
            if ({p1_b, p2_b, p3_b, p4_b} !== {p1_s, p2_s, p3_s, p4_s}) 
                $display("ERRORE al tempo %t: Erogazione Prodotto diversa!", $time);

            // Verifica Conteggio Monete Resto (Cruciale per Gruppo da 3)
            if (c01_b !== c01_s) $display("ERRORE: Monete 0.10 diverse. Beh:%d Str:%d", c01_b, c01_s);
            if (c02_b !== c02_s) $display("ERRORE: Monete 0.20 diverse. Beh:%d Str:%d", c02_b, c02_s);
            if (c05_b !== c05_s) $display("ERRORE: Monete 0.50 diverse. Beh:%d Str:%d", c05_b, c05_s);
            if (c10_b !== c10_s) $display("ERRORE: Monete 1.00 diverse. Beh:%d Str:%d", c10_b, c10_s);
        end
    end

    // ==========================================
    // 5. STIMOLI (Copia della sequenza di test)
    // ==========================================
    initial begin
        $dumpfile("simulazione_comparison.vcd");
        $dumpvars(0, testbench);

        clk = 0; rst = 0;
        coin = 0; selezione = 0; conferma = 0; annulla = 0;

        #20 rst = 1; // Rilascio Reset

        $display("--- INIZIO CONFRONTO BEHAVIORAL vs STRUCTURAL ---");

        // --- FASE CONFIGURAZIONE (12 cicli) ---
        wait_clock; {coin, selezione} = 6'd5;  // Qty P1
        wait_clock; {coin, selezione} = 6'd3;  // Price P1
        wait_clock; {coin, selezione} = 6'd5;  // Qty P2
        wait_clock; {coin, selezione} = 6'd5;  // Price P2
        wait_clock; {coin, selezione} = 6'd5;  // Qty P3
        wait_clock; {coin, selezione} = 6'd8;  // Price P3
        wait_clock; {coin, selezione} = 6'd2;  // Qty P4
        wait_clock; {coin, selezione} = 6'd12; // Price P4
        wait_clock; {coin, selezione} = 6'd10; // C01
        wait_clock; {coin, selezione} = 6'd10; // C02
        wait_clock; {coin, selezione} = 6'd10; // C05
        wait_clock; {coin, selezione} = 6'd2;  // C10
        wait_clock; {coin, selezione} = 6'd0;  // Fine Config

        // --- TEST 1: Acquisto P2 (0.50) con 0.50 ---
        #20;
        wait_clock; coin = 3'b110; 
        wait_clock; coin = 3'b000;
        #10;
        wait_clock; selezione = 3'b101; conferma = 1;
        wait_clock; conferma = 0; selezione = 0;
        #50;

        // --- TEST 2: Acquisto P1 (0.30) con 1.00 (GREEDY CHECK) ---
        // Qui ci aspettiamo che il modello Strutturale ci metta qualche ciclo in più
        // per aggiornare i contatori delle monete, ma alla fine il risultato deve coincidere.
        wait_clock; coin = 3'b111; 
        wait_clock; coin = 3'b000;
        wait_clock; selezione = 3'b100; conferma = 1;
        wait_clock; conferma = 0; selezione = 0;
        #100; // Tempo abbondante per far finire la FSM Greedy

        // --- TEST 3: Errore Credito ---
        wait_clock; coin = 3'b100; 
        wait_clock; coin = 3'b000;
        wait_clock; selezione = 3'b111; conferma = 1;
        wait_clock; conferma = 0; selezione = 0;
        #40;

        // --- TEST 4: Annulla ---
        wait_clock; coin = 3'b110;
        wait_clock; coin = 3'b000;
        wait_clock; annulla = 1;
        wait_clock; annulla = 0;
        #50;

        $display("--- CONFRONTO TERMINATO: Se non vedi errori sopra, il test e' passato. ---");
        $finish;
    end

    task wait_clock;
    begin
        @(negedge clk);
    end
    endtask

endmodule