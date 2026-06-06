// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtestbench.h for the primary calling header

#include "Vtestbench__pch.h"
#include "Vtestbench___024root.h"

VL_ATTR_COLD void Vtestbench___024root___eval_static(Vtestbench___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___eval_static\n"); );
}

VL_ATTR_COLD void Vtestbench___024root___eval_final(Vtestbench___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___eval_final\n"); );
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtestbench___024root___dump_triggers__stl(Vtestbench___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vtestbench___024root___eval_phase__stl(Vtestbench___024root* vlSelf);

VL_ATTR_COLD void Vtestbench___024root___eval_settle(Vtestbench___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___eval_settle\n"); );
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelf->__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY((0x64U < __VstlIterCount))) {
#ifdef VL_DEBUG
            Vtestbench___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("testbench.v", 3, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vtestbench___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelf->__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtestbench___024root___dump_triggers__stl(Vtestbench___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

extern const VlUnpacked<CData/*5:0*/, 8> Vtestbench__ConstPool__TABLE_h98991338_0;

VL_ATTR_COLD void Vtestbench___024root___stl_sequent__TOP__0(Vtestbench___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___stl_sequent__TOP__0\n"); );
    // Init
    CData/*2:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    // Body
    vlSelf->testbench__DOT__str_inst__DOT__do_erogazione = 0U;
    __Vtableidx1 = vlSelf->testbench__DOT__coin;
    vlSelf->testbench__DOT__str_inst__DOT__coin_value 
        = Vtestbench__ConstPool__TABLE_h98991338_0[__Vtableidx1];
    vlSelf->testbench__DOT__str_inst__DOT__do_add_coin = 0U;
    vlSelf->testbench__DOT__str_inst__DOT__clear_outputs = 0U;
    vlSelf->testbench__DOT__str_inst__DOT__cfg_value 
        = (((IData)(vlSelf->testbench__DOT__coin) << 3U) 
           | (IData)(vlSelf->testbench__DOT__selezione));
    vlSelf->testbench__DOT__str_inst__DOT__mode_init = 0U;
    if ((1U & (~ ((IData)(vlSelf->testbench__DOT__str_inst__DOT__fsm__DOT__stato) 
                  >> 1U)))) {
        if ((1U & (~ (IData)(vlSelf->testbench__DOT__str_inst__DOT__fsm__DOT__stato)))) {
            vlSelf->testbench__DOT__str_inst__DOT__mode_init = 1U;
        }
    }
    vlSelf->testbench__DOT__str_inst__DOT__do_cancel = 0U;
    vlSelf->testbench__DOT__str_inst__DOT__sel_price 
        = ((2U & (IData)(vlSelf->testbench__DOT__selezione))
            ? ((1U & (IData)(vlSelf->testbench__DOT__selezione))
                ? (IData)(vlSelf->testbench__DOT__str_inst__DOT__price_p4_q)
                : (IData)(vlSelf->testbench__DOT__str_inst__DOT__price_p3_q))
            : ((1U & (IData)(vlSelf->testbench__DOT__selezione))
                ? (IData)(vlSelf->testbench__DOT__str_inst__DOT__price_p2_q)
                : (IData)(vlSelf->testbench__DOT__str_inst__DOT__price_p1_q)));
    vlSelf->testbench__DOT__str_inst__DOT__valid_sel 
        = ((4U == (IData)(vlSelf->testbench__DOT__selezione)) 
           | ((5U == (IData)(vlSelf->testbench__DOT__selezione)) 
              | ((6U == (IData)(vlSelf->testbench__DOT__selezione)) 
                 | (7U == (IData)(vlSelf->testbench__DOT__selezione)))));
    if ((2U & (IData)(vlSelf->testbench__DOT__str_inst__DOT__fsm__DOT__stato))) {
        if ((1U & (IData)(vlSelf->testbench__DOT__str_inst__DOT__fsm__DOT__stato))) {
            vlSelf->testbench__DOT__str_inst__DOT__do_erogazione = 1U;
        }
        if ((1U & (~ (IData)(vlSelf->testbench__DOT__str_inst__DOT__fsm__DOT__stato)))) {
            if ((1U & (~ (IData)(vlSelf->testbench__DOT__annulla)))) {
                if ((0U != (IData)(vlSelf->testbench__DOT__coin))) {
                    vlSelf->testbench__DOT__str_inst__DOT__do_add_coin = 1U;
                }
            }
        }
    } else if ((1U & (IData)(vlSelf->testbench__DOT__str_inst__DOT__fsm__DOT__stato))) {
        if ((1U & (~ (IData)(vlSelf->testbench__DOT__annulla)))) {
            if ((0U != (IData)(vlSelf->testbench__DOT__coin))) {
                vlSelf->testbench__DOT__str_inst__DOT__do_add_coin = 1U;
            }
        }
    }
    vlSelf->testbench__DOT__str_inst__DOT__add_c01 
        = ((IData)(vlSelf->testbench__DOT__str_inst__DOT__do_add_coin) 
           & (4U == (IData)(vlSelf->testbench__DOT__coin)));
    vlSelf->testbench__DOT__str_inst__DOT__add_c02 
        = ((IData)(vlSelf->testbench__DOT__str_inst__DOT__do_add_coin) 
           & (5U == (IData)(vlSelf->testbench__DOT__coin)));
    vlSelf->testbench__DOT__str_inst__DOT__add_c05 
        = ((IData)(vlSelf->testbench__DOT__str_inst__DOT__do_add_coin) 
           & (6U == (IData)(vlSelf->testbench__DOT__coin)));
    vlSelf->testbench__DOT__str_inst__DOT__add_c10 
        = ((IData)(vlSelf->testbench__DOT__str_inst__DOT__do_add_coin) 
           & (7U == (IData)(vlSelf->testbench__DOT__coin)));
    vlSelf->testbench__DOT__str_inst__DOT__init_price_p1 
        = ((IData)(vlSelf->testbench__DOT__str_inst__DOT__mode_init) 
           & (1U == (IData)(vlSelf->testbench__DOT__str_inst__DOT__init_counter_w)));
    vlSelf->testbench__DOT__str_inst__DOT__init_price_p2 
        = ((IData)(vlSelf->testbench__DOT__str_inst__DOT__mode_init) 
           & (3U == (IData)(vlSelf->testbench__DOT__str_inst__DOT__init_counter_w)));
    vlSelf->testbench__DOT__str_inst__DOT__init_price_p3 
        = ((IData)(vlSelf->testbench__DOT__str_inst__DOT__mode_init) 
           & (5U == (IData)(vlSelf->testbench__DOT__str_inst__DOT__init_counter_w)));
    vlSelf->testbench__DOT__str_inst__DOT__init_price_p4 
        = ((IData)(vlSelf->testbench__DOT__str_inst__DOT__mode_init) 
           & (7U == (IData)(vlSelf->testbench__DOT__str_inst__DOT__init_counter_w)));
    vlSelf->testbench__DOT__str_inst__DOT__init_qty_p1 
        = ((IData)(vlSelf->testbench__DOT__str_inst__DOT__mode_init) 
           & (0U == (IData)(vlSelf->testbench__DOT__str_inst__DOT__init_counter_w)));
    vlSelf->testbench__DOT__str_inst__DOT__init_qty_p2 
        = ((IData)(vlSelf->testbench__DOT__str_inst__DOT__mode_init) 
           & (2U == (IData)(vlSelf->testbench__DOT__str_inst__DOT__init_counter_w)));
    vlSelf->testbench__DOT__str_inst__DOT__init_qty_p3 
        = ((IData)(vlSelf->testbench__DOT__str_inst__DOT__mode_init) 
           & (4U == (IData)(vlSelf->testbench__DOT__str_inst__DOT__init_counter_w)));
    vlSelf->testbench__DOT__str_inst__DOT__init_qty_p4 
        = ((IData)(vlSelf->testbench__DOT__str_inst__DOT__mode_init) 
           & (6U == (IData)(vlSelf->testbench__DOT__str_inst__DOT__init_counter_w)));
    vlSelf->testbench__DOT__str_inst__DOT__init_c01 
        = ((IData)(vlSelf->testbench__DOT__str_inst__DOT__mode_init) 
           & (8U == (IData)(vlSelf->testbench__DOT__str_inst__DOT__init_counter_w)));
    vlSelf->testbench__DOT__str_inst__DOT__init_c02 
        = ((IData)(vlSelf->testbench__DOT__str_inst__DOT__mode_init) 
           & (9U == (IData)(vlSelf->testbench__DOT__str_inst__DOT__init_counter_w)));
    vlSelf->testbench__DOT__str_inst__DOT__init_c05 
        = ((IData)(vlSelf->testbench__DOT__str_inst__DOT__mode_init) 
           & (0xaU == (IData)(vlSelf->testbench__DOT__str_inst__DOT__init_counter_w)));
    vlSelf->testbench__DOT__str_inst__DOT__init_c10 
        = ((IData)(vlSelf->testbench__DOT__str_inst__DOT__mode_init) 
           & (0xbU == (IData)(vlSelf->testbench__DOT__str_inst__DOT__init_counter_w)));
    vlSelf->testbench__DOT__str_inst__DOT__credito_ge_selprice 
        = ((IData)(vlSelf->testbench__DOT__str_inst__DOT__credito_q) 
           >= (IData)(vlSelf->testbench__DOT__str_inst__DOT__sel_price));
    vlSelf->testbench__DOT__str_inst__DOT__stock_empty 
        = ((IData)(vlSelf->testbench__DOT__str_inst__DOT__valid_sel) 
           & (0U == ((2U & (IData)(vlSelf->testbench__DOT__selezione))
                      ? ((1U & (IData)(vlSelf->testbench__DOT__selezione))
                          ? (IData)(vlSelf->testbench__DOT__str_inst__DOT__qty_p4_q)
                          : (IData)(vlSelf->testbench__DOT__str_inst__DOT__qty_p3_q))
                      : ((1U & (IData)(vlSelf->testbench__DOT__selezione))
                          ? (IData)(vlSelf->testbench__DOT__str_inst__DOT__qty_p2_q)
                          : (IData)(vlSelf->testbench__DOT__str_inst__DOT__qty_p1_q)))));
    vlSelf->testbench__DOT__str_inst__DOT__price_p1_d 
        = ((IData)(vlSelf->testbench__DOT__str_inst__DOT__init_price_p1)
            ? (IData)(vlSelf->testbench__DOT__str_inst__DOT__cfg_value)
            : (IData)(vlSelf->testbench__DOT__str_inst__DOT__price_p1_q));
    vlSelf->testbench__DOT__str_inst__DOT__price_p2_d 
        = ((IData)(vlSelf->testbench__DOT__str_inst__DOT__init_price_p2)
            ? (IData)(vlSelf->testbench__DOT__str_inst__DOT__cfg_value)
            : (IData)(vlSelf->testbench__DOT__str_inst__DOT__price_p2_q));
    vlSelf->testbench__DOT__str_inst__DOT__price_p3_d 
        = ((IData)(vlSelf->testbench__DOT__str_inst__DOT__init_price_p3)
            ? (IData)(vlSelf->testbench__DOT__str_inst__DOT__cfg_value)
            : (IData)(vlSelf->testbench__DOT__str_inst__DOT__price_p3_q));
    vlSelf->testbench__DOT__str_inst__DOT__price_p4_d 
        = ((IData)(vlSelf->testbench__DOT__str_inst__DOT__init_price_p4)
            ? (IData)(vlSelf->testbench__DOT__str_inst__DOT__cfg_value)
            : (IData)(vlSelf->testbench__DOT__str_inst__DOT__price_p4_q));
    vlSelf->testbench__DOT__str_inst__DOT__credito_insuff 
        = ((~ (IData)(vlSelf->testbench__DOT__str_inst__DOT__credito_ge_selprice)) 
           & (IData)(vlSelf->testbench__DOT__str_inst__DOT__valid_sel));
    vlSelf->testbench__DOT__str_inst__DOT__c_prod4 = 0U;
    vlSelf->testbench__DOT__str_inst__DOT__c_prod3 = 0U;
    vlSelf->testbench__DOT__str_inst__DOT__c_prod2 = 0U;
    vlSelf->testbench__DOT__str_inst__DOT__c_prod1 = 0U;
    vlSelf->testbench__DOT__str_inst__DOT__do_err = 0U;
    vlSelf->testbench__DOT__str_inst__DOT__do_ok = 0U;
    if ((2U & (IData)(vlSelf->testbench__DOT__str_inst__DOT__fsm__DOT__stato))) {
        if ((1U & (IData)(vlSelf->testbench__DOT__str_inst__DOT__fsm__DOT__stato))) {
            vlSelf->testbench__DOT__str_inst__DOT__clear_outputs = 1U;
            vlSelf->testbench__DOT__str_inst__DOT__fsm__DOT__next_stato = 1U;
        } else {
            vlSelf->testbench__DOT__str_inst__DOT__fsm__DOT__next_stato 
                = ((IData)(vlSelf->testbench__DOT__annulla)
                    ? 1U : ((0U != (IData)(vlSelf->testbench__DOT__coin))
                             ? 2U : ((IData)(vlSelf->testbench__DOT__conferma)
                                      ? ((IData)(vlSelf->testbench__DOT__str_inst__DOT__valid_sel)
                                          ? (((IData)(vlSelf->testbench__DOT__str_inst__DOT__credito_ge_selprice) 
                                              & (~ (IData)(vlSelf->testbench__DOT__str_inst__DOT__stock_empty)))
                                              ? 3U : 1U)
                                          : 1U) : 2U)));
        }
        if ((1U & (~ (IData)(vlSelf->testbench__DOT__str_inst__DOT__fsm__DOT__stato)))) {
            if (vlSelf->testbench__DOT__annulla) {
                vlSelf->testbench__DOT__str_inst__DOT__do_cancel = 1U;
            }
            if ((1U & (~ (IData)(vlSelf->testbench__DOT__annulla)))) {
                if ((0U == (IData)(vlSelf->testbench__DOT__coin))) {
                    if (vlSelf->testbench__DOT__conferma) {
                        if (vlSelf->testbench__DOT__str_inst__DOT__valid_sel) {
                            if (((IData)(vlSelf->testbench__DOT__str_inst__DOT__credito_ge_selprice) 
                                 & (~ (IData)(vlSelf->testbench__DOT__str_inst__DOT__stock_empty)))) {
                                if ((4U & (IData)(vlSelf->testbench__DOT__selezione))) {
                                    if ((2U & (IData)(vlSelf->testbench__DOT__selezione))) {
                                        if ((1U & (IData)(vlSelf->testbench__DOT__selezione))) {
                                            vlSelf->testbench__DOT__str_inst__DOT__c_prod4 = 1U;
                                        }
                                        if ((1U & (~ (IData)(vlSelf->testbench__DOT__selezione)))) {
                                            vlSelf->testbench__DOT__str_inst__DOT__c_prod3 = 1U;
                                        }
                                    }
                                    if ((1U & (~ ((IData)(vlSelf->testbench__DOT__selezione) 
                                                  >> 1U)))) {
                                        if ((1U & (IData)(vlSelf->testbench__DOT__selezione))) {
                                            vlSelf->testbench__DOT__str_inst__DOT__c_prod2 = 1U;
                                        }
                                        if ((1U & (~ (IData)(vlSelf->testbench__DOT__selezione)))) {
                                            vlSelf->testbench__DOT__str_inst__DOT__c_prod1 = 1U;
                                        }
                                    }
                                }
                                vlSelf->testbench__DOT__str_inst__DOT__do_ok = 1U;
                            }
                            if ((1U & (~ ((IData)(vlSelf->testbench__DOT__str_inst__DOT__credito_ge_selprice) 
                                          & (~ (IData)(vlSelf->testbench__DOT__str_inst__DOT__stock_empty)))))) {
                                vlSelf->testbench__DOT__str_inst__DOT__do_err = 1U;
                            }
                        } else {
                            vlSelf->testbench__DOT__str_inst__DOT__do_err = 1U;
                        }
                    }
                }
            }
        }
    } else if ((1U & (IData)(vlSelf->testbench__DOT__str_inst__DOT__fsm__DOT__stato))) {
        vlSelf->testbench__DOT__str_inst__DOT__clear_outputs = 1U;
        if (vlSelf->testbench__DOT__annulla) {
            vlSelf->testbench__DOT__str_inst__DOT__do_cancel = 1U;
            vlSelf->testbench__DOT__str_inst__DOT__fsm__DOT__next_stato = 1U;
        } else {
            vlSelf->testbench__DOT__str_inst__DOT__fsm__DOT__next_stato 
                = ((0U != (IData)(vlSelf->testbench__DOT__coin))
                    ? 2U : 1U);
        }
    } else {
        vlSelf->testbench__DOT__str_inst__DOT__fsm__DOT__next_stato 
            = ((0xbU == (IData)(vlSelf->testbench__DOT__str_inst__DOT__init_counter_w))
                ? 1U : 0U);
    }
    vlSelf->testbench__DOT__str_inst__DOT__we_errore 
        = ((IData)(vlSelf->testbench__DOT__str_inst__DOT__clear_outputs) 
           | (IData)(vlSelf->testbench__DOT__str_inst__DOT__do_err));
    vlSelf->testbench__DOT__str_inst__DOT__errore_d 
        = ((IData)(vlSelf->testbench__DOT__str_inst__DOT__do_err)
            ? ((IData)(vlSelf->testbench__DOT__str_inst__DOT__valid_sel)
                ? (((IData)(vlSelf->testbench__DOT__str_inst__DOT__stock_empty) 
                    << 1U) | (IData)(vlSelf->testbench__DOT__str_inst__DOT__credito_insuff))
                : 2U) : ((IData)(vlSelf->testbench__DOT__str_inst__DOT__clear_outputs)
                          ? 0U : (IData)(vlSelf->testbench__DOT__str_inst__DOT__errore_q)));
    vlSelf->testbench__DOT__str_inst__DOT__we_prod 
        = ((IData)(vlSelf->testbench__DOT__str_inst__DOT__clear_outputs) 
           | (IData)(vlSelf->testbench__DOT__str_inst__DOT__do_ok));
    vlSelf->testbench__DOT__str_inst__DOT__current_price_d 
        = ((IData)(vlSelf->testbench__DOT__str_inst__DOT__do_ok)
            ? (IData)(vlSelf->testbench__DOT__str_inst__DOT__sel_price)
            : (IData)(vlSelf->testbench__DOT__str_inst__DOT__current_price_q));
    vlSelf->testbench__DOT__str_inst__DOT__prod1_d 
        = ((~ (IData)(vlSelf->testbench__DOT__str_inst__DOT__clear_outputs)) 
           & ((IData)(vlSelf->testbench__DOT__str_inst__DOT__do_ok)
               ? (IData)(vlSelf->testbench__DOT__str_inst__DOT__c_prod1)
               : (IData)(vlSelf->testbench__DOT__str_inst__DOT__prod1_q)));
    vlSelf->testbench__DOT__str_inst__DOT__prod2_d 
        = ((~ (IData)(vlSelf->testbench__DOT__str_inst__DOT__clear_outputs)) 
           & ((IData)(vlSelf->testbench__DOT__str_inst__DOT__do_ok)
               ? (IData)(vlSelf->testbench__DOT__str_inst__DOT__c_prod2)
               : (IData)(vlSelf->testbench__DOT__str_inst__DOT__prod2_q)));
    vlSelf->testbench__DOT__str_inst__DOT__prod3_d 
        = ((~ (IData)(vlSelf->testbench__DOT__str_inst__DOT__clear_outputs)) 
           & ((IData)(vlSelf->testbench__DOT__str_inst__DOT__do_ok)
               ? (IData)(vlSelf->testbench__DOT__str_inst__DOT__c_prod3)
               : (IData)(vlSelf->testbench__DOT__str_inst__DOT__prod3_q)));
    vlSelf->testbench__DOT__str_inst__DOT__prod4_d 
        = ((~ (IData)(vlSelf->testbench__DOT__str_inst__DOT__clear_outputs)) 
           & ((IData)(vlSelf->testbench__DOT__str_inst__DOT__do_ok)
               ? (IData)(vlSelf->testbench__DOT__str_inst__DOT__c_prod4)
               : (IData)(vlSelf->testbench__DOT__str_inst__DOT__prod4_q)));
    vlSelf->testbench__DOT__str_inst__DOT__do_p1 = 
        ((IData)(vlSelf->testbench__DOT__str_inst__DOT__do_ok) 
         & (4U == (IData)(vlSelf->testbench__DOT__selezione)));
    vlSelf->testbench__DOT__str_inst__DOT__do_p2 = 
        ((IData)(vlSelf->testbench__DOT__str_inst__DOT__do_ok) 
         & (5U == (IData)(vlSelf->testbench__DOT__selezione)));
    vlSelf->testbench__DOT__str_inst__DOT__do_p3 = 
        ((IData)(vlSelf->testbench__DOT__str_inst__DOT__do_ok) 
         & (6U == (IData)(vlSelf->testbench__DOT__selezione)));
    vlSelf->testbench__DOT__str_inst__DOT__do_p4 = 
        ((IData)(vlSelf->testbench__DOT__str_inst__DOT__do_ok) 
         & (7U == (IData)(vlSelf->testbench__DOT__selezione)));
    vlSelf->testbench__DOT__str_inst__DOT__payout_active 
        = ((IData)(vlSelf->testbench__DOT__str_inst__DOT__do_cancel) 
           | (IData)(vlSelf->testbench__DOT__str_inst__DOT__do_ok));
    vlSelf->testbench__DOT__str_inst__DOT__qty_p1_d 
        = (0x3fU & ((IData)(vlSelf->testbench__DOT__str_inst__DOT__init_qty_p1)
                     ? (IData)(vlSelf->testbench__DOT__str_inst__DOT__cfg_value)
                     : ((IData)(vlSelf->testbench__DOT__str_inst__DOT__qty_p1_q) 
                        - (IData)(vlSelf->testbench__DOT__str_inst__DOT__do_p1))));
    vlSelf->testbench__DOT__str_inst__DOT__qty_p2_d 
        = (0x3fU & ((IData)(vlSelf->testbench__DOT__str_inst__DOT__init_qty_p2)
                     ? (IData)(vlSelf->testbench__DOT__str_inst__DOT__cfg_value)
                     : ((IData)(vlSelf->testbench__DOT__str_inst__DOT__qty_p2_q) 
                        - (IData)(vlSelf->testbench__DOT__str_inst__DOT__do_p2))));
    vlSelf->testbench__DOT__str_inst__DOT__qty_p3_d 
        = (0x3fU & ((IData)(vlSelf->testbench__DOT__str_inst__DOT__init_qty_p3)
                     ? (IData)(vlSelf->testbench__DOT__str_inst__DOT__cfg_value)
                     : ((IData)(vlSelf->testbench__DOT__str_inst__DOT__qty_p3_q) 
                        - (IData)(vlSelf->testbench__DOT__str_inst__DOT__do_p3))));
    vlSelf->testbench__DOT__str_inst__DOT__qty_p4_d 
        = (0x3fU & ((IData)(vlSelf->testbench__DOT__str_inst__DOT__init_qty_p4)
                     ? (IData)(vlSelf->testbench__DOT__str_inst__DOT__cfg_value)
                     : ((IData)(vlSelf->testbench__DOT__str_inst__DOT__qty_p4_q) 
                        - (IData)(vlSelf->testbench__DOT__str_inst__DOT__do_p4))));
    vlSelf->testbench__DOT__str_inst__DOT____VdfgTmp_h4b786e47__0 
        = ((IData)(vlSelf->testbench__DOT__str_inst__DOT__do_add_coin) 
           | (IData)(vlSelf->testbench__DOT__str_inst__DOT__payout_active));
    vlSelf->testbench__DOT__str_inst__DOT__we_coin_out 
        = ((IData)(vlSelf->testbench__DOT__str_inst__DOT__clear_outputs) 
           | (IData)(vlSelf->testbench__DOT__str_inst__DOT__payout_active));
    vlSelf->testbench__DOT__str_inst__DOT__credito_d 
        = ((IData)(vlSelf->testbench__DOT__str_inst__DOT__mode_init)
            ? 0U : ((IData)(vlSelf->testbench__DOT__str_inst__DOT__payout_active)
                     ? 0U : (0x3fU & ((IData)(vlSelf->testbench__DOT__str_inst__DOT__do_add_coin)
                                       ? ((IData)(vlSelf->testbench__DOT__str_inst__DOT__coin_value) 
                                          + (IData)(vlSelf->testbench__DOT__str_inst__DOT__credito_q))
                                       : (IData)(vlSelf->testbench__DOT__str_inst__DOT__credito_q)))));
    vlSelf->testbench__DOT__str_inst__DOT__c10_calc = 0U;
    vlSelf->testbench__DOT__str_inst__DOT__c05_calc = 0U;
    vlSelf->testbench__DOT__str_inst__DOT__c02_calc = 0U;
    vlSelf->testbench__DOT__str_inst__DOT__c01_calc = 0U;
    vlSelf->testbench__DOT__str_inst__DOT__qc10_next 
        = vlSelf->testbench__DOT__str_inst__DOT__qty_c10_q;
    vlSelf->testbench__DOT__str_inst__DOT__qc05_next 
        = vlSelf->testbench__DOT__str_inst__DOT__qty_c05_q;
    vlSelf->testbench__DOT__str_inst__DOT__qc02_next 
        = vlSelf->testbench__DOT__str_inst__DOT__qty_c02_q;
    vlSelf->testbench__DOT__str_inst__DOT__qc01_next 
        = vlSelf->testbench__DOT__str_inst__DOT__qty_c01_q;
    vlSelf->testbench__DOT__str_inst__DOT__greedy_inst__DOT__calc_resto = 0U;
    vlSelf->testbench__DOT__str_inst__DOT__greedy_inst__DOT__calc_qty = 0U;
    if (vlSelf->testbench__DOT__str_inst__DOT__payout_active) {
        vlSelf->testbench__DOT__str_inst__DOT__greedy_inst__DOT__calc_resto 
            = (0x3fU & ((IData)(vlSelf->testbench__DOT__str_inst__DOT__do_ok)
                         ? ((IData)(vlSelf->testbench__DOT__str_inst__DOT__credito_q) 
                            - (IData)(vlSelf->testbench__DOT__str_inst__DOT__sel_price))
                         : (IData)(vlSelf->testbench__DOT__str_inst__DOT__credito_q)));
        vlSelf->testbench__DOT__str_inst__DOT__greedy_inst__DOT__calc_qty 
            = (0x3fU & VL_DIV_III(6, (IData)(vlSelf->testbench__DOT__str_inst__DOT__greedy_inst__DOT__calc_resto), (IData)(0xaU)));
        if (((IData)(vlSelf->testbench__DOT__str_inst__DOT__greedy_inst__DOT__calc_qty) 
             > (IData)(vlSelf->testbench__DOT__str_inst__DOT__qty_c10_q))) {
            vlSelf->testbench__DOT__str_inst__DOT__greedy_inst__DOT__calc_qty 
                = vlSelf->testbench__DOT__str_inst__DOT__qty_c10_q;
        }
        vlSelf->testbench__DOT__str_inst__DOT__c10_calc 
            = vlSelf->testbench__DOT__str_inst__DOT__greedy_inst__DOT__calc_qty;
        vlSelf->testbench__DOT__str_inst__DOT__qc10_next 
            = (0x3fU & ((IData)(vlSelf->testbench__DOT__str_inst__DOT__qty_c10_q) 
                        - (IData)(vlSelf->testbench__DOT__str_inst__DOT__c10_calc)));
        vlSelf->testbench__DOT__str_inst__DOT__greedy_inst__DOT__calc_resto 
            = (0x3fU & ((IData)(vlSelf->testbench__DOT__str_inst__DOT__greedy_inst__DOT__calc_resto) 
                        - ((IData)(0xaU) * (IData)(vlSelf->testbench__DOT__str_inst__DOT__greedy_inst__DOT__calc_qty))));
        vlSelf->testbench__DOT__str_inst__DOT__greedy_inst__DOT__calc_qty 
            = (0x3fU & VL_DIV_III(6, (IData)(vlSelf->testbench__DOT__str_inst__DOT__greedy_inst__DOT__calc_resto), (IData)(5U)));
        if (((IData)(vlSelf->testbench__DOT__str_inst__DOT__greedy_inst__DOT__calc_qty) 
             > (IData)(vlSelf->testbench__DOT__str_inst__DOT__qty_c05_q))) {
            vlSelf->testbench__DOT__str_inst__DOT__greedy_inst__DOT__calc_qty 
                = vlSelf->testbench__DOT__str_inst__DOT__qty_c05_q;
        }
        vlSelf->testbench__DOT__str_inst__DOT__c05_calc 
            = vlSelf->testbench__DOT__str_inst__DOT__greedy_inst__DOT__calc_qty;
        vlSelf->testbench__DOT__str_inst__DOT__qc05_next 
            = (0x3fU & ((IData)(vlSelf->testbench__DOT__str_inst__DOT__qty_c05_q) 
                        - (IData)(vlSelf->testbench__DOT__str_inst__DOT__c05_calc)));
        vlSelf->testbench__DOT__str_inst__DOT__greedy_inst__DOT__calc_resto 
            = (0x3fU & ((IData)(vlSelf->testbench__DOT__str_inst__DOT__greedy_inst__DOT__calc_resto) 
                        - ((IData)(5U) * (IData)(vlSelf->testbench__DOT__str_inst__DOT__greedy_inst__DOT__calc_qty))));
        vlSelf->testbench__DOT__str_inst__DOT__greedy_inst__DOT__calc_qty 
            = (0x3fU & VL_SHIFTR_III(6,6,32, (IData)(vlSelf->testbench__DOT__str_inst__DOT__greedy_inst__DOT__calc_resto), 1U));
        if (((IData)(vlSelf->testbench__DOT__str_inst__DOT__greedy_inst__DOT__calc_qty) 
             > (IData)(vlSelf->testbench__DOT__str_inst__DOT__qty_c02_q))) {
            vlSelf->testbench__DOT__str_inst__DOT__greedy_inst__DOT__calc_qty 
                = vlSelf->testbench__DOT__str_inst__DOT__qty_c02_q;
        }
        vlSelf->testbench__DOT__str_inst__DOT__c02_calc 
            = vlSelf->testbench__DOT__str_inst__DOT__greedy_inst__DOT__calc_qty;
        vlSelf->testbench__DOT__str_inst__DOT__qc02_next 
            = (0x3fU & ((IData)(vlSelf->testbench__DOT__str_inst__DOT__qty_c02_q) 
                        - (IData)(vlSelf->testbench__DOT__str_inst__DOT__c02_calc)));
        vlSelf->testbench__DOT__str_inst__DOT__greedy_inst__DOT__calc_resto 
            = (0x3fU & ((IData)(vlSelf->testbench__DOT__str_inst__DOT__greedy_inst__DOT__calc_resto) 
                        - VL_SHIFTL_III(6,6,32, (IData)(vlSelf->testbench__DOT__str_inst__DOT__greedy_inst__DOT__calc_qty), 1U)));
        vlSelf->testbench__DOT__str_inst__DOT__greedy_inst__DOT__calc_qty 
            = vlSelf->testbench__DOT__str_inst__DOT__greedy_inst__DOT__calc_resto;
        if (((IData)(vlSelf->testbench__DOT__str_inst__DOT__greedy_inst__DOT__calc_qty) 
             > (IData)(vlSelf->testbench__DOT__str_inst__DOT__qty_c01_q))) {
            vlSelf->testbench__DOT__str_inst__DOT__greedy_inst__DOT__calc_qty 
                = vlSelf->testbench__DOT__str_inst__DOT__qty_c01_q;
        }
        vlSelf->testbench__DOT__str_inst__DOT__c01_calc 
            = vlSelf->testbench__DOT__str_inst__DOT__greedy_inst__DOT__calc_qty;
        vlSelf->testbench__DOT__str_inst__DOT__qc01_next 
            = (0x3fU & ((IData)(vlSelf->testbench__DOT__str_inst__DOT__qty_c01_q) 
                        - (IData)(vlSelf->testbench__DOT__str_inst__DOT__c01_calc)));
    }
    vlSelf->testbench__DOT__str_inst__DOT__qty_c10_d 
        = (0x3fU & ((IData)(vlSelf->testbench__DOT__str_inst__DOT__init_c10)
                     ? (IData)(vlSelf->testbench__DOT__str_inst__DOT__cfg_value)
                     : ((IData)(vlSelf->testbench__DOT__str_inst__DOT__add_c10)
                         ? ((IData)(1U) + (IData)(vlSelf->testbench__DOT__str_inst__DOT__qty_c10_q))
                         : ((IData)(vlSelf->testbench__DOT__str_inst__DOT__payout_active)
                             ? (IData)(vlSelf->testbench__DOT__str_inst__DOT__qc10_next)
                             : (IData)(vlSelf->testbench__DOT__str_inst__DOT__qty_c10_q)))));
    vlSelf->testbench__DOT__str_inst__DOT__qty_c05_d 
        = (0x3fU & ((IData)(vlSelf->testbench__DOT__str_inst__DOT__init_c05)
                     ? (IData)(vlSelf->testbench__DOT__str_inst__DOT__cfg_value)
                     : ((IData)(vlSelf->testbench__DOT__str_inst__DOT__add_c05)
                         ? ((IData)(1U) + (IData)(vlSelf->testbench__DOT__str_inst__DOT__qty_c05_q))
                         : ((IData)(vlSelf->testbench__DOT__str_inst__DOT__payout_active)
                             ? (IData)(vlSelf->testbench__DOT__str_inst__DOT__qc05_next)
                             : (IData)(vlSelf->testbench__DOT__str_inst__DOT__qty_c05_q)))));
    vlSelf->testbench__DOT__str_inst__DOT__qty_c02_d 
        = (0x3fU & ((IData)(vlSelf->testbench__DOT__str_inst__DOT__init_c02)
                     ? (IData)(vlSelf->testbench__DOT__str_inst__DOT__cfg_value)
                     : ((IData)(vlSelf->testbench__DOT__str_inst__DOT__add_c02)
                         ? ((IData)(1U) + (IData)(vlSelf->testbench__DOT__str_inst__DOT__qty_c02_q))
                         : ((IData)(vlSelf->testbench__DOT__str_inst__DOT__payout_active)
                             ? (IData)(vlSelf->testbench__DOT__str_inst__DOT__qc02_next)
                             : (IData)(vlSelf->testbench__DOT__str_inst__DOT__qty_c02_q)))));
    vlSelf->testbench__DOT__str_inst__DOT__payout_returned 
        = (0x3ffU & (((IData)(0xaU) * (IData)(vlSelf->testbench__DOT__str_inst__DOT__c10_calc)) 
                     + (((IData)(5U) * (IData)(vlSelf->testbench__DOT__str_inst__DOT__c05_calc)) 
                        + (VL_SHIFTL_III(10,10,32, (IData)(vlSelf->testbench__DOT__str_inst__DOT__c02_calc), 1U) 
                           + (IData)(vlSelf->testbench__DOT__str_inst__DOT__c01_calc)))));
    if (vlSelf->testbench__DOT__str_inst__DOT__init_c01) {
        vlSelf->testbench__DOT__str_inst__DOT__qty_c01_d 
            = (0x3fU & (IData)(vlSelf->testbench__DOT__str_inst__DOT__cfg_value));
        vlSelf->testbench__DOT__str_inst__DOT__disponibile_d 
            = (0x3ffU & (IData)(vlSelf->testbench__DOT__str_inst__DOT__cfg_value));
    } else {
        vlSelf->testbench__DOT__str_inst__DOT__qty_c01_d 
            = (0x3fU & ((IData)(vlSelf->testbench__DOT__str_inst__DOT__add_c01)
                         ? ((IData)(1U) + (IData)(vlSelf->testbench__DOT__str_inst__DOT__qty_c01_q))
                         : ((IData)(vlSelf->testbench__DOT__str_inst__DOT__payout_active)
                             ? (IData)(vlSelf->testbench__DOT__str_inst__DOT__qc01_next)
                             : (IData)(vlSelf->testbench__DOT__str_inst__DOT__qty_c01_q))));
        vlSelf->testbench__DOT__str_inst__DOT__disponibile_d 
            = (0x3ffU & ((IData)(vlSelf->testbench__DOT__str_inst__DOT__init_c02)
                          ? ((IData)(vlSelf->testbench__DOT__str_inst__DOT__disponibile_q) 
                             + VL_SHIFTL_III(10,10,32, (IData)(vlSelf->testbench__DOT__str_inst__DOT__cfg_value), 1U))
                          : ((IData)(vlSelf->testbench__DOT__str_inst__DOT__init_c05)
                              ? ((IData)(vlSelf->testbench__DOT__str_inst__DOT__disponibile_q) 
                                 + ((IData)(vlSelf->testbench__DOT__str_inst__DOT__cfg_value) 
                                    + VL_SHIFTL_III(10,10,32, (IData)(vlSelf->testbench__DOT__str_inst__DOT__cfg_value), 2U)))
                              : ((IData)(vlSelf->testbench__DOT__str_inst__DOT__init_c10)
                                  ? ((IData)(vlSelf->testbench__DOT__str_inst__DOT__disponibile_q) 
                                     + (VL_SHIFTL_III(10,10,32, (IData)(vlSelf->testbench__DOT__str_inst__DOT__cfg_value), 3U) 
                                        + VL_SHIFTL_III(10,10,32, (IData)(vlSelf->testbench__DOT__str_inst__DOT__cfg_value), 1U)))
                                  : ((IData)(vlSelf->testbench__DOT__str_inst__DOT__do_add_coin)
                                      ? ((IData)(vlSelf->testbench__DOT__str_inst__DOT__disponibile_q) 
                                         + (IData)(vlSelf->testbench__DOT__str_inst__DOT__coin_value))
                                      : ((IData)(vlSelf->testbench__DOT__str_inst__DOT__payout_active)
                                          ? (((IData)(vlSelf->testbench__DOT__str_inst__DOT__payout_returned) 
                                              > (IData)(vlSelf->testbench__DOT__str_inst__DOT__disponibile_q))
                                              ? 0U : 
                                             ((IData)(vlSelf->testbench__DOT__str_inst__DOT__disponibile_q) 
                                              - (IData)(vlSelf->testbench__DOT__str_inst__DOT__payout_returned)))
                                          : (IData)(vlSelf->testbench__DOT__str_inst__DOT__disponibile_q)))))));
    }
    if (vlSelf->testbench__DOT__str_inst__DOT__payout_active) {
        vlSelf->testbench__DOT__str_inst__DOT__coin10_d 
            = vlSelf->testbench__DOT__str_inst__DOT__c10_calc;
        vlSelf->testbench__DOT__str_inst__DOT__coin05_d 
            = vlSelf->testbench__DOT__str_inst__DOT__c05_calc;
        vlSelf->testbench__DOT__str_inst__DOT__coin02_d 
            = vlSelf->testbench__DOT__str_inst__DOT__c02_calc;
        vlSelf->testbench__DOT__str_inst__DOT__coin01_d 
            = vlSelf->testbench__DOT__str_inst__DOT__c01_calc;
        vlSelf->testbench__DOT__str_inst__DOT__resto_d 
            = (0x3fU & (IData)(vlSelf->testbench__DOT__str_inst__DOT__payout_returned));
    } else {
        if (vlSelf->testbench__DOT__str_inst__DOT__clear_outputs) {
            vlSelf->testbench__DOT__str_inst__DOT__coin10_d = 0U;
            vlSelf->testbench__DOT__str_inst__DOT__coin05_d = 0U;
            vlSelf->testbench__DOT__str_inst__DOT__coin02_d = 0U;
            vlSelf->testbench__DOT__str_inst__DOT__coin01_d = 0U;
        } else {
            vlSelf->testbench__DOT__str_inst__DOT__coin10_d 
                = vlSelf->testbench__DOT__str_inst__DOT__coin10_q;
            vlSelf->testbench__DOT__str_inst__DOT__coin05_d 
                = vlSelf->testbench__DOT__str_inst__DOT__coin05_q;
            vlSelf->testbench__DOT__str_inst__DOT__coin02_d 
                = vlSelf->testbench__DOT__str_inst__DOT__coin02_q;
            vlSelf->testbench__DOT__str_inst__DOT__coin01_d 
                = vlSelf->testbench__DOT__str_inst__DOT__coin01_q;
        }
        vlSelf->testbench__DOT__str_inst__DOT__resto_d 
            = (0x3fU & ((IData)(vlSelf->testbench__DOT__str_inst__DOT__do_err)
                         ? (((IData)(vlSelf->testbench__DOT__str_inst__DOT__valid_sel) 
                             & (IData)(vlSelf->testbench__DOT__str_inst__DOT__credito_insuff))
                             ? (IData)(vlSelf->testbench__DOT__str_inst__DOT__sel_price)
                             : 0U) : ((IData)(vlSelf->testbench__DOT__str_inst__DOT__clear_outputs)
                                       ? 0U : (IData)(vlSelf->testbench__DOT__str_inst__DOT__resto_q))));
    }
}

VL_ATTR_COLD void Vtestbench___024root___eval_stl(Vtestbench___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vtestbench___024root___stl_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[6U] = 1U;
        vlSelf->__Vm_traceActivity[5U] = 1U;
        vlSelf->__Vm_traceActivity[4U] = 1U;
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSelf->__Vm_traceActivity[2U] = 1U;
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->__Vm_traceActivity[0U] = 1U;
    }
}

VL_ATTR_COLD void Vtestbench___024root___eval_triggers__stl(Vtestbench___024root* vlSelf);

VL_ATTR_COLD bool Vtestbench___024root___eval_phase__stl(Vtestbench___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___eval_phase__stl\n"); );
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vtestbench___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelf->__VstlTriggered.any();
    if (__VstlExecute) {
        Vtestbench___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtestbench___024root___dump_triggers__act(Vtestbench___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge testbench.clk or negedge testbench.rst)\n");
    }
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
    if ((4ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @(posedge testbench.clk)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtestbench___024root___dump_triggers__nba(Vtestbench___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge testbench.clk or negedge testbench.rst)\n");
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
    if ((4ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @(posedge testbench.clk)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtestbench___024root___ctor_var_reset(Vtestbench___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->testbench__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->testbench__DOT__rst = VL_RAND_RESET_I(1);
    vlSelf->testbench__DOT__coin = VL_RAND_RESET_I(3);
    vlSelf->testbench__DOT__selezione = VL_RAND_RESET_I(3);
    vlSelf->testbench__DOT__conferma = VL_RAND_RESET_I(1);
    vlSelf->testbench__DOT__annulla = VL_RAND_RESET_I(1);
    vlSelf->testbench__DOT__mismatch_count = VL_RAND_RESET_I(32);
    vlSelf->testbench__DOT__credito_b = VL_RAND_RESET_I(6);
    vlSelf->testbench__DOT__p1_b = VL_RAND_RESET_I(1);
    vlSelf->testbench__DOT__p2_b = VL_RAND_RESET_I(1);
    vlSelf->testbench__DOT__p3_b = VL_RAND_RESET_I(1);
    vlSelf->testbench__DOT__p4_b = VL_RAND_RESET_I(1);
    vlSelf->testbench__DOT__errore_b = VL_RAND_RESET_I(2);
    vlSelf->testbench__DOT__resto_b = VL_RAND_RESET_I(6);
    vlSelf->testbench__DOT__disp_b = VL_RAND_RESET_I(10);
    vlSelf->testbench__DOT__c01_b = VL_RAND_RESET_I(6);
    vlSelf->testbench__DOT__c02_b = VL_RAND_RESET_I(6);
    vlSelf->testbench__DOT__c05_b = VL_RAND_RESET_I(6);
    vlSelf->testbench__DOT__c10_b = VL_RAND_RESET_I(6);
    vlSelf->testbench__DOT__report_fd = 0;
    VL_RAND_RESET_W(1024, vlSelf->testbench__DOT__current_test_name);
    vlSelf->testbench__DOT__last_coin = VL_RAND_RESET_I(3);
    vlSelf->testbench__DOT__last_selezione = VL_RAND_RESET_I(3);
    vlSelf->testbench__DOT__last_conferma = VL_RAND_RESET_I(1);
    vlSelf->testbench__DOT__last_annulla = VL_RAND_RESET_I(1);
    vlSelf->testbench__DOT__beh_inst__DOT__stato = VL_RAND_RESET_I(2);
    vlSelf->testbench__DOT__beh_inst__DOT__init_counter = VL_RAND_RESET_I(4);
    vlSelf->testbench__DOT__beh_inst__DOT__qty_p1 = VL_RAND_RESET_I(6);
    vlSelf->testbench__DOT__beh_inst__DOT__qty_p2 = VL_RAND_RESET_I(6);
    vlSelf->testbench__DOT__beh_inst__DOT__qty_p3 = VL_RAND_RESET_I(6);
    vlSelf->testbench__DOT__beh_inst__DOT__qty_p4 = VL_RAND_RESET_I(6);
    vlSelf->testbench__DOT__beh_inst__DOT__price_p1 = VL_RAND_RESET_I(6);
    vlSelf->testbench__DOT__beh_inst__DOT__price_p2 = VL_RAND_RESET_I(6);
    vlSelf->testbench__DOT__beh_inst__DOT__price_p3 = VL_RAND_RESET_I(6);
    vlSelf->testbench__DOT__beh_inst__DOT__price_p4 = VL_RAND_RESET_I(6);
    vlSelf->testbench__DOT__beh_inst__DOT__qty_c01 = VL_RAND_RESET_I(6);
    vlSelf->testbench__DOT__beh_inst__DOT__qty_c02 = VL_RAND_RESET_I(6);
    vlSelf->testbench__DOT__beh_inst__DOT__qty_c05 = VL_RAND_RESET_I(6);
    vlSelf->testbench__DOT__beh_inst__DOT__qty_c10 = VL_RAND_RESET_I(6);
    vlSelf->testbench__DOT__beh_inst__DOT__current_price = VL_RAND_RESET_I(6);
    vlSelf->testbench__DOT__beh_inst__DOT__greedy_out_01 = VL_RAND_RESET_I(6);
    vlSelf->testbench__DOT__beh_inst__DOT__greedy_out_02 = VL_RAND_RESET_I(6);
    vlSelf->testbench__DOT__beh_inst__DOT__greedy_out_05 = VL_RAND_RESET_I(6);
    vlSelf->testbench__DOT__beh_inst__DOT__greedy_out_10 = VL_RAND_RESET_I(6);
    vlSelf->testbench__DOT__beh_inst__DOT__greedy_next_01 = VL_RAND_RESET_I(6);
    vlSelf->testbench__DOT__beh_inst__DOT__greedy_next_02 = VL_RAND_RESET_I(6);
    vlSelf->testbench__DOT__beh_inst__DOT__greedy_next_05 = VL_RAND_RESET_I(6);
    vlSelf->testbench__DOT__beh_inst__DOT__greedy_next_10 = VL_RAND_RESET_I(6);
    vlSelf->testbench__DOT__beh_inst__DOT__greedy_returned = VL_RAND_RESET_I(6);
    vlSelf->testbench__DOT__beh_inst__DOT__init_value = VL_RAND_RESET_I(10);
    vlSelf->testbench__DOT__beh_inst__DOT__greedy_return__Vstatic__remain = VL_RAND_RESET_I(6);
    vlSelf->testbench__DOT__beh_inst__DOT__greedy_return__Vstatic__take = VL_RAND_RESET_I(6);
    vlSelf->testbench__DOT__str_inst__DOT__mode_init = VL_RAND_RESET_I(1);
    vlSelf->testbench__DOT__str_inst__DOT__init_counter_w = VL_RAND_RESET_I(4);
    vlSelf->testbench__DOT__str_inst__DOT__clear_outputs = VL_RAND_RESET_I(1);
    vlSelf->testbench__DOT__str_inst__DOT__do_add_coin = VL_RAND_RESET_I(1);
    vlSelf->testbench__DOT__str_inst__DOT__do_cancel = VL_RAND_RESET_I(1);
    vlSelf->testbench__DOT__str_inst__DOT__do_err = VL_RAND_RESET_I(1);
    vlSelf->testbench__DOT__str_inst__DOT__do_ok = VL_RAND_RESET_I(1);
    vlSelf->testbench__DOT__str_inst__DOT__do_erogazione = VL_RAND_RESET_I(1);
    vlSelf->testbench__DOT__str_inst__DOT__sel_latched = VL_RAND_RESET_I(3);
    vlSelf->testbench__DOT__str_inst__DOT__c_prod1 = VL_RAND_RESET_I(1);
    vlSelf->testbench__DOT__str_inst__DOT__c_prod2 = VL_RAND_RESET_I(1);
    vlSelf->testbench__DOT__str_inst__DOT__c_prod3 = VL_RAND_RESET_I(1);
    vlSelf->testbench__DOT__str_inst__DOT__c_prod4 = VL_RAND_RESET_I(1);
    vlSelf->testbench__DOT__str_inst__DOT__qty_p1_q = VL_RAND_RESET_I(6);
    vlSelf->testbench__DOT__str_inst__DOT__qty_p2_q = VL_RAND_RESET_I(6);
    vlSelf->testbench__DOT__str_inst__DOT__qty_p3_q = VL_RAND_RESET_I(6);
    vlSelf->testbench__DOT__str_inst__DOT__qty_p4_q = VL_RAND_RESET_I(6);
    vlSelf->testbench__DOT__str_inst__DOT__price_p1_q = VL_RAND_RESET_I(6);
    vlSelf->testbench__DOT__str_inst__DOT__price_p2_q = VL_RAND_RESET_I(6);
    vlSelf->testbench__DOT__str_inst__DOT__price_p3_q = VL_RAND_RESET_I(6);
    vlSelf->testbench__DOT__str_inst__DOT__price_p4_q = VL_RAND_RESET_I(6);
    vlSelf->testbench__DOT__str_inst__DOT__qty_c01_q = VL_RAND_RESET_I(6);
    vlSelf->testbench__DOT__str_inst__DOT__qty_c02_q = VL_RAND_RESET_I(6);
    vlSelf->testbench__DOT__str_inst__DOT__qty_c05_q = VL_RAND_RESET_I(6);
    vlSelf->testbench__DOT__str_inst__DOT__qty_c10_q = VL_RAND_RESET_I(6);
    vlSelf->testbench__DOT__str_inst__DOT__current_price_q = VL_RAND_RESET_I(6);
    vlSelf->testbench__DOT__str_inst__DOT__credito_q = VL_RAND_RESET_I(6);
    vlSelf->testbench__DOT__str_inst__DOT__disponibile_q = VL_RAND_RESET_I(10);
    vlSelf->testbench__DOT__str_inst__DOT__errore_q = VL_RAND_RESET_I(2);
    vlSelf->testbench__DOT__str_inst__DOT__resto_q = VL_RAND_RESET_I(6);
    vlSelf->testbench__DOT__str_inst__DOT__prod1_q = VL_RAND_RESET_I(1);
    vlSelf->testbench__DOT__str_inst__DOT__prod2_q = VL_RAND_RESET_I(1);
    vlSelf->testbench__DOT__str_inst__DOT__prod3_q = VL_RAND_RESET_I(1);
    vlSelf->testbench__DOT__str_inst__DOT__prod4_q = VL_RAND_RESET_I(1);
    vlSelf->testbench__DOT__str_inst__DOT__coin01_q = VL_RAND_RESET_I(6);
    vlSelf->testbench__DOT__str_inst__DOT__coin02_q = VL_RAND_RESET_I(6);
    vlSelf->testbench__DOT__str_inst__DOT__coin05_q = VL_RAND_RESET_I(6);
    vlSelf->testbench__DOT__str_inst__DOT__coin10_q = VL_RAND_RESET_I(6);
    vlSelf->testbench__DOT__str_inst__DOT__valid_sel = VL_RAND_RESET_I(1);
    vlSelf->testbench__DOT__str_inst__DOT__sel_price = VL_RAND_RESET_I(6);
    vlSelf->testbench__DOT__str_inst__DOT__credito_ge_selprice = VL_RAND_RESET_I(1);
    vlSelf->testbench__DOT__str_inst__DOT__credito_insuff = VL_RAND_RESET_I(1);
    vlSelf->testbench__DOT__str_inst__DOT__stock_empty = VL_RAND_RESET_I(1);
    vlSelf->testbench__DOT__str_inst__DOT__payout_active = VL_RAND_RESET_I(1);
    vlSelf->testbench__DOT__str_inst__DOT__c10_calc = VL_RAND_RESET_I(6);
    vlSelf->testbench__DOT__str_inst__DOT__c05_calc = VL_RAND_RESET_I(6);
    vlSelf->testbench__DOT__str_inst__DOT__c02_calc = VL_RAND_RESET_I(6);
    vlSelf->testbench__DOT__str_inst__DOT__c01_calc = VL_RAND_RESET_I(6);
    vlSelf->testbench__DOT__str_inst__DOT__qc10_next = VL_RAND_RESET_I(6);
    vlSelf->testbench__DOT__str_inst__DOT__qc05_next = VL_RAND_RESET_I(6);
    vlSelf->testbench__DOT__str_inst__DOT__qc02_next = VL_RAND_RESET_I(6);
    vlSelf->testbench__DOT__str_inst__DOT__qc01_next = VL_RAND_RESET_I(6);
    vlSelf->testbench__DOT__str_inst__DOT__payout_returned = VL_RAND_RESET_I(10);
    vlSelf->testbench__DOT__str_inst__DOT__coin_value = VL_RAND_RESET_I(6);
    vlSelf->testbench__DOT__str_inst__DOT__cfg_value = VL_RAND_RESET_I(6);
    vlSelf->testbench__DOT__str_inst__DOT__init_qty_p1 = VL_RAND_RESET_I(1);
    vlSelf->testbench__DOT__str_inst__DOT__init_price_p1 = VL_RAND_RESET_I(1);
    vlSelf->testbench__DOT__str_inst__DOT__init_qty_p2 = VL_RAND_RESET_I(1);
    vlSelf->testbench__DOT__str_inst__DOT__init_price_p2 = VL_RAND_RESET_I(1);
    vlSelf->testbench__DOT__str_inst__DOT__init_qty_p3 = VL_RAND_RESET_I(1);
    vlSelf->testbench__DOT__str_inst__DOT__init_price_p3 = VL_RAND_RESET_I(1);
    vlSelf->testbench__DOT__str_inst__DOT__init_qty_p4 = VL_RAND_RESET_I(1);
    vlSelf->testbench__DOT__str_inst__DOT__init_price_p4 = VL_RAND_RESET_I(1);
    vlSelf->testbench__DOT__str_inst__DOT__init_c01 = VL_RAND_RESET_I(1);
    vlSelf->testbench__DOT__str_inst__DOT__init_c02 = VL_RAND_RESET_I(1);
    vlSelf->testbench__DOT__str_inst__DOT__init_c05 = VL_RAND_RESET_I(1);
    vlSelf->testbench__DOT__str_inst__DOT__init_c10 = VL_RAND_RESET_I(1);
    vlSelf->testbench__DOT__str_inst__DOT__do_p1 = VL_RAND_RESET_I(1);
    vlSelf->testbench__DOT__str_inst__DOT__do_p2 = VL_RAND_RESET_I(1);
    vlSelf->testbench__DOT__str_inst__DOT__do_p3 = VL_RAND_RESET_I(1);
    vlSelf->testbench__DOT__str_inst__DOT__do_p4 = VL_RAND_RESET_I(1);
    vlSelf->testbench__DOT__str_inst__DOT__add_c01 = VL_RAND_RESET_I(1);
    vlSelf->testbench__DOT__str_inst__DOT__add_c02 = VL_RAND_RESET_I(1);
    vlSelf->testbench__DOT__str_inst__DOT__add_c05 = VL_RAND_RESET_I(1);
    vlSelf->testbench__DOT__str_inst__DOT__add_c10 = VL_RAND_RESET_I(1);
    vlSelf->testbench__DOT__str_inst__DOT__qty_p1_d = VL_RAND_RESET_I(6);
    vlSelf->testbench__DOT__str_inst__DOT__qty_p2_d = VL_RAND_RESET_I(6);
    vlSelf->testbench__DOT__str_inst__DOT__qty_p3_d = VL_RAND_RESET_I(6);
    vlSelf->testbench__DOT__str_inst__DOT__qty_p4_d = VL_RAND_RESET_I(6);
    vlSelf->testbench__DOT__str_inst__DOT__price_p1_d = VL_RAND_RESET_I(6);
    vlSelf->testbench__DOT__str_inst__DOT__price_p2_d = VL_RAND_RESET_I(6);
    vlSelf->testbench__DOT__str_inst__DOT__price_p3_d = VL_RAND_RESET_I(6);
    vlSelf->testbench__DOT__str_inst__DOT__price_p4_d = VL_RAND_RESET_I(6);
    vlSelf->testbench__DOT__str_inst__DOT__qty_c01_d = VL_RAND_RESET_I(6);
    vlSelf->testbench__DOT__str_inst__DOT__qty_c02_d = VL_RAND_RESET_I(6);
    vlSelf->testbench__DOT__str_inst__DOT__qty_c05_d = VL_RAND_RESET_I(6);
    vlSelf->testbench__DOT__str_inst__DOT__qty_c10_d = VL_RAND_RESET_I(6);
    vlSelf->testbench__DOT__str_inst__DOT__current_price_d = VL_RAND_RESET_I(6);
    vlSelf->testbench__DOT__str_inst__DOT__credito_d = VL_RAND_RESET_I(6);
    vlSelf->testbench__DOT__str_inst__DOT__disponibile_d = VL_RAND_RESET_I(10);
    vlSelf->testbench__DOT__str_inst__DOT__errore_d = VL_RAND_RESET_I(2);
    vlSelf->testbench__DOT__str_inst__DOT__resto_d = VL_RAND_RESET_I(6);
    vlSelf->testbench__DOT__str_inst__DOT__prod1_d = VL_RAND_RESET_I(1);
    vlSelf->testbench__DOT__str_inst__DOT__prod2_d = VL_RAND_RESET_I(1);
    vlSelf->testbench__DOT__str_inst__DOT__prod3_d = VL_RAND_RESET_I(1);
    vlSelf->testbench__DOT__str_inst__DOT__prod4_d = VL_RAND_RESET_I(1);
    vlSelf->testbench__DOT__str_inst__DOT__coin01_d = VL_RAND_RESET_I(6);
    vlSelf->testbench__DOT__str_inst__DOT__coin02_d = VL_RAND_RESET_I(6);
    vlSelf->testbench__DOT__str_inst__DOT__coin05_d = VL_RAND_RESET_I(6);
    vlSelf->testbench__DOT__str_inst__DOT__coin10_d = VL_RAND_RESET_I(6);
    vlSelf->testbench__DOT__str_inst__DOT__we_errore = VL_RAND_RESET_I(1);
    vlSelf->testbench__DOT__str_inst__DOT__we_prod = VL_RAND_RESET_I(1);
    vlSelf->testbench__DOT__str_inst__DOT__we_coin_out = VL_RAND_RESET_I(1);
    vlSelf->testbench__DOT__str_inst__DOT____VdfgTmp_h4b786e47__0 = 0;
    vlSelf->testbench__DOT__str_inst__DOT__fsm__DOT__stato = VL_RAND_RESET_I(2);
    vlSelf->testbench__DOT__str_inst__DOT__fsm__DOT__next_stato = VL_RAND_RESET_I(2);
    vlSelf->testbench__DOT__str_inst__DOT__greedy_inst__DOT__calc_resto = VL_RAND_RESET_I(6);
    vlSelf->testbench__DOT__str_inst__DOT__greedy_inst__DOT__calc_qty = VL_RAND_RESET_I(6);
    vlSelf->__Vtask_testbench__DOT__check_equal_and_expected__520__exp_credit = VL_RAND_RESET_I(6);
    vlSelf->__Vtask_testbench__DOT__check_equal_and_expected__520__exp_p1 = VL_RAND_RESET_I(1);
    vlSelf->__Vtask_testbench__DOT__check_equal_and_expected__520__exp_p2 = VL_RAND_RESET_I(1);
    vlSelf->__Vtask_testbench__DOT__check_equal_and_expected__520__exp_p3 = VL_RAND_RESET_I(1);
    vlSelf->__Vtask_testbench__DOT__check_equal_and_expected__520__exp_p4 = VL_RAND_RESET_I(1);
    vlSelf->__Vtask_testbench__DOT__check_equal_and_expected__520__exp_err = VL_RAND_RESET_I(2);
    vlSelf->__Vtask_testbench__DOT__check_equal_and_expected__520__exp_resto = VL_RAND_RESET_I(6);
    vlSelf->__Vtask_testbench__DOT__check_equal_and_expected__520__exp_disp = VL_RAND_RESET_I(10);
    vlSelf->__Vtask_testbench__DOT__check_equal_and_expected__520__exp_c01 = VL_RAND_RESET_I(6);
    vlSelf->__Vtask_testbench__DOT__check_equal_and_expected__520__exp_c02 = VL_RAND_RESET_I(6);
    vlSelf->__Vtask_testbench__DOT__check_equal_and_expected__520__exp_c05 = VL_RAND_RESET_I(6);
    vlSelf->__Vtask_testbench__DOT__check_equal_and_expected__520__exp_c10 = VL_RAND_RESET_I(6);
    vlSelf->__Vtrigprevexpr___TOP__testbench__DOT__clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__testbench__DOT__rst__0 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 7; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
