`timescale 1ns / 1ps

module tb_behavioral;

    // ==========================================
    // 1. DICHIARAZIONE SEGNALI
    // ==========================================
    // Gli input del modulo diventano 'reg' nel testbench (per poterli pilotare)
    reg clk;
    reg rst;
    reg [2:0] coin;
    reg [2:0] selezione;
    reg conferma;
    reg annulla;

    // Gli output del modulo diventano 'wire' (per poterli leggere)
    wire [5:0] credito;
    wire prodotto1, prodotto2, prodotto3, prodotto4;
    wire [1:0] errore;
    wire [5:0] resto;
    wire [9:0] disponibile;
    
    // Output aggiuntivi per il gruppo da 3
    wire [5:0] coin_01, coin_02, coin_05, coin_10;

    // ==========================================
    // 2. ISTANZIAZIONE DEL MODULO (DUT - Device Under Test)
    // ==========================================
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

    // ==========================================
    // 3. GENERAZIONE CLOCK
    // ==========================================
    // Genera un clock con periodo 10ns (frequenza 100MHz)
    always #5 clk = ~clk;

    // ==========================================
    // 4. SEQUENZA DI TEST
    // ==========================================
    initial begin
        // --- A. Setup Iniziale ---
        $dumpfile("simulazione_behavioral.vcd"); // File per visualizzare le onde
        $dumpvars(0, tb_behavioral);
        
        clk = 0;
        rst = 0; // Reset attivo basso
        coin = 0;
        selezione = 0;
        conferma = 0;
        annulla = 0;

        // Rilascio del reset dopo un po' di tempo
        #20 rst = 1; 

        // --- B. Fase di Configurazione (12 cicli) [Specifica 60-61] ---
        // Ad ogni fronte di salita forniamo {coin, selezione} per configurare la macchina
        // Nota: coin sono i 3 bit MSB, selezione i 3 bit LSB.

        // 1. Qty P1 = 5 (bin: 000 101)
        wait_clock; {coin, selezione} = 6'd5;
        // 2. Prezzo P1 = 3 decimi (0.30€)
        wait_clock; {coin, selezione} = 6'd3;
        
        // 3. Qty P2 = 5
        wait_clock; {coin, selezione} = 6'd5;
        // 4. Prezzo P2 = 5 decimi (0.50€)
        wait_clock; {coin, selezione} = 6'd5;

        // 5. Qty P3 = 5
        wait_clock; {coin, selezione} = 6'd5;
        // 6. Prezzo P3 = 8 decimi (0.80€)
        wait_clock; {coin, selezione} = 6'd8;

        // 7. Qty P4 = 2 (Poco stock per testare esaurimento)
        wait_clock; {coin, selezione} = 6'd2;
        // 8. Prezzo P4 = 12 decimi (1.20€)
        wait_clock; {coin, selezione} = 6'd12;

        // 9. Stock monete 0.10€ = 10
        wait_clock; {coin, selezione} = 6'd10;
        // 10. Stock monete 0.20€ = 10
        wait_clock; {coin, selezione} = 6'd10;
        // 11. Stock monete 0.50€ = 10
        wait_clock; {coin, selezione} = 6'd10;
        // 12. Stock monete 1.00€ = 2 (Poche, per testare algoritmo greedy)
        wait_clock; {coin, selezione} = 6'd2;

        // Fine configurazione: rimettiamo gli input a zero
        wait_clock; {coin, selezione} = 6'd0;
        
        $display("--- CONFIGURAZIONE TERMINATA ---");

        // --- C. Scenario 1: Acquisto P2 (0.50€) con moneta esatta ---
        #20;
        wait_clock; coin = 3'b110; // Inserisco 0.50€ (codice 110)
        wait_clock; coin = 3'b000; // Tolgo la moneta
        
        #10; // Aspetto un attimo
        wait_clock; selezione = 3'b101; // Seleziono Prodotto 2 (codice 101)
                    conferma = 1;       // Premo conferma
        wait_clock; conferma = 0; selezione = 0;

        $display("Test 1: Acquisto P2 (0.5€) con 0.5€. Atteso: Prod2=1, Resto=0");
        #20; // Tempo per erogazione

        // --- D. Scenario 2: Acquisto P1 (0.30€) con resto (Greedy) ---
        // Inserisco 1.00€ (codice 111)
        wait_clock; coin = 3'b111; 
        wait_clock; coin = 3'b000;
        
        // Compro P1 (0.30€). Credito 10 -> Resto atteso 7 (0.70€)
        // Algoritmo Greedy dovrebbe dare: 1x 0.50€ + 1x 0.20€
        wait_clock; selezione = 3'b100; // P1
                    conferma = 1;
        wait_clock; conferma = 0; selezione = 0;
        
        $display("Test 2: Acquisto P1 (0.3€) con 1.0€. Atteso: Resto=0.7 (1x0.5, 1x0.2)");
        #20;

        // --- E. Scenario 3: Credito Insufficiente ---
        // Inserisco 0.10€ e provo a comprare P4 (1.20€)
        wait_clock; coin = 3'b100; // 0.10€
        wait_clock; coin = 3'b000;
        
        wait_clock; selezione = 3'b111; // P4
                    conferma = 1;
        wait_clock; conferma = 0; selezione = 0;

        $display("Test 3: Credito insufficiente. Atteso: Errore=01, Resto mostra prezzo (12)");
        // Nota: come da specifiche, l'errore resetta lo stato, l'utente deve ricominciare o aggiungere monete?
        // Il nostro design attuale torna in IDLE resettando il credito.
        // Se volessimo mantenere il credito servirebbe una logica FSM diversa, 
        // ma per ora verifichiamo che dia errore.
        #20;

        // --- F. Scenario 4: Annulla Operazione ---
        // Inserisco 0.50€
        wait_clock; coin = 3'b110;
        wait_clock; coin = 3'b000;
        
        // Premo Annulla
        wait_clock; annulla = 1;
        wait_clock; annulla = 0;
        
        $display("Test 4: Annulla. Atteso: Resto=5 (tutto il credito), Credito=0");
        #20;

        $finish; // Termina la simulazione
    end

    // Task per sincronizzare gli stimoli con il clock (rende il codice più pulito)
    task wait_clock;
    begin
        @(negedge clk); // Cambiamo gli input sul fronte di discesa per stabilità
    end
    endtask

endmodule