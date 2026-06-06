// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtestbench.h for the primary calling header

#include "Vtestbench__pch.h"
#include "Vtestbench___024root.h"

VlCoroutine Vtestbench___024root___eval_initial__TOP__Vtiming__0(Vtestbench___024root* vlSelf);
VlCoroutine Vtestbench___024root___eval_initial__TOP__Vtiming__1(Vtestbench___024root* vlSelf);

void Vtestbench___024root___eval_initial(Vtestbench___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___eval_initial\n"); );
    // Body
    Vtestbench___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vtestbench___024root___eval_initial__TOP__Vtiming__1(vlSelf);
    vlSelf->__Vtrigprevexpr___TOP__testbench__DOT__clk__0 
        = vlSelf->testbench__DOT__clk;
    vlSelf->__Vtrigprevexpr___TOP__testbench__DOT__rst__0 
        = vlSelf->testbench__DOT__rst;
}

VlCoroutine Vtestbench___024root___eval_initial__TOP__Vtiming__0__0(Vtestbench___024root* vlSelf);
VlCoroutine Vtestbench___024root___eval_initial__TOP__Vtiming__0__1(Vtestbench___024root* vlSelf);

VL_INLINE_OPT VlCoroutine Vtestbench___024root___eval_initial__TOP__Vtiming__0(Vtestbench___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___eval_initial__TOP__Vtiming__0\n"); );
    // Body
    co_await Vtestbench___024root___eval_initial__TOP__Vtiming__0__0(vlSelf);
    co_await Vtestbench___024root___eval_initial__TOP__Vtiming__0__1(vlSelf);
}

VL_INLINE_OPT VlCoroutine Vtestbench___024root___eval_initial__TOP__Vtiming__1(Vtestbench___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___eval_initial__TOP__Vtiming__1\n"); );
    // Body
    while (1U) {
        co_await vlSelf->__VdlySched.delay(0x1388ULL, 
                                           nullptr, 
                                           "testbench.v", 
                                           46);
        vlSelf->testbench__DOT__clk = (1U & (~ (IData)(vlSelf->testbench__DOT__clk)));
    }
}

extern const VlUnpacked<CData/*5:0*/, 8> Vtestbench__ConstPool__TABLE_h98991338_0;

VL_INLINE_OPT void Vtestbench___024root___act_comb__TOP__0(Vtestbench___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___act_comb__TOP__0\n"); );
    // Init
    CData/*2:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    // Body
    __Vtableidx1 = vlSelf->testbench__DOT__coin;
    vlSelf->testbench__DOT__str_inst__DOT__coin_value 
        = Vtestbench__ConstPool__TABLE_h98991338_0[__Vtableidx1];
    vlSelf->testbench__DOT__str_inst__DOT__do_add_coin = 0U;
    vlSelf->testbench__DOT__str_inst__DOT__cfg_value 
        = (((IData)(vlSelf->testbench__DOT__coin) << 3U) 
           | (IData)(vlSelf->testbench__DOT__selezione));
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
        vlSelf->testbench__DOT__str_inst__DOT__fsm__DOT__next_stato 
            = ((1U & (IData)(vlSelf->testbench__DOT__str_inst__DOT__fsm__DOT__stato))
                ? 1U : ((IData)(vlSelf->testbench__DOT__annulla)
                         ? 1U : ((0U != (IData)(vlSelf->testbench__DOT__coin))
                                  ? 2U : ((IData)(vlSelf->testbench__DOT__conferma)
                                           ? ((IData)(vlSelf->testbench__DOT__str_inst__DOT__valid_sel)
                                               ? (((IData)(vlSelf->testbench__DOT__str_inst__DOT__credito_ge_selprice) 
                                                   & (~ (IData)(vlSelf->testbench__DOT__str_inst__DOT__stock_empty)))
                                                   ? 3U
                                                   : 1U)
                                               : 1U)
                                           : 2U))));
    } else if ((1U & (IData)(vlSelf->testbench__DOT__str_inst__DOT__fsm__DOT__stato))) {
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

void Vtestbench___024root___eval_act(Vtestbench___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___eval_act\n"); );
    // Body
    if ((6ULL & vlSelf->__VactTriggered.word(0U))) {
        Vtestbench___024root___act_comb__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[3U] = 1U;
    }
}

VL_INLINE_OPT void Vtestbench___024root___nba_sequent__TOP__0(Vtestbench___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___nba_sequent__TOP__0\n"); );
    // Init
    CData/*5:0*/ __Vtask_testbench__DOT__beh_inst__DOT__greedy_return__1020__amount;
    __Vtask_testbench__DOT__beh_inst__DOT__greedy_return__1020__amount = 0;
    CData/*5:0*/ __Vtask_testbench__DOT__beh_inst__DOT__greedy_return__1020__out10;
    __Vtask_testbench__DOT__beh_inst__DOT__greedy_return__1020__out10 = 0;
    CData/*5:0*/ __Vtask_testbench__DOT__beh_inst__DOT__greedy_return__1020__out05;
    __Vtask_testbench__DOT__beh_inst__DOT__greedy_return__1020__out05 = 0;
    CData/*5:0*/ __Vtask_testbench__DOT__beh_inst__DOT__greedy_return__1020__out02;
    __Vtask_testbench__DOT__beh_inst__DOT__greedy_return__1020__out02 = 0;
    CData/*5:0*/ __Vtask_testbench__DOT__beh_inst__DOT__greedy_return__1020__out01;
    __Vtask_testbench__DOT__beh_inst__DOT__greedy_return__1020__out01 = 0;
    CData/*5:0*/ __Vtask_testbench__DOT__beh_inst__DOT__greedy_return__1020__next10;
    __Vtask_testbench__DOT__beh_inst__DOT__greedy_return__1020__next10 = 0;
    CData/*5:0*/ __Vtask_testbench__DOT__beh_inst__DOT__greedy_return__1020__next05;
    __Vtask_testbench__DOT__beh_inst__DOT__greedy_return__1020__next05 = 0;
    CData/*5:0*/ __Vtask_testbench__DOT__beh_inst__DOT__greedy_return__1020__next02;
    __Vtask_testbench__DOT__beh_inst__DOT__greedy_return__1020__next02 = 0;
    CData/*5:0*/ __Vtask_testbench__DOT__beh_inst__DOT__greedy_return__1020__next01;
    __Vtask_testbench__DOT__beh_inst__DOT__greedy_return__1020__next01 = 0;
    CData/*5:0*/ __Vtask_testbench__DOT__beh_inst__DOT__greedy_return__1020__returned;
    __Vtask_testbench__DOT__beh_inst__DOT__greedy_return__1020__returned = 0;
    CData/*5:0*/ __Vfunc_testbench__DOT__beh_inst__DOT__coin_value__1021__Vfuncout;
    __Vfunc_testbench__DOT__beh_inst__DOT__coin_value__1021__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_testbench__DOT__beh_inst__DOT__coin_value__1021__code;
    __Vfunc_testbench__DOT__beh_inst__DOT__coin_value__1021__code = 0;
    CData/*5:0*/ __Vfunc_testbench__DOT__beh_inst__DOT__coin_value__1022__Vfuncout;
    __Vfunc_testbench__DOT__beh_inst__DOT__coin_value__1022__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_testbench__DOT__beh_inst__DOT__coin_value__1022__code;
    __Vfunc_testbench__DOT__beh_inst__DOT__coin_value__1022__code = 0;
    CData/*5:0*/ __Vfunc_testbench__DOT__beh_inst__DOT__coin_value__1023__Vfuncout;
    __Vfunc_testbench__DOT__beh_inst__DOT__coin_value__1023__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_testbench__DOT__beh_inst__DOT__coin_value__1023__code;
    __Vfunc_testbench__DOT__beh_inst__DOT__coin_value__1023__code = 0;
    CData/*5:0*/ __Vtask_testbench__DOT__beh_inst__DOT__greedy_return__1024__amount;
    __Vtask_testbench__DOT__beh_inst__DOT__greedy_return__1024__amount = 0;
    CData/*5:0*/ __Vtask_testbench__DOT__beh_inst__DOT__greedy_return__1024__out10;
    __Vtask_testbench__DOT__beh_inst__DOT__greedy_return__1024__out10 = 0;
    CData/*5:0*/ __Vtask_testbench__DOT__beh_inst__DOT__greedy_return__1024__out05;
    __Vtask_testbench__DOT__beh_inst__DOT__greedy_return__1024__out05 = 0;
    CData/*5:0*/ __Vtask_testbench__DOT__beh_inst__DOT__greedy_return__1024__out02;
    __Vtask_testbench__DOT__beh_inst__DOT__greedy_return__1024__out02 = 0;
    CData/*5:0*/ __Vtask_testbench__DOT__beh_inst__DOT__greedy_return__1024__out01;
    __Vtask_testbench__DOT__beh_inst__DOT__greedy_return__1024__out01 = 0;
    CData/*5:0*/ __Vtask_testbench__DOT__beh_inst__DOT__greedy_return__1024__next10;
    __Vtask_testbench__DOT__beh_inst__DOT__greedy_return__1024__next10 = 0;
    CData/*5:0*/ __Vtask_testbench__DOT__beh_inst__DOT__greedy_return__1024__next05;
    __Vtask_testbench__DOT__beh_inst__DOT__greedy_return__1024__next05 = 0;
    CData/*5:0*/ __Vtask_testbench__DOT__beh_inst__DOT__greedy_return__1024__next02;
    __Vtask_testbench__DOT__beh_inst__DOT__greedy_return__1024__next02 = 0;
    CData/*5:0*/ __Vtask_testbench__DOT__beh_inst__DOT__greedy_return__1024__next01;
    __Vtask_testbench__DOT__beh_inst__DOT__greedy_return__1024__next01 = 0;
    CData/*5:0*/ __Vtask_testbench__DOT__beh_inst__DOT__greedy_return__1024__returned;
    __Vtask_testbench__DOT__beh_inst__DOT__greedy_return__1024__returned = 0;
    CData/*5:0*/ __Vtask_testbench__DOT__beh_inst__DOT__greedy_return__1025__amount;
    __Vtask_testbench__DOT__beh_inst__DOT__greedy_return__1025__amount = 0;
    CData/*5:0*/ __Vtask_testbench__DOT__beh_inst__DOT__greedy_return__1025__out10;
    __Vtask_testbench__DOT__beh_inst__DOT__greedy_return__1025__out10 = 0;
    CData/*5:0*/ __Vtask_testbench__DOT__beh_inst__DOT__greedy_return__1025__out05;
    __Vtask_testbench__DOT__beh_inst__DOT__greedy_return__1025__out05 = 0;
    CData/*5:0*/ __Vtask_testbench__DOT__beh_inst__DOT__greedy_return__1025__out02;
    __Vtask_testbench__DOT__beh_inst__DOT__greedy_return__1025__out02 = 0;
    CData/*5:0*/ __Vtask_testbench__DOT__beh_inst__DOT__greedy_return__1025__out01;
    __Vtask_testbench__DOT__beh_inst__DOT__greedy_return__1025__out01 = 0;
    CData/*5:0*/ __Vtask_testbench__DOT__beh_inst__DOT__greedy_return__1025__next10;
    __Vtask_testbench__DOT__beh_inst__DOT__greedy_return__1025__next10 = 0;
    CData/*5:0*/ __Vtask_testbench__DOT__beh_inst__DOT__greedy_return__1025__next05;
    __Vtask_testbench__DOT__beh_inst__DOT__greedy_return__1025__next05 = 0;
    CData/*5:0*/ __Vtask_testbench__DOT__beh_inst__DOT__greedy_return__1025__next02;
    __Vtask_testbench__DOT__beh_inst__DOT__greedy_return__1025__next02 = 0;
    CData/*5:0*/ __Vtask_testbench__DOT__beh_inst__DOT__greedy_return__1025__next01;
    __Vtask_testbench__DOT__beh_inst__DOT__greedy_return__1025__next01 = 0;
    CData/*5:0*/ __Vtask_testbench__DOT__beh_inst__DOT__greedy_return__1025__returned;
    __Vtask_testbench__DOT__beh_inst__DOT__greedy_return__1025__returned = 0;
    CData/*5:0*/ __Vtask_testbench__DOT__beh_inst__DOT__greedy_return__1026__amount;
    __Vtask_testbench__DOT__beh_inst__DOT__greedy_return__1026__amount = 0;
    CData/*5:0*/ __Vtask_testbench__DOT__beh_inst__DOT__greedy_return__1026__out10;
    __Vtask_testbench__DOT__beh_inst__DOT__greedy_return__1026__out10 = 0;
    CData/*5:0*/ __Vtask_testbench__DOT__beh_inst__DOT__greedy_return__1026__out05;
    __Vtask_testbench__DOT__beh_inst__DOT__greedy_return__1026__out05 = 0;
    CData/*5:0*/ __Vtask_testbench__DOT__beh_inst__DOT__greedy_return__1026__out02;
    __Vtask_testbench__DOT__beh_inst__DOT__greedy_return__1026__out02 = 0;
    CData/*5:0*/ __Vtask_testbench__DOT__beh_inst__DOT__greedy_return__1026__out01;
    __Vtask_testbench__DOT__beh_inst__DOT__greedy_return__1026__out01 = 0;
    CData/*5:0*/ __Vtask_testbench__DOT__beh_inst__DOT__greedy_return__1026__next10;
    __Vtask_testbench__DOT__beh_inst__DOT__greedy_return__1026__next10 = 0;
    CData/*5:0*/ __Vtask_testbench__DOT__beh_inst__DOT__greedy_return__1026__next05;
    __Vtask_testbench__DOT__beh_inst__DOT__greedy_return__1026__next05 = 0;
    CData/*5:0*/ __Vtask_testbench__DOT__beh_inst__DOT__greedy_return__1026__next02;
    __Vtask_testbench__DOT__beh_inst__DOT__greedy_return__1026__next02 = 0;
    CData/*5:0*/ __Vtask_testbench__DOT__beh_inst__DOT__greedy_return__1026__next01;
    __Vtask_testbench__DOT__beh_inst__DOT__greedy_return__1026__next01 = 0;
    CData/*5:0*/ __Vtask_testbench__DOT__beh_inst__DOT__greedy_return__1026__returned;
    __Vtask_testbench__DOT__beh_inst__DOT__greedy_return__1026__returned = 0;
    CData/*5:0*/ __Vtask_testbench__DOT__beh_inst__DOT__greedy_return__1027__amount;
    __Vtask_testbench__DOT__beh_inst__DOT__greedy_return__1027__amount = 0;
    CData/*5:0*/ __Vtask_testbench__DOT__beh_inst__DOT__greedy_return__1027__out10;
    __Vtask_testbench__DOT__beh_inst__DOT__greedy_return__1027__out10 = 0;
    CData/*5:0*/ __Vtask_testbench__DOT__beh_inst__DOT__greedy_return__1027__out05;
    __Vtask_testbench__DOT__beh_inst__DOT__greedy_return__1027__out05 = 0;
    CData/*5:0*/ __Vtask_testbench__DOT__beh_inst__DOT__greedy_return__1027__out02;
    __Vtask_testbench__DOT__beh_inst__DOT__greedy_return__1027__out02 = 0;
    CData/*5:0*/ __Vtask_testbench__DOT__beh_inst__DOT__greedy_return__1027__out01;
    __Vtask_testbench__DOT__beh_inst__DOT__greedy_return__1027__out01 = 0;
    CData/*5:0*/ __Vtask_testbench__DOT__beh_inst__DOT__greedy_return__1027__next10;
    __Vtask_testbench__DOT__beh_inst__DOT__greedy_return__1027__next10 = 0;
    CData/*5:0*/ __Vtask_testbench__DOT__beh_inst__DOT__greedy_return__1027__next05;
    __Vtask_testbench__DOT__beh_inst__DOT__greedy_return__1027__next05 = 0;
    CData/*5:0*/ __Vtask_testbench__DOT__beh_inst__DOT__greedy_return__1027__next02;
    __Vtask_testbench__DOT__beh_inst__DOT__greedy_return__1027__next02 = 0;
    CData/*5:0*/ __Vtask_testbench__DOT__beh_inst__DOT__greedy_return__1027__next01;
    __Vtask_testbench__DOT__beh_inst__DOT__greedy_return__1027__next01 = 0;
    CData/*5:0*/ __Vtask_testbench__DOT__beh_inst__DOT__greedy_return__1027__returned;
    __Vtask_testbench__DOT__beh_inst__DOT__greedy_return__1027__returned = 0;
    CData/*5:0*/ __Vtask_testbench__DOT__beh_inst__DOT__greedy_return__1028__amount;
    __Vtask_testbench__DOT__beh_inst__DOT__greedy_return__1028__amount = 0;
    CData/*5:0*/ __Vtask_testbench__DOT__beh_inst__DOT__greedy_return__1028__out10;
    __Vtask_testbench__DOT__beh_inst__DOT__greedy_return__1028__out10 = 0;
    CData/*5:0*/ __Vtask_testbench__DOT__beh_inst__DOT__greedy_return__1028__out05;
    __Vtask_testbench__DOT__beh_inst__DOT__greedy_return__1028__out05 = 0;
    CData/*5:0*/ __Vtask_testbench__DOT__beh_inst__DOT__greedy_return__1028__out02;
    __Vtask_testbench__DOT__beh_inst__DOT__greedy_return__1028__out02 = 0;
    CData/*5:0*/ __Vtask_testbench__DOT__beh_inst__DOT__greedy_return__1028__out01;
    __Vtask_testbench__DOT__beh_inst__DOT__greedy_return__1028__out01 = 0;
    CData/*5:0*/ __Vtask_testbench__DOT__beh_inst__DOT__greedy_return__1028__next10;
    __Vtask_testbench__DOT__beh_inst__DOT__greedy_return__1028__next10 = 0;
    CData/*5:0*/ __Vtask_testbench__DOT__beh_inst__DOT__greedy_return__1028__next05;
    __Vtask_testbench__DOT__beh_inst__DOT__greedy_return__1028__next05 = 0;
    CData/*5:0*/ __Vtask_testbench__DOT__beh_inst__DOT__greedy_return__1028__next02;
    __Vtask_testbench__DOT__beh_inst__DOT__greedy_return__1028__next02 = 0;
    CData/*5:0*/ __Vtask_testbench__DOT__beh_inst__DOT__greedy_return__1028__next01;
    __Vtask_testbench__DOT__beh_inst__DOT__greedy_return__1028__next01 = 0;
    CData/*5:0*/ __Vtask_testbench__DOT__beh_inst__DOT__greedy_return__1028__returned;
    __Vtask_testbench__DOT__beh_inst__DOT__greedy_return__1028__returned = 0;
    CData/*5:0*/ __Vfunc_testbench__DOT__beh_inst__DOT__coin_value__1029__Vfuncout;
    __Vfunc_testbench__DOT__beh_inst__DOT__coin_value__1029__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_testbench__DOT__beh_inst__DOT__coin_value__1029__code;
    __Vfunc_testbench__DOT__beh_inst__DOT__coin_value__1029__code = 0;
    CData/*5:0*/ __Vfunc_testbench__DOT__beh_inst__DOT__coin_value__1030__Vfuncout;
    __Vfunc_testbench__DOT__beh_inst__DOT__coin_value__1030__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_testbench__DOT__beh_inst__DOT__coin_value__1030__code;
    __Vfunc_testbench__DOT__beh_inst__DOT__coin_value__1030__code = 0;
    CData/*5:0*/ __Vfunc_testbench__DOT__beh_inst__DOT__coin_value__1031__Vfuncout;
    __Vfunc_testbench__DOT__beh_inst__DOT__coin_value__1031__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_testbench__DOT__beh_inst__DOT__coin_value__1031__code;
    __Vfunc_testbench__DOT__beh_inst__DOT__coin_value__1031__code = 0;
    CData/*1:0*/ __Vdly__testbench__DOT__beh_inst__DOT__stato;
    __Vdly__testbench__DOT__beh_inst__DOT__stato = 0;
    CData/*5:0*/ __Vdly__testbench__DOT__credito_b;
    __Vdly__testbench__DOT__credito_b = 0;
    CData/*5:0*/ __Vdly__testbench__DOT__beh_inst__DOT__qty_c10;
    __Vdly__testbench__DOT__beh_inst__DOT__qty_c10 = 0;
    CData/*5:0*/ __Vdly__testbench__DOT__beh_inst__DOT__qty_c05;
    __Vdly__testbench__DOT__beh_inst__DOT__qty_c05 = 0;
    CData/*5:0*/ __Vdly__testbench__DOT__beh_inst__DOT__qty_c02;
    __Vdly__testbench__DOT__beh_inst__DOT__qty_c02 = 0;
    CData/*5:0*/ __Vdly__testbench__DOT__beh_inst__DOT__qty_c01;
    __Vdly__testbench__DOT__beh_inst__DOT__qty_c01 = 0;
    SData/*9:0*/ __Vdly__testbench__DOT__disp_b;
    __Vdly__testbench__DOT__disp_b = 0;
    CData/*3:0*/ __Vdly__testbench__DOT__beh_inst__DOT__init_counter;
    __Vdly__testbench__DOT__beh_inst__DOT__init_counter = 0;
    // Body
    __Vdly__testbench__DOT__beh_inst__DOT__init_counter 
        = vlSelf->testbench__DOT__beh_inst__DOT__init_counter;
    __Vdly__testbench__DOT__disp_b = vlSelf->testbench__DOT__disp_b;
    __Vdly__testbench__DOT__beh_inst__DOT__qty_c01 
        = vlSelf->testbench__DOT__beh_inst__DOT__qty_c01;
    __Vdly__testbench__DOT__beh_inst__DOT__qty_c02 
        = vlSelf->testbench__DOT__beh_inst__DOT__qty_c02;
    __Vdly__testbench__DOT__beh_inst__DOT__qty_c05 
        = vlSelf->testbench__DOT__beh_inst__DOT__qty_c05;
    __Vdly__testbench__DOT__beh_inst__DOT__qty_c10 
        = vlSelf->testbench__DOT__beh_inst__DOT__qty_c10;
    __Vdly__testbench__DOT__credito_b = vlSelf->testbench__DOT__credito_b;
    __Vdly__testbench__DOT__beh_inst__DOT__stato = vlSelf->testbench__DOT__beh_inst__DOT__stato;
    if (vlSelf->testbench__DOT__rst) {
        if ((1U & (~ ((IData)(vlSelf->testbench__DOT__beh_inst__DOT__stato) 
                      >> 1U)))) {
            if ((1U & (IData)(vlSelf->testbench__DOT__beh_inst__DOT__stato))) {
                if ((1U & (~ (IData)(vlSelf->testbench__DOT__annulla)))) {
                    if ((0U != ([&]() {
                                    __Vfunc_testbench__DOT__beh_inst__DOT__coin_value__1029__code 
                                        = vlSelf->testbench__DOT__coin;
                                    __Vfunc_testbench__DOT__beh_inst__DOT__coin_value__1029__Vfuncout 
                                        = ((4U & (IData)(__Vfunc_testbench__DOT__beh_inst__DOT__coin_value__1029__code))
                                            ? ((2U 
                                                & (IData)(__Vfunc_testbench__DOT__beh_inst__DOT__coin_value__1029__code))
                                                ? (
                                                   (1U 
                                                    & (IData)(__Vfunc_testbench__DOT__beh_inst__DOT__coin_value__1029__code))
                                                    ? 0xaU
                                                    : 5U)
                                                : (
                                                   (1U 
                                                    & (IData)(__Vfunc_testbench__DOT__beh_inst__DOT__coin_value__1029__code))
                                                    ? 2U
                                                    : 1U))
                                            : 0U);
                                }(), (IData)(__Vfunc_testbench__DOT__beh_inst__DOT__coin_value__1029__Vfuncout)))) {
                    }
                }
            }
        }
    }
    if (vlSelf->testbench__DOT__rst) {
        if ((1U & (~ ((IData)(vlSelf->testbench__DOT__beh_inst__DOT__stato) 
                      >> 1U)))) {
            if ((1U & (IData)(vlSelf->testbench__DOT__beh_inst__DOT__stato))) {
                if ((1U & (~ (IData)(vlSelf->testbench__DOT__annulla)))) {
                    if ((0U != ([&]() {
                                    __Vfunc_testbench__DOT__beh_inst__DOT__coin_value__1029__code 
                                        = vlSelf->testbench__DOT__coin;
                                    __Vfunc_testbench__DOT__beh_inst__DOT__coin_value__1029__Vfuncout 
                                        = ((4U & (IData)(__Vfunc_testbench__DOT__beh_inst__DOT__coin_value__1029__code))
                                            ? ((2U 
                                                & (IData)(__Vfunc_testbench__DOT__beh_inst__DOT__coin_value__1029__code))
                                                ? (
                                                   (1U 
                                                    & (IData)(__Vfunc_testbench__DOT__beh_inst__DOT__coin_value__1029__code))
                                                    ? 0xaU
                                                    : 5U)
                                                : (
                                                   (1U 
                                                    & (IData)(__Vfunc_testbench__DOT__beh_inst__DOT__coin_value__1029__code))
                                                    ? 2U
                                                    : 1U))
                                            : 0U);
                                }(), (IData)(__Vfunc_testbench__DOT__beh_inst__DOT__coin_value__1029__Vfuncout)))) {
                    }
                }
            }
        }
    }
    if (vlSelf->testbench__DOT__rst) {
        if ((1U & (~ ((IData)(vlSelf->testbench__DOT__beh_inst__DOT__stato) 
                      >> 1U)))) {
            if ((1U & (IData)(vlSelf->testbench__DOT__beh_inst__DOT__stato))) {
                if ((1U & (~ (IData)(vlSelf->testbench__DOT__annulla)))) {
                    if ((0U != ([&]() {
                                    __Vfunc_testbench__DOT__beh_inst__DOT__coin_value__1029__code 
                                        = vlSelf->testbench__DOT__coin;
                                    __Vfunc_testbench__DOT__beh_inst__DOT__coin_value__1029__Vfuncout 
                                        = ((4U & (IData)(__Vfunc_testbench__DOT__beh_inst__DOT__coin_value__1029__code))
                                            ? ((2U 
                                                & (IData)(__Vfunc_testbench__DOT__beh_inst__DOT__coin_value__1029__code))
                                                ? (
                                                   (1U 
                                                    & (IData)(__Vfunc_testbench__DOT__beh_inst__DOT__coin_value__1029__code))
                                                    ? 0xaU
                                                    : 5U)
                                                : (
                                                   (1U 
                                                    & (IData)(__Vfunc_testbench__DOT__beh_inst__DOT__coin_value__1029__code))
                                                    ? 2U
                                                    : 1U))
                                            : 0U);
                                }(), (IData)(__Vfunc_testbench__DOT__beh_inst__DOT__coin_value__1029__Vfuncout)))) {
                    }
                }
            }
        }
    }
    if (vlSelf->testbench__DOT__rst) {
        if ((1U & (~ ((IData)(vlSelf->testbench__DOT__beh_inst__DOT__stato) 
                      >> 1U)))) {
            if ((1U & (IData)(vlSelf->testbench__DOT__beh_inst__DOT__stato))) {
                if ((1U & (~ (IData)(vlSelf->testbench__DOT__annulla)))) {
                    if ((0U != ([&]() {
                                    __Vfunc_testbench__DOT__beh_inst__DOT__coin_value__1029__code 
                                        = vlSelf->testbench__DOT__coin;
                                    __Vfunc_testbench__DOT__beh_inst__DOT__coin_value__1029__Vfuncout 
                                        = ((4U & (IData)(__Vfunc_testbench__DOT__beh_inst__DOT__coin_value__1029__code))
                                            ? ((2U 
                                                & (IData)(__Vfunc_testbench__DOT__beh_inst__DOT__coin_value__1029__code))
                                                ? (
                                                   (1U 
                                                    & (IData)(__Vfunc_testbench__DOT__beh_inst__DOT__coin_value__1029__code))
                                                    ? 0xaU
                                                    : 5U)
                                                : (
                                                   (1U 
                                                    & (IData)(__Vfunc_testbench__DOT__beh_inst__DOT__coin_value__1029__code))
                                                    ? 2U
                                                    : 1U))
                                            : 0U);
                                }(), (IData)(__Vfunc_testbench__DOT__beh_inst__DOT__coin_value__1029__Vfuncout)))) {
                    }
                }
            }
        }
    }
    if (vlSelf->testbench__DOT__rst) {
        if ((2U & (IData)(vlSelf->testbench__DOT__beh_inst__DOT__stato))) {
            if ((1U & (~ (IData)(vlSelf->testbench__DOT__beh_inst__DOT__stato)))) {
                if ((1U & (~ (IData)(vlSelf->testbench__DOT__annulla)))) {
                    if ((0U != ([&]() {
                                    __Vfunc_testbench__DOT__beh_inst__DOT__coin_value__1021__code 
                                        = vlSelf->testbench__DOT__coin;
                                    __Vfunc_testbench__DOT__beh_inst__DOT__coin_value__1021__Vfuncout 
                                        = ((4U & (IData)(__Vfunc_testbench__DOT__beh_inst__DOT__coin_value__1021__code))
                                            ? ((2U 
                                                & (IData)(__Vfunc_testbench__DOT__beh_inst__DOT__coin_value__1021__code))
                                                ? (
                                                   (1U 
                                                    & (IData)(__Vfunc_testbench__DOT__beh_inst__DOT__coin_value__1021__code))
                                                    ? 0xaU
                                                    : 5U)
                                                : (
                                                   (1U 
                                                    & (IData)(__Vfunc_testbench__DOT__beh_inst__DOT__coin_value__1021__code))
                                                    ? 2U
                                                    : 1U))
                                            : 0U);
                                }(), (IData)(__Vfunc_testbench__DOT__beh_inst__DOT__coin_value__1021__Vfuncout)))) {
                    }
                }
            }
        }
    }
    if (vlSelf->testbench__DOT__rst) {
        if ((2U & (IData)(vlSelf->testbench__DOT__beh_inst__DOT__stato))) {
            if ((1U & (~ (IData)(vlSelf->testbench__DOT__beh_inst__DOT__stato)))) {
                if ((1U & (~ (IData)(vlSelf->testbench__DOT__annulla)))) {
                    if ((0U != ([&]() {
                                    __Vfunc_testbench__DOT__beh_inst__DOT__coin_value__1021__code 
                                        = vlSelf->testbench__DOT__coin;
                                    __Vfunc_testbench__DOT__beh_inst__DOT__coin_value__1021__Vfuncout 
                                        = ((4U & (IData)(__Vfunc_testbench__DOT__beh_inst__DOT__coin_value__1021__code))
                                            ? ((2U 
                                                & (IData)(__Vfunc_testbench__DOT__beh_inst__DOT__coin_value__1021__code))
                                                ? (
                                                   (1U 
                                                    & (IData)(__Vfunc_testbench__DOT__beh_inst__DOT__coin_value__1021__code))
                                                    ? 0xaU
                                                    : 5U)
                                                : (
                                                   (1U 
                                                    & (IData)(__Vfunc_testbench__DOT__beh_inst__DOT__coin_value__1021__code))
                                                    ? 2U
                                                    : 1U))
                                            : 0U);
                                }(), (IData)(__Vfunc_testbench__DOT__beh_inst__DOT__coin_value__1021__Vfuncout)))) {
                    }
                }
            }
        }
    }
    if (vlSelf->testbench__DOT__rst) {
        if ((2U & (IData)(vlSelf->testbench__DOT__beh_inst__DOT__stato))) {
            if ((1U & (~ (IData)(vlSelf->testbench__DOT__beh_inst__DOT__stato)))) {
                if ((1U & (~ (IData)(vlSelf->testbench__DOT__annulla)))) {
                    if ((0U != ([&]() {
                                    __Vfunc_testbench__DOT__beh_inst__DOT__coin_value__1021__code 
                                        = vlSelf->testbench__DOT__coin;
                                    __Vfunc_testbench__DOT__beh_inst__DOT__coin_value__1021__Vfuncout 
                                        = ((4U & (IData)(__Vfunc_testbench__DOT__beh_inst__DOT__coin_value__1021__code))
                                            ? ((2U 
                                                & (IData)(__Vfunc_testbench__DOT__beh_inst__DOT__coin_value__1021__code))
                                                ? (
                                                   (1U 
                                                    & (IData)(__Vfunc_testbench__DOT__beh_inst__DOT__coin_value__1021__code))
                                                    ? 0xaU
                                                    : 5U)
                                                : (
                                                   (1U 
                                                    & (IData)(__Vfunc_testbench__DOT__beh_inst__DOT__coin_value__1021__code))
                                                    ? 2U
                                                    : 1U))
                                            : 0U);
                                }(), (IData)(__Vfunc_testbench__DOT__beh_inst__DOT__coin_value__1021__Vfuncout)))) {
                    }
                }
            }
        }
    }
    if (vlSelf->testbench__DOT__rst) {
        if ((2U & (IData)(vlSelf->testbench__DOT__beh_inst__DOT__stato))) {
            if ((1U & (~ (IData)(vlSelf->testbench__DOT__beh_inst__DOT__stato)))) {
                if ((1U & (~ (IData)(vlSelf->testbench__DOT__annulla)))) {
                    if ((0U != ([&]() {
                                    __Vfunc_testbench__DOT__beh_inst__DOT__coin_value__1021__code 
                                        = vlSelf->testbench__DOT__coin;
                                    __Vfunc_testbench__DOT__beh_inst__DOT__coin_value__1021__Vfuncout 
                                        = ((4U & (IData)(__Vfunc_testbench__DOT__beh_inst__DOT__coin_value__1021__code))
                                            ? ((2U 
                                                & (IData)(__Vfunc_testbench__DOT__beh_inst__DOT__coin_value__1021__code))
                                                ? (
                                                   (1U 
                                                    & (IData)(__Vfunc_testbench__DOT__beh_inst__DOT__coin_value__1021__code))
                                                    ? 0xaU
                                                    : 5U)
                                                : (
                                                   (1U 
                                                    & (IData)(__Vfunc_testbench__DOT__beh_inst__DOT__coin_value__1021__code))
                                                    ? 2U
                                                    : 1U))
                                            : 0U);
                                }(), (IData)(__Vfunc_testbench__DOT__beh_inst__DOT__coin_value__1021__Vfuncout)))) {
                    }
                }
            }
        }
    }
    if (vlSelf->testbench__DOT__rst) {
        if ((2U & (IData)(vlSelf->testbench__DOT__beh_inst__DOT__stato))) {
            if ((1U & (~ (IData)(vlSelf->testbench__DOT__beh_inst__DOT__stato)))) {
                if ((1U & (~ (IData)(vlSelf->testbench__DOT__annulla)))) {
                    if ((0U != ([&]() {
                                    __Vfunc_testbench__DOT__beh_inst__DOT__coin_value__1021__code 
                                        = vlSelf->testbench__DOT__coin;
                                    __Vfunc_testbench__DOT__beh_inst__DOT__coin_value__1021__Vfuncout 
                                        = ((4U & (IData)(__Vfunc_testbench__DOT__beh_inst__DOT__coin_value__1021__code))
                                            ? ((2U 
                                                & (IData)(__Vfunc_testbench__DOT__beh_inst__DOT__coin_value__1021__code))
                                                ? (
                                                   (1U 
                                                    & (IData)(__Vfunc_testbench__DOT__beh_inst__DOT__coin_value__1021__code))
                                                    ? 0xaU
                                                    : 5U)
                                                : (
                                                   (1U 
                                                    & (IData)(__Vfunc_testbench__DOT__beh_inst__DOT__coin_value__1021__code))
                                                    ? 2U
                                                    : 1U))
                                            : 0U);
                                }(), (IData)(__Vfunc_testbench__DOT__beh_inst__DOT__coin_value__1021__Vfuncout)))) {
                    }
                }
            }
        }
    }
    if (vlSelf->testbench__DOT__rst) {
        if ((2U & (IData)(vlSelf->testbench__DOT__beh_inst__DOT__stato))) {
            if ((1U & (~ (IData)(vlSelf->testbench__DOT__beh_inst__DOT__stato)))) {
                if ((1U & (~ (IData)(vlSelf->testbench__DOT__annulla)))) {
                    if ((0U != ([&]() {
                                    __Vfunc_testbench__DOT__beh_inst__DOT__coin_value__1021__code 
                                        = vlSelf->testbench__DOT__coin;
                                    __Vfunc_testbench__DOT__beh_inst__DOT__coin_value__1021__Vfuncout 
                                        = ((4U & (IData)(__Vfunc_testbench__DOT__beh_inst__DOT__coin_value__1021__code))
                                            ? ((2U 
                                                & (IData)(__Vfunc_testbench__DOT__beh_inst__DOT__coin_value__1021__code))
                                                ? (
                                                   (1U 
                                                    & (IData)(__Vfunc_testbench__DOT__beh_inst__DOT__coin_value__1021__code))
                                                    ? 0xaU
                                                    : 5U)
                                                : (
                                                   (1U 
                                                    & (IData)(__Vfunc_testbench__DOT__beh_inst__DOT__coin_value__1021__code))
                                                    ? 2U
                                                    : 1U))
                                            : 0U);
                                }(), (IData)(__Vfunc_testbench__DOT__beh_inst__DOT__coin_value__1021__Vfuncout)))) {
                    }
                }
            }
        }
    }
    if (vlSelf->testbench__DOT__rst) {
        if ((2U & (IData)(vlSelf->testbench__DOT__beh_inst__DOT__stato))) {
            if ((1U & (~ (IData)(vlSelf->testbench__DOT__beh_inst__DOT__stato)))) {
                if ((1U & (~ (IData)(vlSelf->testbench__DOT__annulla)))) {
                    if ((0U != ([&]() {
                                    __Vfunc_testbench__DOT__beh_inst__DOT__coin_value__1021__code 
                                        = vlSelf->testbench__DOT__coin;
                                    __Vfunc_testbench__DOT__beh_inst__DOT__coin_value__1021__Vfuncout 
                                        = ((4U & (IData)(__Vfunc_testbench__DOT__beh_inst__DOT__coin_value__1021__code))
                                            ? ((2U 
                                                & (IData)(__Vfunc_testbench__DOT__beh_inst__DOT__coin_value__1021__code))
                                                ? (
                                                   (1U 
                                                    & (IData)(__Vfunc_testbench__DOT__beh_inst__DOT__coin_value__1021__code))
                                                    ? 0xaU
                                                    : 5U)
                                                : (
                                                   (1U 
                                                    & (IData)(__Vfunc_testbench__DOT__beh_inst__DOT__coin_value__1021__code))
                                                    ? 2U
                                                    : 1U))
                                            : 0U);
                                }(), (IData)(__Vfunc_testbench__DOT__beh_inst__DOT__coin_value__1021__Vfuncout)))) {
                    }
                }
            }
        }
    }
    if (vlSelf->testbench__DOT__rst) {
        if ((2U & (IData)(vlSelf->testbench__DOT__beh_inst__DOT__stato))) {
            if ((1U & (~ (IData)(vlSelf->testbench__DOT__beh_inst__DOT__stato)))) {
                if ((1U & (~ (IData)(vlSelf->testbench__DOT__annulla)))) {
                    if ((0U != ([&]() {
                                    __Vfunc_testbench__DOT__beh_inst__DOT__coin_value__1021__code 
                                        = vlSelf->testbench__DOT__coin;
                                    __Vfunc_testbench__DOT__beh_inst__DOT__coin_value__1021__Vfuncout 
                                        = ((4U & (IData)(__Vfunc_testbench__DOT__beh_inst__DOT__coin_value__1021__code))
                                            ? ((2U 
                                                & (IData)(__Vfunc_testbench__DOT__beh_inst__DOT__coin_value__1021__code))
                                                ? (
                                                   (1U 
                                                    & (IData)(__Vfunc_testbench__DOT__beh_inst__DOT__coin_value__1021__code))
                                                    ? 0xaU
                                                    : 5U)
                                                : (
                                                   (1U 
                                                    & (IData)(__Vfunc_testbench__DOT__beh_inst__DOT__coin_value__1021__code))
                                                    ? 2U
                                                    : 1U))
                                            : 0U);
                                }(), (IData)(__Vfunc_testbench__DOT__beh_inst__DOT__coin_value__1021__Vfuncout)))) {
                    }
                }
            }
        }
    }
    if (vlSelf->testbench__DOT__rst) {
        if ((2U & (IData)(vlSelf->testbench__DOT__beh_inst__DOT__stato))) {
            if ((1U & (~ (IData)(vlSelf->testbench__DOT__beh_inst__DOT__stato)))) {
                if ((1U & (~ (IData)(vlSelf->testbench__DOT__annulla)))) {
                    if ((0U != ([&]() {
                                    __Vfunc_testbench__DOT__beh_inst__DOT__coin_value__1021__code 
                                        = vlSelf->testbench__DOT__coin;
                                    __Vfunc_testbench__DOT__beh_inst__DOT__coin_value__1021__Vfuncout 
                                        = ((4U & (IData)(__Vfunc_testbench__DOT__beh_inst__DOT__coin_value__1021__code))
                                            ? ((2U 
                                                & (IData)(__Vfunc_testbench__DOT__beh_inst__DOT__coin_value__1021__code))
                                                ? (
                                                   (1U 
                                                    & (IData)(__Vfunc_testbench__DOT__beh_inst__DOT__coin_value__1021__code))
                                                    ? 0xaU
                                                    : 5U)
                                                : (
                                                   (1U 
                                                    & (IData)(__Vfunc_testbench__DOT__beh_inst__DOT__coin_value__1021__code))
                                                    ? 2U
                                                    : 1U))
                                            : 0U);
                                }(), (IData)(__Vfunc_testbench__DOT__beh_inst__DOT__coin_value__1021__Vfuncout)))) {
                    }
                }
            }
        }
    }
    if (vlSelf->testbench__DOT__rst) {
        if ((2U & (IData)(vlSelf->testbench__DOT__beh_inst__DOT__stato))) {
            if ((1U & (~ (IData)(vlSelf->testbench__DOT__beh_inst__DOT__stato)))) {
                if ((1U & (~ (IData)(vlSelf->testbench__DOT__annulla)))) {
                    if ((0U != ([&]() {
                                    __Vfunc_testbench__DOT__beh_inst__DOT__coin_value__1021__code 
                                        = vlSelf->testbench__DOT__coin;
                                    __Vfunc_testbench__DOT__beh_inst__DOT__coin_value__1021__Vfuncout 
                                        = ((4U & (IData)(__Vfunc_testbench__DOT__beh_inst__DOT__coin_value__1021__code))
                                            ? ((2U 
                                                & (IData)(__Vfunc_testbench__DOT__beh_inst__DOT__coin_value__1021__code))
                                                ? (
                                                   (1U 
                                                    & (IData)(__Vfunc_testbench__DOT__beh_inst__DOT__coin_value__1021__code))
                                                    ? 0xaU
                                                    : 5U)
                                                : (
                                                   (1U 
                                                    & (IData)(__Vfunc_testbench__DOT__beh_inst__DOT__coin_value__1021__code))
                                                    ? 2U
                                                    : 1U))
                                            : 0U);
                                }(), (IData)(__Vfunc_testbench__DOT__beh_inst__DOT__coin_value__1021__Vfuncout)))) {
                    }
                }
            }
        }
    }
    if (vlSelf->testbench__DOT__rst) {
        if ((2U & (IData)(vlSelf->testbench__DOT__beh_inst__DOT__stato))) {
            if ((1U & (~ (IData)(vlSelf->testbench__DOT__beh_inst__DOT__stato)))) {
                if ((1U & (~ (IData)(vlSelf->testbench__DOT__annulla)))) {
                    if ((0U != ([&]() {
                                    __Vfunc_testbench__DOT__beh_inst__DOT__coin_value__1021__code 
                                        = vlSelf->testbench__DOT__coin;
                                    __Vfunc_testbench__DOT__beh_inst__DOT__coin_value__1021__Vfuncout 
                                        = ((4U & (IData)(__Vfunc_testbench__DOT__beh_inst__DOT__coin_value__1021__code))
                                            ? ((2U 
                                                & (IData)(__Vfunc_testbench__DOT__beh_inst__DOT__coin_value__1021__code))
                                                ? (
                                                   (1U 
                                                    & (IData)(__Vfunc_testbench__DOT__beh_inst__DOT__coin_value__1021__code))
                                                    ? 0xaU
                                                    : 5U)
                                                : (
                                                   (1U 
                                                    & (IData)(__Vfunc_testbench__DOT__beh_inst__DOT__coin_value__1021__code))
                                                    ? 2U
                                                    : 1U))
                                            : 0U);
                                }(), (IData)(__Vfunc_testbench__DOT__beh_inst__DOT__coin_value__1021__Vfuncout)))) {
                    }
                }
            }
        }
    }
    if (vlSelf->testbench__DOT__rst) {
        if ((2U & (IData)(vlSelf->testbench__DOT__beh_inst__DOT__stato))) {
            if ((1U & (~ (IData)(vlSelf->testbench__DOT__beh_inst__DOT__stato)))) {
                if ((1U & (~ (IData)(vlSelf->testbench__DOT__annulla)))) {
                    if ((0U != ([&]() {
                                    __Vfunc_testbench__DOT__beh_inst__DOT__coin_value__1021__code 
                                        = vlSelf->testbench__DOT__coin;
                                    __Vfunc_testbench__DOT__beh_inst__DOT__coin_value__1021__Vfuncout 
                                        = ((4U & (IData)(__Vfunc_testbench__DOT__beh_inst__DOT__coin_value__1021__code))
                                            ? ((2U 
                                                & (IData)(__Vfunc_testbench__DOT__beh_inst__DOT__coin_value__1021__code))
                                                ? (
                                                   (1U 
                                                    & (IData)(__Vfunc_testbench__DOT__beh_inst__DOT__coin_value__1021__code))
                                                    ? 0xaU
                                                    : 5U)
                                                : (
                                                   (1U 
                                                    & (IData)(__Vfunc_testbench__DOT__beh_inst__DOT__coin_value__1021__code))
                                                    ? 2U
                                                    : 1U))
                                            : 0U);
                                }(), (IData)(__Vfunc_testbench__DOT__beh_inst__DOT__coin_value__1021__Vfuncout)))) {
                    }
                }
            }
        }
    }
    if (vlSelf->testbench__DOT__rst) {
        if ((2U & (IData)(vlSelf->testbench__DOT__beh_inst__DOT__stato))) {
            if ((1U & (~ (IData)(vlSelf->testbench__DOT__beh_inst__DOT__stato)))) {
                if ((1U & (~ (IData)(vlSelf->testbench__DOT__annulla)))) {
                    if ((0U != ([&]() {
                                    __Vfunc_testbench__DOT__beh_inst__DOT__coin_value__1021__code 
                                        = vlSelf->testbench__DOT__coin;
                                    __Vfunc_testbench__DOT__beh_inst__DOT__coin_value__1021__Vfuncout 
                                        = ((4U & (IData)(__Vfunc_testbench__DOT__beh_inst__DOT__coin_value__1021__code))
                                            ? ((2U 
                                                & (IData)(__Vfunc_testbench__DOT__beh_inst__DOT__coin_value__1021__code))
                                                ? (
                                                   (1U 
                                                    & (IData)(__Vfunc_testbench__DOT__beh_inst__DOT__coin_value__1021__code))
                                                    ? 0xaU
                                                    : 5U)
                                                : (
                                                   (1U 
                                                    & (IData)(__Vfunc_testbench__DOT__beh_inst__DOT__coin_value__1021__code))
                                                    ? 2U
                                                    : 1U))
                                            : 0U);
                                }(), (IData)(__Vfunc_testbench__DOT__beh_inst__DOT__coin_value__1021__Vfuncout)))) {
                    }
                }
            }
        }
    }
    if (vlSelf->testbench__DOT__rst) {
        if ((0U == (IData)(vlSelf->testbench__DOT__str_inst__DOT__fsm__DOT__stato))) {
            vlSelf->testbench__DOT__str_inst__DOT__init_counter_w 
                = ((0xbU > (IData)(vlSelf->testbench__DOT__str_inst__DOT__init_counter_w))
                    ? (0xfU & ((IData)(1U) + (IData)(vlSelf->testbench__DOT__str_inst__DOT__init_counter_w)))
                    : 0U);
        }
        if (vlSelf->testbench__DOT__str_inst__DOT__we_coin_out) {
            vlSelf->testbench__DOT__str_inst__DOT__coin10_q 
                = vlSelf->testbench__DOT__str_inst__DOT__coin10_d;
            vlSelf->testbench__DOT__str_inst__DOT__coin05_q 
                = vlSelf->testbench__DOT__str_inst__DOT__coin05_d;
            vlSelf->testbench__DOT__str_inst__DOT__coin02_q 
                = vlSelf->testbench__DOT__str_inst__DOT__coin02_d;
            vlSelf->testbench__DOT__str_inst__DOT__coin01_q 
                = vlSelf->testbench__DOT__str_inst__DOT__coin01_d;
        }
        if (vlSelf->testbench__DOT__str_inst__DOT__we_prod) {
            vlSelf->testbench__DOT__str_inst__DOT__prod4_q 
                = vlSelf->testbench__DOT__str_inst__DOT__prod4_d;
            vlSelf->testbench__DOT__str_inst__DOT__prod3_q 
                = vlSelf->testbench__DOT__str_inst__DOT__prod3_d;
            vlSelf->testbench__DOT__str_inst__DOT__prod2_q 
                = vlSelf->testbench__DOT__str_inst__DOT__prod2_d;
            vlSelf->testbench__DOT__str_inst__DOT__prod1_q 
                = vlSelf->testbench__DOT__str_inst__DOT__prod1_d;
        }
        if (vlSelf->testbench__DOT__str_inst__DOT__we_errore) {
            vlSelf->testbench__DOT__str_inst__DOT__errore_q 
                = vlSelf->testbench__DOT__str_inst__DOT__errore_d;
        }
        if (((IData)(vlSelf->testbench__DOT__str_inst__DOT__init_c01) 
             | ((IData)(vlSelf->testbench__DOT__str_inst__DOT__init_c02) 
                | ((IData)(vlSelf->testbench__DOT__str_inst__DOT__init_c05) 
                   | ((IData)(vlSelf->testbench__DOT__str_inst__DOT__init_c10) 
                      | (IData)(vlSelf->testbench__DOT__str_inst__DOT____VdfgTmp_h4b786e47__0)))))) {
            vlSelf->testbench__DOT__str_inst__DOT__disponibile_q 
                = vlSelf->testbench__DOT__str_inst__DOT__disponibile_d;
        }
        if (((IData)(vlSelf->testbench__DOT__str_inst__DOT__we_errore) 
             | (IData)(vlSelf->testbench__DOT__str_inst__DOT__payout_active))) {
            vlSelf->testbench__DOT__str_inst__DOT__resto_q 
                = vlSelf->testbench__DOT__str_inst__DOT__resto_d;
        }
        if (vlSelf->testbench__DOT__str_inst__DOT__do_ok) {
            vlSelf->testbench__DOT__str_inst__DOT__current_price_q 
                = vlSelf->testbench__DOT__str_inst__DOT__current_price_d;
        }
        if (((IData)(vlSelf->testbench__DOT__str_inst__DOT__init_c10) 
             | ((IData)(vlSelf->testbench__DOT__str_inst__DOT__add_c10) 
                | (IData)(vlSelf->testbench__DOT__str_inst__DOT__payout_active)))) {
            vlSelf->testbench__DOT__str_inst__DOT__qty_c10_q 
                = vlSelf->testbench__DOT__str_inst__DOT__qty_c10_d;
        }
        if (((IData)(vlSelf->testbench__DOT__str_inst__DOT__init_c05) 
             | ((IData)(vlSelf->testbench__DOT__str_inst__DOT__add_c05) 
                | (IData)(vlSelf->testbench__DOT__str_inst__DOT__payout_active)))) {
            vlSelf->testbench__DOT__str_inst__DOT__qty_c05_q 
                = vlSelf->testbench__DOT__str_inst__DOT__qty_c05_d;
        }
        if (((IData)(vlSelf->testbench__DOT__str_inst__DOT__init_c02) 
             | ((IData)(vlSelf->testbench__DOT__str_inst__DOT__add_c02) 
                | (IData)(vlSelf->testbench__DOT__str_inst__DOT__payout_active)))) {
            vlSelf->testbench__DOT__str_inst__DOT__qty_c02_q 
                = vlSelf->testbench__DOT__str_inst__DOT__qty_c02_d;
        }
        if (((IData)(vlSelf->testbench__DOT__str_inst__DOT__init_c01) 
             | ((IData)(vlSelf->testbench__DOT__str_inst__DOT__add_c01) 
                | (IData)(vlSelf->testbench__DOT__str_inst__DOT__payout_active)))) {
            vlSelf->testbench__DOT__str_inst__DOT__qty_c01_q 
                = vlSelf->testbench__DOT__str_inst__DOT__qty_c01_d;
        }
    } else {
        vlSelf->testbench__DOT__str_inst__DOT__init_counter_w = 0U;
        vlSelf->testbench__DOT__str_inst__DOT__coin10_q = 0U;
        vlSelf->testbench__DOT__str_inst__DOT__coin05_q = 0U;
        vlSelf->testbench__DOT__str_inst__DOT__coin02_q = 0U;
        vlSelf->testbench__DOT__str_inst__DOT__coin01_q = 0U;
        vlSelf->testbench__DOT__str_inst__DOT__prod4_q = 0U;
        vlSelf->testbench__DOT__str_inst__DOT__prod3_q = 0U;
        vlSelf->testbench__DOT__str_inst__DOT__prod2_q = 0U;
        vlSelf->testbench__DOT__str_inst__DOT__prod1_q = 0U;
        vlSelf->testbench__DOT__str_inst__DOT__errore_q = 0U;
        vlSelf->testbench__DOT__str_inst__DOT__disponibile_q = 0U;
        vlSelf->testbench__DOT__str_inst__DOT__resto_q = 0U;
        vlSelf->testbench__DOT__str_inst__DOT__current_price_q = 0U;
        vlSelf->testbench__DOT__str_inst__DOT__qty_c10_q = 0U;
        vlSelf->testbench__DOT__str_inst__DOT__qty_c05_q = 0U;
        vlSelf->testbench__DOT__str_inst__DOT__qty_c02_q = 0U;
        vlSelf->testbench__DOT__str_inst__DOT__qty_c01_q = 0U;
    }
    if (vlSelf->testbench__DOT__rst) {
        if ((2U & (IData)(vlSelf->testbench__DOT__beh_inst__DOT__stato))) {
            if ((1U & (IData)(vlSelf->testbench__DOT__beh_inst__DOT__stato))) {
                vlSelf->testbench__DOT__p1_b = 0U;
                vlSelf->testbench__DOT__p2_b = 0U;
                vlSelf->testbench__DOT__p3_b = 0U;
                vlSelf->testbench__DOT__p4_b = 0U;
                vlSelf->testbench__DOT__errore_b = 0U;
                vlSelf->testbench__DOT__resto_b = 0U;
                vlSelf->testbench__DOT__c01_b = 0U;
                vlSelf->testbench__DOT__c02_b = 0U;
                vlSelf->testbench__DOT__c05_b = 0U;
                vlSelf->testbench__DOT__c10_b = 0U;
                __Vdly__testbench__DOT__beh_inst__DOT__stato = 1U;
            } else {
                vlSelf->testbench__DOT__p1_b = 0U;
                vlSelf->testbench__DOT__p2_b = 0U;
                vlSelf->testbench__DOT__p3_b = 0U;
                vlSelf->testbench__DOT__p4_b = 0U;
                vlSelf->testbench__DOT__errore_b = 0U;
                vlSelf->testbench__DOT__resto_b = 0U;
                vlSelf->testbench__DOT__c01_b = 0U;
                vlSelf->testbench__DOT__c02_b = 0U;
                vlSelf->testbench__DOT__c05_b = 0U;
                vlSelf->testbench__DOT__c10_b = 0U;
                if (vlSelf->testbench__DOT__annulla) {
                    __Vtask_testbench__DOT__beh_inst__DOT__greedy_return__1020__amount 
                        = vlSelf->testbench__DOT__credito_b;
                    vlSelf->testbench__DOT__beh_inst__DOT__greedy_return__Vstatic__remain 
                        = __Vtask_testbench__DOT__beh_inst__DOT__greedy_return__1020__amount;
                    __Vdly__testbench__DOT__beh_inst__DOT__stato = 1U;
                    vlSelf->testbench__DOT__beh_inst__DOT__greedy_return__Vstatic__take 
                        = (0x3fU & VL_DIV_III(6, (IData)(vlSelf->testbench__DOT__beh_inst__DOT__greedy_return__Vstatic__remain), (IData)(0xaU)));
                    if (((IData)(vlSelf->testbench__DOT__beh_inst__DOT__greedy_return__Vstatic__take) 
                         > (IData)(vlSelf->testbench__DOT__beh_inst__DOT__qty_c10))) {
                        vlSelf->testbench__DOT__beh_inst__DOT__greedy_return__Vstatic__take 
                            = vlSelf->testbench__DOT__beh_inst__DOT__qty_c10;
                    }
                    __Vdly__testbench__DOT__credito_b = 0U;
                    __Vtask_testbench__DOT__beh_inst__DOT__greedy_return__1020__out10 
                        = vlSelf->testbench__DOT__beh_inst__DOT__greedy_return__Vstatic__take;
                    __Vtask_testbench__DOT__beh_inst__DOT__greedy_return__1020__next10 
                        = (0x3fU & ((IData)(vlSelf->testbench__DOT__beh_inst__DOT__qty_c10) 
                                    - (IData)(vlSelf->testbench__DOT__beh_inst__DOT__greedy_return__Vstatic__take)));
                    vlSelf->testbench__DOT__beh_inst__DOT__greedy_return__Vstatic__remain 
                        = (0x3fU & ((IData)(vlSelf->testbench__DOT__beh_inst__DOT__greedy_return__Vstatic__remain) 
                                    - ((IData)(0xaU) 
                                       * (IData)(vlSelf->testbench__DOT__beh_inst__DOT__greedy_return__Vstatic__take))));
                    vlSelf->testbench__DOT__beh_inst__DOT__greedy_return__Vstatic__take 
                        = (0x3fU & VL_DIV_III(6, (IData)(vlSelf->testbench__DOT__beh_inst__DOT__greedy_return__Vstatic__remain), (IData)(5U)));
                    if (((IData)(vlSelf->testbench__DOT__beh_inst__DOT__greedy_return__Vstatic__take) 
                         > (IData)(vlSelf->testbench__DOT__beh_inst__DOT__qty_c05))) {
                        vlSelf->testbench__DOT__beh_inst__DOT__greedy_return__Vstatic__take 
                            = vlSelf->testbench__DOT__beh_inst__DOT__qty_c05;
                    }
                    __Vtask_testbench__DOT__beh_inst__DOT__greedy_return__1020__out05 
                        = vlSelf->testbench__DOT__beh_inst__DOT__greedy_return__Vstatic__take;
                    __Vtask_testbench__DOT__beh_inst__DOT__greedy_return__1020__next05 
                        = (0x3fU & ((IData)(vlSelf->testbench__DOT__beh_inst__DOT__qty_c05) 
                                    - (IData)(vlSelf->testbench__DOT__beh_inst__DOT__greedy_return__Vstatic__take)));
                    vlSelf->testbench__DOT__beh_inst__DOT__greedy_return__Vstatic__remain 
                        = (0x3fU & ((IData)(vlSelf->testbench__DOT__beh_inst__DOT__greedy_return__Vstatic__remain) 
                                    - ((IData)(5U) 
                                       * (IData)(vlSelf->testbench__DOT__beh_inst__DOT__greedy_return__Vstatic__take))));
                    vlSelf->testbench__DOT__beh_inst__DOT__greedy_return__Vstatic__take 
                        = (0x3fU & VL_SHIFTR_III(6,6,32, (IData)(vlSelf->testbench__DOT__beh_inst__DOT__greedy_return__Vstatic__remain), 1U));
                    if (((IData)(vlSelf->testbench__DOT__beh_inst__DOT__greedy_return__Vstatic__take) 
                         > (IData)(vlSelf->testbench__DOT__beh_inst__DOT__qty_c02))) {
                        vlSelf->testbench__DOT__beh_inst__DOT__greedy_return__Vstatic__take 
                            = vlSelf->testbench__DOT__beh_inst__DOT__qty_c02;
                    }
                    __Vtask_testbench__DOT__beh_inst__DOT__greedy_return__1020__out02 
                        = vlSelf->testbench__DOT__beh_inst__DOT__greedy_return__Vstatic__take;
                    __Vtask_testbench__DOT__beh_inst__DOT__greedy_return__1020__next02 
                        = (0x3fU & ((IData)(vlSelf->testbench__DOT__beh_inst__DOT__qty_c02) 
                                    - (IData)(vlSelf->testbench__DOT__beh_inst__DOT__greedy_return__Vstatic__take)));
                    vlSelf->testbench__DOT__beh_inst__DOT__greedy_return__Vstatic__remain 
                        = (0x3fU & ((IData)(vlSelf->testbench__DOT__beh_inst__DOT__greedy_return__Vstatic__remain) 
                                    - VL_SHIFTL_III(6,6,32, (IData)(vlSelf->testbench__DOT__beh_inst__DOT__greedy_return__Vstatic__take), 1U)));
                    vlSelf->testbench__DOT__beh_inst__DOT__greedy_return__Vstatic__take 
                        = vlSelf->testbench__DOT__beh_inst__DOT__greedy_return__Vstatic__remain;
                    if (((IData)(vlSelf->testbench__DOT__beh_inst__DOT__greedy_return__Vstatic__take) 
                         > (IData)(vlSelf->testbench__DOT__beh_inst__DOT__qty_c01))) {
                        vlSelf->testbench__DOT__beh_inst__DOT__greedy_return__Vstatic__take 
                            = vlSelf->testbench__DOT__beh_inst__DOT__qty_c01;
                    }
                    __Vtask_testbench__DOT__beh_inst__DOT__greedy_return__1020__out01 
                        = vlSelf->testbench__DOT__beh_inst__DOT__greedy_return__Vstatic__take;
                    __Vtask_testbench__DOT__beh_inst__DOT__greedy_return__1020__next01 
                        = (0x3fU & ((IData)(vlSelf->testbench__DOT__beh_inst__DOT__qty_c01) 
                                    - (IData)(vlSelf->testbench__DOT__beh_inst__DOT__greedy_return__Vstatic__take)));
                    vlSelf->testbench__DOT__beh_inst__DOT__greedy_return__Vstatic__remain 
                        = (0x3fU & ((IData)(vlSelf->testbench__DOT__beh_inst__DOT__greedy_return__Vstatic__remain) 
                                    - (IData)(vlSelf->testbench__DOT__beh_inst__DOT__greedy_return__Vstatic__take)));
                    __Vtask_testbench__DOT__beh_inst__DOT__greedy_return__1020__returned 
                        = (0x3fU & ((IData)(__Vtask_testbench__DOT__beh_inst__DOT__greedy_return__1020__amount) 
                                    - (IData)(vlSelf->testbench__DOT__beh_inst__DOT__greedy_return__Vstatic__remain)));
                    vlSelf->testbench__DOT__beh_inst__DOT__greedy_out_10 
                        = __Vtask_testbench__DOT__beh_inst__DOT__greedy_return__1020__out10;
                    vlSelf->testbench__DOT__beh_inst__DOT__greedy_out_05 
                        = __Vtask_testbench__DOT__beh_inst__DOT__greedy_return__1020__out05;
                    vlSelf->testbench__DOT__beh_inst__DOT__greedy_out_02 
                        = __Vtask_testbench__DOT__beh_inst__DOT__greedy_return__1020__out02;
                    vlSelf->testbench__DOT__beh_inst__DOT__greedy_out_01 
                        = __Vtask_testbench__DOT__beh_inst__DOT__greedy_return__1020__out01;
                    vlSelf->testbench__DOT__beh_inst__DOT__greedy_next_10 
                        = __Vtask_testbench__DOT__beh_inst__DOT__greedy_return__1020__next10;
                    vlSelf->testbench__DOT__beh_inst__DOT__greedy_next_05 
                        = __Vtask_testbench__DOT__beh_inst__DOT__greedy_return__1020__next05;
                    vlSelf->testbench__DOT__beh_inst__DOT__greedy_next_02 
                        = __Vtask_testbench__DOT__beh_inst__DOT__greedy_return__1020__next02;
                    vlSelf->testbench__DOT__beh_inst__DOT__greedy_next_01 
                        = __Vtask_testbench__DOT__beh_inst__DOT__greedy_return__1020__next01;
                    vlSelf->testbench__DOT__beh_inst__DOT__greedy_returned 
                        = __Vtask_testbench__DOT__beh_inst__DOT__greedy_return__1020__returned;
                    vlSelf->testbench__DOT__c10_b = vlSelf->testbench__DOT__beh_inst__DOT__greedy_out_10;
                    vlSelf->testbench__DOT__c05_b = vlSelf->testbench__DOT__beh_inst__DOT__greedy_out_05;
                    vlSelf->testbench__DOT__c02_b = vlSelf->testbench__DOT__beh_inst__DOT__greedy_out_02;
                    vlSelf->testbench__DOT__c01_b = vlSelf->testbench__DOT__beh_inst__DOT__greedy_out_01;
                    __Vdly__testbench__DOT__beh_inst__DOT__qty_c10 
                        = vlSelf->testbench__DOT__beh_inst__DOT__greedy_next_10;
                    __Vdly__testbench__DOT__beh_inst__DOT__qty_c05 
                        = vlSelf->testbench__DOT__beh_inst__DOT__greedy_next_05;
                    __Vdly__testbench__DOT__beh_inst__DOT__qty_c02 
                        = vlSelf->testbench__DOT__beh_inst__DOT__greedy_next_02;
                    __Vdly__testbench__DOT__beh_inst__DOT__qty_c01 
                        = vlSelf->testbench__DOT__beh_inst__DOT__greedy_next_01;
                    vlSelf->testbench__DOT__resto_b 
                        = vlSelf->testbench__DOT__beh_inst__DOT__greedy_returned;
                    __Vdly__testbench__DOT__disp_b 
                        = (((IData)(vlSelf->testbench__DOT__beh_inst__DOT__greedy_returned) 
                            > (IData)(vlSelf->testbench__DOT__disp_b))
                            ? 0U : (0x3ffU & ((IData)(vlSelf->testbench__DOT__disp_b) 
                                              - (IData)(vlSelf->testbench__DOT__beh_inst__DOT__greedy_returned))));
                } else if ((0U != ([&]() {
                                __Vfunc_testbench__DOT__beh_inst__DOT__coin_value__1021__code 
                                    = vlSelf->testbench__DOT__coin;
                                __Vfunc_testbench__DOT__beh_inst__DOT__coin_value__1021__Vfuncout 
                                    = ((4U & (IData)(__Vfunc_testbench__DOT__beh_inst__DOT__coin_value__1021__code))
                                        ? ((2U & (IData)(__Vfunc_testbench__DOT__beh_inst__DOT__coin_value__1021__code))
                                            ? ((1U 
                                                & (IData)(__Vfunc_testbench__DOT__beh_inst__DOT__coin_value__1021__code))
                                                ? 0xaU
                                                : 5U)
                                            : ((1U 
                                                & (IData)(__Vfunc_testbench__DOT__beh_inst__DOT__coin_value__1021__code))
                                                ? 2U
                                                : 1U))
                                        : 0U);
                            }(), (IData)(__Vfunc_testbench__DOT__beh_inst__DOT__coin_value__1021__Vfuncout)))) {
                    if ((4U & (IData)(vlSelf->testbench__DOT__coin))) {
                        if ((2U & (IData)(vlSelf->testbench__DOT__coin))) {
                            if ((1U & (IData)(vlSelf->testbench__DOT__coin))) {
                                __Vdly__testbench__DOT__beh_inst__DOT__qty_c10 
                                    = (0x3fU & ((IData)(1U) 
                                                + (IData)(vlSelf->testbench__DOT__beh_inst__DOT__qty_c10)));
                            } else {
                                __Vdly__testbench__DOT__beh_inst__DOT__qty_c05 
                                    = (0x3fU & ((IData)(1U) 
                                                + (IData)(vlSelf->testbench__DOT__beh_inst__DOT__qty_c05)));
                            }
                        } else if ((1U & (IData)(vlSelf->testbench__DOT__coin))) {
                            __Vdly__testbench__DOT__beh_inst__DOT__qty_c02 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->testbench__DOT__beh_inst__DOT__qty_c02)));
                        } else {
                            __Vdly__testbench__DOT__beh_inst__DOT__qty_c01 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->testbench__DOT__beh_inst__DOT__qty_c01)));
                        }
                    }
                    __Vdly__testbench__DOT__credito_b 
                        = (0x3fU & ((IData)(vlSelf->testbench__DOT__credito_b) 
                                    + ([&]() {
                                    __Vfunc_testbench__DOT__beh_inst__DOT__coin_value__1022__code 
                                        = vlSelf->testbench__DOT__coin;
                                    __Vfunc_testbench__DOT__beh_inst__DOT__coin_value__1022__Vfuncout 
                                        = ((4U & (IData)(__Vfunc_testbench__DOT__beh_inst__DOT__coin_value__1022__code))
                                            ? ((2U 
                                                & (IData)(__Vfunc_testbench__DOT__beh_inst__DOT__coin_value__1022__code))
                                                ? (
                                                   (1U 
                                                    & (IData)(__Vfunc_testbench__DOT__beh_inst__DOT__coin_value__1022__code))
                                                    ? 0xaU
                                                    : 5U)
                                                : (
                                                   (1U 
                                                    & (IData)(__Vfunc_testbench__DOT__beh_inst__DOT__coin_value__1022__code))
                                                    ? 2U
                                                    : 1U))
                                            : 0U);
                                }(), (IData)(__Vfunc_testbench__DOT__beh_inst__DOT__coin_value__1022__Vfuncout))));
                    __Vdly__testbench__DOT__disp_b 
                        = (0x3ffU & ((IData)(vlSelf->testbench__DOT__disp_b) 
                                     + VL_EXTEND_II(10,6, 
                                                    ([&]() {
                                        __Vfunc_testbench__DOT__beh_inst__DOT__coin_value__1023__code 
                                            = vlSelf->testbench__DOT__coin;
                                        __Vfunc_testbench__DOT__beh_inst__DOT__coin_value__1023__Vfuncout 
                                            = ((4U 
                                                & (IData)(__Vfunc_testbench__DOT__beh_inst__DOT__coin_value__1023__code))
                                                ? (
                                                   (2U 
                                                    & (IData)(__Vfunc_testbench__DOT__beh_inst__DOT__coin_value__1023__code))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(__Vfunc_testbench__DOT__beh_inst__DOT__coin_value__1023__code))
                                                     ? 0xaU
                                                     : 5U)
                                                    : 
                                                   ((1U 
                                                     & (IData)(__Vfunc_testbench__DOT__beh_inst__DOT__coin_value__1023__code))
                                                     ? 2U
                                                     : 1U))
                                                : 0U);
                                    }(), (IData)(__Vfunc_testbench__DOT__beh_inst__DOT__coin_value__1023__Vfuncout)))));
                } else if (vlSelf->testbench__DOT__conferma) {
                    if ((4U & (IData)(vlSelf->testbench__DOT__selezione))) {
                        if ((2U & (IData)(vlSelf->testbench__DOT__selezione))) {
                            if ((1U & (IData)(vlSelf->testbench__DOT__selezione))) {
                                if ((0U == (IData)(vlSelf->testbench__DOT__beh_inst__DOT__qty_p4))) {
                                    vlSelf->testbench__DOT__errore_b 
                                        = (((IData)(vlSelf->testbench__DOT__credito_b) 
                                            < (IData)(vlSelf->testbench__DOT__beh_inst__DOT__price_p4))
                                            ? 3U : 2U);
                                    if (((IData)(vlSelf->testbench__DOT__credito_b) 
                                         < (IData)(vlSelf->testbench__DOT__beh_inst__DOT__price_p4))) {
                                        vlSelf->testbench__DOT__resto_b 
                                            = vlSelf->testbench__DOT__beh_inst__DOT__price_p4;
                                    }
                                    __Vdly__testbench__DOT__beh_inst__DOT__stato = 1U;
                                } else if (((IData)(vlSelf->testbench__DOT__credito_b) 
                                            < (IData)(vlSelf->testbench__DOT__beh_inst__DOT__price_p4))) {
                                    vlSelf->testbench__DOT__errore_b = 1U;
                                    vlSelf->testbench__DOT__resto_b 
                                        = vlSelf->testbench__DOT__beh_inst__DOT__price_p4;
                                    __Vdly__testbench__DOT__beh_inst__DOT__stato = 1U;
                                } else {
                                    __Vtask_testbench__DOT__beh_inst__DOT__greedy_return__1024__amount 
                                        = (0x3fU & 
                                           ((IData)(vlSelf->testbench__DOT__credito_b) 
                                            - (IData)(vlSelf->testbench__DOT__beh_inst__DOT__price_p4)));
                                    vlSelf->testbench__DOT__beh_inst__DOT__qty_p4 
                                        = (0x3fU & 
                                           ((IData)(vlSelf->testbench__DOT__beh_inst__DOT__qty_p4) 
                                            - (IData)(1U)));
                                    vlSelf->testbench__DOT__beh_inst__DOT__greedy_return__Vstatic__remain 
                                        = __Vtask_testbench__DOT__beh_inst__DOT__greedy_return__1024__amount;
                                    vlSelf->testbench__DOT__p4_b = 1U;
                                    vlSelf->testbench__DOT__beh_inst__DOT__current_price 
                                        = vlSelf->testbench__DOT__beh_inst__DOT__price_p4;
                                    __Vdly__testbench__DOT__beh_inst__DOT__stato = 3U;
                                    vlSelf->testbench__DOT__beh_inst__DOT__greedy_return__Vstatic__take 
                                        = (0x3fU & 
                                           VL_DIV_III(6, (IData)(vlSelf->testbench__DOT__beh_inst__DOT__greedy_return__Vstatic__remain), (IData)(0xaU)));
                                    if (((IData)(vlSelf->testbench__DOT__beh_inst__DOT__greedy_return__Vstatic__take) 
                                         > (IData)(vlSelf->testbench__DOT__beh_inst__DOT__qty_c10))) {
                                        vlSelf->testbench__DOT__beh_inst__DOT__greedy_return__Vstatic__take 
                                            = vlSelf->testbench__DOT__beh_inst__DOT__qty_c10;
                                    }
                                    __Vdly__testbench__DOT__credito_b = 0U;
                                    __Vtask_testbench__DOT__beh_inst__DOT__greedy_return__1024__out10 
                                        = vlSelf->testbench__DOT__beh_inst__DOT__greedy_return__Vstatic__take;
                                    __Vtask_testbench__DOT__beh_inst__DOT__greedy_return__1024__next10 
                                        = (0x3fU & 
                                           ((IData)(vlSelf->testbench__DOT__beh_inst__DOT__qty_c10) 
                                            - (IData)(vlSelf->testbench__DOT__beh_inst__DOT__greedy_return__Vstatic__take)));
                                    vlSelf->testbench__DOT__beh_inst__DOT__greedy_return__Vstatic__remain 
                                        = (0x3fU & 
                                           ((IData)(vlSelf->testbench__DOT__beh_inst__DOT__greedy_return__Vstatic__remain) 
                                            - ((IData)(0xaU) 
                                               * (IData)(vlSelf->testbench__DOT__beh_inst__DOT__greedy_return__Vstatic__take))));
                                    vlSelf->testbench__DOT__beh_inst__DOT__greedy_return__Vstatic__take 
                                        = (0x3fU & 
                                           VL_DIV_III(6, (IData)(vlSelf->testbench__DOT__beh_inst__DOT__greedy_return__Vstatic__remain), (IData)(5U)));
                                    if (((IData)(vlSelf->testbench__DOT__beh_inst__DOT__greedy_return__Vstatic__take) 
                                         > (IData)(vlSelf->testbench__DOT__beh_inst__DOT__qty_c05))) {
                                        vlSelf->testbench__DOT__beh_inst__DOT__greedy_return__Vstatic__take 
                                            = vlSelf->testbench__DOT__beh_inst__DOT__qty_c05;
                                    }
                                    __Vtask_testbench__DOT__beh_inst__DOT__greedy_return__1024__out05 
                                        = vlSelf->testbench__DOT__beh_inst__DOT__greedy_return__Vstatic__take;
                                    __Vtask_testbench__DOT__beh_inst__DOT__greedy_return__1024__next05 
                                        = (0x3fU & 
                                           ((IData)(vlSelf->testbench__DOT__beh_inst__DOT__qty_c05) 
                                            - (IData)(vlSelf->testbench__DOT__beh_inst__DOT__greedy_return__Vstatic__take)));
                                    vlSelf->testbench__DOT__beh_inst__DOT__greedy_return__Vstatic__remain 
                                        = (0x3fU & 
                                           ((IData)(vlSelf->testbench__DOT__beh_inst__DOT__greedy_return__Vstatic__remain) 
                                            - ((IData)(5U) 
                                               * (IData)(vlSelf->testbench__DOT__beh_inst__DOT__greedy_return__Vstatic__take))));
                                    vlSelf->testbench__DOT__beh_inst__DOT__greedy_return__Vstatic__take 
                                        = (0x3fU & 
                                           VL_SHIFTR_III(6,6,32, (IData)(vlSelf->testbench__DOT__beh_inst__DOT__greedy_return__Vstatic__remain), 1U));
                                    if (((IData)(vlSelf->testbench__DOT__beh_inst__DOT__greedy_return__Vstatic__take) 
                                         > (IData)(vlSelf->testbench__DOT__beh_inst__DOT__qty_c02))) {
                                        vlSelf->testbench__DOT__beh_inst__DOT__greedy_return__Vstatic__take 
                                            = vlSelf->testbench__DOT__beh_inst__DOT__qty_c02;
                                    }
                                    __Vtask_testbench__DOT__beh_inst__DOT__greedy_return__1024__out02 
                                        = vlSelf->testbench__DOT__beh_inst__DOT__greedy_return__Vstatic__take;
                                    __Vtask_testbench__DOT__beh_inst__DOT__greedy_return__1024__next02 
                                        = (0x3fU & 
                                           ((IData)(vlSelf->testbench__DOT__beh_inst__DOT__qty_c02) 
                                            - (IData)(vlSelf->testbench__DOT__beh_inst__DOT__greedy_return__Vstatic__take)));
                                    vlSelf->testbench__DOT__beh_inst__DOT__greedy_return__Vstatic__remain 
                                        = (0x3fU & 
                                           ((IData)(vlSelf->testbench__DOT__beh_inst__DOT__greedy_return__Vstatic__remain) 
                                            - VL_SHIFTL_III(6,6,32, (IData)(vlSelf->testbench__DOT__beh_inst__DOT__greedy_return__Vstatic__take), 1U)));
                                    vlSelf->testbench__DOT__beh_inst__DOT__greedy_return__Vstatic__take 
                                        = vlSelf->testbench__DOT__beh_inst__DOT__greedy_return__Vstatic__remain;
                                    if (((IData)(vlSelf->testbench__DOT__beh_inst__DOT__greedy_return__Vstatic__take) 
                                         > (IData)(vlSelf->testbench__DOT__beh_inst__DOT__qty_c01))) {
                                        vlSelf->testbench__DOT__beh_inst__DOT__greedy_return__Vstatic__take 
                                            = vlSelf->testbench__DOT__beh_inst__DOT__qty_c01;
                                    }
                                    __Vtask_testbench__DOT__beh_inst__DOT__greedy_return__1024__out01 
                                        = vlSelf->testbench__DOT__beh_inst__DOT__greedy_return__Vstatic__take;
                                    __Vtask_testbench__DOT__beh_inst__DOT__greedy_return__1024__next01 
                                        = (0x3fU & 
                                           ((IData)(vlSelf->testbench__DOT__beh_inst__DOT__qty_c01) 
                                            - (IData)(vlSelf->testbench__DOT__beh_inst__DOT__greedy_return__Vstatic__take)));
                                    vlSelf->testbench__DOT__beh_inst__DOT__greedy_return__Vstatic__remain 
                                        = (0x3fU & 
                                           ((IData)(vlSelf->testbench__DOT__beh_inst__DOT__greedy_return__Vstatic__remain) 
                                            - (IData)(vlSelf->testbench__DOT__beh_inst__DOT__greedy_return__Vstatic__take)));
                                    __Vtask_testbench__DOT__beh_inst__DOT__greedy_return__1024__returned 
                                        = (0x3fU & 
                                           ((IData)(__Vtask_testbench__DOT__beh_inst__DOT__greedy_return__1024__amount) 
                                            - (IData)(vlSelf->testbench__DOT__beh_inst__DOT__greedy_return__Vstatic__remain)));
                                    vlSelf->testbench__DOT__beh_inst__DOT__greedy_out_10 
                                        = __Vtask_testbench__DOT__beh_inst__DOT__greedy_return__1024__out10;
                                    vlSelf->testbench__DOT__beh_inst__DOT__greedy_out_05 
                                        = __Vtask_testbench__DOT__beh_inst__DOT__greedy_return__1024__out05;
                                    vlSelf->testbench__DOT__beh_inst__DOT__greedy_out_02 
                                        = __Vtask_testbench__DOT__beh_inst__DOT__greedy_return__1024__out02;
                                    vlSelf->testbench__DOT__beh_inst__DOT__greedy_out_01 
                                        = __Vtask_testbench__DOT__beh_inst__DOT__greedy_return__1024__out01;
                                    vlSelf->testbench__DOT__beh_inst__DOT__greedy_next_10 
                                        = __Vtask_testbench__DOT__beh_inst__DOT__greedy_return__1024__next10;
                                    vlSelf->testbench__DOT__beh_inst__DOT__greedy_next_05 
                                        = __Vtask_testbench__DOT__beh_inst__DOT__greedy_return__1024__next05;
                                    vlSelf->testbench__DOT__beh_inst__DOT__greedy_next_02 
                                        = __Vtask_testbench__DOT__beh_inst__DOT__greedy_return__1024__next02;
                                    vlSelf->testbench__DOT__beh_inst__DOT__greedy_next_01 
                                        = __Vtask_testbench__DOT__beh_inst__DOT__greedy_return__1024__next01;
                                    vlSelf->testbench__DOT__beh_inst__DOT__greedy_returned 
                                        = __Vtask_testbench__DOT__beh_inst__DOT__greedy_return__1024__returned;
                                    vlSelf->testbench__DOT__c10_b 
                                        = vlSelf->testbench__DOT__beh_inst__DOT__greedy_out_10;
                                    vlSelf->testbench__DOT__c05_b 
                                        = vlSelf->testbench__DOT__beh_inst__DOT__greedy_out_05;
                                    vlSelf->testbench__DOT__c02_b 
                                        = vlSelf->testbench__DOT__beh_inst__DOT__greedy_out_02;
                                    vlSelf->testbench__DOT__c01_b 
                                        = vlSelf->testbench__DOT__beh_inst__DOT__greedy_out_01;
                                    __Vdly__testbench__DOT__beh_inst__DOT__qty_c10 
                                        = vlSelf->testbench__DOT__beh_inst__DOT__greedy_next_10;
                                    __Vdly__testbench__DOT__beh_inst__DOT__qty_c05 
                                        = vlSelf->testbench__DOT__beh_inst__DOT__greedy_next_05;
                                    __Vdly__testbench__DOT__beh_inst__DOT__qty_c02 
                                        = vlSelf->testbench__DOT__beh_inst__DOT__greedy_next_02;
                                    __Vdly__testbench__DOT__beh_inst__DOT__qty_c01 
                                        = vlSelf->testbench__DOT__beh_inst__DOT__greedy_next_01;
                                    vlSelf->testbench__DOT__resto_b 
                                        = vlSelf->testbench__DOT__beh_inst__DOT__greedy_returned;
                                    __Vdly__testbench__DOT__disp_b 
                                        = (((IData)(vlSelf->testbench__DOT__beh_inst__DOT__greedy_returned) 
                                            > (IData)(vlSelf->testbench__DOT__disp_b))
                                            ? 0U : 
                                           (0x3ffU 
                                            & ((IData)(vlSelf->testbench__DOT__disp_b) 
                                               - (IData)(vlSelf->testbench__DOT__beh_inst__DOT__greedy_returned))));
                                }
                            } else if ((0U == (IData)(vlSelf->testbench__DOT__beh_inst__DOT__qty_p3))) {
                                vlSelf->testbench__DOT__errore_b 
                                    = (((IData)(vlSelf->testbench__DOT__credito_b) 
                                        < (IData)(vlSelf->testbench__DOT__beh_inst__DOT__price_p3))
                                        ? 3U : 2U);
                                if (((IData)(vlSelf->testbench__DOT__credito_b) 
                                     < (IData)(vlSelf->testbench__DOT__beh_inst__DOT__price_p3))) {
                                    vlSelf->testbench__DOT__resto_b 
                                        = vlSelf->testbench__DOT__beh_inst__DOT__price_p3;
                                }
                                __Vdly__testbench__DOT__beh_inst__DOT__stato = 1U;
                            } else if (((IData)(vlSelf->testbench__DOT__credito_b) 
                                        < (IData)(vlSelf->testbench__DOT__beh_inst__DOT__price_p3))) {
                                vlSelf->testbench__DOT__errore_b = 1U;
                                vlSelf->testbench__DOT__resto_b 
                                    = vlSelf->testbench__DOT__beh_inst__DOT__price_p3;
                                __Vdly__testbench__DOT__beh_inst__DOT__stato = 1U;
                            } else {
                                __Vtask_testbench__DOT__beh_inst__DOT__greedy_return__1025__amount 
                                    = (0x3fU & ((IData)(vlSelf->testbench__DOT__credito_b) 
                                                - (IData)(vlSelf->testbench__DOT__beh_inst__DOT__price_p3)));
                                vlSelf->testbench__DOT__beh_inst__DOT__qty_p3 
                                    = (0x3fU & ((IData)(vlSelf->testbench__DOT__beh_inst__DOT__qty_p3) 
                                                - (IData)(1U)));
                                vlSelf->testbench__DOT__beh_inst__DOT__greedy_return__Vstatic__remain 
                                    = __Vtask_testbench__DOT__beh_inst__DOT__greedy_return__1025__amount;
                                vlSelf->testbench__DOT__p3_b = 1U;
                                vlSelf->testbench__DOT__beh_inst__DOT__current_price 
                                    = vlSelf->testbench__DOT__beh_inst__DOT__price_p3;
                                __Vdly__testbench__DOT__beh_inst__DOT__stato = 3U;
                                vlSelf->testbench__DOT__beh_inst__DOT__greedy_return__Vstatic__take 
                                    = (0x3fU & VL_DIV_III(6, (IData)(vlSelf->testbench__DOT__beh_inst__DOT__greedy_return__Vstatic__remain), (IData)(0xaU)));
                                if (((IData)(vlSelf->testbench__DOT__beh_inst__DOT__greedy_return__Vstatic__take) 
                                     > (IData)(vlSelf->testbench__DOT__beh_inst__DOT__qty_c10))) {
                                    vlSelf->testbench__DOT__beh_inst__DOT__greedy_return__Vstatic__take 
                                        = vlSelf->testbench__DOT__beh_inst__DOT__qty_c10;
                                }
                                __Vdly__testbench__DOT__credito_b = 0U;
                                __Vtask_testbench__DOT__beh_inst__DOT__greedy_return__1025__out10 
                                    = vlSelf->testbench__DOT__beh_inst__DOT__greedy_return__Vstatic__take;
                                __Vtask_testbench__DOT__beh_inst__DOT__greedy_return__1025__next10 
                                    = (0x3fU & ((IData)(vlSelf->testbench__DOT__beh_inst__DOT__qty_c10) 
                                                - (IData)(vlSelf->testbench__DOT__beh_inst__DOT__greedy_return__Vstatic__take)));
                                vlSelf->testbench__DOT__beh_inst__DOT__greedy_return__Vstatic__remain 
                                    = (0x3fU & ((IData)(vlSelf->testbench__DOT__beh_inst__DOT__greedy_return__Vstatic__remain) 
                                                - ((IData)(0xaU) 
                                                   * (IData)(vlSelf->testbench__DOT__beh_inst__DOT__greedy_return__Vstatic__take))));
                                vlSelf->testbench__DOT__beh_inst__DOT__greedy_return__Vstatic__take 
                                    = (0x3fU & VL_DIV_III(6, (IData)(vlSelf->testbench__DOT__beh_inst__DOT__greedy_return__Vstatic__remain), (IData)(5U)));
                                if (((IData)(vlSelf->testbench__DOT__beh_inst__DOT__greedy_return__Vstatic__take) 
                                     > (IData)(vlSelf->testbench__DOT__beh_inst__DOT__qty_c05))) {
                                    vlSelf->testbench__DOT__beh_inst__DOT__greedy_return__Vstatic__take 
                                        = vlSelf->testbench__DOT__beh_inst__DOT__qty_c05;
                                }
                                __Vtask_testbench__DOT__beh_inst__DOT__greedy_return__1025__out05 
                                    = vlSelf->testbench__DOT__beh_inst__DOT__greedy_return__Vstatic__take;
                                __Vtask_testbench__DOT__beh_inst__DOT__greedy_return__1025__next05 
                                    = (0x3fU & ((IData)(vlSelf->testbench__DOT__beh_inst__DOT__qty_c05) 
                                                - (IData)(vlSelf->testbench__DOT__beh_inst__DOT__greedy_return__Vstatic__take)));
                                vlSelf->testbench__DOT__beh_inst__DOT__greedy_return__Vstatic__remain 
                                    = (0x3fU & ((IData)(vlSelf->testbench__DOT__beh_inst__DOT__greedy_return__Vstatic__remain) 
                                                - ((IData)(5U) 
                                                   * (IData)(vlSelf->testbench__DOT__beh_inst__DOT__greedy_return__Vstatic__take))));
                                vlSelf->testbench__DOT__beh_inst__DOT__greedy_return__Vstatic__take 
                                    = (0x3fU & VL_SHIFTR_III(6,6,32, (IData)(vlSelf->testbench__DOT__beh_inst__DOT__greedy_return__Vstatic__remain), 1U));
                                if (((IData)(vlSelf->testbench__DOT__beh_inst__DOT__greedy_return__Vstatic__take) 
                                     > (IData)(vlSelf->testbench__DOT__beh_inst__DOT__qty_c02))) {
                                    vlSelf->testbench__DOT__beh_inst__DOT__greedy_return__Vstatic__take 
                                        = vlSelf->testbench__DOT__beh_inst__DOT__qty_c02;
                                }
                                __Vtask_testbench__DOT__beh_inst__DOT__greedy_return__1025__out02 
                                    = vlSelf->testbench__DOT__beh_inst__DOT__greedy_return__Vstatic__take;
                                __Vtask_testbench__DOT__beh_inst__DOT__greedy_return__1025__next02 
                                    = (0x3fU & ((IData)(vlSelf->testbench__DOT__beh_inst__DOT__qty_c02) 
                                                - (IData)(vlSelf->testbench__DOT__beh_inst__DOT__greedy_return__Vstatic__take)));
                                vlSelf->testbench__DOT__beh_inst__DOT__greedy_return__Vstatic__remain 
                                    = (0x3fU & ((IData)(vlSelf->testbench__DOT__beh_inst__DOT__greedy_return__Vstatic__remain) 
                                                - VL_SHIFTL_III(6,6,32, (IData)(vlSelf->testbench__DOT__beh_inst__DOT__greedy_return__Vstatic__take), 1U)));
                                vlSelf->testbench__DOT__beh_inst__DOT__greedy_return__Vstatic__take 
                                    = vlSelf->testbench__DOT__beh_inst__DOT__greedy_return__Vstatic__remain;
                                if (((IData)(vlSelf->testbench__DOT__beh_inst__DOT__greedy_return__Vstatic__take) 
                                     > (IData)(vlSelf->testbench__DOT__beh_inst__DOT__qty_c01))) {
                                    vlSelf->testbench__DOT__beh_inst__DOT__greedy_return__Vstatic__take 
                                        = vlSelf->testbench__DOT__beh_inst__DOT__qty_c01;
                                }
                                __Vtask_testbench__DOT__beh_inst__DOT__greedy_return__1025__out01 
                                    = vlSelf->testbench__DOT__beh_inst__DOT__greedy_return__Vstatic__take;
                                __Vtask_testbench__DOT__beh_inst__DOT__greedy_return__1025__next01 
                                    = (0x3fU & ((IData)(vlSelf->testbench__DOT__beh_inst__DOT__qty_c01) 
                                                - (IData)(vlSelf->testbench__DOT__beh_inst__DOT__greedy_return__Vstatic__take)));
                                vlSelf->testbench__DOT__beh_inst__DOT__greedy_return__Vstatic__remain 
                                    = (0x3fU & ((IData)(vlSelf->testbench__DOT__beh_inst__DOT__greedy_return__Vstatic__remain) 
                                                - (IData)(vlSelf->testbench__DOT__beh_inst__DOT__greedy_return__Vstatic__take)));
                                __Vtask_testbench__DOT__beh_inst__DOT__greedy_return__1025__returned 
                                    = (0x3fU & ((IData)(__Vtask_testbench__DOT__beh_inst__DOT__greedy_return__1025__amount) 
                                                - (IData)(vlSelf->testbench__DOT__beh_inst__DOT__greedy_return__Vstatic__remain)));
                                vlSelf->testbench__DOT__beh_inst__DOT__greedy_out_10 
                                    = __Vtask_testbench__DOT__beh_inst__DOT__greedy_return__1025__out10;
                                vlSelf->testbench__DOT__beh_inst__DOT__greedy_out_05 
                                    = __Vtask_testbench__DOT__beh_inst__DOT__greedy_return__1025__out05;
                                vlSelf->testbench__DOT__beh_inst__DOT__greedy_out_02 
                                    = __Vtask_testbench__DOT__beh_inst__DOT__greedy_return__1025__out02;
                                vlSelf->testbench__DOT__beh_inst__DOT__greedy_out_01 
                                    = __Vtask_testbench__DOT__beh_inst__DOT__greedy_return__1025__out01;
                                vlSelf->testbench__DOT__beh_inst__DOT__greedy_next_10 
                                    = __Vtask_testbench__DOT__beh_inst__DOT__greedy_return__1025__next10;
                                vlSelf->testbench__DOT__beh_inst__DOT__greedy_next_05 
                                    = __Vtask_testbench__DOT__beh_inst__DOT__greedy_return__1025__next05;
                                vlSelf->testbench__DOT__beh_inst__DOT__greedy_next_02 
                                    = __Vtask_testbench__DOT__beh_inst__DOT__greedy_return__1025__next02;
                                vlSelf->testbench__DOT__beh_inst__DOT__greedy_next_01 
                                    = __Vtask_testbench__DOT__beh_inst__DOT__greedy_return__1025__next01;
                                vlSelf->testbench__DOT__beh_inst__DOT__greedy_returned 
                                    = __Vtask_testbench__DOT__beh_inst__DOT__greedy_return__1025__returned;
                                vlSelf->testbench__DOT__c10_b 
                                    = vlSelf->testbench__DOT__beh_inst__DOT__greedy_out_10;
                                vlSelf->testbench__DOT__c05_b 
                                    = vlSelf->testbench__DOT__beh_inst__DOT__greedy_out_05;
                                vlSelf->testbench__DOT__c02_b 
                                    = vlSelf->testbench__DOT__beh_inst__DOT__greedy_out_02;
                                vlSelf->testbench__DOT__c01_b 
                                    = vlSelf->testbench__DOT__beh_inst__DOT__greedy_out_01;
                                __Vdly__testbench__DOT__beh_inst__DOT__qty_c10 
                                    = vlSelf->testbench__DOT__beh_inst__DOT__greedy_next_10;
                                __Vdly__testbench__DOT__beh_inst__DOT__qty_c05 
                                    = vlSelf->testbench__DOT__beh_inst__DOT__greedy_next_05;
                                __Vdly__testbench__DOT__beh_inst__DOT__qty_c02 
                                    = vlSelf->testbench__DOT__beh_inst__DOT__greedy_next_02;
                                __Vdly__testbench__DOT__beh_inst__DOT__qty_c01 
                                    = vlSelf->testbench__DOT__beh_inst__DOT__greedy_next_01;
                                vlSelf->testbench__DOT__resto_b 
                                    = vlSelf->testbench__DOT__beh_inst__DOT__greedy_returned;
                                __Vdly__testbench__DOT__disp_b 
                                    = (((IData)(vlSelf->testbench__DOT__beh_inst__DOT__greedy_returned) 
                                        > (IData)(vlSelf->testbench__DOT__disp_b))
                                        ? 0U : (0x3ffU 
                                                & ((IData)(vlSelf->testbench__DOT__disp_b) 
                                                   - (IData)(vlSelf->testbench__DOT__beh_inst__DOT__greedy_returned))));
                            }
                        } else if ((1U & (IData)(vlSelf->testbench__DOT__selezione))) {
                            if ((0U == (IData)(vlSelf->testbench__DOT__beh_inst__DOT__qty_p2))) {
                                vlSelf->testbench__DOT__errore_b 
                                    = (((IData)(vlSelf->testbench__DOT__credito_b) 
                                        < (IData)(vlSelf->testbench__DOT__beh_inst__DOT__price_p2))
                                        ? 3U : 2U);
                                if (((IData)(vlSelf->testbench__DOT__credito_b) 
                                     < (IData)(vlSelf->testbench__DOT__beh_inst__DOT__price_p2))) {
                                    vlSelf->testbench__DOT__resto_b 
                                        = vlSelf->testbench__DOT__beh_inst__DOT__price_p2;
                                }
                                __Vdly__testbench__DOT__beh_inst__DOT__stato = 1U;
                            } else if (((IData)(vlSelf->testbench__DOT__credito_b) 
                                        < (IData)(vlSelf->testbench__DOT__beh_inst__DOT__price_p2))) {
                                vlSelf->testbench__DOT__errore_b = 1U;
                                vlSelf->testbench__DOT__resto_b 
                                    = vlSelf->testbench__DOT__beh_inst__DOT__price_p2;
                                __Vdly__testbench__DOT__beh_inst__DOT__stato = 1U;
                            } else {
                                __Vtask_testbench__DOT__beh_inst__DOT__greedy_return__1026__amount 
                                    = (0x3fU & ((IData)(vlSelf->testbench__DOT__credito_b) 
                                                - (IData)(vlSelf->testbench__DOT__beh_inst__DOT__price_p2)));
                                vlSelf->testbench__DOT__beh_inst__DOT__qty_p2 
                                    = (0x3fU & ((IData)(vlSelf->testbench__DOT__beh_inst__DOT__qty_p2) 
                                                - (IData)(1U)));
                                vlSelf->testbench__DOT__beh_inst__DOT__greedy_return__Vstatic__remain 
                                    = __Vtask_testbench__DOT__beh_inst__DOT__greedy_return__1026__amount;
                                vlSelf->testbench__DOT__p2_b = 1U;
                                vlSelf->testbench__DOT__beh_inst__DOT__current_price 
                                    = vlSelf->testbench__DOT__beh_inst__DOT__price_p2;
                                __Vdly__testbench__DOT__beh_inst__DOT__stato = 3U;
                                vlSelf->testbench__DOT__beh_inst__DOT__greedy_return__Vstatic__take 
                                    = (0x3fU & VL_DIV_III(6, (IData)(vlSelf->testbench__DOT__beh_inst__DOT__greedy_return__Vstatic__remain), (IData)(0xaU)));
                                if (((IData)(vlSelf->testbench__DOT__beh_inst__DOT__greedy_return__Vstatic__take) 
                                     > (IData)(vlSelf->testbench__DOT__beh_inst__DOT__qty_c10))) {
                                    vlSelf->testbench__DOT__beh_inst__DOT__greedy_return__Vstatic__take 
                                        = vlSelf->testbench__DOT__beh_inst__DOT__qty_c10;
                                }
                                __Vdly__testbench__DOT__credito_b = 0U;
                                __Vtask_testbench__DOT__beh_inst__DOT__greedy_return__1026__out10 
                                    = vlSelf->testbench__DOT__beh_inst__DOT__greedy_return__Vstatic__take;
                                __Vtask_testbench__DOT__beh_inst__DOT__greedy_return__1026__next10 
                                    = (0x3fU & ((IData)(vlSelf->testbench__DOT__beh_inst__DOT__qty_c10) 
                                                - (IData)(vlSelf->testbench__DOT__beh_inst__DOT__greedy_return__Vstatic__take)));
                                vlSelf->testbench__DOT__beh_inst__DOT__greedy_return__Vstatic__remain 
                                    = (0x3fU & ((IData)(vlSelf->testbench__DOT__beh_inst__DOT__greedy_return__Vstatic__remain) 
                                                - ((IData)(0xaU) 
                                                   * (IData)(vlSelf->testbench__DOT__beh_inst__DOT__greedy_return__Vstatic__take))));
                                vlSelf->testbench__DOT__beh_inst__DOT__greedy_return__Vstatic__take 
                                    = (0x3fU & VL_DIV_III(6, (IData)(vlSelf->testbench__DOT__beh_inst__DOT__greedy_return__Vstatic__remain), (IData)(5U)));
                                if (((IData)(vlSelf->testbench__DOT__beh_inst__DOT__greedy_return__Vstatic__take) 
                                     > (IData)(vlSelf->testbench__DOT__beh_inst__DOT__qty_c05))) {
                                    vlSelf->testbench__DOT__beh_inst__DOT__greedy_return__Vstatic__take 
                                        = vlSelf->testbench__DOT__beh_inst__DOT__qty_c05;
                                }
                                __Vtask_testbench__DOT__beh_inst__DOT__greedy_return__1026__out05 
                                    = vlSelf->testbench__DOT__beh_inst__DOT__greedy_return__Vstatic__take;
                                __Vtask_testbench__DOT__beh_inst__DOT__greedy_return__1026__next05 
                                    = (0x3fU & ((IData)(vlSelf->testbench__DOT__beh_inst__DOT__qty_c05) 
                                                - (IData)(vlSelf->testbench__DOT__beh_inst__DOT__greedy_return__Vstatic__take)));
                                vlSelf->testbench__DOT__beh_inst__DOT__greedy_return__Vstatic__remain 
                                    = (0x3fU & ((IData)(vlSelf->testbench__DOT__beh_inst__DOT__greedy_return__Vstatic__remain) 
                                                - ((IData)(5U) 
                                                   * (IData)(vlSelf->testbench__DOT__beh_inst__DOT__greedy_return__Vstatic__take))));
                                vlSelf->testbench__DOT__beh_inst__DOT__greedy_return__Vstatic__take 
                                    = (0x3fU & VL_SHIFTR_III(6,6,32, (IData)(vlSelf->testbench__DOT__beh_inst__DOT__greedy_return__Vstatic__remain), 1U));
                                if (((IData)(vlSelf->testbench__DOT__beh_inst__DOT__greedy_return__Vstatic__take) 
                                     > (IData)(vlSelf->testbench__DOT__beh_inst__DOT__qty_c02))) {
                                    vlSelf->testbench__DOT__beh_inst__DOT__greedy_return__Vstatic__take 
                                        = vlSelf->testbench__DOT__beh_inst__DOT__qty_c02;
                                }
                                __Vtask_testbench__DOT__beh_inst__DOT__greedy_return__1026__out02 
                                    = vlSelf->testbench__DOT__beh_inst__DOT__greedy_return__Vstatic__take;
                                __Vtask_testbench__DOT__beh_inst__DOT__greedy_return__1026__next02 
                                    = (0x3fU & ((IData)(vlSelf->testbench__DOT__beh_inst__DOT__qty_c02) 
                                                - (IData)(vlSelf->testbench__DOT__beh_inst__DOT__greedy_return__Vstatic__take)));
                                vlSelf->testbench__DOT__beh_inst__DOT__greedy_return__Vstatic__remain 
                                    = (0x3fU & ((IData)(vlSelf->testbench__DOT__beh_inst__DOT__greedy_return__Vstatic__remain) 
                                                - VL_SHIFTL_III(6,6,32, (IData)(vlSelf->testbench__DOT__beh_inst__DOT__greedy_return__Vstatic__take), 1U)));
                                vlSelf->testbench__DOT__beh_inst__DOT__greedy_return__Vstatic__take 
                                    = vlSelf->testbench__DOT__beh_inst__DOT__greedy_return__Vstatic__remain;
                                if (((IData)(vlSelf->testbench__DOT__beh_inst__DOT__greedy_return__Vstatic__take) 
                                     > (IData)(vlSelf->testbench__DOT__beh_inst__DOT__qty_c01))) {
                                    vlSelf->testbench__DOT__beh_inst__DOT__greedy_return__Vstatic__take 
                                        = vlSelf->testbench__DOT__beh_inst__DOT__qty_c01;
                                }
                                __Vtask_testbench__DOT__beh_inst__DOT__greedy_return__1026__out01 
                                    = vlSelf->testbench__DOT__beh_inst__DOT__greedy_return__Vstatic__take;
                                __Vtask_testbench__DOT__beh_inst__DOT__greedy_return__1026__next01 
                                    = (0x3fU & ((IData)(vlSelf->testbench__DOT__beh_inst__DOT__qty_c01) 
                                                - (IData)(vlSelf->testbench__DOT__beh_inst__DOT__greedy_return__Vstatic__take)));
                                vlSelf->testbench__DOT__beh_inst__DOT__greedy_return__Vstatic__remain 
                                    = (0x3fU & ((IData)(vlSelf->testbench__DOT__beh_inst__DOT__greedy_return__Vstatic__remain) 
                                                - (IData)(vlSelf->testbench__DOT__beh_inst__DOT__greedy_return__Vstatic__take)));
                                __Vtask_testbench__DOT__beh_inst__DOT__greedy_return__1026__returned 
                                    = (0x3fU & ((IData)(__Vtask_testbench__DOT__beh_inst__DOT__greedy_return__1026__amount) 
                                                - (IData)(vlSelf->testbench__DOT__beh_inst__DOT__greedy_return__Vstatic__remain)));
                                vlSelf->testbench__DOT__beh_inst__DOT__greedy_out_10 
                                    = __Vtask_testbench__DOT__beh_inst__DOT__greedy_return__1026__out10;
                                vlSelf->testbench__DOT__beh_inst__DOT__greedy_out_05 
                                    = __Vtask_testbench__DOT__beh_inst__DOT__greedy_return__1026__out05;
                                vlSelf->testbench__DOT__beh_inst__DOT__greedy_out_02 
                                    = __Vtask_testbench__DOT__beh_inst__DOT__greedy_return__1026__out02;
                                vlSelf->testbench__DOT__beh_inst__DOT__greedy_out_01 
                                    = __Vtask_testbench__DOT__beh_inst__DOT__greedy_return__1026__out01;
                                vlSelf->testbench__DOT__beh_inst__DOT__greedy_next_10 
                                    = __Vtask_testbench__DOT__beh_inst__DOT__greedy_return__1026__next10;
                                vlSelf->testbench__DOT__beh_inst__DOT__greedy_next_05 
                                    = __Vtask_testbench__DOT__beh_inst__DOT__greedy_return__1026__next05;
                                vlSelf->testbench__DOT__beh_inst__DOT__greedy_next_02 
                                    = __Vtask_testbench__DOT__beh_inst__DOT__greedy_return__1026__next02;
                                vlSelf->testbench__DOT__beh_inst__DOT__greedy_next_01 
                                    = __Vtask_testbench__DOT__beh_inst__DOT__greedy_return__1026__next01;
                                vlSelf->testbench__DOT__beh_inst__DOT__greedy_returned 
                                    = __Vtask_testbench__DOT__beh_inst__DOT__greedy_return__1026__returned;
                                vlSelf->testbench__DOT__c10_b 
                                    = vlSelf->testbench__DOT__beh_inst__DOT__greedy_out_10;
                                vlSelf->testbench__DOT__c05_b 
                                    = vlSelf->testbench__DOT__beh_inst__DOT__greedy_out_05;
                                vlSelf->testbench__DOT__c02_b 
                                    = vlSelf->testbench__DOT__beh_inst__DOT__greedy_out_02;
                                vlSelf->testbench__DOT__c01_b 
                                    = vlSelf->testbench__DOT__beh_inst__DOT__greedy_out_01;
                                __Vdly__testbench__DOT__beh_inst__DOT__qty_c10 
                                    = vlSelf->testbench__DOT__beh_inst__DOT__greedy_next_10;
                                __Vdly__testbench__DOT__beh_inst__DOT__qty_c05 
                                    = vlSelf->testbench__DOT__beh_inst__DOT__greedy_next_05;
                                __Vdly__testbench__DOT__beh_inst__DOT__qty_c02 
                                    = vlSelf->testbench__DOT__beh_inst__DOT__greedy_next_02;
                                __Vdly__testbench__DOT__beh_inst__DOT__qty_c01 
                                    = vlSelf->testbench__DOT__beh_inst__DOT__greedy_next_01;
                                vlSelf->testbench__DOT__resto_b 
                                    = vlSelf->testbench__DOT__beh_inst__DOT__greedy_returned;
                                __Vdly__testbench__DOT__disp_b 
                                    = (((IData)(vlSelf->testbench__DOT__beh_inst__DOT__greedy_returned) 
                                        > (IData)(vlSelf->testbench__DOT__disp_b))
                                        ? 0U : (0x3ffU 
                                                & ((IData)(vlSelf->testbench__DOT__disp_b) 
                                                   - (IData)(vlSelf->testbench__DOT__beh_inst__DOT__greedy_returned))));
                            }
                        } else if ((0U == (IData)(vlSelf->testbench__DOT__beh_inst__DOT__qty_p1))) {
                            vlSelf->testbench__DOT__errore_b 
                                = (((IData)(vlSelf->testbench__DOT__credito_b) 
                                    < (IData)(vlSelf->testbench__DOT__beh_inst__DOT__price_p1))
                                    ? 3U : 2U);
                            if (((IData)(vlSelf->testbench__DOT__credito_b) 
                                 < (IData)(vlSelf->testbench__DOT__beh_inst__DOT__price_p1))) {
                                vlSelf->testbench__DOT__resto_b 
                                    = vlSelf->testbench__DOT__beh_inst__DOT__price_p1;
                            }
                            __Vdly__testbench__DOT__beh_inst__DOT__stato = 1U;
                        } else if (((IData)(vlSelf->testbench__DOT__credito_b) 
                                    < (IData)(vlSelf->testbench__DOT__beh_inst__DOT__price_p1))) {
                            vlSelf->testbench__DOT__errore_b = 1U;
                            vlSelf->testbench__DOT__resto_b 
                                = vlSelf->testbench__DOT__beh_inst__DOT__price_p1;
                            __Vdly__testbench__DOT__beh_inst__DOT__stato = 1U;
                        } else {
                            __Vtask_testbench__DOT__beh_inst__DOT__greedy_return__1027__amount 
                                = (0x3fU & ((IData)(vlSelf->testbench__DOT__credito_b) 
                                            - (IData)(vlSelf->testbench__DOT__beh_inst__DOT__price_p1)));
                            vlSelf->testbench__DOT__beh_inst__DOT__qty_p1 
                                = (0x3fU & ((IData)(vlSelf->testbench__DOT__beh_inst__DOT__qty_p1) 
                                            - (IData)(1U)));
                            vlSelf->testbench__DOT__beh_inst__DOT__greedy_return__Vstatic__remain 
                                = __Vtask_testbench__DOT__beh_inst__DOT__greedy_return__1027__amount;
                            vlSelf->testbench__DOT__p1_b = 1U;
                            vlSelf->testbench__DOT__beh_inst__DOT__current_price 
                                = vlSelf->testbench__DOT__beh_inst__DOT__price_p1;
                            __Vdly__testbench__DOT__beh_inst__DOT__stato = 3U;
                            vlSelf->testbench__DOT__beh_inst__DOT__greedy_return__Vstatic__take 
                                = (0x3fU & VL_DIV_III(6, (IData)(vlSelf->testbench__DOT__beh_inst__DOT__greedy_return__Vstatic__remain), (IData)(0xaU)));
                            if (((IData)(vlSelf->testbench__DOT__beh_inst__DOT__greedy_return__Vstatic__take) 
                                 > (IData)(vlSelf->testbench__DOT__beh_inst__DOT__qty_c10))) {
                                vlSelf->testbench__DOT__beh_inst__DOT__greedy_return__Vstatic__take 
                                    = vlSelf->testbench__DOT__beh_inst__DOT__qty_c10;
                            }
                            __Vdly__testbench__DOT__credito_b = 0U;
                            __Vtask_testbench__DOT__beh_inst__DOT__greedy_return__1027__out10 
                                = vlSelf->testbench__DOT__beh_inst__DOT__greedy_return__Vstatic__take;
                            __Vtask_testbench__DOT__beh_inst__DOT__greedy_return__1027__next10 
                                = (0x3fU & ((IData)(vlSelf->testbench__DOT__beh_inst__DOT__qty_c10) 
                                            - (IData)(vlSelf->testbench__DOT__beh_inst__DOT__greedy_return__Vstatic__take)));
                            vlSelf->testbench__DOT__beh_inst__DOT__greedy_return__Vstatic__remain 
                                = (0x3fU & ((IData)(vlSelf->testbench__DOT__beh_inst__DOT__greedy_return__Vstatic__remain) 
                                            - ((IData)(0xaU) 
                                               * (IData)(vlSelf->testbench__DOT__beh_inst__DOT__greedy_return__Vstatic__take))));
                            vlSelf->testbench__DOT__beh_inst__DOT__greedy_return__Vstatic__take 
                                = (0x3fU & VL_DIV_III(6, (IData)(vlSelf->testbench__DOT__beh_inst__DOT__greedy_return__Vstatic__remain), (IData)(5U)));
                            if (((IData)(vlSelf->testbench__DOT__beh_inst__DOT__greedy_return__Vstatic__take) 
                                 > (IData)(vlSelf->testbench__DOT__beh_inst__DOT__qty_c05))) {
                                vlSelf->testbench__DOT__beh_inst__DOT__greedy_return__Vstatic__take 
                                    = vlSelf->testbench__DOT__beh_inst__DOT__qty_c05;
                            }
                            __Vtask_testbench__DOT__beh_inst__DOT__greedy_return__1027__out05 
                                = vlSelf->testbench__DOT__beh_inst__DOT__greedy_return__Vstatic__take;
                            __Vtask_testbench__DOT__beh_inst__DOT__greedy_return__1027__next05 
                                = (0x3fU & ((IData)(vlSelf->testbench__DOT__beh_inst__DOT__qty_c05) 
                                            - (IData)(vlSelf->testbench__DOT__beh_inst__DOT__greedy_return__Vstatic__take)));
                            vlSelf->testbench__DOT__beh_inst__DOT__greedy_return__Vstatic__remain 
                                = (0x3fU & ((IData)(vlSelf->testbench__DOT__beh_inst__DOT__greedy_return__Vstatic__remain) 
                                            - ((IData)(5U) 
                                               * (IData)(vlSelf->testbench__DOT__beh_inst__DOT__greedy_return__Vstatic__take))));
                            vlSelf->testbench__DOT__beh_inst__DOT__greedy_return__Vstatic__take 
                                = (0x3fU & VL_SHIFTR_III(6,6,32, (IData)(vlSelf->testbench__DOT__beh_inst__DOT__greedy_return__Vstatic__remain), 1U));
                            if (((IData)(vlSelf->testbench__DOT__beh_inst__DOT__greedy_return__Vstatic__take) 
                                 > (IData)(vlSelf->testbench__DOT__beh_inst__DOT__qty_c02))) {
                                vlSelf->testbench__DOT__beh_inst__DOT__greedy_return__Vstatic__take 
                                    = vlSelf->testbench__DOT__beh_inst__DOT__qty_c02;
                            }
                            __Vtask_testbench__DOT__beh_inst__DOT__greedy_return__1027__out02 
                                = vlSelf->testbench__DOT__beh_inst__DOT__greedy_return__Vstatic__take;
                            __Vtask_testbench__DOT__beh_inst__DOT__greedy_return__1027__next02 
                                = (0x3fU & ((IData)(vlSelf->testbench__DOT__beh_inst__DOT__qty_c02) 
                                            - (IData)(vlSelf->testbench__DOT__beh_inst__DOT__greedy_return__Vstatic__take)));
                            vlSelf->testbench__DOT__beh_inst__DOT__greedy_return__Vstatic__remain 
                                = (0x3fU & ((IData)(vlSelf->testbench__DOT__beh_inst__DOT__greedy_return__Vstatic__remain) 
                                            - VL_SHIFTL_III(6,6,32, (IData)(vlSelf->testbench__DOT__beh_inst__DOT__greedy_return__Vstatic__take), 1U)));
                            vlSelf->testbench__DOT__beh_inst__DOT__greedy_return__Vstatic__take 
                                = vlSelf->testbench__DOT__beh_inst__DOT__greedy_return__Vstatic__remain;
                            if (((IData)(vlSelf->testbench__DOT__beh_inst__DOT__greedy_return__Vstatic__take) 
                                 > (IData)(vlSelf->testbench__DOT__beh_inst__DOT__qty_c01))) {
                                vlSelf->testbench__DOT__beh_inst__DOT__greedy_return__Vstatic__take 
                                    = vlSelf->testbench__DOT__beh_inst__DOT__qty_c01;
                            }
                            __Vtask_testbench__DOT__beh_inst__DOT__greedy_return__1027__out01 
                                = vlSelf->testbench__DOT__beh_inst__DOT__greedy_return__Vstatic__take;
                            __Vtask_testbench__DOT__beh_inst__DOT__greedy_return__1027__next01 
                                = (0x3fU & ((IData)(vlSelf->testbench__DOT__beh_inst__DOT__qty_c01) 
                                            - (IData)(vlSelf->testbench__DOT__beh_inst__DOT__greedy_return__Vstatic__take)));
                            vlSelf->testbench__DOT__beh_inst__DOT__greedy_return__Vstatic__remain 
                                = (0x3fU & ((IData)(vlSelf->testbench__DOT__beh_inst__DOT__greedy_return__Vstatic__remain) 
                                            - (IData)(vlSelf->testbench__DOT__beh_inst__DOT__greedy_return__Vstatic__take)));
                            __Vtask_testbench__DOT__beh_inst__DOT__greedy_return__1027__returned 
                                = (0x3fU & ((IData)(__Vtask_testbench__DOT__beh_inst__DOT__greedy_return__1027__amount) 
                                            - (IData)(vlSelf->testbench__DOT__beh_inst__DOT__greedy_return__Vstatic__remain)));
                            vlSelf->testbench__DOT__beh_inst__DOT__greedy_out_10 
                                = __Vtask_testbench__DOT__beh_inst__DOT__greedy_return__1027__out10;
                            vlSelf->testbench__DOT__beh_inst__DOT__greedy_out_05 
                                = __Vtask_testbench__DOT__beh_inst__DOT__greedy_return__1027__out05;
                            vlSelf->testbench__DOT__beh_inst__DOT__greedy_out_02 
                                = __Vtask_testbench__DOT__beh_inst__DOT__greedy_return__1027__out02;
                            vlSelf->testbench__DOT__beh_inst__DOT__greedy_out_01 
                                = __Vtask_testbench__DOT__beh_inst__DOT__greedy_return__1027__out01;
                            vlSelf->testbench__DOT__beh_inst__DOT__greedy_next_10 
                                = __Vtask_testbench__DOT__beh_inst__DOT__greedy_return__1027__next10;
                            vlSelf->testbench__DOT__beh_inst__DOT__greedy_next_05 
                                = __Vtask_testbench__DOT__beh_inst__DOT__greedy_return__1027__next05;
                            vlSelf->testbench__DOT__beh_inst__DOT__greedy_next_02 
                                = __Vtask_testbench__DOT__beh_inst__DOT__greedy_return__1027__next02;
                            vlSelf->testbench__DOT__beh_inst__DOT__greedy_next_01 
                                = __Vtask_testbench__DOT__beh_inst__DOT__greedy_return__1027__next01;
                            vlSelf->testbench__DOT__beh_inst__DOT__greedy_returned 
                                = __Vtask_testbench__DOT__beh_inst__DOT__greedy_return__1027__returned;
                            vlSelf->testbench__DOT__c10_b 
                                = vlSelf->testbench__DOT__beh_inst__DOT__greedy_out_10;
                            vlSelf->testbench__DOT__c05_b 
                                = vlSelf->testbench__DOT__beh_inst__DOT__greedy_out_05;
                            vlSelf->testbench__DOT__c02_b 
                                = vlSelf->testbench__DOT__beh_inst__DOT__greedy_out_02;
                            vlSelf->testbench__DOT__c01_b 
                                = vlSelf->testbench__DOT__beh_inst__DOT__greedy_out_01;
                            __Vdly__testbench__DOT__beh_inst__DOT__qty_c10 
                                = vlSelf->testbench__DOT__beh_inst__DOT__greedy_next_10;
                            __Vdly__testbench__DOT__beh_inst__DOT__qty_c05 
                                = vlSelf->testbench__DOT__beh_inst__DOT__greedy_next_05;
                            __Vdly__testbench__DOT__beh_inst__DOT__qty_c02 
                                = vlSelf->testbench__DOT__beh_inst__DOT__greedy_next_02;
                            __Vdly__testbench__DOT__beh_inst__DOT__qty_c01 
                                = vlSelf->testbench__DOT__beh_inst__DOT__greedy_next_01;
                            vlSelf->testbench__DOT__resto_b 
                                = vlSelf->testbench__DOT__beh_inst__DOT__greedy_returned;
                            __Vdly__testbench__DOT__disp_b 
                                = (((IData)(vlSelf->testbench__DOT__beh_inst__DOT__greedy_returned) 
                                    > (IData)(vlSelf->testbench__DOT__disp_b))
                                    ? 0U : (0x3ffU 
                                            & ((IData)(vlSelf->testbench__DOT__disp_b) 
                                               - (IData)(vlSelf->testbench__DOT__beh_inst__DOT__greedy_returned))));
                        }
                    } else {
                        vlSelf->testbench__DOT__errore_b = 2U;
                        __Vdly__testbench__DOT__beh_inst__DOT__stato = 1U;
                    }
                } else {
                    __Vdly__testbench__DOT__beh_inst__DOT__stato = 2U;
                }
            }
        } else if ((1U & (IData)(vlSelf->testbench__DOT__beh_inst__DOT__stato))) {
            vlSelf->testbench__DOT__p1_b = 0U;
            vlSelf->testbench__DOT__p2_b = 0U;
            vlSelf->testbench__DOT__p3_b = 0U;
            vlSelf->testbench__DOT__p4_b = 0U;
            vlSelf->testbench__DOT__errore_b = 0U;
            vlSelf->testbench__DOT__resto_b = 0U;
            vlSelf->testbench__DOT__c01_b = 0U;
            vlSelf->testbench__DOT__c02_b = 0U;
            vlSelf->testbench__DOT__c05_b = 0U;
            vlSelf->testbench__DOT__c10_b = 0U;
            if (vlSelf->testbench__DOT__annulla) {
                __Vtask_testbench__DOT__beh_inst__DOT__greedy_return__1028__amount 
                    = vlSelf->testbench__DOT__credito_b;
                vlSelf->testbench__DOT__beh_inst__DOT__greedy_return__Vstatic__remain 
                    = __Vtask_testbench__DOT__beh_inst__DOT__greedy_return__1028__amount;
                __Vdly__testbench__DOT__beh_inst__DOT__stato = 1U;
                vlSelf->testbench__DOT__beh_inst__DOT__greedy_return__Vstatic__take 
                    = (0x3fU & VL_DIV_III(6, (IData)(vlSelf->testbench__DOT__beh_inst__DOT__greedy_return__Vstatic__remain), (IData)(0xaU)));
                if (((IData)(vlSelf->testbench__DOT__beh_inst__DOT__greedy_return__Vstatic__take) 
                     > (IData)(vlSelf->testbench__DOT__beh_inst__DOT__qty_c10))) {
                    vlSelf->testbench__DOT__beh_inst__DOT__greedy_return__Vstatic__take 
                        = vlSelf->testbench__DOT__beh_inst__DOT__qty_c10;
                }
                __Vdly__testbench__DOT__credito_b = 0U;
                __Vtask_testbench__DOT__beh_inst__DOT__greedy_return__1028__out10 
                    = vlSelf->testbench__DOT__beh_inst__DOT__greedy_return__Vstatic__take;
                __Vtask_testbench__DOT__beh_inst__DOT__greedy_return__1028__next10 
                    = (0x3fU & ((IData)(vlSelf->testbench__DOT__beh_inst__DOT__qty_c10) 
                                - (IData)(vlSelf->testbench__DOT__beh_inst__DOT__greedy_return__Vstatic__take)));
                vlSelf->testbench__DOT__beh_inst__DOT__greedy_return__Vstatic__remain 
                    = (0x3fU & ((IData)(vlSelf->testbench__DOT__beh_inst__DOT__greedy_return__Vstatic__remain) 
                                - ((IData)(0xaU) * (IData)(vlSelf->testbench__DOT__beh_inst__DOT__greedy_return__Vstatic__take))));
                vlSelf->testbench__DOT__beh_inst__DOT__greedy_return__Vstatic__take 
                    = (0x3fU & VL_DIV_III(6, (IData)(vlSelf->testbench__DOT__beh_inst__DOT__greedy_return__Vstatic__remain), (IData)(5U)));
                if (((IData)(vlSelf->testbench__DOT__beh_inst__DOT__greedy_return__Vstatic__take) 
                     > (IData)(vlSelf->testbench__DOT__beh_inst__DOT__qty_c05))) {
                    vlSelf->testbench__DOT__beh_inst__DOT__greedy_return__Vstatic__take 
                        = vlSelf->testbench__DOT__beh_inst__DOT__qty_c05;
                }
                __Vtask_testbench__DOT__beh_inst__DOT__greedy_return__1028__out05 
                    = vlSelf->testbench__DOT__beh_inst__DOT__greedy_return__Vstatic__take;
                __Vtask_testbench__DOT__beh_inst__DOT__greedy_return__1028__next05 
                    = (0x3fU & ((IData)(vlSelf->testbench__DOT__beh_inst__DOT__qty_c05) 
                                - (IData)(vlSelf->testbench__DOT__beh_inst__DOT__greedy_return__Vstatic__take)));
                vlSelf->testbench__DOT__beh_inst__DOT__greedy_return__Vstatic__remain 
                    = (0x3fU & ((IData)(vlSelf->testbench__DOT__beh_inst__DOT__greedy_return__Vstatic__remain) 
                                - ((IData)(5U) * (IData)(vlSelf->testbench__DOT__beh_inst__DOT__greedy_return__Vstatic__take))));
                vlSelf->testbench__DOT__beh_inst__DOT__greedy_return__Vstatic__take 
                    = (0x3fU & VL_SHIFTR_III(6,6,32, (IData)(vlSelf->testbench__DOT__beh_inst__DOT__greedy_return__Vstatic__remain), 1U));
                if (((IData)(vlSelf->testbench__DOT__beh_inst__DOT__greedy_return__Vstatic__take) 
                     > (IData)(vlSelf->testbench__DOT__beh_inst__DOT__qty_c02))) {
                    vlSelf->testbench__DOT__beh_inst__DOT__greedy_return__Vstatic__take 
                        = vlSelf->testbench__DOT__beh_inst__DOT__qty_c02;
                }
                __Vtask_testbench__DOT__beh_inst__DOT__greedy_return__1028__out02 
                    = vlSelf->testbench__DOT__beh_inst__DOT__greedy_return__Vstatic__take;
                __Vtask_testbench__DOT__beh_inst__DOT__greedy_return__1028__next02 
                    = (0x3fU & ((IData)(vlSelf->testbench__DOT__beh_inst__DOT__qty_c02) 
                                - (IData)(vlSelf->testbench__DOT__beh_inst__DOT__greedy_return__Vstatic__take)));
                vlSelf->testbench__DOT__beh_inst__DOT__greedy_return__Vstatic__remain 
                    = (0x3fU & ((IData)(vlSelf->testbench__DOT__beh_inst__DOT__greedy_return__Vstatic__remain) 
                                - VL_SHIFTL_III(6,6,32, (IData)(vlSelf->testbench__DOT__beh_inst__DOT__greedy_return__Vstatic__take), 1U)));
                vlSelf->testbench__DOT__beh_inst__DOT__greedy_return__Vstatic__take 
                    = vlSelf->testbench__DOT__beh_inst__DOT__greedy_return__Vstatic__remain;
                if (((IData)(vlSelf->testbench__DOT__beh_inst__DOT__greedy_return__Vstatic__take) 
                     > (IData)(vlSelf->testbench__DOT__beh_inst__DOT__qty_c01))) {
                    vlSelf->testbench__DOT__beh_inst__DOT__greedy_return__Vstatic__take 
                        = vlSelf->testbench__DOT__beh_inst__DOT__qty_c01;
                }
                __Vtask_testbench__DOT__beh_inst__DOT__greedy_return__1028__out01 
                    = vlSelf->testbench__DOT__beh_inst__DOT__greedy_return__Vstatic__take;
                __Vtask_testbench__DOT__beh_inst__DOT__greedy_return__1028__next01 
                    = (0x3fU & ((IData)(vlSelf->testbench__DOT__beh_inst__DOT__qty_c01) 
                                - (IData)(vlSelf->testbench__DOT__beh_inst__DOT__greedy_return__Vstatic__take)));
                vlSelf->testbench__DOT__beh_inst__DOT__greedy_return__Vstatic__remain 
                    = (0x3fU & ((IData)(vlSelf->testbench__DOT__beh_inst__DOT__greedy_return__Vstatic__remain) 
                                - (IData)(vlSelf->testbench__DOT__beh_inst__DOT__greedy_return__Vstatic__take)));
                __Vtask_testbench__DOT__beh_inst__DOT__greedy_return__1028__returned 
                    = (0x3fU & ((IData)(__Vtask_testbench__DOT__beh_inst__DOT__greedy_return__1028__amount) 
                                - (IData)(vlSelf->testbench__DOT__beh_inst__DOT__greedy_return__Vstatic__remain)));
                vlSelf->testbench__DOT__beh_inst__DOT__greedy_out_10 
                    = __Vtask_testbench__DOT__beh_inst__DOT__greedy_return__1028__out10;
                vlSelf->testbench__DOT__beh_inst__DOT__greedy_out_05 
                    = __Vtask_testbench__DOT__beh_inst__DOT__greedy_return__1028__out05;
                vlSelf->testbench__DOT__beh_inst__DOT__greedy_out_02 
                    = __Vtask_testbench__DOT__beh_inst__DOT__greedy_return__1028__out02;
                vlSelf->testbench__DOT__beh_inst__DOT__greedy_out_01 
                    = __Vtask_testbench__DOT__beh_inst__DOT__greedy_return__1028__out01;
                vlSelf->testbench__DOT__beh_inst__DOT__greedy_next_10 
                    = __Vtask_testbench__DOT__beh_inst__DOT__greedy_return__1028__next10;
                vlSelf->testbench__DOT__beh_inst__DOT__greedy_next_05 
                    = __Vtask_testbench__DOT__beh_inst__DOT__greedy_return__1028__next05;
                vlSelf->testbench__DOT__beh_inst__DOT__greedy_next_02 
                    = __Vtask_testbench__DOT__beh_inst__DOT__greedy_return__1028__next02;
                vlSelf->testbench__DOT__beh_inst__DOT__greedy_next_01 
                    = __Vtask_testbench__DOT__beh_inst__DOT__greedy_return__1028__next01;
                vlSelf->testbench__DOT__beh_inst__DOT__greedy_returned 
                    = __Vtask_testbench__DOT__beh_inst__DOT__greedy_return__1028__returned;
                vlSelf->testbench__DOT__c10_b = vlSelf->testbench__DOT__beh_inst__DOT__greedy_out_10;
                vlSelf->testbench__DOT__c05_b = vlSelf->testbench__DOT__beh_inst__DOT__greedy_out_05;
                vlSelf->testbench__DOT__c02_b = vlSelf->testbench__DOT__beh_inst__DOT__greedy_out_02;
                vlSelf->testbench__DOT__c01_b = vlSelf->testbench__DOT__beh_inst__DOT__greedy_out_01;
                __Vdly__testbench__DOT__beh_inst__DOT__qty_c10 
                    = vlSelf->testbench__DOT__beh_inst__DOT__greedy_next_10;
                __Vdly__testbench__DOT__beh_inst__DOT__qty_c05 
                    = vlSelf->testbench__DOT__beh_inst__DOT__greedy_next_05;
                __Vdly__testbench__DOT__beh_inst__DOT__qty_c02 
                    = vlSelf->testbench__DOT__beh_inst__DOT__greedy_next_02;
                __Vdly__testbench__DOT__beh_inst__DOT__qty_c01 
                    = vlSelf->testbench__DOT__beh_inst__DOT__greedy_next_01;
                vlSelf->testbench__DOT__resto_b = vlSelf->testbench__DOT__beh_inst__DOT__greedy_returned;
                __Vdly__testbench__DOT__disp_b = (((IData)(vlSelf->testbench__DOT__beh_inst__DOT__greedy_returned) 
                                                   > (IData)(vlSelf->testbench__DOT__disp_b))
                                                   ? 0U
                                                   : 
                                                  (0x3ffU 
                                                   & ((IData)(vlSelf->testbench__DOT__disp_b) 
                                                      - (IData)(vlSelf->testbench__DOT__beh_inst__DOT__greedy_returned))));
            } else if ((0U != ([&]() {
                            __Vfunc_testbench__DOT__beh_inst__DOT__coin_value__1029__code 
                                = vlSelf->testbench__DOT__coin;
                            __Vfunc_testbench__DOT__beh_inst__DOT__coin_value__1029__Vfuncout 
                                = ((4U & (IData)(__Vfunc_testbench__DOT__beh_inst__DOT__coin_value__1029__code))
                                    ? ((2U & (IData)(__Vfunc_testbench__DOT__beh_inst__DOT__coin_value__1029__code))
                                        ? ((1U & (IData)(__Vfunc_testbench__DOT__beh_inst__DOT__coin_value__1029__code))
                                            ? 0xaU : 5U)
                                        : ((1U & (IData)(__Vfunc_testbench__DOT__beh_inst__DOT__coin_value__1029__code))
                                            ? 2U : 1U))
                                    : 0U);
                        }(), (IData)(__Vfunc_testbench__DOT__beh_inst__DOT__coin_value__1029__Vfuncout)))) {
                if ((4U & (IData)(vlSelf->testbench__DOT__coin))) {
                    if ((2U & (IData)(vlSelf->testbench__DOT__coin))) {
                        if ((1U & (IData)(vlSelf->testbench__DOT__coin))) {
                            __Vdly__testbench__DOT__beh_inst__DOT__qty_c10 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->testbench__DOT__beh_inst__DOT__qty_c10)));
                        } else {
                            __Vdly__testbench__DOT__beh_inst__DOT__qty_c05 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->testbench__DOT__beh_inst__DOT__qty_c05)));
                        }
                    } else if ((1U & (IData)(vlSelf->testbench__DOT__coin))) {
                        __Vdly__testbench__DOT__beh_inst__DOT__qty_c02 
                            = (0x3fU & ((IData)(1U) 
                                        + (IData)(vlSelf->testbench__DOT__beh_inst__DOT__qty_c02)));
                    } else {
                        __Vdly__testbench__DOT__beh_inst__DOT__qty_c01 
                            = (0x3fU & ((IData)(1U) 
                                        + (IData)(vlSelf->testbench__DOT__beh_inst__DOT__qty_c01)));
                    }
                }
                __Vdly__testbench__DOT__credito_b = 
                    (0x3fU & ((IData)(vlSelf->testbench__DOT__credito_b) 
                              + ([&]() {
                                __Vfunc_testbench__DOT__beh_inst__DOT__coin_value__1030__code 
                                    = vlSelf->testbench__DOT__coin;
                                __Vfunc_testbench__DOT__beh_inst__DOT__coin_value__1030__Vfuncout 
                                    = ((4U & (IData)(__Vfunc_testbench__DOT__beh_inst__DOT__coin_value__1030__code))
                                        ? ((2U & (IData)(__Vfunc_testbench__DOT__beh_inst__DOT__coin_value__1030__code))
                                            ? ((1U 
                                                & (IData)(__Vfunc_testbench__DOT__beh_inst__DOT__coin_value__1030__code))
                                                ? 0xaU
                                                : 5U)
                                            : ((1U 
                                                & (IData)(__Vfunc_testbench__DOT__beh_inst__DOT__coin_value__1030__code))
                                                ? 2U
                                                : 1U))
                                        : 0U);
                            }(), (IData)(__Vfunc_testbench__DOT__beh_inst__DOT__coin_value__1030__Vfuncout))));
                __Vdly__testbench__DOT__disp_b = (0x3ffU 
                                                  & ((IData)(vlSelf->testbench__DOT__disp_b) 
                                                     + 
                                                     VL_EXTEND_II(10,6, 
                                                                  ([&]() {
                                    __Vfunc_testbench__DOT__beh_inst__DOT__coin_value__1031__code 
                                        = vlSelf->testbench__DOT__coin;
                                    __Vfunc_testbench__DOT__beh_inst__DOT__coin_value__1031__Vfuncout 
                                        = ((4U & (IData)(__Vfunc_testbench__DOT__beh_inst__DOT__coin_value__1031__code))
                                            ? ((2U 
                                                & (IData)(__Vfunc_testbench__DOT__beh_inst__DOT__coin_value__1031__code))
                                                ? (
                                                   (1U 
                                                    & (IData)(__Vfunc_testbench__DOT__beh_inst__DOT__coin_value__1031__code))
                                                    ? 0xaU
                                                    : 5U)
                                                : (
                                                   (1U 
                                                    & (IData)(__Vfunc_testbench__DOT__beh_inst__DOT__coin_value__1031__code))
                                                    ? 2U
                                                    : 1U))
                                            : 0U);
                                }(), (IData)(__Vfunc_testbench__DOT__beh_inst__DOT__coin_value__1031__Vfuncout)))));
                __Vdly__testbench__DOT__beh_inst__DOT__stato = 2U;
            } else {
                __Vdly__testbench__DOT__beh_inst__DOT__stato = 1U;
            }
        } else {
            vlSelf->testbench__DOT__beh_inst__DOT__init_value 
                = (((IData)(vlSelf->testbench__DOT__coin) 
                    << 3U) | (IData)(vlSelf->testbench__DOT__selezione));
            __Vdly__testbench__DOT__credito_b = 0U;
            vlSelf->testbench__DOT__p1_b = 0U;
            vlSelf->testbench__DOT__p2_b = 0U;
            vlSelf->testbench__DOT__p3_b = 0U;
            vlSelf->testbench__DOT__p4_b = 0U;
            vlSelf->testbench__DOT__errore_b = 0U;
            vlSelf->testbench__DOT__resto_b = 0U;
            vlSelf->testbench__DOT__c01_b = 0U;
            vlSelf->testbench__DOT__c02_b = 0U;
            vlSelf->testbench__DOT__c05_b = 0U;
            vlSelf->testbench__DOT__c10_b = 0U;
            vlSelf->testbench__DOT__beh_inst__DOT__current_price = 0U;
            if ((8U & (IData)(vlSelf->testbench__DOT__beh_inst__DOT__init_counter))) {
                if ((1U & (~ ((IData)(vlSelf->testbench__DOT__beh_inst__DOT__init_counter) 
                              >> 2U)))) {
                    if ((2U & (IData)(vlSelf->testbench__DOT__beh_inst__DOT__init_counter))) {
                        if ((1U & (IData)(vlSelf->testbench__DOT__beh_inst__DOT__init_counter))) {
                            __Vdly__testbench__DOT__beh_inst__DOT__qty_c10 
                                = (0x3fU & (IData)(vlSelf->testbench__DOT__beh_inst__DOT__init_value));
                            __Vdly__testbench__DOT__beh_inst__DOT__stato = 1U;
                            __Vdly__testbench__DOT__beh_inst__DOT__init_counter = 0U;
                            __Vdly__testbench__DOT__disp_b 
                                = (0x3ffU & ((((IData)(vlSelf->testbench__DOT__beh_inst__DOT__qty_c01) 
                                               + VL_SHIFTL_III(10,10,32, (IData)(vlSelf->testbench__DOT__beh_inst__DOT__qty_c02), 1U)) 
                                              + ((IData)(vlSelf->testbench__DOT__beh_inst__DOT__qty_c05) 
                                                 + 
                                                 VL_SHIFTL_III(10,10,32, (IData)(vlSelf->testbench__DOT__beh_inst__DOT__qty_c05), 2U))) 
                                             + (VL_SHIFTL_III(10,10,32, 
                                                              (0x3fU 
                                                               & (IData)(vlSelf->testbench__DOT__beh_inst__DOT__init_value)), 3U) 
                                                + VL_SHIFTL_III(10,10,32, 
                                                                (0x3fU 
                                                                 & (IData)(vlSelf->testbench__DOT__beh_inst__DOT__init_value)), 1U))));
                        } else {
                            __Vdly__testbench__DOT__beh_inst__DOT__qty_c05 
                                = (0x3fU & (IData)(vlSelf->testbench__DOT__beh_inst__DOT__init_value));
                        }
                    } else if ((1U & (IData)(vlSelf->testbench__DOT__beh_inst__DOT__init_counter))) {
                        __Vdly__testbench__DOT__beh_inst__DOT__qty_c02 
                            = (0x3fU & (IData)(vlSelf->testbench__DOT__beh_inst__DOT__init_value));
                    } else {
                        __Vdly__testbench__DOT__beh_inst__DOT__qty_c01 
                            = (0x3fU & (IData)(vlSelf->testbench__DOT__beh_inst__DOT__init_value));
                    }
                }
            } else if ((4U & (IData)(vlSelf->testbench__DOT__beh_inst__DOT__init_counter))) {
                if ((2U & (IData)(vlSelf->testbench__DOT__beh_inst__DOT__init_counter))) {
                    if ((1U & (IData)(vlSelf->testbench__DOT__beh_inst__DOT__init_counter))) {
                        vlSelf->testbench__DOT__beh_inst__DOT__price_p4 
                            = (0x3fU & (IData)(vlSelf->testbench__DOT__beh_inst__DOT__init_value));
                    } else {
                        vlSelf->testbench__DOT__beh_inst__DOT__qty_p4 
                            = (0x3fU & (IData)(vlSelf->testbench__DOT__beh_inst__DOT__init_value));
                    }
                } else if ((1U & (IData)(vlSelf->testbench__DOT__beh_inst__DOT__init_counter))) {
                    vlSelf->testbench__DOT__beh_inst__DOT__price_p3 
                        = (0x3fU & (IData)(vlSelf->testbench__DOT__beh_inst__DOT__init_value));
                } else {
                    vlSelf->testbench__DOT__beh_inst__DOT__qty_p3 
                        = (0x3fU & (IData)(vlSelf->testbench__DOT__beh_inst__DOT__init_value));
                }
            } else if ((2U & (IData)(vlSelf->testbench__DOT__beh_inst__DOT__init_counter))) {
                if ((1U & (IData)(vlSelf->testbench__DOT__beh_inst__DOT__init_counter))) {
                    vlSelf->testbench__DOT__beh_inst__DOT__price_p2 
                        = (0x3fU & (IData)(vlSelf->testbench__DOT__beh_inst__DOT__init_value));
                } else {
                    vlSelf->testbench__DOT__beh_inst__DOT__qty_p2 
                        = (0x3fU & (IData)(vlSelf->testbench__DOT__beh_inst__DOT__init_value));
                }
            } else if ((1U & (IData)(vlSelf->testbench__DOT__beh_inst__DOT__init_counter))) {
                vlSelf->testbench__DOT__beh_inst__DOT__price_p1 
                    = (0x3fU & (IData)(vlSelf->testbench__DOT__beh_inst__DOT__init_value));
            } else {
                vlSelf->testbench__DOT__beh_inst__DOT__qty_p1 
                    = (0x3fU & (IData)(vlSelf->testbench__DOT__beh_inst__DOT__init_value));
            }
            if ((0xbU > (IData)(vlSelf->testbench__DOT__beh_inst__DOT__init_counter))) {
                __Vdly__testbench__DOT__beh_inst__DOT__init_counter 
                    = (0xfU & ((IData)(1U) + (IData)(vlSelf->testbench__DOT__beh_inst__DOT__init_counter)));
            }
        }
    } else {
        vlSelf->testbench__DOT__beh_inst__DOT__qty_p1 = 0U;
        vlSelf->testbench__DOT__beh_inst__DOT__qty_p2 = 0U;
        vlSelf->testbench__DOT__beh_inst__DOT__qty_p3 = 0U;
        vlSelf->testbench__DOT__beh_inst__DOT__qty_p4 = 0U;
        __Vdly__testbench__DOT__beh_inst__DOT__stato = 0U;
        __Vdly__testbench__DOT__beh_inst__DOT__init_counter = 0U;
        __Vdly__testbench__DOT__credito_b = 0U;
        vlSelf->testbench__DOT__p1_b = 0U;
        vlSelf->testbench__DOT__p2_b = 0U;
        vlSelf->testbench__DOT__p3_b = 0U;
        vlSelf->testbench__DOT__p4_b = 0U;
        vlSelf->testbench__DOT__errore_b = 0U;
        vlSelf->testbench__DOT__resto_b = 0U;
        __Vdly__testbench__DOT__disp_b = 0U;
        vlSelf->testbench__DOT__c01_b = 0U;
        vlSelf->testbench__DOT__c02_b = 0U;
        vlSelf->testbench__DOT__c05_b = 0U;
        vlSelf->testbench__DOT__c10_b = 0U;
        vlSelf->testbench__DOT__beh_inst__DOT__price_p1 = 0U;
        vlSelf->testbench__DOT__beh_inst__DOT__price_p2 = 0U;
        vlSelf->testbench__DOT__beh_inst__DOT__price_p3 = 0U;
        vlSelf->testbench__DOT__beh_inst__DOT__price_p4 = 0U;
        __Vdly__testbench__DOT__beh_inst__DOT__qty_c01 = 0U;
        __Vdly__testbench__DOT__beh_inst__DOT__qty_c02 = 0U;
        __Vdly__testbench__DOT__beh_inst__DOT__qty_c05 = 0U;
        __Vdly__testbench__DOT__beh_inst__DOT__qty_c10 = 0U;
        vlSelf->testbench__DOT__beh_inst__DOT__current_price = 0U;
    }
    if (vlSelf->testbench__DOT__rst) {
        if (((IData)(vlSelf->testbench__DOT__conferma) 
             & (IData)(vlSelf->testbench__DOT__str_inst__DOT__valid_sel))) {
            vlSelf->testbench__DOT__str_inst__DOT__sel_latched 
                = vlSelf->testbench__DOT__selezione;
        }
        if (((IData)(vlSelf->testbench__DOT__str_inst__DOT__init_qty_p4) 
             | (IData)(vlSelf->testbench__DOT__str_inst__DOT__do_p4))) {
            vlSelf->testbench__DOT__str_inst__DOT__qty_p4_q 
                = vlSelf->testbench__DOT__str_inst__DOT__qty_p4_d;
        }
        if (((IData)(vlSelf->testbench__DOT__str_inst__DOT__init_qty_p3) 
             | (IData)(vlSelf->testbench__DOT__str_inst__DOT__do_p3))) {
            vlSelf->testbench__DOT__str_inst__DOT__qty_p3_q 
                = vlSelf->testbench__DOT__str_inst__DOT__qty_p3_d;
        }
        if (((IData)(vlSelf->testbench__DOT__str_inst__DOT__init_qty_p2) 
             | (IData)(vlSelf->testbench__DOT__str_inst__DOT__do_p2))) {
            vlSelf->testbench__DOT__str_inst__DOT__qty_p2_q 
                = vlSelf->testbench__DOT__str_inst__DOT__qty_p2_d;
        }
        if (((IData)(vlSelf->testbench__DOT__str_inst__DOT__init_qty_p1) 
             | (IData)(vlSelf->testbench__DOT__str_inst__DOT__do_p1))) {
            vlSelf->testbench__DOT__str_inst__DOT__qty_p1_q 
                = vlSelf->testbench__DOT__str_inst__DOT__qty_p1_d;
        }
        if (vlSelf->testbench__DOT__str_inst__DOT__init_price_p4) {
            vlSelf->testbench__DOT__str_inst__DOT__price_p4_q 
                = vlSelf->testbench__DOT__str_inst__DOT__price_p4_d;
        }
        if (vlSelf->testbench__DOT__str_inst__DOT__init_price_p3) {
            vlSelf->testbench__DOT__str_inst__DOT__price_p3_q 
                = vlSelf->testbench__DOT__str_inst__DOT__price_p3_d;
        }
        if (vlSelf->testbench__DOT__str_inst__DOT__init_price_p2) {
            vlSelf->testbench__DOT__str_inst__DOT__price_p2_q 
                = vlSelf->testbench__DOT__str_inst__DOT__price_p2_d;
        }
        if (vlSelf->testbench__DOT__str_inst__DOT__init_price_p1) {
            vlSelf->testbench__DOT__str_inst__DOT__price_p1_q 
                = vlSelf->testbench__DOT__str_inst__DOT__price_p1_d;
        }
        if (((IData)(vlSelf->testbench__DOT__str_inst__DOT__mode_init) 
             | (IData)(vlSelf->testbench__DOT__str_inst__DOT____VdfgTmp_h4b786e47__0))) {
            vlSelf->testbench__DOT__str_inst__DOT__credito_q 
                = vlSelf->testbench__DOT__str_inst__DOT__credito_d;
        }
        vlSelf->testbench__DOT__str_inst__DOT__fsm__DOT__stato 
            = vlSelf->testbench__DOT__str_inst__DOT__fsm__DOT__next_stato;
    } else {
        vlSelf->testbench__DOT__str_inst__DOT__sel_latched = 0U;
        vlSelf->testbench__DOT__str_inst__DOT__qty_p4_q = 0U;
        vlSelf->testbench__DOT__str_inst__DOT__qty_p3_q = 0U;
        vlSelf->testbench__DOT__str_inst__DOT__qty_p2_q = 0U;
        vlSelf->testbench__DOT__str_inst__DOT__qty_p1_q = 0U;
        vlSelf->testbench__DOT__str_inst__DOT__price_p4_q = 0U;
        vlSelf->testbench__DOT__str_inst__DOT__price_p3_q = 0U;
        vlSelf->testbench__DOT__str_inst__DOT__price_p2_q = 0U;
        vlSelf->testbench__DOT__str_inst__DOT__price_p1_q = 0U;
        vlSelf->testbench__DOT__str_inst__DOT__credito_q = 0U;
        vlSelf->testbench__DOT__str_inst__DOT__fsm__DOT__stato = 0U;
    }
    vlSelf->testbench__DOT__credito_b = __Vdly__testbench__DOT__credito_b;
    vlSelf->testbench__DOT__beh_inst__DOT__qty_c10 
        = __Vdly__testbench__DOT__beh_inst__DOT__qty_c10;
    vlSelf->testbench__DOT__beh_inst__DOT__qty_c05 
        = __Vdly__testbench__DOT__beh_inst__DOT__qty_c05;
    vlSelf->testbench__DOT__beh_inst__DOT__qty_c02 
        = __Vdly__testbench__DOT__beh_inst__DOT__qty_c02;
    vlSelf->testbench__DOT__beh_inst__DOT__qty_c01 
        = __Vdly__testbench__DOT__beh_inst__DOT__qty_c01;
    vlSelf->testbench__DOT__disp_b = __Vdly__testbench__DOT__disp_b;
    vlSelf->testbench__DOT__beh_inst__DOT__init_counter 
        = __Vdly__testbench__DOT__beh_inst__DOT__init_counter;
    vlSelf->testbench__DOT__beh_inst__DOT__stato = __Vdly__testbench__DOT__beh_inst__DOT__stato;
    vlSelf->testbench__DOT__str_inst__DOT__do_erogazione = 0U;
    vlSelf->testbench__DOT__str_inst__DOT__clear_outputs = 0U;
    if ((2U & (IData)(vlSelf->testbench__DOT__str_inst__DOT__fsm__DOT__stato))) {
        if ((1U & (IData)(vlSelf->testbench__DOT__str_inst__DOT__fsm__DOT__stato))) {
            vlSelf->testbench__DOT__str_inst__DOT__do_erogazione = 1U;
            vlSelf->testbench__DOT__str_inst__DOT__clear_outputs = 1U;
        }
    } else if ((1U & (IData)(vlSelf->testbench__DOT__str_inst__DOT__fsm__DOT__stato))) {
        vlSelf->testbench__DOT__str_inst__DOT__clear_outputs = 1U;
    }
    vlSelf->testbench__DOT__str_inst__DOT__mode_init = 0U;
    if ((1U & (~ ((IData)(vlSelf->testbench__DOT__str_inst__DOT__fsm__DOT__stato) 
                  >> 1U)))) {
        if ((1U & (~ (IData)(vlSelf->testbench__DOT__str_inst__DOT__fsm__DOT__stato)))) {
            vlSelf->testbench__DOT__str_inst__DOT__mode_init = 1U;
        }
    }
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
}

VL_INLINE_OPT void Vtestbench___024root___nba_comb__TOP__0(Vtestbench___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___nba_comb__TOP__0\n"); );
    // Init
    CData/*2:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    // Body
    __Vtableidx1 = vlSelf->testbench__DOT__coin;
    vlSelf->testbench__DOT__str_inst__DOT__coin_value 
        = Vtestbench__ConstPool__TABLE_h98991338_0[__Vtableidx1];
    vlSelf->testbench__DOT__str_inst__DOT__cfg_value 
        = (((IData)(vlSelf->testbench__DOT__coin) << 3U) 
           | (IData)(vlSelf->testbench__DOT__selezione));
    vlSelf->testbench__DOT__str_inst__DOT__valid_sel 
        = ((4U == (IData)(vlSelf->testbench__DOT__selezione)) 
           | ((5U == (IData)(vlSelf->testbench__DOT__selezione)) 
              | ((6U == (IData)(vlSelf->testbench__DOT__selezione)) 
                 | (7U == (IData)(vlSelf->testbench__DOT__selezione)))));
}

VL_INLINE_OPT void Vtestbench___024root___nba_comb__TOP__1(Vtestbench___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___nba_comb__TOP__1\n"); );
    // Body
    vlSelf->testbench__DOT__str_inst__DOT__sel_price 
        = ((2U & (IData)(vlSelf->testbench__DOT__selezione))
            ? ((1U & (IData)(vlSelf->testbench__DOT__selezione))
                ? (IData)(vlSelf->testbench__DOT__str_inst__DOT__price_p4_q)
                : (IData)(vlSelf->testbench__DOT__str_inst__DOT__price_p3_q))
            : ((1U & (IData)(vlSelf->testbench__DOT__selezione))
                ? (IData)(vlSelf->testbench__DOT__str_inst__DOT__price_p2_q)
                : (IData)(vlSelf->testbench__DOT__str_inst__DOT__price_p1_q)));
    vlSelf->testbench__DOT__str_inst__DOT__do_add_coin = 0U;
    vlSelf->testbench__DOT__str_inst__DOT__do_cancel = 0U;
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
    vlSelf->testbench__DOT__str_inst__DOT__stock_empty 
        = ((IData)(vlSelf->testbench__DOT__str_inst__DOT__valid_sel) 
           & (0U == ((2U & (IData)(vlSelf->testbench__DOT__selezione))
                      ? ((1U & (IData)(vlSelf->testbench__DOT__selezione))
                          ? (IData)(vlSelf->testbench__DOT__str_inst__DOT__qty_p4_q)
                          : (IData)(vlSelf->testbench__DOT__str_inst__DOT__qty_p3_q))
                      : ((1U & (IData)(vlSelf->testbench__DOT__selezione))
                          ? (IData)(vlSelf->testbench__DOT__str_inst__DOT__qty_p2_q)
                          : (IData)(vlSelf->testbench__DOT__str_inst__DOT__qty_p1_q)))));
    vlSelf->testbench__DOT__str_inst__DOT__credito_ge_selprice 
        = ((IData)(vlSelf->testbench__DOT__str_inst__DOT__credito_q) 
           >= (IData)(vlSelf->testbench__DOT__str_inst__DOT__sel_price));
    if ((2U & (IData)(vlSelf->testbench__DOT__str_inst__DOT__fsm__DOT__stato))) {
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
    vlSelf->testbench__DOT__str_inst__DOT__c_prod4 = 0U;
    vlSelf->testbench__DOT__str_inst__DOT__c_prod3 = 0U;
    vlSelf->testbench__DOT__str_inst__DOT__c_prod2 = 0U;
    vlSelf->testbench__DOT__str_inst__DOT__c_prod1 = 0U;
    vlSelf->testbench__DOT__str_inst__DOT__credito_insuff 
        = ((~ (IData)(vlSelf->testbench__DOT__str_inst__DOT__credito_ge_selprice)) 
           & (IData)(vlSelf->testbench__DOT__str_inst__DOT__valid_sel));
    vlSelf->testbench__DOT__str_inst__DOT__do_err = 0U;
    vlSelf->testbench__DOT__str_inst__DOT__do_ok = 0U;
    if ((2U & (IData)(vlSelf->testbench__DOT__str_inst__DOT__fsm__DOT__stato))) {
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
        vlSelf->testbench__DOT__str_inst__DOT__fsm__DOT__next_stato 
            = ((1U & (IData)(vlSelf->testbench__DOT__str_inst__DOT__fsm__DOT__stato))
                ? 1U : ((IData)(vlSelf->testbench__DOT__annulla)
                         ? 1U : ((0U != (IData)(vlSelf->testbench__DOT__coin))
                                  ? 2U : ((IData)(vlSelf->testbench__DOT__conferma)
                                           ? ((IData)(vlSelf->testbench__DOT__str_inst__DOT__valid_sel)
                                               ? (((IData)(vlSelf->testbench__DOT__str_inst__DOT__credito_ge_selprice) 
                                                   & (~ (IData)(vlSelf->testbench__DOT__str_inst__DOT__stock_empty)))
                                                   ? 3U
                                                   : 1U)
                                               : 1U)
                                           : 2U))));
    } else if ((1U & (IData)(vlSelf->testbench__DOT__str_inst__DOT__fsm__DOT__stato))) {
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

void Vtestbench___024root___eval_nba(Vtestbench___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___eval_nba\n"); );
    // Body
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtestbench___024root___nba_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[4U] = 1U;
    }
    if ((6ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtestbench___024root___nba_comb__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[5U] = 1U;
    }
    if ((7ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtestbench___024root___nba_comb__TOP__1(vlSelf);
        vlSelf->__Vm_traceActivity[6U] = 1U;
    }
}

void Vtestbench___024root___timing_resume(Vtestbench___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___timing_resume\n"); );
    // Body
    if ((4ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VtrigSched_hf8270553__0.resume("@(posedge testbench.clk)");
    }
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VdlySched.resume();
    }
}

void Vtestbench___024root___timing_commit(Vtestbench___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___timing_commit\n"); );
    // Body
    if ((! (4ULL & vlSelf->__VactTriggered.word(0U)))) {
        vlSelf->__VtrigSched_hf8270553__0.commit("@(posedge testbench.clk)");
    }
}

void Vtestbench___024root___eval_triggers__act(Vtestbench___024root* vlSelf);

bool Vtestbench___024root___eval_phase__act(Vtestbench___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<3> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vtestbench___024root___eval_triggers__act(vlSelf);
    Vtestbench___024root___timing_commit(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        Vtestbench___024root___timing_resume(vlSelf);
        Vtestbench___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vtestbench___024root___eval_phase__nba(Vtestbench___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vtestbench___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtestbench___024root___dump_triggers__nba(Vtestbench___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtestbench___024root___dump_triggers__act(Vtestbench___024root* vlSelf);
#endif  // VL_DEBUG

void Vtestbench___024root___eval(Vtestbench___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___eval\n"); );
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vtestbench___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("testbench.v", 3, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                Vtestbench___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("testbench.v", 3, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (Vtestbench___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (Vtestbench___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vtestbench___024root___eval_debug_assertions(Vtestbench___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root___eval_debug_assertions\n"); );
}
#endif  // VL_DEBUG
