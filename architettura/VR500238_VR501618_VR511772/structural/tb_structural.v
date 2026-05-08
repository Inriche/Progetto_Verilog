`timescale 1ns / 1ps

module tb_structural;

    // ==========================================
    // 1. DICHIARAZIONE SEGNALI
    // ==========================================
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
    
    // Output aggiuntivi per il gruppo da 3
    wire [5:0] coin_01, coin_02, coin_05, coin_10;

    // ==========================================
    // 2. ISTANZIAZIONE DEL MODULO STRUTTURALE (DUT)
    // ==========================================
    vending_structural dut (
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

    // ==========================================
    // 3. GENERAZIONE CLOCK
    // ==========================================
    always #5 clk = ~clk;

    // ==========================================
    // 4. SEQUENZA DI TEST (Identica al Behavioral)
    // ==========================================
    initial begin
        // --- A. Setup Iniziale ---
        $dumpfile("simulazione_structural.vcd"); 
        $dumpvars(0, tb_structural);
        
        clk = 0;
        rst = 0; // Reset attivo basso
        coin = 0;
        selezione = 0;
        conferma = 0;
        annulla = 0;

        #20 rst = 1; // Rilascio Reset

        // --- B. Fase di Configurazione (12 cicli) ---
        // 1. Qty P1 = 5 
        wait_clock; {coin, selezione} = 6'd5;
        // 2. Prezzo P1 = 3 (0.30€)
        wait_clock; {coin, selezione} = 6'd3;
        
        // 3. Qty P2 = 5
        wait_clock; {coin, selezione} = 6'd5;
        // 4. Prezzo P2 = 5 (0.50€)
        wait_clock; {coin, selezione} = 6'd5;

        // 5. Qty P3 = 5
        wait_clock; {coin, selezione} = 6'd5;
        // 6. Prezzo P3 = 8 (0.80€)
        wait_clock; {coin, selezione} = 6'd8;

        // 7. Qty P4 = 2 
        wait_clock; {coin, selezione} = 6'd2;
        // 8. Prezzo P4 = 12 (1.20€)
        wait_clock; {coin, selezione} = 6'd12;

        // 9. Stock monete 0.10€ = 10
        wait_clock; {coin, selezione} = 6'd10;
        // 10. Stock monete 0.20€ = 10
        wait_clock; {coin, selezione} = 6'd10;
        // 11. Stock monete 0.50€ = 10
        wait_clock; {coin, selezione} = 6'd10;
        // 12. Stock monete 1.00€ = 2
        wait_clock; {coin, selezione} = 6'd2;

        wait_clock; {coin, selezione} = 6'd0; // Fine config
        
        $display("--- CONFIGURAZIONE TERMINATA (STRUCTURAL) ---");

        // --- C. Scenario 1: Acquisto P2 (0.50€) con moneta esatta ---
        #20;
        wait_clock; coin = 3'b110; // 0.50€
        wait_clock; coin = 3'b000;
        
        #10; 
        wait_clock; selezione = 3'b101; // P2
                    conferma = 1;
        wait_clock; conferma = 0; selezione = 0;

        $display("Test 1: Acquisto P2. Atteso: Prod2=1");
        // Nella versione strutturale, l'erogazione potrebbe richiedere più cicli
        // per via degli stati Greedy, quindi aspettiamo un po' di più.
        #50; 

        // --- D. Scenario 2: Acquisto P1 (0.30€) con resto (Greedy) ---
        // Inserisco 1.00€
        wait_clock; coin = 3'b111; 
        wait_clock; coin = 3'b000;
        
        // Compro P1
        wait_clock; selezione = 3'b100; // P1
                    conferma = 1;
        wait_clock; conferma = 0; selezione = 0;
        
        $display("Test 2: Acquisto P1 (0.3€) con 1.0€. Atteso: Resto=0.7");
        // Qui la FSM ciclerà attraverso gli stati S_G_10 -> S_G_05 -> etc.
        // Dobbiamo dare tempo al clock di avanzare.
        #100;

        // --- E. Scenario 3: Credito Insufficiente ---
        // Inserisco 0.10€ e provo a comprare P4 (1.20€)
        wait_clock; coin = 3'b100; 
        wait_clock; coin = 3'b000;
        
        wait_clock; selezione = 3'b111; // P4
                    conferma = 1;
        wait_clock; conferma = 0; selezione = 0;

        $display("Test 3: Credito insufficiente. Atteso: Errore=01");
        #40;

        // --- F. Scenario 4: Annulla Operazione ---
        // Inserisco 0.50€
        wait_clock; coin = 3'b110;
        wait_clock; coin = 3'b000;
        
        // Premo Annulla
        wait_clock; annulla = 1;
        wait_clock; annulla = 0;
        
        $display("Test 4: Annulla. Atteso: Restituzione totale");
        #100;

        $finish; 
    end

    task wait_clock;
    begin
        @(negedge clk); 
    end
    endtask

endmodule