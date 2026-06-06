// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_behavioral.h for the primary calling header

#ifndef VERILATED_VTB_BEHAVIORAL___024ROOT_H_
#define VERILATED_VTB_BEHAVIORAL___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtb_behavioral__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_behavioral___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ tb_behavioral__DOT__clk;
    CData/*0:0*/ tb_behavioral__DOT__rst;
    CData/*2:0*/ tb_behavioral__DOT__coin;
    CData/*2:0*/ tb_behavioral__DOT__selezione;
    CData/*0:0*/ tb_behavioral__DOT__conferma;
    CData/*0:0*/ tb_behavioral__DOT__annulla;
    CData/*5:0*/ tb_behavioral__DOT__credito;
    CData/*0:0*/ tb_behavioral__DOT__prodotto1;
    CData/*0:0*/ tb_behavioral__DOT__prodotto2;
    CData/*0:0*/ tb_behavioral__DOT__prodotto3;
    CData/*0:0*/ tb_behavioral__DOT__prodotto4;
    CData/*1:0*/ tb_behavioral__DOT__errore;
    CData/*5:0*/ tb_behavioral__DOT__resto;
    CData/*5:0*/ tb_behavioral__DOT__coin_01;
    CData/*5:0*/ tb_behavioral__DOT__coin_02;
    CData/*5:0*/ tb_behavioral__DOT__coin_05;
    CData/*5:0*/ tb_behavioral__DOT__coin_10;
    CData/*2:0*/ tb_behavioral__DOT__last_coin;
    CData/*2:0*/ tb_behavioral__DOT__last_selezione;
    CData/*0:0*/ tb_behavioral__DOT__last_conferma;
    CData/*0:0*/ tb_behavioral__DOT__last_annulla;
    CData/*1:0*/ tb_behavioral__DOT__dut__DOT__stato;
    CData/*3:0*/ tb_behavioral__DOT__dut__DOT__init_counter;
    CData/*5:0*/ tb_behavioral__DOT__dut__DOT__qty_p1;
    CData/*5:0*/ tb_behavioral__DOT__dut__DOT__qty_p2;
    CData/*5:0*/ tb_behavioral__DOT__dut__DOT__qty_p3;
    CData/*5:0*/ tb_behavioral__DOT__dut__DOT__qty_p4;
    CData/*5:0*/ tb_behavioral__DOT__dut__DOT__price_p1;
    CData/*5:0*/ tb_behavioral__DOT__dut__DOT__price_p2;
    CData/*5:0*/ tb_behavioral__DOT__dut__DOT__price_p3;
    CData/*5:0*/ tb_behavioral__DOT__dut__DOT__price_p4;
    CData/*5:0*/ tb_behavioral__DOT__dut__DOT__qty_c01;
    CData/*5:0*/ tb_behavioral__DOT__dut__DOT__qty_c02;
    CData/*5:0*/ tb_behavioral__DOT__dut__DOT__qty_c05;
    CData/*5:0*/ tb_behavioral__DOT__dut__DOT__qty_c10;
    CData/*5:0*/ tb_behavioral__DOT__dut__DOT__current_price;
    CData/*5:0*/ tb_behavioral__DOT__dut__DOT__greedy_out_01;
    CData/*5:0*/ tb_behavioral__DOT__dut__DOT__greedy_out_02;
    CData/*5:0*/ tb_behavioral__DOT__dut__DOT__greedy_out_05;
    CData/*5:0*/ tb_behavioral__DOT__dut__DOT__greedy_out_10;
    CData/*5:0*/ tb_behavioral__DOT__dut__DOT__greedy_next_01;
    CData/*5:0*/ tb_behavioral__DOT__dut__DOT__greedy_next_02;
    CData/*5:0*/ tb_behavioral__DOT__dut__DOT__greedy_next_05;
    CData/*5:0*/ tb_behavioral__DOT__dut__DOT__greedy_next_10;
    CData/*5:0*/ tb_behavioral__DOT__dut__DOT__greedy_returned;
    CData/*5:0*/ tb_behavioral__DOT__dut__DOT__greedy_return__Vstatic__remain;
    CData/*5:0*/ tb_behavioral__DOT__dut__DOT__greedy_return__Vstatic__take;
    CData/*2:0*/ __Vtask_tb_behavioral__DOT__step__550__coin_i;
    CData/*2:0*/ __Vtask_tb_behavioral__DOT__step__550__selezione_i;
    CData/*0:0*/ __Vtask_tb_behavioral__DOT__step__550__conferma_i;
    CData/*0:0*/ __Vtask_tb_behavioral__DOT__step__550__annulla_i;
    CData/*0:0*/ __Vtrigprevexpr___TOP__tb_behavioral__DOT__clk__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__tb_behavioral__DOT__rst__0;
    CData/*0:0*/ __VactContinue;
    SData/*9:0*/ tb_behavioral__DOT__disponibile;
    SData/*9:0*/ tb_behavioral__DOT__dut__DOT__init_value;
    IData/*31:0*/ tb_behavioral__DOT__report_fd;
    VlWide<32>/*1023:0*/ tb_behavioral__DOT__current_test_name;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<CData/*0:0*/, 4> __Vm_traceActivity;
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_h2394f4a5__0;
    VlTriggerVec<3> __VactTriggered;
    VlTriggerVec<3> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtb_behavioral__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtb_behavioral___024root(Vtb_behavioral__Syms* symsp, const char* v__name);
    ~Vtb_behavioral___024root();
    VL_UNCOPYABLE(Vtb_behavioral___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
