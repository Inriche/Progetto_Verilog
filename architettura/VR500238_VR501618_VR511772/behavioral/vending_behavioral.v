`timescale 1ns / 1ps

module vending_behavioral (
    input clk,
    input rst,                  // Reset attivo basso
    input [2:0] coin,           // Inserimento moneta (codice)
    input [2:0] selezione,      // Selezione prodotto (codice)
    input conferma,             // Conferma acquisto
    input annulla,              // Annulla acquisto

    output reg [5:0] credito,       // Credito corrente (decimi di €)
    output reg prodotto1,           // Erogazione prodotto 1
    output reg prodotto2,           // Erogazione prodotto 2
    output reg prodotto3,           // Erogazione prodotto 3
    output reg prodotto4,           // Erogazione prodotto 4
    output reg [1:0] errore,        // 00:Ok, 01:Soldi, 10:Stock, 11:Both
    output reg [5:0] resto,         // Valore totale del resto
    output reg [9:0] disponibile,   // Totale soldi nella macchina (cash box)
    
    // OUTPUT AGGIUNTIVI (Obbligatori per gruppi da 3)
    output reg [5:0] coin_01, // Numero monete da 0.10 erogate
    output reg [5:0] coin_02, // Numero monete da 0.20 erogate
    output reg [5:0] coin_05, // Numero monete da 0.50 erogate
    output reg [5:0] coin_10  // Numero monete da 1.00 erogate
);

    // ==========================================
    // 1. STATI E REGISTRI INTERNI
    // ==========================================
    parameter [1:0] 
        S_INIT      = 2'b00,
        S_IDLE      = 2'b01,
        S_OPERATIVA = 2'b10,
        S_EROGAZIONE= 2'b11;

    reg [1:0] stato;
    reg [3:0] init_counter; // Conta i 12 cicli di inizializzazione

    // Magazzino Prodotti (Quantità e Prezzi)
    reg [5:0] qty_p1, qty_p2, qty_p3, qty_p4;
    reg [5:0] price_p1, price_p2, price_p3, price_p4;
    
    // Magazzino Monete (Quantità disponibili per il resto)
    reg [5:0] qty_c01, qty_c02, qty_c05, qty_c10;

    // Variabili per l'algoritmo Greedy
    reg [5:0] calc_resto;
    reg [5:0] calc_qty;
    reg [5:0] current_price;

    // ==========================================
    // 2. LOGICA SEQUENZIALE (FSMD)
    // ==========================================
    always @(posedge clk or negedge rst) begin
        if (!rst) begin
            // RESET: Azzera tutto
            stato <= S_INIT;
            init_counter <= 4'd0;
            credito <= 0;
            disponibile <= 0; // Assumiamo cassa vuota o valore default
            errore <= 2'b00;
            resto <= 0;
            prodotto1 <= 0; prodotto2 <= 0; prodotto3 <= 0; prodotto4 <= 0;
            coin_01 <= 0; coin_02 <= 0; coin_05 <= 0; coin_10 <= 0;
        end 
        else begin
            case (stato)
                // --------------------------------------------------
                // FASE A: INIZIALIZZAZIONE (12 cicli)
                // --------------------------------------------------
                S_INIT: begin
                    // Mapping input come da specifica: coin=MSB, selezione=LSB
                    case (init_counter)
                        4'd0:  qty_p1    <= {coin, selezione};
                        4'd1:  price_p1  <= {coin, selezione};
                        4'd2:  qty_p2    <= {coin, selezione};
                        4'd3:  price_p2  <= {coin, selezione};
                        4'd4:  qty_p3    <= {coin, selezione};
                        4'd5:  price_p3  <= {coin, selezione};
                        4'd6:  qty_p4    <= {coin, selezione};
                        4'd7:  price_p4  <= {coin, selezione};
                        4'd8:  qty_c01   <= {coin, selezione};
                        4'd9:  qty_c02   <= {coin, selezione};
                        4'd10: qty_c05   <= {coin, selezione};
                        4'd11: begin
                               qty_c10   <= {coin, selezione};
                               stato <= S_IDLE; // Fine setup
                               init_counter <= 0;
                        end
                        default: begin
                        end
                    endcase
                    if (init_counter < 4'd11) init_counter <= init_counter + 4'd1;
                end

                // --------------------------------------------------
                // FASE B: ATTESA (IDLE)
                // --------------------------------------------------
                S_IDLE: begin
                    // Reset segnali impulsivi
                    prodotto1 <= 0; prodotto2 <= 0; prodotto3 <= 0; prodotto4 <= 0;
                    errore <= 2'b00;
                    resto <= 0;
                    coin_01 <= 0; coin_02 <= 0; coin_05 <= 0; coin_10 <= 0;

                    // Gestione inserimento prima moneta
                    if (coin != 3'b000) begin
                        stato <= S_OPERATIVA;
                        // Decodifica moneta e aggiorna credito/disponibile
                        case (coin)
                            3'b100: begin credito <= credito + 6'd1;  disponibile <= disponibile + 10'd1;  end // 0.10
                            3'b101: begin credito <= credito + 6'd2;  disponibile <= disponibile + 10'd2;  end // 0.20
                            3'b110: begin credito <= credito + 6'd5;  disponibile <= disponibile + 10'd5;  end // 0.50
                            3'b111: begin credito <= credito + 6'd10; disponibile <= disponibile + 10'd10; end // 1.00
                            default: begin
                            end
                        endcase
                    end
                end

                // --------------------------------------------------
                // FASE C: OPERATIVA (Accumulo e Selezione)
                // --------------------------------------------------
                S_OPERATIVA: begin
                    // 1. Inserimento ulteriori monete
                    if (coin != 3'b000) begin
                        case (coin)
                            3'b100: begin credito <= credito + 6'd1;  disponibile <= disponibile + 10'd1;  end
                            3'b101: begin credito <= credito + 6'd2;  disponibile <= disponibile + 10'd2;  end
                            3'b110: begin credito <= credito + 6'd5;  disponibile <= disponibile + 10'd5;  end
                            3'b111: begin credito <= credito + 6'd10; disponibile <= disponibile + 10'd10; end
                            default: begin
                            end
                        endcase
                    end
                    // 2. Annulla operazione
                    else if (annulla) begin
                        resto <= credito; // Restituisce tutto
                        credito <= 6'd0;
                        disponibile <= disponibile - {4'd0, credito}; // Toglie dalla cassa
                        stato <= S_IDLE;
                    end
                    // 3. Conferma acquisto
                    else if (conferma) begin
                        // Controllo validità prodotto e credito
                        case (selezione)
                            3'b100: begin // P1
                                if (credito < price_p1 || qty_p1 == 6'd0) begin
                                    errore <= {(qty_p1 == 6'd0), (credito < price_p1)};
                                    if (credito < price_p1) resto <= price_p1; // Mostra prezzo mancante
                                    stato <= S_IDLE; 
                                end else begin
                                    current_price = price_p1; // Salva per dopo
                                    qty_p1 <= qty_p1 - 6'd1;  // Decrementa stock
                                    prodotto1 <= 1;           // Attiva erogazione
                                    stato <= S_EROGAZIONE;
                                end
                            end
                            3'b101: begin // P2
                                if (credito < price_p2 || qty_p2 == 6'd0) begin
                                    errore <= {(qty_p2 == 6'd0), (credito < price_p2)};
                                    if (credito < price_p2) resto <= price_p2;
                                    stato <= S_IDLE;
                                end else begin
                                    current_price = price_p2;
                                    qty_p2 <= qty_p2 - 6'd1;
                                    prodotto2 <= 1;
                                    stato <= S_EROGAZIONE;
                                end
                            end
                            3'b110: begin // P3
                                if (credito < price_p3 || qty_p3 == 6'd0) begin
                                    errore <= {(qty_p3 == 6'd0), (credito < price_p3)};
                                    if (credito < price_p3) resto <= price_p3;
                                    stato <= S_IDLE;
                                end else begin
                                    current_price = price_p3;
                                    qty_p3 <= qty_p3 - 6'd1;
                                    prodotto3 <= 1;
                                    stato <= S_EROGAZIONE;
                                end
                            end
                            3'b111: begin // P4
                                if (credito < price_p4 || qty_p4 == 6'd0) begin
                                    errore <= {(qty_p4 == 6'd0), (credito < price_p4)};
                                    if (credito < price_p4) resto <= price_p4;
                                    stato <= S_IDLE;
                                end else begin
                                    current_price = price_p4;
                                    qty_p4 <= qty_p4 - 6'd1;
                                    prodotto4 <= 1;
                                    stato <= S_EROGAZIONE;
                                end
                            end
                            3'b001,
                            3'b010,
                            3'b011: begin
                                errore <= 2'b10;
                                stato <= S_IDLE;
                            end
                            default: begin
                                stato <= S_IDLE;
                            end
                        endcase
                    end
                end

                // --------------------------------------------------
                // FASE D: EROGAZIONE E RESTO (GREEDY ALGORITHM)
                // --------------------------------------------------
                S_EROGAZIONE: begin
                    // Calcolo quanto resto devo dare
                    calc_resto = credito - current_price;
                    resto <= calc_resto[5:0]; // Output totale resto

                    // --- Algoritmo Greedy per le monete ---
                    
                    // 1. Monete da 1.00 (10 decimi)
                    calc_qty = calc_resto / 10;                // Quante ne servono?
                    if (calc_qty > qty_c10) calc_qty = qty_c10; // Quante ne ho?
                    coin_10 <= calc_qty;                       // Output
                    qty_c10 <= qty_c10 - calc_qty;             // Aggiorno stock
                    calc_resto = calc_resto - (calc_qty * 6'd10); // Resto rimanente

                    // 2. Monete da 0.50 (5 decimi)
                    calc_qty = calc_resto / 5;
                    if (calc_qty > qty_c05) calc_qty = qty_c05;
                    coin_05 <= calc_qty;
                    qty_c05 <= qty_c05 - calc_qty;
                    calc_resto = calc_resto - (calc_qty * 6'd5);

                    // 3. Monete da 0.20 (2 decimi)
                    calc_qty = calc_resto / 2;
                    if (calc_qty > qty_c02) calc_qty = qty_c02;
                    coin_02 <= calc_qty;
                    qty_c02 <= qty_c02 - calc_qty;
                    calc_resto = calc_resto - (calc_qty * 6'd2);

                    // 4. Monete da 0.10 (1 decimo)
                    calc_qty = calc_resto; // Rimane solo questo
                    if (calc_qty > qty_c01) calc_qty = qty_c01; // (Se non bastano, pazienza: errore macchina)
                    coin_01 <= calc_qty;
                    qty_c01 <= qty_c01 - calc_qty;

                    // Aggiornamento finale cassa e reset transazione
                    disponibile <= disponibile - {4'd0, (credito - current_price)};
                    credito <= 6'd0;
                    
                    // Torna in attesa
                    stato <= S_IDLE;
                end
            endcase
        end
    end

endmodule
