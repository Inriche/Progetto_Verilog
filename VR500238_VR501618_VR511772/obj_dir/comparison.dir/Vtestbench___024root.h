// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtestbench.h for the primary calling header

#ifndef VERILATED_VTESTBENCH___024ROOT_H_
#define VERILATED_VTESTBENCH___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtestbench__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtestbench___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        CData/*0:0*/ testbench__DOT__clk;
        CData/*0:0*/ testbench__DOT__rst;
        CData/*2:0*/ testbench__DOT__coin;
        CData/*2:0*/ testbench__DOT__selezione;
        CData/*0:0*/ testbench__DOT__conferma;
        CData/*0:0*/ testbench__DOT__annulla;
        CData/*5:0*/ testbench__DOT__credito_b;
        CData/*0:0*/ testbench__DOT__p1_b;
        CData/*0:0*/ testbench__DOT__p2_b;
        CData/*0:0*/ testbench__DOT__p3_b;
        CData/*0:0*/ testbench__DOT__p4_b;
        CData/*1:0*/ testbench__DOT__errore_b;
        CData/*5:0*/ testbench__DOT__resto_b;
        CData/*5:0*/ testbench__DOT__c01_b;
        CData/*5:0*/ testbench__DOT__c02_b;
        CData/*5:0*/ testbench__DOT__c05_b;
        CData/*5:0*/ testbench__DOT__c10_b;
        CData/*2:0*/ testbench__DOT__last_coin;
        CData/*2:0*/ testbench__DOT__last_selezione;
        CData/*0:0*/ testbench__DOT__last_conferma;
        CData/*0:0*/ testbench__DOT__last_annulla;
        CData/*1:0*/ testbench__DOT__beh_inst__DOT__stato;
        CData/*3:0*/ testbench__DOT__beh_inst__DOT__init_counter;
        CData/*5:0*/ testbench__DOT__beh_inst__DOT__qty_p1;
        CData/*5:0*/ testbench__DOT__beh_inst__DOT__qty_p2;
        CData/*5:0*/ testbench__DOT__beh_inst__DOT__qty_p3;
        CData/*5:0*/ testbench__DOT__beh_inst__DOT__qty_p4;
        CData/*5:0*/ testbench__DOT__beh_inst__DOT__price_p1;
        CData/*5:0*/ testbench__DOT__beh_inst__DOT__price_p2;
        CData/*5:0*/ testbench__DOT__beh_inst__DOT__price_p3;
        CData/*5:0*/ testbench__DOT__beh_inst__DOT__price_p4;
        CData/*5:0*/ testbench__DOT__beh_inst__DOT__qty_c01;
        CData/*5:0*/ testbench__DOT__beh_inst__DOT__qty_c02;
        CData/*5:0*/ testbench__DOT__beh_inst__DOT__qty_c05;
        CData/*5:0*/ testbench__DOT__beh_inst__DOT__qty_c10;
        CData/*5:0*/ testbench__DOT__beh_inst__DOT__current_price;
        CData/*5:0*/ testbench__DOT__beh_inst__DOT__greedy_out_01;
        CData/*5:0*/ testbench__DOT__beh_inst__DOT__greedy_out_02;
        CData/*5:0*/ testbench__DOT__beh_inst__DOT__greedy_out_05;
        CData/*5:0*/ testbench__DOT__beh_inst__DOT__greedy_out_10;
        CData/*5:0*/ testbench__DOT__beh_inst__DOT__greedy_next_01;
        CData/*5:0*/ testbench__DOT__beh_inst__DOT__greedy_next_02;
        CData/*5:0*/ testbench__DOT__beh_inst__DOT__greedy_next_05;
        CData/*5:0*/ testbench__DOT__beh_inst__DOT__greedy_next_10;
        CData/*5:0*/ testbench__DOT__beh_inst__DOT__greedy_returned;
        CData/*5:0*/ testbench__DOT__beh_inst__DOT__greedy_return__Vstatic__remain;
        CData/*5:0*/ testbench__DOT__beh_inst__DOT__greedy_return__Vstatic__take;
        CData/*0:0*/ testbench__DOT__str_inst__DOT__mode_init;
        CData/*3:0*/ testbench__DOT__str_inst__DOT__init_counter_w;
        CData/*0:0*/ testbench__DOT__str_inst__DOT__clear_outputs;
        CData/*0:0*/ testbench__DOT__str_inst__DOT__do_add_coin;
        CData/*0:0*/ testbench__DOT__str_inst__DOT__do_cancel;
        CData/*0:0*/ testbench__DOT__str_inst__DOT__do_err;
        CData/*0:0*/ testbench__DOT__str_inst__DOT__do_ok;
        CData/*0:0*/ testbench__DOT__str_inst__DOT__do_erogazione;
        CData/*2:0*/ testbench__DOT__str_inst__DOT__sel_latched;
        CData/*0:0*/ testbench__DOT__str_inst__DOT__c_prod1;
        CData/*0:0*/ testbench__DOT__str_inst__DOT__c_prod2;
        CData/*0:0*/ testbench__DOT__str_inst__DOT__c_prod3;
        CData/*0:0*/ testbench__DOT__str_inst__DOT__c_prod4;
        CData/*5:0*/ testbench__DOT__str_inst__DOT__qty_p1_q;
        CData/*5:0*/ testbench__DOT__str_inst__DOT__qty_p2_q;
        CData/*5:0*/ testbench__DOT__str_inst__DOT__qty_p3_q;
        CData/*5:0*/ testbench__DOT__str_inst__DOT__qty_p4_q;
    };
    struct {
        CData/*5:0*/ testbench__DOT__str_inst__DOT__price_p1_q;
        CData/*5:0*/ testbench__DOT__str_inst__DOT__price_p2_q;
        CData/*5:0*/ testbench__DOT__str_inst__DOT__price_p3_q;
        CData/*5:0*/ testbench__DOT__str_inst__DOT__price_p4_q;
        CData/*5:0*/ testbench__DOT__str_inst__DOT__qty_c01_q;
        CData/*5:0*/ testbench__DOT__str_inst__DOT__qty_c02_q;
        CData/*5:0*/ testbench__DOT__str_inst__DOT__qty_c05_q;
        CData/*5:0*/ testbench__DOT__str_inst__DOT__qty_c10_q;
        CData/*5:0*/ testbench__DOT__str_inst__DOT__current_price_q;
        CData/*5:0*/ testbench__DOT__str_inst__DOT__credito_q;
        CData/*1:0*/ testbench__DOT__str_inst__DOT__errore_q;
        CData/*5:0*/ testbench__DOT__str_inst__DOT__resto_q;
        CData/*0:0*/ testbench__DOT__str_inst__DOT__prod1_q;
        CData/*0:0*/ testbench__DOT__str_inst__DOT__prod2_q;
        CData/*0:0*/ testbench__DOT__str_inst__DOT__prod3_q;
        CData/*0:0*/ testbench__DOT__str_inst__DOT__prod4_q;
        CData/*5:0*/ testbench__DOT__str_inst__DOT__coin01_q;
        CData/*5:0*/ testbench__DOT__str_inst__DOT__coin02_q;
        CData/*5:0*/ testbench__DOT__str_inst__DOT__coin05_q;
        CData/*5:0*/ testbench__DOT__str_inst__DOT__coin10_q;
        CData/*0:0*/ testbench__DOT__str_inst__DOT__valid_sel;
        CData/*5:0*/ testbench__DOT__str_inst__DOT__sel_price;
        CData/*0:0*/ testbench__DOT__str_inst__DOT__credito_ge_selprice;
        CData/*0:0*/ testbench__DOT__str_inst__DOT__credito_insuff;
        CData/*0:0*/ testbench__DOT__str_inst__DOT__stock_empty;
        CData/*0:0*/ testbench__DOT__str_inst__DOT__payout_active;
        CData/*5:0*/ testbench__DOT__str_inst__DOT__c10_calc;
        CData/*5:0*/ testbench__DOT__str_inst__DOT__c05_calc;
        CData/*5:0*/ testbench__DOT__str_inst__DOT__c02_calc;
        CData/*5:0*/ testbench__DOT__str_inst__DOT__c01_calc;
        CData/*5:0*/ testbench__DOT__str_inst__DOT__qc10_next;
        CData/*5:0*/ testbench__DOT__str_inst__DOT__qc05_next;
        CData/*5:0*/ testbench__DOT__str_inst__DOT__qc02_next;
        CData/*5:0*/ testbench__DOT__str_inst__DOT__qc01_next;
        CData/*5:0*/ testbench__DOT__str_inst__DOT__coin_value;
        CData/*5:0*/ testbench__DOT__str_inst__DOT__cfg_value;
        CData/*0:0*/ testbench__DOT__str_inst__DOT__init_qty_p1;
        CData/*0:0*/ testbench__DOT__str_inst__DOT__init_price_p1;
        CData/*0:0*/ testbench__DOT__str_inst__DOT__init_qty_p2;
        CData/*0:0*/ testbench__DOT__str_inst__DOT__init_price_p2;
        CData/*0:0*/ testbench__DOT__str_inst__DOT__init_qty_p3;
        CData/*0:0*/ testbench__DOT__str_inst__DOT__init_price_p3;
        CData/*0:0*/ testbench__DOT__str_inst__DOT__init_qty_p4;
        CData/*0:0*/ testbench__DOT__str_inst__DOT__init_price_p4;
        CData/*0:0*/ testbench__DOT__str_inst__DOT__init_c01;
        CData/*0:0*/ testbench__DOT__str_inst__DOT__init_c02;
        CData/*0:0*/ testbench__DOT__str_inst__DOT__init_c05;
        CData/*0:0*/ testbench__DOT__str_inst__DOT__init_c10;
        CData/*0:0*/ testbench__DOT__str_inst__DOT__do_p1;
        CData/*0:0*/ testbench__DOT__str_inst__DOT__do_p2;
        CData/*0:0*/ testbench__DOT__str_inst__DOT__do_p3;
        CData/*0:0*/ testbench__DOT__str_inst__DOT__do_p4;
        CData/*0:0*/ testbench__DOT__str_inst__DOT__add_c01;
        CData/*0:0*/ testbench__DOT__str_inst__DOT__add_c02;
        CData/*0:0*/ testbench__DOT__str_inst__DOT__add_c05;
        CData/*0:0*/ testbench__DOT__str_inst__DOT__add_c10;
        CData/*5:0*/ testbench__DOT__str_inst__DOT__qty_p1_d;
        CData/*5:0*/ testbench__DOT__str_inst__DOT__qty_p2_d;
        CData/*5:0*/ testbench__DOT__str_inst__DOT__qty_p3_d;
        CData/*5:0*/ testbench__DOT__str_inst__DOT__qty_p4_d;
        CData/*5:0*/ testbench__DOT__str_inst__DOT__price_p1_d;
        CData/*5:0*/ testbench__DOT__str_inst__DOT__price_p2_d;
        CData/*5:0*/ testbench__DOT__str_inst__DOT__price_p3_d;
        CData/*5:0*/ testbench__DOT__str_inst__DOT__price_p4_d;
    };
    struct {
        CData/*5:0*/ testbench__DOT__str_inst__DOT__qty_c01_d;
        CData/*5:0*/ testbench__DOT__str_inst__DOT__qty_c02_d;
        CData/*5:0*/ testbench__DOT__str_inst__DOT__qty_c05_d;
        CData/*5:0*/ testbench__DOT__str_inst__DOT__qty_c10_d;
        CData/*5:0*/ testbench__DOT__str_inst__DOT__current_price_d;
        CData/*5:0*/ testbench__DOT__str_inst__DOT__credito_d;
        CData/*1:0*/ testbench__DOT__str_inst__DOT__errore_d;
        CData/*5:0*/ testbench__DOT__str_inst__DOT__resto_d;
        CData/*0:0*/ testbench__DOT__str_inst__DOT__prod1_d;
        CData/*0:0*/ testbench__DOT__str_inst__DOT__prod2_d;
        CData/*0:0*/ testbench__DOT__str_inst__DOT__prod3_d;
        CData/*0:0*/ testbench__DOT__str_inst__DOT__prod4_d;
        CData/*5:0*/ testbench__DOT__str_inst__DOT__coin01_d;
        CData/*5:0*/ testbench__DOT__str_inst__DOT__coin02_d;
        CData/*5:0*/ testbench__DOT__str_inst__DOT__coin05_d;
        CData/*5:0*/ testbench__DOT__str_inst__DOT__coin10_d;
        CData/*0:0*/ testbench__DOT__str_inst__DOT__we_errore;
        CData/*0:0*/ testbench__DOT__str_inst__DOT__we_prod;
        CData/*0:0*/ testbench__DOT__str_inst__DOT__we_coin_out;
        CData/*0:0*/ testbench__DOT__str_inst__DOT____VdfgTmp_h4b786e47__0;
        CData/*1:0*/ testbench__DOT__str_inst__DOT__fsm__DOT__stato;
        CData/*1:0*/ testbench__DOT__str_inst__DOT__fsm__DOT__next_stato;
        CData/*5:0*/ testbench__DOT__str_inst__DOT__greedy_inst__DOT__calc_resto;
        CData/*5:0*/ testbench__DOT__str_inst__DOT__greedy_inst__DOT__calc_qty;
        CData/*5:0*/ __Vtask_testbench__DOT__check_equal_and_expected__520__exp_credit;
        CData/*0:0*/ __Vtask_testbench__DOT__check_equal_and_expected__520__exp_p1;
        CData/*0:0*/ __Vtask_testbench__DOT__check_equal_and_expected__520__exp_p2;
        CData/*0:0*/ __Vtask_testbench__DOT__check_equal_and_expected__520__exp_p3;
        CData/*0:0*/ __Vtask_testbench__DOT__check_equal_and_expected__520__exp_p4;
        CData/*1:0*/ __Vtask_testbench__DOT__check_equal_and_expected__520__exp_err;
        CData/*5:0*/ __Vtask_testbench__DOT__check_equal_and_expected__520__exp_resto;
        CData/*5:0*/ __Vtask_testbench__DOT__check_equal_and_expected__520__exp_c01;
        CData/*5:0*/ __Vtask_testbench__DOT__check_equal_and_expected__520__exp_c02;
        CData/*5:0*/ __Vtask_testbench__DOT__check_equal_and_expected__520__exp_c05;
        CData/*5:0*/ __Vtask_testbench__DOT__check_equal_and_expected__520__exp_c10;
        CData/*0:0*/ __VstlFirstIteration;
        CData/*0:0*/ __Vtrigprevexpr___TOP__testbench__DOT__clk__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__testbench__DOT__rst__0;
        CData/*0:0*/ __VactContinue;
        SData/*9:0*/ testbench__DOT__disp_b;
        SData/*9:0*/ testbench__DOT__beh_inst__DOT__init_value;
        SData/*9:0*/ testbench__DOT__str_inst__DOT__disponibile_q;
        SData/*9:0*/ testbench__DOT__str_inst__DOT__payout_returned;
        SData/*9:0*/ testbench__DOT__str_inst__DOT__disponibile_d;
        SData/*9:0*/ __Vtask_testbench__DOT__check_equal_and_expected__520__exp_disp;
        IData/*31:0*/ testbench__DOT__mismatch_count;
        IData/*31:0*/ testbench__DOT__report_fd;
        VlWide<32>/*1023:0*/ testbench__DOT__current_test_name;
        IData/*31:0*/ __VactIterCount;
        VlUnpacked<CData/*0:0*/, 7> __Vm_traceActivity;
    };
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_hf8270553__0;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<3> __VactTriggered;
    VlTriggerVec<3> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtestbench__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtestbench___024root(Vtestbench__Syms* symsp, const char* v__name);
    ~Vtestbench___024root();
    VL_UNCOPYABLE(Vtestbench___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
