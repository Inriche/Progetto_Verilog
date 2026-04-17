`timescale 1ns/1ps

module GreedyLogic (
    input  wire       do_erogazione,
    input  wire [5:0] change6,        // credito - current_price

    input  wire [5:0] qty_c10_curr,
    input  wire [5:0] qty_c05_curr,
    input  wire [5:0] qty_c02_curr,
    input  wire [5:0] qty_c01_curr,

    output reg  [5:0] c10_to_emit,
    output reg  [5:0] c05_to_emit,
    output reg  [5:0] c02_to_emit,
    output reg  [5:0] c01_to_emit,

    output reg  [5:0] qc10_next,
    output reg  [5:0] qc05_next,
    output reg  [5:0] qc02_next,
    output reg  [5:0] qc01_next
);

    reg [5:0] calc_resto;
    reg [5:0] calc_qty;

    always @(*) begin
        // default: hold
        c10_to_emit = 6'd0; c05_to_emit = 6'd0; c02_to_emit = 6'd0; c01_to_emit = 6'd0;
        qc10_next = qty_c10_curr;
        qc05_next = qty_c05_curr;
        qc02_next = qty_c02_curr;
        qc01_next = qty_c01_curr;
        calc_resto = 6'd0;
        calc_qty = 6'd0;

        if (do_erogazione) begin
            calc_resto = change6;

            calc_qty = calc_resto / 6'd10;
            if (calc_qty > qty_c10_curr) calc_qty = qty_c10_curr;
            c10_to_emit = calc_qty;
            qc10_next   = qty_c10_curr - c10_to_emit;
            calc_resto  = calc_resto - (calc_qty * 6'd10);

            calc_qty = calc_resto / 6'd5;
            if (calc_qty > qty_c05_curr) calc_qty = qty_c05_curr;
            c05_to_emit = calc_qty;
            qc05_next   = qty_c05_curr - c05_to_emit;
            calc_resto  = calc_resto - (calc_qty * 6'd5);

            calc_qty = calc_resto / 6'd2;
            if (calc_qty > qty_c02_curr) calc_qty = qty_c02_curr;
            c02_to_emit = calc_qty;
            qc02_next   = qty_c02_curr - c02_to_emit;
            calc_resto  = calc_resto - (calc_qty * 6'd2);

            calc_qty = calc_resto;
            if (calc_qty > qty_c01_curr) calc_qty = qty_c01_curr;
            c01_to_emit = calc_qty;
            qc01_next   = qty_c01_curr - c01_to_emit;
        end
    end
endmodule
