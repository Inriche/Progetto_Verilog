// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_structural.h for the primary calling header

#ifndef VERILATED_VTB_STRUCTURAL___024ROOT_H_
#define VERILATED_VTB_STRUCTURAL___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtb_structural__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_structural___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        CData/*0:0*/ tb_structural__DOT__clk;
        CData/*0:0*/ tb_structural__DOT__rst;
        CData/*2:0*/ tb_structural__DOT__coin;
        CData/*2:0*/ tb_structural__DOT__selezione;
        CData/*0:0*/ tb_structural__DOT__conferma;
        CData/*0:0*/ tb_structural__DOT__annulla;
        CData/*2:0*/ tb_structural__DOT__last_coin;
        CData/*2:0*/ tb_structural__DOT__last_selezione;
        CData/*0:0*/ tb_structural__DOT__last_conferma;
        CData/*0:0*/ tb_structural__DOT__last_annulla;
        CData/*0:0*/ tb_structural__DOT__dut__DOT__mode_init;
        CData/*3:0*/ tb_structural__DOT__dut__DOT__init_counter_w;
        CData/*0:0*/ tb_structural__DOT__dut__DOT__clear_outputs;
        CData/*0:0*/ tb_structural__DOT__dut__DOT__do_add_coin;
        CData/*0:0*/ tb_structural__DOT__dut__DOT__do_cancel;
        CData/*0:0*/ tb_structural__DOT__dut__DOT__do_err;
        CData/*0:0*/ tb_structural__DOT__dut__DOT__do_ok;
        CData/*0:0*/ tb_structural__DOT__dut__DOT__do_erogazione;
        CData/*2:0*/ tb_structural__DOT__dut__DOT__sel_latched;
        CData/*0:0*/ tb_structural__DOT__dut__DOT__c_prod1;
        CData/*0:0*/ tb_structural__DOT__dut__DOT__c_prod2;
        CData/*0:0*/ tb_structural__DOT__dut__DOT__c_prod3;
        CData/*0:0*/ tb_structural__DOT__dut__DOT__c_prod4;
        CData/*5:0*/ tb_structural__DOT__dut__DOT__qty_p1_q;
        CData/*5:0*/ tb_structural__DOT__dut__DOT__qty_p2_q;
        CData/*5:0*/ tb_structural__DOT__dut__DOT__qty_p3_q;
        CData/*5:0*/ tb_structural__DOT__dut__DOT__qty_p4_q;
        CData/*5:0*/ tb_structural__DOT__dut__DOT__price_p1_q;
        CData/*5:0*/ tb_structural__DOT__dut__DOT__price_p2_q;
        CData/*5:0*/ tb_structural__DOT__dut__DOT__price_p3_q;
        CData/*5:0*/ tb_structural__DOT__dut__DOT__price_p4_q;
        CData/*5:0*/ tb_structural__DOT__dut__DOT__qty_c01_q;
        CData/*5:0*/ tb_structural__DOT__dut__DOT__qty_c02_q;
        CData/*5:0*/ tb_structural__DOT__dut__DOT__qty_c05_q;
        CData/*5:0*/ tb_structural__DOT__dut__DOT__qty_c10_q;
        CData/*5:0*/ tb_structural__DOT__dut__DOT__current_price_q;
        CData/*5:0*/ tb_structural__DOT__dut__DOT__credito_q;
        CData/*1:0*/ tb_structural__DOT__dut__DOT__errore_q;
        CData/*5:0*/ tb_structural__DOT__dut__DOT__resto_q;
        CData/*0:0*/ tb_structural__DOT__dut__DOT__prod1_q;
        CData/*0:0*/ tb_structural__DOT__dut__DOT__prod2_q;
        CData/*0:0*/ tb_structural__DOT__dut__DOT__prod3_q;
        CData/*0:0*/ tb_structural__DOT__dut__DOT__prod4_q;
        CData/*5:0*/ tb_structural__DOT__dut__DOT__coin01_q;
        CData/*5:0*/ tb_structural__DOT__dut__DOT__coin02_q;
        CData/*5:0*/ tb_structural__DOT__dut__DOT__coin05_q;
        CData/*5:0*/ tb_structural__DOT__dut__DOT__coin10_q;
        CData/*0:0*/ tb_structural__DOT__dut__DOT__valid_sel;
        CData/*5:0*/ tb_structural__DOT__dut__DOT__sel_price;
        CData/*0:0*/ tb_structural__DOT__dut__DOT__credito_ge_selprice;
        CData/*0:0*/ tb_structural__DOT__dut__DOT__credito_insuff;
        CData/*0:0*/ tb_structural__DOT__dut__DOT__stock_empty;
        CData/*0:0*/ tb_structural__DOT__dut__DOT__payout_active;
        CData/*5:0*/ tb_structural__DOT__dut__DOT__c10_calc;
        CData/*5:0*/ tb_structural__DOT__dut__DOT__c05_calc;
        CData/*5:0*/ tb_structural__DOT__dut__DOT__c02_calc;
        CData/*5:0*/ tb_structural__DOT__dut__DOT__c01_calc;
        CData/*5:0*/ tb_structural__DOT__dut__DOT__qc10_next;
        CData/*5:0*/ tb_structural__DOT__dut__DOT__qc05_next;
        CData/*5:0*/ tb_structural__DOT__dut__DOT__qc02_next;
        CData/*5:0*/ tb_structural__DOT__dut__DOT__qc01_next;
        CData/*5:0*/ tb_structural__DOT__dut__DOT__coin_value;
        CData/*5:0*/ tb_structural__DOT__dut__DOT__cfg_value;
        CData/*0:0*/ tb_structural__DOT__dut__DOT__init_qty_p1;
    };
    struct {
        CData/*0:0*/ tb_structural__DOT__dut__DOT__init_price_p1;
        CData/*0:0*/ tb_structural__DOT__dut__DOT__init_qty_p2;
        CData/*0:0*/ tb_structural__DOT__dut__DOT__init_price_p2;
        CData/*0:0*/ tb_structural__DOT__dut__DOT__init_qty_p3;
        CData/*0:0*/ tb_structural__DOT__dut__DOT__init_price_p3;
        CData/*0:0*/ tb_structural__DOT__dut__DOT__init_qty_p4;
        CData/*0:0*/ tb_structural__DOT__dut__DOT__init_price_p4;
        CData/*0:0*/ tb_structural__DOT__dut__DOT__init_c01;
        CData/*0:0*/ tb_structural__DOT__dut__DOT__init_c02;
        CData/*0:0*/ tb_structural__DOT__dut__DOT__init_c05;
        CData/*0:0*/ tb_structural__DOT__dut__DOT__init_c10;
        CData/*0:0*/ tb_structural__DOT__dut__DOT__do_p1;
        CData/*0:0*/ tb_structural__DOT__dut__DOT__do_p2;
        CData/*0:0*/ tb_structural__DOT__dut__DOT__do_p3;
        CData/*0:0*/ tb_structural__DOT__dut__DOT__do_p4;
        CData/*0:0*/ tb_structural__DOT__dut__DOT__add_c01;
        CData/*0:0*/ tb_structural__DOT__dut__DOT__add_c02;
        CData/*0:0*/ tb_structural__DOT__dut__DOT__add_c05;
        CData/*0:0*/ tb_structural__DOT__dut__DOT__add_c10;
        CData/*5:0*/ tb_structural__DOT__dut__DOT__qty_p1_d;
        CData/*5:0*/ tb_structural__DOT__dut__DOT__qty_p2_d;
        CData/*5:0*/ tb_structural__DOT__dut__DOT__qty_p3_d;
        CData/*5:0*/ tb_structural__DOT__dut__DOT__qty_p4_d;
        CData/*5:0*/ tb_structural__DOT__dut__DOT__price_p1_d;
        CData/*5:0*/ tb_structural__DOT__dut__DOT__price_p2_d;
        CData/*5:0*/ tb_structural__DOT__dut__DOT__price_p3_d;
        CData/*5:0*/ tb_structural__DOT__dut__DOT__price_p4_d;
        CData/*5:0*/ tb_structural__DOT__dut__DOT__qty_c01_d;
        CData/*5:0*/ tb_structural__DOT__dut__DOT__qty_c02_d;
        CData/*5:0*/ tb_structural__DOT__dut__DOT__qty_c05_d;
        CData/*5:0*/ tb_structural__DOT__dut__DOT__qty_c10_d;
        CData/*5:0*/ tb_structural__DOT__dut__DOT__current_price_d;
        CData/*5:0*/ tb_structural__DOT__dut__DOT__credito_d;
        CData/*1:0*/ tb_structural__DOT__dut__DOT__errore_d;
        CData/*5:0*/ tb_structural__DOT__dut__DOT__resto_d;
        CData/*0:0*/ tb_structural__DOT__dut__DOT__prod1_d;
        CData/*0:0*/ tb_structural__DOT__dut__DOT__prod2_d;
        CData/*0:0*/ tb_structural__DOT__dut__DOT__prod3_d;
        CData/*0:0*/ tb_structural__DOT__dut__DOT__prod4_d;
        CData/*5:0*/ tb_structural__DOT__dut__DOT__coin01_d;
        CData/*5:0*/ tb_structural__DOT__dut__DOT__coin02_d;
        CData/*5:0*/ tb_structural__DOT__dut__DOT__coin05_d;
        CData/*5:0*/ tb_structural__DOT__dut__DOT__coin10_d;
        CData/*0:0*/ tb_structural__DOT__dut__DOT__we_errore;
        CData/*0:0*/ tb_structural__DOT__dut__DOT__we_prod;
        CData/*0:0*/ tb_structural__DOT__dut__DOT__we_coin_out;
        CData/*0:0*/ tb_structural__DOT__dut__DOT____VdfgTmp_h4b786e47__0;
        CData/*1:0*/ tb_structural__DOT__dut__DOT__fsm__DOT__stato;
        CData/*1:0*/ tb_structural__DOT__dut__DOT__fsm__DOT__next_stato;
        CData/*5:0*/ tb_structural__DOT__dut__DOT__greedy_inst__DOT__calc_resto;
        CData/*5:0*/ tb_structural__DOT__dut__DOT__greedy_inst__DOT__calc_qty;
        CData/*0:0*/ __VstlFirstIteration;
        CData/*0:0*/ __Vtrigprevexpr___TOP__tb_structural__DOT__clk__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__tb_structural__DOT__rst__0;
        CData/*0:0*/ __VactContinue;
        SData/*9:0*/ tb_structural__DOT__dut__DOT__disponibile_q;
        SData/*9:0*/ tb_structural__DOT__dut__DOT__payout_returned;
        SData/*9:0*/ tb_structural__DOT__dut__DOT__disponibile_d;
        IData/*31:0*/ tb_structural__DOT__report_fd;
        VlWide<32>/*1023:0*/ tb_structural__DOT__current_test_name;
        IData/*31:0*/ __VactIterCount;
        VlUnpacked<CData/*0:0*/, 7> __Vm_traceActivity;
    };
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_hd70e924b__0;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<3> __VactTriggered;
    VlTriggerVec<3> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtb_structural__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtb_structural___024root(Vtb_structural__Syms* symsp, const char* v__name);
    ~Vtb_structural___024root();
    VL_UNCOPYABLE(Vtb_structural___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
