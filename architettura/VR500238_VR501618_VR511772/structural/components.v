// ============================================================
// LIBRERIA COMPONENTI (Basata su DigitalDesignVerilog.pdf)
// ============================================================

// 1. REGISTRO PARALLELO (Per memorizzare Credito, Prezzi, Qty)
module RegistroPP #(parameter N = 6)(
    input clk, 
    input rst, 
    input enable,       // Abilitazione alla scrittura
    input [N-1:0] D,    // Dato in ingresso
    output reg [N-1:0] Q // Dato in uscita
);
    always @(posedge clk or negedge rst) begin
        if (!rst) Q <= 0;
        else if (enable) Q <= D;
    end
endmodule

// 2. SOMMATORE (Per incrementare credito e calcolare resto)
module Sommatore #(parameter N = 6)(
    input [N-1:0] A, 
    input [N-1:0] B, 
    output [N-1:0] O
);
    assign O = A + B;
endmodule

// 3. SOTTRATTORE (Per il calcolo del resto: Credito - Prezzo)
module Sottrattore #(parameter N = 6)(
    input [N-1:0] A, 
    input [N-1:0] B, 
    output [N-1:0] O
);
    assign O = A - B;
endmodule

// 4. COMPARATORE (Per verificare Credito >= Prezzo)
// Restituisce 1 se A >= B
module ComparatoreGE #(parameter N = 6)(
    input [N-1:0] A, 
    input [N-1:0] B, 
    output O
);
    assign O = (A >= B);
endmodule

// 5. COMPARATORE UGUAGLIANZA (Per verificare Qty == 0)
module ComparatoreEQ #(parameter N = 6)(
    input [N-1:0] A, 
    input [N-1:0] B, 
    output O
);
    assign O = (A == B);
endmodule

// 6. MULTIPLEXER a 2 vie (Per scegliere cosa scrivere in un registro)
module Mux2 #(parameter N = 6)(
    input [N-1:0] A, // Se sel=0
    input [N-1:0] B, // Se sel=1
    input sel,
    output [N-1:0] O
);
    assign O = (sel) ? B : A;
endmodule

// 7. MULTIPLEXER a 4 vie (Per selezionare Prezzo/Qty in base alla selezione prodotto)
module Mux4 #(parameter N = 6)(
    input [N-1:0] In0, In1, In2, In3,
    input [1:0] sel,
    output reg [N-1:0] O
);
    always @(*) begin
        case(sel)
            2'b00: O = In0; // Prodotto 1 (codice 100 -> mappato esternamente)
            2'b01: O = In1;
            2'b10: O = In2;
            2'b11: O = In3;
        endcase
    end
endmodule