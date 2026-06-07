// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_structural.h for the primary calling header

#include "Vtb_structural__pch.h"
#include "Vtb_structural___024root.h"

VlCoroutine Vtb_structural___024root___eval_initial__TOP__Vtiming__0(Vtb_structural___024root* vlSelf);
VlCoroutine Vtb_structural___024root___eval_initial__TOP__Vtiming__1(Vtb_structural___024root* vlSelf);

void Vtb_structural___024root___eval_initial(Vtb_structural___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_structural__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_structural___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vm_traceActivity[1U] = 1U;
    Vtb_structural___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vtb_structural___024root___eval_initial__TOP__Vtiming__1(vlSelf);
    vlSelf->__Vtrigprevexpr___TOP__tb_structural__DOT__clk__0 
        = vlSelf->tb_structural__DOT__clk;
    vlSelf->__Vtrigprevexpr___TOP__tb_structural__DOT__rst__0 
        = vlSelf->tb_structural__DOT__rst;
}

VL_INLINE_OPT VlCoroutine Vtb_structural___024root___eval_initial__TOP__Vtiming__1(Vtb_structural___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_structural__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_structural___024root___eval_initial__TOP__Vtiming__1\n"); );
    // Body
    while (1U) {
        co_await vlSelf->__VdlySched.delay(0x1388ULL, 
                                           nullptr, 
                                           "structural/tb_structural.v", 
                                           46);
        vlSelf->tb_structural__DOT__clk = (1U & (~ (IData)(vlSelf->tb_structural__DOT__clk)));
    }
}

extern const VlUnpacked<CData/*5:0*/, 8> Vtb_structural__ConstPool__TABLE_h98991338_0;

VL_INLINE_OPT void Vtb_structural___024root___act_comb__TOP__0(Vtb_structural___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_structural__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_structural___024root___act_comb__TOP__0\n"); );
    // Init
    CData/*2:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    // Body
    __Vtableidx1 = vlSelf->tb_structural__DOT__coin;
    vlSelf->tb_structural__DOT__dut__DOT__coin_value 
        = Vtb_structural__ConstPool__TABLE_h98991338_0
        [__Vtableidx1];
    vlSelf->tb_structural__DOT__dut__DOT__do_add_coin = 0U;
    vlSelf->tb_structural__DOT__dut__DOT__cfg_value 
        = (((IData)(vlSelf->tb_structural__DOT__coin) 
            << 3U) | (IData)(vlSelf->tb_structural__DOT__selezione));
    vlSelf->tb_structural__DOT__dut__DOT__do_cancel = 0U;
    vlSelf->tb_structural__DOT__dut__DOT__sel_price 
        = ((2U & (IData)(vlSelf->tb_structural__DOT__selezione))
            ? ((1U & (IData)(vlSelf->tb_structural__DOT__selezione))
                ? (IData)(vlSelf->tb_structural__DOT__dut__DOT__price_p4_q)
                : (IData)(vlSelf->tb_structural__DOT__dut__DOT__price_p3_q))
            : ((1U & (IData)(vlSelf->tb_structural__DOT__selezione))
                ? (IData)(vlSelf->tb_structural__DOT__dut__DOT__price_p2_q)
                : (IData)(vlSelf->tb_structural__DOT__dut__DOT__price_p1_q)));
    vlSelf->tb_structural__DOT__dut__DOT__valid_sel 
        = ((4U == (IData)(vlSelf->tb_structural__DOT__selezione)) 
           | ((5U == (IData)(vlSelf->tb_structural__DOT__selezione)) 
              | ((6U == (IData)(vlSelf->tb_structural__DOT__selezione)) 
                 | (7U == (IData)(vlSelf->tb_structural__DOT__selezione)))));
    if ((2U & (IData)(vlSelf->tb_structural__DOT__dut__DOT__fsm__DOT__stato))) {
        if ((1U & (~ (IData)(vlSelf->tb_structural__DOT__dut__DOT__fsm__DOT__stato)))) {
            if ((1U & (~ (IData)(vlSelf->tb_structural__DOT__annulla)))) {
                if ((0U != (IData)(vlSelf->tb_structural__DOT__coin))) {
                    vlSelf->tb_structural__DOT__dut__DOT__do_add_coin = 1U;
                }
            }
        }
    } else if ((1U & (IData)(vlSelf->tb_structural__DOT__dut__DOT__fsm__DOT__stato))) {
        if ((1U & (~ (IData)(vlSelf->tb_structural__DOT__annulla)))) {
            if ((0U != (IData)(vlSelf->tb_structural__DOT__coin))) {
                vlSelf->tb_structural__DOT__dut__DOT__do_add_coin = 1U;
            }
        }
    }
    vlSelf->tb_structural__DOT__dut__DOT__add_c01 = 
        ((IData)(vlSelf->tb_structural__DOT__dut__DOT__do_add_coin) 
         & (4U == (IData)(vlSelf->tb_structural__DOT__coin)));
    vlSelf->tb_structural__DOT__dut__DOT__add_c02 = 
        ((IData)(vlSelf->tb_structural__DOT__dut__DOT__do_add_coin) 
         & (5U == (IData)(vlSelf->tb_structural__DOT__coin)));
    vlSelf->tb_structural__DOT__dut__DOT__add_c05 = 
        ((IData)(vlSelf->tb_structural__DOT__dut__DOT__do_add_coin) 
         & (6U == (IData)(vlSelf->tb_structural__DOT__coin)));
    vlSelf->tb_structural__DOT__dut__DOT__add_c10 = 
        ((IData)(vlSelf->tb_structural__DOT__dut__DOT__do_add_coin) 
         & (7U == (IData)(vlSelf->tb_structural__DOT__coin)));
    vlSelf->tb_structural__DOT__dut__DOT__price_p1_d 
        = ((IData)(vlSelf->tb_structural__DOT__dut__DOT__init_price_p1)
            ? (IData)(vlSelf->tb_structural__DOT__dut__DOT__cfg_value)
            : (IData)(vlSelf->tb_structural__DOT__dut__DOT__price_p1_q));
    vlSelf->tb_structural__DOT__dut__DOT__price_p2_d 
        = ((IData)(vlSelf->tb_structural__DOT__dut__DOT__init_price_p2)
            ? (IData)(vlSelf->tb_structural__DOT__dut__DOT__cfg_value)
            : (IData)(vlSelf->tb_structural__DOT__dut__DOT__price_p2_q));
    vlSelf->tb_structural__DOT__dut__DOT__price_p3_d 
        = ((IData)(vlSelf->tb_structural__DOT__dut__DOT__init_price_p3)
            ? (IData)(vlSelf->tb_structural__DOT__dut__DOT__cfg_value)
            : (IData)(vlSelf->tb_structural__DOT__dut__DOT__price_p3_q));
    vlSelf->tb_structural__DOT__dut__DOT__price_p4_d 
        = ((IData)(vlSelf->tb_structural__DOT__dut__DOT__init_price_p4)
            ? (IData)(vlSelf->tb_structural__DOT__dut__DOT__cfg_value)
            : (IData)(vlSelf->tb_structural__DOT__dut__DOT__price_p4_q));
    vlSelf->tb_structural__DOT__dut__DOT__credito_ge_selprice 
        = ((IData)(vlSelf->tb_structural__DOT__dut__DOT__credito_q) 
           >= (IData)(vlSelf->tb_structural__DOT__dut__DOT__sel_price));
    vlSelf->tb_structural__DOT__dut__DOT__stock_empty 
        = ((IData)(vlSelf->tb_structural__DOT__dut__DOT__valid_sel) 
           & (0U == ((2U & (IData)(vlSelf->tb_structural__DOT__selezione))
                      ? ((1U & (IData)(vlSelf->tb_structural__DOT__selezione))
                          ? (IData)(vlSelf->tb_structural__DOT__dut__DOT__qty_p4_q)
                          : (IData)(vlSelf->tb_structural__DOT__dut__DOT__qty_p3_q))
                      : ((1U & (IData)(vlSelf->tb_structural__DOT__selezione))
                          ? (IData)(vlSelf->tb_structural__DOT__dut__DOT__qty_p2_q)
                          : (IData)(vlSelf->tb_structural__DOT__dut__DOT__qty_p1_q)))));
    vlSelf->tb_structural__DOT__dut__DOT__credito_insuff 
        = ((~ (IData)(vlSelf->tb_structural__DOT__dut__DOT__credito_ge_selprice)) 
           & (IData)(vlSelf->tb_structural__DOT__dut__DOT__valid_sel));
    vlSelf->tb_structural__DOT__dut__DOT__c_prod4 = 0U;
    vlSelf->tb_structural__DOT__dut__DOT__c_prod3 = 0U;
    vlSelf->tb_structural__DOT__dut__DOT__c_prod2 = 0U;
    vlSelf->tb_structural__DOT__dut__DOT__c_prod1 = 0U;
    vlSelf->tb_structural__DOT__dut__DOT__do_err = 0U;
    vlSelf->tb_structural__DOT__dut__DOT__do_ok = 0U;
    if ((2U & (IData)(vlSelf->tb_structural__DOT__dut__DOT__fsm__DOT__stato))) {
        if ((1U & (~ (IData)(vlSelf->tb_structural__DOT__dut__DOT__fsm__DOT__stato)))) {
            if (vlSelf->tb_structural__DOT__annulla) {
                vlSelf->tb_structural__DOT__dut__DOT__do_cancel = 1U;
            }
            if ((1U & (~ (IData)(vlSelf->tb_structural__DOT__annulla)))) {
                if ((0U == (IData)(vlSelf->tb_structural__DOT__coin))) {
                    if (vlSelf->tb_structural__DOT__conferma) {
                        if (vlSelf->tb_structural__DOT__dut__DOT__valid_sel) {
                            if (((IData)(vlSelf->tb_structural__DOT__dut__DOT__credito_ge_selprice) 
                                 & (~ (IData)(vlSelf->tb_structural__DOT__dut__DOT__stock_empty)))) {
                                if ((4U & (IData)(vlSelf->tb_structural__DOT__selezione))) {
                                    if ((2U & (IData)(vlSelf->tb_structural__DOT__selezione))) {
                                        if ((1U & (IData)(vlSelf->tb_structural__DOT__selezione))) {
                                            vlSelf->tb_structural__DOT__dut__DOT__c_prod4 = 1U;
                                        }
                                        if ((1U & (~ (IData)(vlSelf->tb_structural__DOT__selezione)))) {
                                            vlSelf->tb_structural__DOT__dut__DOT__c_prod3 = 1U;
                                        }
                                    }
                                    if ((1U & (~ ((IData)(vlSelf->tb_structural__DOT__selezione) 
                                                  >> 1U)))) {
                                        if ((1U & (IData)(vlSelf->tb_structural__DOT__selezione))) {
                                            vlSelf->tb_structural__DOT__dut__DOT__c_prod2 = 1U;
                                        }
                                        if ((1U & (~ (IData)(vlSelf->tb_structural__DOT__selezione)))) {
                                            vlSelf->tb_structural__DOT__dut__DOT__c_prod1 = 1U;
                                        }
                                    }
                                }
                                vlSelf->tb_structural__DOT__dut__DOT__do_ok = 1U;
                            }
                            if ((1U & (~ ((IData)(vlSelf->tb_structural__DOT__dut__DOT__credito_ge_selprice) 
                                          & (~ (IData)(vlSelf->tb_structural__DOT__dut__DOT__stock_empty)))))) {
                                vlSelf->tb_structural__DOT__dut__DOT__do_err = 1U;
                            }
                        } else {
                            vlSelf->tb_structural__DOT__dut__DOT__do_err = 1U;
                        }
                    }
                }
            }
        }
        vlSelf->tb_structural__DOT__dut__DOT__fsm__DOT__next_stato 
            = ((1U & (IData)(vlSelf->tb_structural__DOT__dut__DOT__fsm__DOT__stato))
                ? 1U : ((IData)(vlSelf->tb_structural__DOT__annulla)
                         ? 1U : ((0U != (IData)(vlSelf->tb_structural__DOT__coin))
                                  ? 2U : ((IData)(vlSelf->tb_structural__DOT__conferma)
                                           ? ((IData)(vlSelf->tb_structural__DOT__dut__DOT__valid_sel)
                                               ? (((IData)(vlSelf->tb_structural__DOT__dut__DOT__credito_ge_selprice) 
                                                   & (~ (IData)(vlSelf->tb_structural__DOT__dut__DOT__stock_empty)))
                                                   ? 3U
                                                   : 1U)
                                               : 1U)
                                           : 2U))));
    } else if ((1U & (IData)(vlSelf->tb_structural__DOT__dut__DOT__fsm__DOT__stato))) {
        if (vlSelf->tb_structural__DOT__annulla) {
            vlSelf->tb_structural__DOT__dut__DOT__do_cancel = 1U;
            vlSelf->tb_structural__DOT__dut__DOT__fsm__DOT__next_stato = 1U;
        } else {
            vlSelf->tb_structural__DOT__dut__DOT__fsm__DOT__next_stato 
                = ((0U != (IData)(vlSelf->tb_structural__DOT__coin))
                    ? 2U : 1U);
        }
    } else {
        vlSelf->tb_structural__DOT__dut__DOT__fsm__DOT__next_stato 
            = ((0xbU == (IData)(vlSelf->tb_structural__DOT__dut__DOT__init_counter_w))
                ? 1U : 0U);
    }
    vlSelf->tb_structural__DOT__dut__DOT__we_errore 
        = ((IData)(vlSelf->tb_structural__DOT__dut__DOT__clear_outputs) 
           | (IData)(vlSelf->tb_structural__DOT__dut__DOT__do_err));
    vlSelf->tb_structural__DOT__dut__DOT__errore_d 
        = ((IData)(vlSelf->tb_structural__DOT__dut__DOT__do_err)
            ? ((IData)(vlSelf->tb_structural__DOT__dut__DOT__valid_sel)
                ? (((IData)(vlSelf->tb_structural__DOT__dut__DOT__stock_empty) 
                    << 1U) | (IData)(vlSelf->tb_structural__DOT__dut__DOT__credito_insuff))
                : 2U) : ((IData)(vlSelf->tb_structural__DOT__dut__DOT__clear_outputs)
                          ? 0U : (IData)(vlSelf->tb_structural__DOT__dut__DOT__errore_q)));
    vlSelf->tb_structural__DOT__dut__DOT__we_prod = 
        ((IData)(vlSelf->tb_structural__DOT__dut__DOT__clear_outputs) 
         | (IData)(vlSelf->tb_structural__DOT__dut__DOT__do_ok));
    vlSelf->tb_structural__DOT__dut__DOT__current_price_d 
        = ((IData)(vlSelf->tb_structural__DOT__dut__DOT__do_ok)
            ? (IData)(vlSelf->tb_structural__DOT__dut__DOT__sel_price)
            : (IData)(vlSelf->tb_structural__DOT__dut__DOT__current_price_q));
    vlSelf->tb_structural__DOT__dut__DOT__prod1_d = 
        ((~ (IData)(vlSelf->tb_structural__DOT__dut__DOT__clear_outputs)) 
         & ((IData)(vlSelf->tb_structural__DOT__dut__DOT__do_ok)
             ? (IData)(vlSelf->tb_structural__DOT__dut__DOT__c_prod1)
             : (IData)(vlSelf->tb_structural__DOT__dut__DOT__prod1_q)));
    vlSelf->tb_structural__DOT__dut__DOT__prod2_d = 
        ((~ (IData)(vlSelf->tb_structural__DOT__dut__DOT__clear_outputs)) 
         & ((IData)(vlSelf->tb_structural__DOT__dut__DOT__do_ok)
             ? (IData)(vlSelf->tb_structural__DOT__dut__DOT__c_prod2)
             : (IData)(vlSelf->tb_structural__DOT__dut__DOT__prod2_q)));
    vlSelf->tb_structural__DOT__dut__DOT__prod3_d = 
        ((~ (IData)(vlSelf->tb_structural__DOT__dut__DOT__clear_outputs)) 
         & ((IData)(vlSelf->tb_structural__DOT__dut__DOT__do_ok)
             ? (IData)(vlSelf->tb_structural__DOT__dut__DOT__c_prod3)
             : (IData)(vlSelf->tb_structural__DOT__dut__DOT__prod3_q)));
    vlSelf->tb_structural__DOT__dut__DOT__prod4_d = 
        ((~ (IData)(vlSelf->tb_structural__DOT__dut__DOT__clear_outputs)) 
         & ((IData)(vlSelf->tb_structural__DOT__dut__DOT__do_ok)
             ? (IData)(vlSelf->tb_structural__DOT__dut__DOT__c_prod4)
             : (IData)(vlSelf->tb_structural__DOT__dut__DOT__prod4_q)));
    vlSelf->tb_structural__DOT__dut__DOT__do_p1 = ((IData)(vlSelf->tb_structural__DOT__dut__DOT__do_ok) 
                                                   & (4U 
                                                      == (IData)(vlSelf->tb_structural__DOT__selezione)));
    vlSelf->tb_structural__DOT__dut__DOT__do_p2 = ((IData)(vlSelf->tb_structural__DOT__dut__DOT__do_ok) 
                                                   & (5U 
                                                      == (IData)(vlSelf->tb_structural__DOT__selezione)));
    vlSelf->tb_structural__DOT__dut__DOT__do_p3 = ((IData)(vlSelf->tb_structural__DOT__dut__DOT__do_ok) 
                                                   & (6U 
                                                      == (IData)(vlSelf->tb_structural__DOT__selezione)));
    vlSelf->tb_structural__DOT__dut__DOT__do_p4 = ((IData)(vlSelf->tb_structural__DOT__dut__DOT__do_ok) 
                                                   & (7U 
                                                      == (IData)(vlSelf->tb_structural__DOT__selezione)));
    vlSelf->tb_structural__DOT__dut__DOT__payout_active 
        = ((IData)(vlSelf->tb_structural__DOT__dut__DOT__do_cancel) 
           | (IData)(vlSelf->tb_structural__DOT__dut__DOT__do_ok));
    vlSelf->tb_structural__DOT__dut__DOT__qty_p1_d 
        = (0x3fU & ((IData)(vlSelf->tb_structural__DOT__dut__DOT__init_qty_p1)
                     ? (IData)(vlSelf->tb_structural__DOT__dut__DOT__cfg_value)
                     : ((IData)(vlSelf->tb_structural__DOT__dut__DOT__qty_p1_q) 
                        - (IData)(vlSelf->tb_structural__DOT__dut__DOT__do_p1))));
    vlSelf->tb_structural__DOT__dut__DOT__qty_p2_d 
        = (0x3fU & ((IData)(vlSelf->tb_structural__DOT__dut__DOT__init_qty_p2)
                     ? (IData)(vlSelf->tb_structural__DOT__dut__DOT__cfg_value)
                     : ((IData)(vlSelf->tb_structural__DOT__dut__DOT__qty_p2_q) 
                        - (IData)(vlSelf->tb_structural__DOT__dut__DOT__do_p2))));
    vlSelf->tb_structural__DOT__dut__DOT__qty_p3_d 
        = (0x3fU & ((IData)(vlSelf->tb_structural__DOT__dut__DOT__init_qty_p3)
                     ? (IData)(vlSelf->tb_structural__DOT__dut__DOT__cfg_value)
                     : ((IData)(vlSelf->tb_structural__DOT__dut__DOT__qty_p3_q) 
                        - (IData)(vlSelf->tb_structural__DOT__dut__DOT__do_p3))));
    vlSelf->tb_structural__DOT__dut__DOT__qty_p4_d 
        = (0x3fU & ((IData)(vlSelf->tb_structural__DOT__dut__DOT__init_qty_p4)
                     ? (IData)(vlSelf->tb_structural__DOT__dut__DOT__cfg_value)
                     : ((IData)(vlSelf->tb_structural__DOT__dut__DOT__qty_p4_q) 
                        - (IData)(vlSelf->tb_structural__DOT__dut__DOT__do_p4))));
    vlSelf->tb_structural__DOT__dut__DOT____VdfgTmp_h4b786e47__0 
        = ((IData)(vlSelf->tb_structural__DOT__dut__DOT__do_add_coin) 
           | (IData)(vlSelf->tb_structural__DOT__dut__DOT__payout_active));
    vlSelf->tb_structural__DOT__dut__DOT__we_coin_out 
        = ((IData)(vlSelf->tb_structural__DOT__dut__DOT__clear_outputs) 
           | (IData)(vlSelf->tb_structural__DOT__dut__DOT__payout_active));
    vlSelf->tb_structural__DOT__dut__DOT__credito_d 
        = ((IData)(vlSelf->tb_structural__DOT__dut__DOT__mode_init)
            ? 0U : ((IData)(vlSelf->tb_structural__DOT__dut__DOT__payout_active)
                     ? 0U : (0x3fU & ((IData)(vlSelf->tb_structural__DOT__dut__DOT__do_add_coin)
                                       ? ((IData)(vlSelf->tb_structural__DOT__dut__DOT__coin_value) 
                                          + (IData)(vlSelf->tb_structural__DOT__dut__DOT__credito_q))
                                       : (IData)(vlSelf->tb_structural__DOT__dut__DOT__credito_q)))));
    vlSelf->tb_structural__DOT__dut__DOT__c10_calc = 0U;
    vlSelf->tb_structural__DOT__dut__DOT__c05_calc = 0U;
    vlSelf->tb_structural__DOT__dut__DOT__c02_calc = 0U;
    vlSelf->tb_structural__DOT__dut__DOT__c01_calc = 0U;
    vlSelf->tb_structural__DOT__dut__DOT__qc10_next 
        = vlSelf->tb_structural__DOT__dut__DOT__qty_c10_q;
    vlSelf->tb_structural__DOT__dut__DOT__qc05_next 
        = vlSelf->tb_structural__DOT__dut__DOT__qty_c05_q;
    vlSelf->tb_structural__DOT__dut__DOT__qc02_next 
        = vlSelf->tb_structural__DOT__dut__DOT__qty_c02_q;
    vlSelf->tb_structural__DOT__dut__DOT__qc01_next 
        = vlSelf->tb_structural__DOT__dut__DOT__qty_c01_q;
    vlSelf->tb_structural__DOT__dut__DOT__greedy_inst__DOT__calc_resto = 0U;
    vlSelf->tb_structural__DOT__dut__DOT__greedy_inst__DOT__calc_qty = 0U;
    if (vlSelf->tb_structural__DOT__dut__DOT__payout_active) {
        vlSelf->tb_structural__DOT__dut__DOT__greedy_inst__DOT__calc_resto 
            = (0x3fU & ((IData)(vlSelf->tb_structural__DOT__dut__DOT__do_ok)
                         ? ((IData)(vlSelf->tb_structural__DOT__dut__DOT__credito_q) 
                            - (IData)(vlSelf->tb_structural__DOT__dut__DOT__sel_price))
                         : (IData)(vlSelf->tb_structural__DOT__dut__DOT__credito_q)));
        vlSelf->tb_structural__DOT__dut__DOT__greedy_inst__DOT__calc_qty 
            = (0x3fU & VL_DIV_III(6, (IData)(vlSelf->tb_structural__DOT__dut__DOT__greedy_inst__DOT__calc_resto), (IData)(0xaU)));
        if (((IData)(vlSelf->tb_structural__DOT__dut__DOT__greedy_inst__DOT__calc_qty) 
             > (IData)(vlSelf->tb_structural__DOT__dut__DOT__qty_c10_q))) {
            vlSelf->tb_structural__DOT__dut__DOT__greedy_inst__DOT__calc_qty 
                = vlSelf->tb_structural__DOT__dut__DOT__qty_c10_q;
        }
        vlSelf->tb_structural__DOT__dut__DOT__c10_calc 
            = vlSelf->tb_structural__DOT__dut__DOT__greedy_inst__DOT__calc_qty;
        vlSelf->tb_structural__DOT__dut__DOT__qc10_next 
            = (0x3fU & ((IData)(vlSelf->tb_structural__DOT__dut__DOT__qty_c10_q) 
                        - (IData)(vlSelf->tb_structural__DOT__dut__DOT__c10_calc)));
        vlSelf->tb_structural__DOT__dut__DOT__greedy_inst__DOT__calc_resto 
            = (0x3fU & ((IData)(vlSelf->tb_structural__DOT__dut__DOT__greedy_inst__DOT__calc_resto) 
                        - ((IData)(0xaU) * (IData)(vlSelf->tb_structural__DOT__dut__DOT__greedy_inst__DOT__calc_qty))));
        vlSelf->tb_structural__DOT__dut__DOT__greedy_inst__DOT__calc_qty 
            = (0x3fU & VL_DIV_III(6, (IData)(vlSelf->tb_structural__DOT__dut__DOT__greedy_inst__DOT__calc_resto), (IData)(5U)));
        if (((IData)(vlSelf->tb_structural__DOT__dut__DOT__greedy_inst__DOT__calc_qty) 
             > (IData)(vlSelf->tb_structural__DOT__dut__DOT__qty_c05_q))) {
            vlSelf->tb_structural__DOT__dut__DOT__greedy_inst__DOT__calc_qty 
                = vlSelf->tb_structural__DOT__dut__DOT__qty_c05_q;
        }
        vlSelf->tb_structural__DOT__dut__DOT__c05_calc 
            = vlSelf->tb_structural__DOT__dut__DOT__greedy_inst__DOT__calc_qty;
        vlSelf->tb_structural__DOT__dut__DOT__qc05_next 
            = (0x3fU & ((IData)(vlSelf->tb_structural__DOT__dut__DOT__qty_c05_q) 
                        - (IData)(vlSelf->tb_structural__DOT__dut__DOT__c05_calc)));
        vlSelf->tb_structural__DOT__dut__DOT__greedy_inst__DOT__calc_resto 
            = (0x3fU & ((IData)(vlSelf->tb_structural__DOT__dut__DOT__greedy_inst__DOT__calc_resto) 
                        - ((IData)(5U) * (IData)(vlSelf->tb_structural__DOT__dut__DOT__greedy_inst__DOT__calc_qty))));
        vlSelf->tb_structural__DOT__dut__DOT__greedy_inst__DOT__calc_qty 
            = (0x3fU & VL_SHIFTR_III(6,6,32, (IData)(vlSelf->tb_structural__DOT__dut__DOT__greedy_inst__DOT__calc_resto), 1U));
        if (((IData)(vlSelf->tb_structural__DOT__dut__DOT__greedy_inst__DOT__calc_qty) 
             > (IData)(vlSelf->tb_structural__DOT__dut__DOT__qty_c02_q))) {
            vlSelf->tb_structural__DOT__dut__DOT__greedy_inst__DOT__calc_qty 
                = vlSelf->tb_structural__DOT__dut__DOT__qty_c02_q;
        }
        vlSelf->tb_structural__DOT__dut__DOT__c02_calc 
            = vlSelf->tb_structural__DOT__dut__DOT__greedy_inst__DOT__calc_qty;
        vlSelf->tb_structural__DOT__dut__DOT__qc02_next 
            = (0x3fU & ((IData)(vlSelf->tb_structural__DOT__dut__DOT__qty_c02_q) 
                        - (IData)(vlSelf->tb_structural__DOT__dut__DOT__c02_calc)));
        vlSelf->tb_structural__DOT__dut__DOT__greedy_inst__DOT__calc_resto 
            = (0x3fU & ((IData)(vlSelf->tb_structural__DOT__dut__DOT__greedy_inst__DOT__calc_resto) 
                        - VL_SHIFTL_III(6,6,32, (IData)(vlSelf->tb_structural__DOT__dut__DOT__greedy_inst__DOT__calc_qty), 1U)));
        vlSelf->tb_structural__DOT__dut__DOT__greedy_inst__DOT__calc_qty 
            = vlSelf->tb_structural__DOT__dut__DOT__greedy_inst__DOT__calc_resto;
        if (((IData)(vlSelf->tb_structural__DOT__dut__DOT__greedy_inst__DOT__calc_qty) 
             > (IData)(vlSelf->tb_structural__DOT__dut__DOT__qty_c01_q))) {
            vlSelf->tb_structural__DOT__dut__DOT__greedy_inst__DOT__calc_qty 
                = vlSelf->tb_structural__DOT__dut__DOT__qty_c01_q;
        }
        vlSelf->tb_structural__DOT__dut__DOT__c01_calc 
            = vlSelf->tb_structural__DOT__dut__DOT__greedy_inst__DOT__calc_qty;
        vlSelf->tb_structural__DOT__dut__DOT__qc01_next 
            = (0x3fU & ((IData)(vlSelf->tb_structural__DOT__dut__DOT__qty_c01_q) 
                        - (IData)(vlSelf->tb_structural__DOT__dut__DOT__c01_calc)));
    }
    vlSelf->tb_structural__DOT__dut__DOT__qty_c10_d 
        = (0x3fU & ((IData)(vlSelf->tb_structural__DOT__dut__DOT__init_c10)
                     ? (IData)(vlSelf->tb_structural__DOT__dut__DOT__cfg_value)
                     : ((IData)(vlSelf->tb_structural__DOT__dut__DOT__add_c10)
                         ? ((IData)(1U) + (IData)(vlSelf->tb_structural__DOT__dut__DOT__qty_c10_q))
                         : ((IData)(vlSelf->tb_structural__DOT__dut__DOT__payout_active)
                             ? (IData)(vlSelf->tb_structural__DOT__dut__DOT__qc10_next)
                             : (IData)(vlSelf->tb_structural__DOT__dut__DOT__qty_c10_q)))));
    vlSelf->tb_structural__DOT__dut__DOT__qty_c05_d 
        = (0x3fU & ((IData)(vlSelf->tb_structural__DOT__dut__DOT__init_c05)
                     ? (IData)(vlSelf->tb_structural__DOT__dut__DOT__cfg_value)
                     : ((IData)(vlSelf->tb_structural__DOT__dut__DOT__add_c05)
                         ? ((IData)(1U) + (IData)(vlSelf->tb_structural__DOT__dut__DOT__qty_c05_q))
                         : ((IData)(vlSelf->tb_structural__DOT__dut__DOT__payout_active)
                             ? (IData)(vlSelf->tb_structural__DOT__dut__DOT__qc05_next)
                             : (IData)(vlSelf->tb_structural__DOT__dut__DOT__qty_c05_q)))));
    vlSelf->tb_structural__DOT__dut__DOT__qty_c02_d 
        = (0x3fU & ((IData)(vlSelf->tb_structural__DOT__dut__DOT__init_c02)
                     ? (IData)(vlSelf->tb_structural__DOT__dut__DOT__cfg_value)
                     : ((IData)(vlSelf->tb_structural__DOT__dut__DOT__add_c02)
                         ? ((IData)(1U) + (IData)(vlSelf->tb_structural__DOT__dut__DOT__qty_c02_q))
                         : ((IData)(vlSelf->tb_structural__DOT__dut__DOT__payout_active)
                             ? (IData)(vlSelf->tb_structural__DOT__dut__DOT__qc02_next)
                             : (IData)(vlSelf->tb_structural__DOT__dut__DOT__qty_c02_q)))));
    vlSelf->tb_structural__DOT__dut__DOT__payout_returned 
        = (0x3ffU & (((IData)(0xaU) * (IData)(vlSelf->tb_structural__DOT__dut__DOT__c10_calc)) 
                     + (((IData)(5U) * (IData)(vlSelf->tb_structural__DOT__dut__DOT__c05_calc)) 
                        + (VL_SHIFTL_III(10,10,32, (IData)(vlSelf->tb_structural__DOT__dut__DOT__c02_calc), 1U) 
                           + (IData)(vlSelf->tb_structural__DOT__dut__DOT__c01_calc)))));
    if (vlSelf->tb_structural__DOT__dut__DOT__init_c01) {
        vlSelf->tb_structural__DOT__dut__DOT__qty_c01_d 
            = (0x3fU & (IData)(vlSelf->tb_structural__DOT__dut__DOT__cfg_value));
        vlSelf->tb_structural__DOT__dut__DOT__disponibile_d 
            = (0x3ffU & (IData)(vlSelf->tb_structural__DOT__dut__DOT__cfg_value));
    } else {
        vlSelf->tb_structural__DOT__dut__DOT__qty_c01_d 
            = (0x3fU & ((IData)(vlSelf->tb_structural__DOT__dut__DOT__add_c01)
                         ? ((IData)(1U) + (IData)(vlSelf->tb_structural__DOT__dut__DOT__qty_c01_q))
                         : ((IData)(vlSelf->tb_structural__DOT__dut__DOT__payout_active)
                             ? (IData)(vlSelf->tb_structural__DOT__dut__DOT__qc01_next)
                             : (IData)(vlSelf->tb_structural__DOT__dut__DOT__qty_c01_q))));
        vlSelf->tb_structural__DOT__dut__DOT__disponibile_d 
            = (0x3ffU & ((IData)(vlSelf->tb_structural__DOT__dut__DOT__init_c02)
                          ? ((IData)(vlSelf->tb_structural__DOT__dut__DOT__disponibile_q) 
                             + VL_SHIFTL_III(10,10,32, (IData)(vlSelf->tb_structural__DOT__dut__DOT__cfg_value), 1U))
                          : ((IData)(vlSelf->tb_structural__DOT__dut__DOT__init_c05)
                              ? ((IData)(vlSelf->tb_structural__DOT__dut__DOT__disponibile_q) 
                                 + ((IData)(vlSelf->tb_structural__DOT__dut__DOT__cfg_value) 
                                    + VL_SHIFTL_III(10,10,32, (IData)(vlSelf->tb_structural__DOT__dut__DOT__cfg_value), 2U)))
                              : ((IData)(vlSelf->tb_structural__DOT__dut__DOT__init_c10)
                                  ? ((IData)(vlSelf->tb_structural__DOT__dut__DOT__disponibile_q) 
                                     + (VL_SHIFTL_III(10,10,32, (IData)(vlSelf->tb_structural__DOT__dut__DOT__cfg_value), 3U) 
                                        + VL_SHIFTL_III(10,10,32, (IData)(vlSelf->tb_structural__DOT__dut__DOT__cfg_value), 1U)))
                                  : ((IData)(vlSelf->tb_structural__DOT__dut__DOT__do_add_coin)
                                      ? ((IData)(vlSelf->tb_structural__DOT__dut__DOT__disponibile_q) 
                                         + (IData)(vlSelf->tb_structural__DOT__dut__DOT__coin_value))
                                      : ((IData)(vlSelf->tb_structural__DOT__dut__DOT__payout_active)
                                          ? (((IData)(vlSelf->tb_structural__DOT__dut__DOT__payout_returned) 
                                              > (IData)(vlSelf->tb_structural__DOT__dut__DOT__disponibile_q))
                                              ? 0U : 
                                             ((IData)(vlSelf->tb_structural__DOT__dut__DOT__disponibile_q) 
                                              - (IData)(vlSelf->tb_structural__DOT__dut__DOT__payout_returned)))
                                          : (IData)(vlSelf->tb_structural__DOT__dut__DOT__disponibile_q)))))));
    }
    if (vlSelf->tb_structural__DOT__dut__DOT__payout_active) {
        vlSelf->tb_structural__DOT__dut__DOT__coin10_d 
            = vlSelf->tb_structural__DOT__dut__DOT__c10_calc;
        vlSelf->tb_structural__DOT__dut__DOT__coin05_d 
            = vlSelf->tb_structural__DOT__dut__DOT__c05_calc;
        vlSelf->tb_structural__DOT__dut__DOT__coin02_d 
            = vlSelf->tb_structural__DOT__dut__DOT__c02_calc;
        vlSelf->tb_structural__DOT__dut__DOT__coin01_d 
            = vlSelf->tb_structural__DOT__dut__DOT__c01_calc;
        vlSelf->tb_structural__DOT__dut__DOT__resto_d 
            = (0x3fU & (IData)(vlSelf->tb_structural__DOT__dut__DOT__payout_returned));
    } else {
        if (vlSelf->tb_structural__DOT__dut__DOT__clear_outputs) {
            vlSelf->tb_structural__DOT__dut__DOT__coin10_d = 0U;
            vlSelf->tb_structural__DOT__dut__DOT__coin05_d = 0U;
            vlSelf->tb_structural__DOT__dut__DOT__coin02_d = 0U;
            vlSelf->tb_structural__DOT__dut__DOT__coin01_d = 0U;
        } else {
            vlSelf->tb_structural__DOT__dut__DOT__coin10_d 
                = vlSelf->tb_structural__DOT__dut__DOT__coin10_q;
            vlSelf->tb_structural__DOT__dut__DOT__coin05_d 
                = vlSelf->tb_structural__DOT__dut__DOT__coin05_q;
            vlSelf->tb_structural__DOT__dut__DOT__coin02_d 
                = vlSelf->tb_structural__DOT__dut__DOT__coin02_q;
            vlSelf->tb_structural__DOT__dut__DOT__coin01_d 
                = vlSelf->tb_structural__DOT__dut__DOT__coin01_q;
        }
        vlSelf->tb_structural__DOT__dut__DOT__resto_d 
            = (0x3fU & ((IData)(vlSelf->tb_structural__DOT__dut__DOT__do_err)
                         ? (((IData)(vlSelf->tb_structural__DOT__dut__DOT__valid_sel) 
                             & (IData)(vlSelf->tb_structural__DOT__dut__DOT__credito_insuff))
                             ? (IData)(vlSelf->tb_structural__DOT__dut__DOT__sel_price)
                             : 0U) : ((IData)(vlSelf->tb_structural__DOT__dut__DOT__clear_outputs)
                                       ? 0U : (IData)(vlSelf->tb_structural__DOT__dut__DOT__resto_q))));
    }
}

void Vtb_structural___024root___eval_act(Vtb_structural___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_structural__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_structural___024root___eval_act\n"); );
    // Body
    if ((6ULL & vlSelf->__VactTriggered.word(0U))) {
        Vtb_structural___024root___act_comb__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[3U] = 1U;
    }
}

VL_INLINE_OPT void Vtb_structural___024root___nba_sequent__TOP__0(Vtb_structural___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_structural__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_structural___024root___nba_sequent__TOP__0\n"); );
    // Body
    if (vlSelf->tb_structural__DOT__rst) {
        if ((0U == (IData)(vlSelf->tb_structural__DOT__dut__DOT__fsm__DOT__stato))) {
            vlSelf->tb_structural__DOT__dut__DOT__init_counter_w 
                = ((0xbU > (IData)(vlSelf->tb_structural__DOT__dut__DOT__init_counter_w))
                    ? (0xfU & ((IData)(1U) + (IData)(vlSelf->tb_structural__DOT__dut__DOT__init_counter_w)))
                    : 0U);
        }
        if (vlSelf->tb_structural__DOT__dut__DOT__we_coin_out) {
            vlSelf->tb_structural__DOT__dut__DOT__coin10_q 
                = vlSelf->tb_structural__DOT__dut__DOT__coin10_d;
            vlSelf->tb_structural__DOT__dut__DOT__coin05_q 
                = vlSelf->tb_structural__DOT__dut__DOT__coin05_d;
            vlSelf->tb_structural__DOT__dut__DOT__coin02_q 
                = vlSelf->tb_structural__DOT__dut__DOT__coin02_d;
            vlSelf->tb_structural__DOT__dut__DOT__coin01_q 
                = vlSelf->tb_structural__DOT__dut__DOT__coin01_d;
        }
        if (vlSelf->tb_structural__DOT__dut__DOT__we_prod) {
            vlSelf->tb_structural__DOT__dut__DOT__prod4_q 
                = vlSelf->tb_structural__DOT__dut__DOT__prod4_d;
            vlSelf->tb_structural__DOT__dut__DOT__prod3_q 
                = vlSelf->tb_structural__DOT__dut__DOT__prod3_d;
            vlSelf->tb_structural__DOT__dut__DOT__prod2_q 
                = vlSelf->tb_structural__DOT__dut__DOT__prod2_d;
            vlSelf->tb_structural__DOT__dut__DOT__prod1_q 
                = vlSelf->tb_structural__DOT__dut__DOT__prod1_d;
        }
        if (vlSelf->tb_structural__DOT__dut__DOT__we_errore) {
            vlSelf->tb_structural__DOT__dut__DOT__errore_q 
                = vlSelf->tb_structural__DOT__dut__DOT__errore_d;
        }
        if (((IData)(vlSelf->tb_structural__DOT__dut__DOT__init_c01) 
             | ((IData)(vlSelf->tb_structural__DOT__dut__DOT__init_c02) 
                | ((IData)(vlSelf->tb_structural__DOT__dut__DOT__init_c05) 
                   | ((IData)(vlSelf->tb_structural__DOT__dut__DOT__init_c10) 
                      | (IData)(vlSelf->tb_structural__DOT__dut__DOT____VdfgTmp_h4b786e47__0)))))) {
            vlSelf->tb_structural__DOT__dut__DOT__disponibile_q 
                = vlSelf->tb_structural__DOT__dut__DOT__disponibile_d;
        }
        if (((IData)(vlSelf->tb_structural__DOT__dut__DOT__we_errore) 
             | (IData)(vlSelf->tb_structural__DOT__dut__DOT__payout_active))) {
            vlSelf->tb_structural__DOT__dut__DOT__resto_q 
                = vlSelf->tb_structural__DOT__dut__DOT__resto_d;
        }
        if (vlSelf->tb_structural__DOT__dut__DOT__do_ok) {
            vlSelf->tb_structural__DOT__dut__DOT__current_price_q 
                = vlSelf->tb_structural__DOT__dut__DOT__current_price_d;
        }
        if (((IData)(vlSelf->tb_structural__DOT__dut__DOT__init_c10) 
             | ((IData)(vlSelf->tb_structural__DOT__dut__DOT__add_c10) 
                | (IData)(vlSelf->tb_structural__DOT__dut__DOT__payout_active)))) {
            vlSelf->tb_structural__DOT__dut__DOT__qty_c10_q 
                = vlSelf->tb_structural__DOT__dut__DOT__qty_c10_d;
        }
        if (((IData)(vlSelf->tb_structural__DOT__dut__DOT__init_c05) 
             | ((IData)(vlSelf->tb_structural__DOT__dut__DOT__add_c05) 
                | (IData)(vlSelf->tb_structural__DOT__dut__DOT__payout_active)))) {
            vlSelf->tb_structural__DOT__dut__DOT__qty_c05_q 
                = vlSelf->tb_structural__DOT__dut__DOT__qty_c05_d;
        }
        if (((IData)(vlSelf->tb_structural__DOT__dut__DOT__init_c02) 
             | ((IData)(vlSelf->tb_structural__DOT__dut__DOT__add_c02) 
                | (IData)(vlSelf->tb_structural__DOT__dut__DOT__payout_active)))) {
            vlSelf->tb_structural__DOT__dut__DOT__qty_c02_q 
                = vlSelf->tb_structural__DOT__dut__DOT__qty_c02_d;
        }
        if (((IData)(vlSelf->tb_structural__DOT__dut__DOT__init_c01) 
             | ((IData)(vlSelf->tb_structural__DOT__dut__DOT__add_c01) 
                | (IData)(vlSelf->tb_structural__DOT__dut__DOT__payout_active)))) {
            vlSelf->tb_structural__DOT__dut__DOT__qty_c01_q 
                = vlSelf->tb_structural__DOT__dut__DOT__qty_c01_d;
        }
        if (((IData)(vlSelf->tb_structural__DOT__conferma) 
             & (IData)(vlSelf->tb_structural__DOT__dut__DOT__valid_sel))) {
            vlSelf->tb_structural__DOT__dut__DOT__sel_latched 
                = vlSelf->tb_structural__DOT__selezione;
        }
        if (((IData)(vlSelf->tb_structural__DOT__dut__DOT__init_qty_p4) 
             | (IData)(vlSelf->tb_structural__DOT__dut__DOT__do_p4))) {
            vlSelf->tb_structural__DOT__dut__DOT__qty_p4_q 
                = vlSelf->tb_structural__DOT__dut__DOT__qty_p4_d;
        }
        if (((IData)(vlSelf->tb_structural__DOT__dut__DOT__init_qty_p3) 
             | (IData)(vlSelf->tb_structural__DOT__dut__DOT__do_p3))) {
            vlSelf->tb_structural__DOT__dut__DOT__qty_p3_q 
                = vlSelf->tb_structural__DOT__dut__DOT__qty_p3_d;
        }
        if (((IData)(vlSelf->tb_structural__DOT__dut__DOT__init_qty_p2) 
             | (IData)(vlSelf->tb_structural__DOT__dut__DOT__do_p2))) {
            vlSelf->tb_structural__DOT__dut__DOT__qty_p2_q 
                = vlSelf->tb_structural__DOT__dut__DOT__qty_p2_d;
        }
        if (((IData)(vlSelf->tb_structural__DOT__dut__DOT__init_qty_p1) 
             | (IData)(vlSelf->tb_structural__DOT__dut__DOT__do_p1))) {
            vlSelf->tb_structural__DOT__dut__DOT__qty_p1_q 
                = vlSelf->tb_structural__DOT__dut__DOT__qty_p1_d;
        }
        if (vlSelf->tb_structural__DOT__dut__DOT__init_price_p4) {
            vlSelf->tb_structural__DOT__dut__DOT__price_p4_q 
                = vlSelf->tb_structural__DOT__dut__DOT__price_p4_d;
        }
        if (vlSelf->tb_structural__DOT__dut__DOT__init_price_p3) {
            vlSelf->tb_structural__DOT__dut__DOT__price_p3_q 
                = vlSelf->tb_structural__DOT__dut__DOT__price_p3_d;
        }
        if (vlSelf->tb_structural__DOT__dut__DOT__init_price_p2) {
            vlSelf->tb_structural__DOT__dut__DOT__price_p2_q 
                = vlSelf->tb_structural__DOT__dut__DOT__price_p2_d;
        }
        if (vlSelf->tb_structural__DOT__dut__DOT__init_price_p1) {
            vlSelf->tb_structural__DOT__dut__DOT__price_p1_q 
                = vlSelf->tb_structural__DOT__dut__DOT__price_p1_d;
        }
        if (((IData)(vlSelf->tb_structural__DOT__dut__DOT__mode_init) 
             | (IData)(vlSelf->tb_structural__DOT__dut__DOT____VdfgTmp_h4b786e47__0))) {
            vlSelf->tb_structural__DOT__dut__DOT__credito_q 
                = vlSelf->tb_structural__DOT__dut__DOT__credito_d;
        }
        vlSelf->tb_structural__DOT__dut__DOT__fsm__DOT__stato 
            = vlSelf->tb_structural__DOT__dut__DOT__fsm__DOT__next_stato;
    } else {
        vlSelf->tb_structural__DOT__dut__DOT__init_counter_w = 0U;
        vlSelf->tb_structural__DOT__dut__DOT__coin10_q = 0U;
        vlSelf->tb_structural__DOT__dut__DOT__coin05_q = 0U;
        vlSelf->tb_structural__DOT__dut__DOT__coin02_q = 0U;
        vlSelf->tb_structural__DOT__dut__DOT__coin01_q = 0U;
        vlSelf->tb_structural__DOT__dut__DOT__prod4_q = 0U;
        vlSelf->tb_structural__DOT__dut__DOT__prod3_q = 0U;
        vlSelf->tb_structural__DOT__dut__DOT__prod2_q = 0U;
        vlSelf->tb_structural__DOT__dut__DOT__prod1_q = 0U;
        vlSelf->tb_structural__DOT__dut__DOT__errore_q = 0U;
        vlSelf->tb_structural__DOT__dut__DOT__disponibile_q = 0U;
        vlSelf->tb_structural__DOT__dut__DOT__resto_q = 0U;
        vlSelf->tb_structural__DOT__dut__DOT__current_price_q = 0U;
        vlSelf->tb_structural__DOT__dut__DOT__qty_c10_q = 0U;
        vlSelf->tb_structural__DOT__dut__DOT__qty_c05_q = 0U;
        vlSelf->tb_structural__DOT__dut__DOT__qty_c02_q = 0U;
        vlSelf->tb_structural__DOT__dut__DOT__qty_c01_q = 0U;
        vlSelf->tb_structural__DOT__dut__DOT__sel_latched = 0U;
        vlSelf->tb_structural__DOT__dut__DOT__qty_p4_q = 0U;
        vlSelf->tb_structural__DOT__dut__DOT__qty_p3_q = 0U;
        vlSelf->tb_structural__DOT__dut__DOT__qty_p2_q = 0U;
        vlSelf->tb_structural__DOT__dut__DOT__qty_p1_q = 0U;
        vlSelf->tb_structural__DOT__dut__DOT__price_p4_q = 0U;
        vlSelf->tb_structural__DOT__dut__DOT__price_p3_q = 0U;
        vlSelf->tb_structural__DOT__dut__DOT__price_p2_q = 0U;
        vlSelf->tb_structural__DOT__dut__DOT__price_p1_q = 0U;
        vlSelf->tb_structural__DOT__dut__DOT__credito_q = 0U;
        vlSelf->tb_structural__DOT__dut__DOT__fsm__DOT__stato = 0U;
    }
    vlSelf->tb_structural__DOT__dut__DOT__do_erogazione = 0U;
    vlSelf->tb_structural__DOT__dut__DOT__clear_outputs = 0U;
    if ((2U & (IData)(vlSelf->tb_structural__DOT__dut__DOT__fsm__DOT__stato))) {
        if ((1U & (IData)(vlSelf->tb_structural__DOT__dut__DOT__fsm__DOT__stato))) {
            vlSelf->tb_structural__DOT__dut__DOT__do_erogazione = 1U;
            vlSelf->tb_structural__DOT__dut__DOT__clear_outputs = 1U;
        }
    } else if ((1U & (IData)(vlSelf->tb_structural__DOT__dut__DOT__fsm__DOT__stato))) {
        vlSelf->tb_structural__DOT__dut__DOT__clear_outputs = 1U;
    }
    vlSelf->tb_structural__DOT__dut__DOT__mode_init = 0U;
    if ((1U & (~ ((IData)(vlSelf->tb_structural__DOT__dut__DOT__fsm__DOT__stato) 
                  >> 1U)))) {
        if ((1U & (~ (IData)(vlSelf->tb_structural__DOT__dut__DOT__fsm__DOT__stato)))) {
            vlSelf->tb_structural__DOT__dut__DOT__mode_init = 1U;
        }
    }
    vlSelf->tb_structural__DOT__dut__DOT__init_price_p1 
        = ((IData)(vlSelf->tb_structural__DOT__dut__DOT__mode_init) 
           & (1U == (IData)(vlSelf->tb_structural__DOT__dut__DOT__init_counter_w)));
    vlSelf->tb_structural__DOT__dut__DOT__init_price_p2 
        = ((IData)(vlSelf->tb_structural__DOT__dut__DOT__mode_init) 
           & (3U == (IData)(vlSelf->tb_structural__DOT__dut__DOT__init_counter_w)));
    vlSelf->tb_structural__DOT__dut__DOT__init_price_p3 
        = ((IData)(vlSelf->tb_structural__DOT__dut__DOT__mode_init) 
           & (5U == (IData)(vlSelf->tb_structural__DOT__dut__DOT__init_counter_w)));
    vlSelf->tb_structural__DOT__dut__DOT__init_price_p4 
        = ((IData)(vlSelf->tb_structural__DOT__dut__DOT__mode_init) 
           & (7U == (IData)(vlSelf->tb_structural__DOT__dut__DOT__init_counter_w)));
    vlSelf->tb_structural__DOT__dut__DOT__init_qty_p1 
        = ((IData)(vlSelf->tb_structural__DOT__dut__DOT__mode_init) 
           & (0U == (IData)(vlSelf->tb_structural__DOT__dut__DOT__init_counter_w)));
    vlSelf->tb_structural__DOT__dut__DOT__init_qty_p2 
        = ((IData)(vlSelf->tb_structural__DOT__dut__DOT__mode_init) 
           & (2U == (IData)(vlSelf->tb_structural__DOT__dut__DOT__init_counter_w)));
    vlSelf->tb_structural__DOT__dut__DOT__init_qty_p3 
        = ((IData)(vlSelf->tb_structural__DOT__dut__DOT__mode_init) 
           & (4U == (IData)(vlSelf->tb_structural__DOT__dut__DOT__init_counter_w)));
    vlSelf->tb_structural__DOT__dut__DOT__init_qty_p4 
        = ((IData)(vlSelf->tb_structural__DOT__dut__DOT__mode_init) 
           & (6U == (IData)(vlSelf->tb_structural__DOT__dut__DOT__init_counter_w)));
    vlSelf->tb_structural__DOT__dut__DOT__init_c01 
        = ((IData)(vlSelf->tb_structural__DOT__dut__DOT__mode_init) 
           & (8U == (IData)(vlSelf->tb_structural__DOT__dut__DOT__init_counter_w)));
    vlSelf->tb_structural__DOT__dut__DOT__init_c02 
        = ((IData)(vlSelf->tb_structural__DOT__dut__DOT__mode_init) 
           & (9U == (IData)(vlSelf->tb_structural__DOT__dut__DOT__init_counter_w)));
    vlSelf->tb_structural__DOT__dut__DOT__init_c05 
        = ((IData)(vlSelf->tb_structural__DOT__dut__DOT__mode_init) 
           & (0xaU == (IData)(vlSelf->tb_structural__DOT__dut__DOT__init_counter_w)));
    vlSelf->tb_structural__DOT__dut__DOT__init_c10 
        = ((IData)(vlSelf->tb_structural__DOT__dut__DOT__mode_init) 
           & (0xbU == (IData)(vlSelf->tb_structural__DOT__dut__DOT__init_counter_w)));
}

VL_INLINE_OPT void Vtb_structural___024root___nba_comb__TOP__0(Vtb_structural___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_structural__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_structural___024root___nba_comb__TOP__0\n"); );
    // Init
    CData/*2:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    // Body
    __Vtableidx1 = vlSelf->tb_structural__DOT__coin;
    vlSelf->tb_structural__DOT__dut__DOT__coin_value 
        = Vtb_structural__ConstPool__TABLE_h98991338_0
        [__Vtableidx1];
    vlSelf->tb_structural__DOT__dut__DOT__cfg_value 
        = (((IData)(vlSelf->tb_structural__DOT__coin) 
            << 3U) | (IData)(vlSelf->tb_structural__DOT__selezione));
    vlSelf->tb_structural__DOT__dut__DOT__valid_sel 
        = ((4U == (IData)(vlSelf->tb_structural__DOT__selezione)) 
           | ((5U == (IData)(vlSelf->tb_structural__DOT__selezione)) 
              | ((6U == (IData)(vlSelf->tb_structural__DOT__selezione)) 
                 | (7U == (IData)(vlSelf->tb_structural__DOT__selezione)))));
}

VL_INLINE_OPT void Vtb_structural___024root___nba_comb__TOP__1(Vtb_structural___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_structural__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_structural___024root___nba_comb__TOP__1\n"); );
    // Body
    vlSelf->tb_structural__DOT__dut__DOT__sel_price 
        = ((2U & (IData)(vlSelf->tb_structural__DOT__selezione))
            ? ((1U & (IData)(vlSelf->tb_structural__DOT__selezione))
                ? (IData)(vlSelf->tb_structural__DOT__dut__DOT__price_p4_q)
                : (IData)(vlSelf->tb_structural__DOT__dut__DOT__price_p3_q))
            : ((1U & (IData)(vlSelf->tb_structural__DOT__selezione))
                ? (IData)(vlSelf->tb_structural__DOT__dut__DOT__price_p2_q)
                : (IData)(vlSelf->tb_structural__DOT__dut__DOT__price_p1_q)));
    vlSelf->tb_structural__DOT__dut__DOT__do_add_coin = 0U;
    vlSelf->tb_structural__DOT__dut__DOT__do_cancel = 0U;
    vlSelf->tb_structural__DOT__dut__DOT__price_p1_d 
        = ((IData)(vlSelf->tb_structural__DOT__dut__DOT__init_price_p1)
            ? (IData)(vlSelf->tb_structural__DOT__dut__DOT__cfg_value)
            : (IData)(vlSelf->tb_structural__DOT__dut__DOT__price_p1_q));
    vlSelf->tb_structural__DOT__dut__DOT__price_p2_d 
        = ((IData)(vlSelf->tb_structural__DOT__dut__DOT__init_price_p2)
            ? (IData)(vlSelf->tb_structural__DOT__dut__DOT__cfg_value)
            : (IData)(vlSelf->tb_structural__DOT__dut__DOT__price_p2_q));
    vlSelf->tb_structural__DOT__dut__DOT__price_p3_d 
        = ((IData)(vlSelf->tb_structural__DOT__dut__DOT__init_price_p3)
            ? (IData)(vlSelf->tb_structural__DOT__dut__DOT__cfg_value)
            : (IData)(vlSelf->tb_structural__DOT__dut__DOT__price_p3_q));
    vlSelf->tb_structural__DOT__dut__DOT__price_p4_d 
        = ((IData)(vlSelf->tb_structural__DOT__dut__DOT__init_price_p4)
            ? (IData)(vlSelf->tb_structural__DOT__dut__DOT__cfg_value)
            : (IData)(vlSelf->tb_structural__DOT__dut__DOT__price_p4_q));
    vlSelf->tb_structural__DOT__dut__DOT__stock_empty 
        = ((IData)(vlSelf->tb_structural__DOT__dut__DOT__valid_sel) 
           & (0U == ((2U & (IData)(vlSelf->tb_structural__DOT__selezione))
                      ? ((1U & (IData)(vlSelf->tb_structural__DOT__selezione))
                          ? (IData)(vlSelf->tb_structural__DOT__dut__DOT__qty_p4_q)
                          : (IData)(vlSelf->tb_structural__DOT__dut__DOT__qty_p3_q))
                      : ((1U & (IData)(vlSelf->tb_structural__DOT__selezione))
                          ? (IData)(vlSelf->tb_structural__DOT__dut__DOT__qty_p2_q)
                          : (IData)(vlSelf->tb_structural__DOT__dut__DOT__qty_p1_q)))));
    vlSelf->tb_structural__DOT__dut__DOT__credito_ge_selprice 
        = ((IData)(vlSelf->tb_structural__DOT__dut__DOT__credito_q) 
           >= (IData)(vlSelf->tb_structural__DOT__dut__DOT__sel_price));
    if ((2U & (IData)(vlSelf->tb_structural__DOT__dut__DOT__fsm__DOT__stato))) {
        if ((1U & (~ (IData)(vlSelf->tb_structural__DOT__dut__DOT__fsm__DOT__stato)))) {
            if ((1U & (~ (IData)(vlSelf->tb_structural__DOT__annulla)))) {
                if ((0U != (IData)(vlSelf->tb_structural__DOT__coin))) {
                    vlSelf->tb_structural__DOT__dut__DOT__do_add_coin = 1U;
                }
            }
        }
    } else if ((1U & (IData)(vlSelf->tb_structural__DOT__dut__DOT__fsm__DOT__stato))) {
        if ((1U & (~ (IData)(vlSelf->tb_structural__DOT__annulla)))) {
            if ((0U != (IData)(vlSelf->tb_structural__DOT__coin))) {
                vlSelf->tb_structural__DOT__dut__DOT__do_add_coin = 1U;
            }
        }
    }
    vlSelf->tb_structural__DOT__dut__DOT__add_c01 = 
        ((IData)(vlSelf->tb_structural__DOT__dut__DOT__do_add_coin) 
         & (4U == (IData)(vlSelf->tb_structural__DOT__coin)));
    vlSelf->tb_structural__DOT__dut__DOT__add_c02 = 
        ((IData)(vlSelf->tb_structural__DOT__dut__DOT__do_add_coin) 
         & (5U == (IData)(vlSelf->tb_structural__DOT__coin)));
    vlSelf->tb_structural__DOT__dut__DOT__add_c05 = 
        ((IData)(vlSelf->tb_structural__DOT__dut__DOT__do_add_coin) 
         & (6U == (IData)(vlSelf->tb_structural__DOT__coin)));
    vlSelf->tb_structural__DOT__dut__DOT__add_c10 = 
        ((IData)(vlSelf->tb_structural__DOT__dut__DOT__do_add_coin) 
         & (7U == (IData)(vlSelf->tb_structural__DOT__coin)));
    vlSelf->tb_structural__DOT__dut__DOT__c_prod4 = 0U;
    vlSelf->tb_structural__DOT__dut__DOT__c_prod3 = 0U;
    vlSelf->tb_structural__DOT__dut__DOT__c_prod2 = 0U;
    vlSelf->tb_structural__DOT__dut__DOT__c_prod1 = 0U;
    vlSelf->tb_structural__DOT__dut__DOT__credito_insuff 
        = ((~ (IData)(vlSelf->tb_structural__DOT__dut__DOT__credito_ge_selprice)) 
           & (IData)(vlSelf->tb_structural__DOT__dut__DOT__valid_sel));
    vlSelf->tb_structural__DOT__dut__DOT__do_err = 0U;
    vlSelf->tb_structural__DOT__dut__DOT__do_ok = 0U;
    if ((2U & (IData)(vlSelf->tb_structural__DOT__dut__DOT__fsm__DOT__stato))) {
        if ((1U & (~ (IData)(vlSelf->tb_structural__DOT__dut__DOT__fsm__DOT__stato)))) {
            if (vlSelf->tb_structural__DOT__annulla) {
                vlSelf->tb_structural__DOT__dut__DOT__do_cancel = 1U;
            }
            if ((1U & (~ (IData)(vlSelf->tb_structural__DOT__annulla)))) {
                if ((0U == (IData)(vlSelf->tb_structural__DOT__coin))) {
                    if (vlSelf->tb_structural__DOT__conferma) {
                        if (vlSelf->tb_structural__DOT__dut__DOT__valid_sel) {
                            if (((IData)(vlSelf->tb_structural__DOT__dut__DOT__credito_ge_selprice) 
                                 & (~ (IData)(vlSelf->tb_structural__DOT__dut__DOT__stock_empty)))) {
                                if ((4U & (IData)(vlSelf->tb_structural__DOT__selezione))) {
                                    if ((2U & (IData)(vlSelf->tb_structural__DOT__selezione))) {
                                        if ((1U & (IData)(vlSelf->tb_structural__DOT__selezione))) {
                                            vlSelf->tb_structural__DOT__dut__DOT__c_prod4 = 1U;
                                        }
                                        if ((1U & (~ (IData)(vlSelf->tb_structural__DOT__selezione)))) {
                                            vlSelf->tb_structural__DOT__dut__DOT__c_prod3 = 1U;
                                        }
                                    }
                                    if ((1U & (~ ((IData)(vlSelf->tb_structural__DOT__selezione) 
                                                  >> 1U)))) {
                                        if ((1U & (IData)(vlSelf->tb_structural__DOT__selezione))) {
                                            vlSelf->tb_structural__DOT__dut__DOT__c_prod2 = 1U;
                                        }
                                        if ((1U & (~ (IData)(vlSelf->tb_structural__DOT__selezione)))) {
                                            vlSelf->tb_structural__DOT__dut__DOT__c_prod1 = 1U;
                                        }
                                    }
                                }
                                vlSelf->tb_structural__DOT__dut__DOT__do_ok = 1U;
                            }
                            if ((1U & (~ ((IData)(vlSelf->tb_structural__DOT__dut__DOT__credito_ge_selprice) 
                                          & (~ (IData)(vlSelf->tb_structural__DOT__dut__DOT__stock_empty)))))) {
                                vlSelf->tb_structural__DOT__dut__DOT__do_err = 1U;
                            }
                        } else {
                            vlSelf->tb_structural__DOT__dut__DOT__do_err = 1U;
                        }
                    }
                }
            }
        }
        vlSelf->tb_structural__DOT__dut__DOT__fsm__DOT__next_stato 
            = ((1U & (IData)(vlSelf->tb_structural__DOT__dut__DOT__fsm__DOT__stato))
                ? 1U : ((IData)(vlSelf->tb_structural__DOT__annulla)
                         ? 1U : ((0U != (IData)(vlSelf->tb_structural__DOT__coin))
                                  ? 2U : ((IData)(vlSelf->tb_structural__DOT__conferma)
                                           ? ((IData)(vlSelf->tb_structural__DOT__dut__DOT__valid_sel)
                                               ? (((IData)(vlSelf->tb_structural__DOT__dut__DOT__credito_ge_selprice) 
                                                   & (~ (IData)(vlSelf->tb_structural__DOT__dut__DOT__stock_empty)))
                                                   ? 3U
                                                   : 1U)
                                               : 1U)
                                           : 2U))));
    } else if ((1U & (IData)(vlSelf->tb_structural__DOT__dut__DOT__fsm__DOT__stato))) {
        if (vlSelf->tb_structural__DOT__annulla) {
            vlSelf->tb_structural__DOT__dut__DOT__do_cancel = 1U;
            vlSelf->tb_structural__DOT__dut__DOT__fsm__DOT__next_stato = 1U;
        } else {
            vlSelf->tb_structural__DOT__dut__DOT__fsm__DOT__next_stato 
                = ((0U != (IData)(vlSelf->tb_structural__DOT__coin))
                    ? 2U : 1U);
        }
    } else {
        vlSelf->tb_structural__DOT__dut__DOT__fsm__DOT__next_stato 
            = ((0xbU == (IData)(vlSelf->tb_structural__DOT__dut__DOT__init_counter_w))
                ? 1U : 0U);
    }
    vlSelf->tb_structural__DOT__dut__DOT__we_errore 
        = ((IData)(vlSelf->tb_structural__DOT__dut__DOT__clear_outputs) 
           | (IData)(vlSelf->tb_structural__DOT__dut__DOT__do_err));
    vlSelf->tb_structural__DOT__dut__DOT__errore_d 
        = ((IData)(vlSelf->tb_structural__DOT__dut__DOT__do_err)
            ? ((IData)(vlSelf->tb_structural__DOT__dut__DOT__valid_sel)
                ? (((IData)(vlSelf->tb_structural__DOT__dut__DOT__stock_empty) 
                    << 1U) | (IData)(vlSelf->tb_structural__DOT__dut__DOT__credito_insuff))
                : 2U) : ((IData)(vlSelf->tb_structural__DOT__dut__DOT__clear_outputs)
                          ? 0U : (IData)(vlSelf->tb_structural__DOT__dut__DOT__errore_q)));
    vlSelf->tb_structural__DOT__dut__DOT__we_prod = 
        ((IData)(vlSelf->tb_structural__DOT__dut__DOT__clear_outputs) 
         | (IData)(vlSelf->tb_structural__DOT__dut__DOT__do_ok));
    vlSelf->tb_structural__DOT__dut__DOT__current_price_d 
        = ((IData)(vlSelf->tb_structural__DOT__dut__DOT__do_ok)
            ? (IData)(vlSelf->tb_structural__DOT__dut__DOT__sel_price)
            : (IData)(vlSelf->tb_structural__DOT__dut__DOT__current_price_q));
    vlSelf->tb_structural__DOT__dut__DOT__prod1_d = 
        ((~ (IData)(vlSelf->tb_structural__DOT__dut__DOT__clear_outputs)) 
         & ((IData)(vlSelf->tb_structural__DOT__dut__DOT__do_ok)
             ? (IData)(vlSelf->tb_structural__DOT__dut__DOT__c_prod1)
             : (IData)(vlSelf->tb_structural__DOT__dut__DOT__prod1_q)));
    vlSelf->tb_structural__DOT__dut__DOT__prod2_d = 
        ((~ (IData)(vlSelf->tb_structural__DOT__dut__DOT__clear_outputs)) 
         & ((IData)(vlSelf->tb_structural__DOT__dut__DOT__do_ok)
             ? (IData)(vlSelf->tb_structural__DOT__dut__DOT__c_prod2)
             : (IData)(vlSelf->tb_structural__DOT__dut__DOT__prod2_q)));
    vlSelf->tb_structural__DOT__dut__DOT__prod3_d = 
        ((~ (IData)(vlSelf->tb_structural__DOT__dut__DOT__clear_outputs)) 
         & ((IData)(vlSelf->tb_structural__DOT__dut__DOT__do_ok)
             ? (IData)(vlSelf->tb_structural__DOT__dut__DOT__c_prod3)
             : (IData)(vlSelf->tb_structural__DOT__dut__DOT__prod3_q)));
    vlSelf->tb_structural__DOT__dut__DOT__prod4_d = 
        ((~ (IData)(vlSelf->tb_structural__DOT__dut__DOT__clear_outputs)) 
         & ((IData)(vlSelf->tb_structural__DOT__dut__DOT__do_ok)
             ? (IData)(vlSelf->tb_structural__DOT__dut__DOT__c_prod4)
             : (IData)(vlSelf->tb_structural__DOT__dut__DOT__prod4_q)));
    vlSelf->tb_structural__DOT__dut__DOT__do_p1 = ((IData)(vlSelf->tb_structural__DOT__dut__DOT__do_ok) 
                                                   & (4U 
                                                      == (IData)(vlSelf->tb_structural__DOT__selezione)));
    vlSelf->tb_structural__DOT__dut__DOT__do_p2 = ((IData)(vlSelf->tb_structural__DOT__dut__DOT__do_ok) 
                                                   & (5U 
                                                      == (IData)(vlSelf->tb_structural__DOT__selezione)));
    vlSelf->tb_structural__DOT__dut__DOT__do_p3 = ((IData)(vlSelf->tb_structural__DOT__dut__DOT__do_ok) 
                                                   & (6U 
                                                      == (IData)(vlSelf->tb_structural__DOT__selezione)));
    vlSelf->tb_structural__DOT__dut__DOT__do_p4 = ((IData)(vlSelf->tb_structural__DOT__dut__DOT__do_ok) 
                                                   & (7U 
                                                      == (IData)(vlSelf->tb_structural__DOT__selezione)));
    vlSelf->tb_structural__DOT__dut__DOT__payout_active 
        = ((IData)(vlSelf->tb_structural__DOT__dut__DOT__do_cancel) 
           | (IData)(vlSelf->tb_structural__DOT__dut__DOT__do_ok));
    vlSelf->tb_structural__DOT__dut__DOT__qty_p1_d 
        = (0x3fU & ((IData)(vlSelf->tb_structural__DOT__dut__DOT__init_qty_p1)
                     ? (IData)(vlSelf->tb_structural__DOT__dut__DOT__cfg_value)
                     : ((IData)(vlSelf->tb_structural__DOT__dut__DOT__qty_p1_q) 
                        - (IData)(vlSelf->tb_structural__DOT__dut__DOT__do_p1))));
    vlSelf->tb_structural__DOT__dut__DOT__qty_p2_d 
        = (0x3fU & ((IData)(vlSelf->tb_structural__DOT__dut__DOT__init_qty_p2)
                     ? (IData)(vlSelf->tb_structural__DOT__dut__DOT__cfg_value)
                     : ((IData)(vlSelf->tb_structural__DOT__dut__DOT__qty_p2_q) 
                        - (IData)(vlSelf->tb_structural__DOT__dut__DOT__do_p2))));
    vlSelf->tb_structural__DOT__dut__DOT__qty_p3_d 
        = (0x3fU & ((IData)(vlSelf->tb_structural__DOT__dut__DOT__init_qty_p3)
                     ? (IData)(vlSelf->tb_structural__DOT__dut__DOT__cfg_value)
                     : ((IData)(vlSelf->tb_structural__DOT__dut__DOT__qty_p3_q) 
                        - (IData)(vlSelf->tb_structural__DOT__dut__DOT__do_p3))));
    vlSelf->tb_structural__DOT__dut__DOT__qty_p4_d 
        = (0x3fU & ((IData)(vlSelf->tb_structural__DOT__dut__DOT__init_qty_p4)
                     ? (IData)(vlSelf->tb_structural__DOT__dut__DOT__cfg_value)
                     : ((IData)(vlSelf->tb_structural__DOT__dut__DOT__qty_p4_q) 
                        - (IData)(vlSelf->tb_structural__DOT__dut__DOT__do_p4))));
    vlSelf->tb_structural__DOT__dut__DOT____VdfgTmp_h4b786e47__0 
        = ((IData)(vlSelf->tb_structural__DOT__dut__DOT__do_add_coin) 
           | (IData)(vlSelf->tb_structural__DOT__dut__DOT__payout_active));
    vlSelf->tb_structural__DOT__dut__DOT__we_coin_out 
        = ((IData)(vlSelf->tb_structural__DOT__dut__DOT__clear_outputs) 
           | (IData)(vlSelf->tb_structural__DOT__dut__DOT__payout_active));
    vlSelf->tb_structural__DOT__dut__DOT__credito_d 
        = ((IData)(vlSelf->tb_structural__DOT__dut__DOT__mode_init)
            ? 0U : ((IData)(vlSelf->tb_structural__DOT__dut__DOT__payout_active)
                     ? 0U : (0x3fU & ((IData)(vlSelf->tb_structural__DOT__dut__DOT__do_add_coin)
                                       ? ((IData)(vlSelf->tb_structural__DOT__dut__DOT__coin_value) 
                                          + (IData)(vlSelf->tb_structural__DOT__dut__DOT__credito_q))
                                       : (IData)(vlSelf->tb_structural__DOT__dut__DOT__credito_q)))));
    vlSelf->tb_structural__DOT__dut__DOT__c10_calc = 0U;
    vlSelf->tb_structural__DOT__dut__DOT__c05_calc = 0U;
    vlSelf->tb_structural__DOT__dut__DOT__c02_calc = 0U;
    vlSelf->tb_structural__DOT__dut__DOT__c01_calc = 0U;
    vlSelf->tb_structural__DOT__dut__DOT__qc10_next 
        = vlSelf->tb_structural__DOT__dut__DOT__qty_c10_q;
    vlSelf->tb_structural__DOT__dut__DOT__qc05_next 
        = vlSelf->tb_structural__DOT__dut__DOT__qty_c05_q;
    vlSelf->tb_structural__DOT__dut__DOT__qc02_next 
        = vlSelf->tb_structural__DOT__dut__DOT__qty_c02_q;
    vlSelf->tb_structural__DOT__dut__DOT__qc01_next 
        = vlSelf->tb_structural__DOT__dut__DOT__qty_c01_q;
    vlSelf->tb_structural__DOT__dut__DOT__greedy_inst__DOT__calc_resto = 0U;
    vlSelf->tb_structural__DOT__dut__DOT__greedy_inst__DOT__calc_qty = 0U;
    if (vlSelf->tb_structural__DOT__dut__DOT__payout_active) {
        vlSelf->tb_structural__DOT__dut__DOT__greedy_inst__DOT__calc_resto 
            = (0x3fU & ((IData)(vlSelf->tb_structural__DOT__dut__DOT__do_ok)
                         ? ((IData)(vlSelf->tb_structural__DOT__dut__DOT__credito_q) 
                            - (IData)(vlSelf->tb_structural__DOT__dut__DOT__sel_price))
                         : (IData)(vlSelf->tb_structural__DOT__dut__DOT__credito_q)));
        vlSelf->tb_structural__DOT__dut__DOT__greedy_inst__DOT__calc_qty 
            = (0x3fU & VL_DIV_III(6, (IData)(vlSelf->tb_structural__DOT__dut__DOT__greedy_inst__DOT__calc_resto), (IData)(0xaU)));
        if (((IData)(vlSelf->tb_structural__DOT__dut__DOT__greedy_inst__DOT__calc_qty) 
             > (IData)(vlSelf->tb_structural__DOT__dut__DOT__qty_c10_q))) {
            vlSelf->tb_structural__DOT__dut__DOT__greedy_inst__DOT__calc_qty 
                = vlSelf->tb_structural__DOT__dut__DOT__qty_c10_q;
        }
        vlSelf->tb_structural__DOT__dut__DOT__c10_calc 
            = vlSelf->tb_structural__DOT__dut__DOT__greedy_inst__DOT__calc_qty;
        vlSelf->tb_structural__DOT__dut__DOT__qc10_next 
            = (0x3fU & ((IData)(vlSelf->tb_structural__DOT__dut__DOT__qty_c10_q) 
                        - (IData)(vlSelf->tb_structural__DOT__dut__DOT__c10_calc)));
        vlSelf->tb_structural__DOT__dut__DOT__greedy_inst__DOT__calc_resto 
            = (0x3fU & ((IData)(vlSelf->tb_structural__DOT__dut__DOT__greedy_inst__DOT__calc_resto) 
                        - ((IData)(0xaU) * (IData)(vlSelf->tb_structural__DOT__dut__DOT__greedy_inst__DOT__calc_qty))));
        vlSelf->tb_structural__DOT__dut__DOT__greedy_inst__DOT__calc_qty 
            = (0x3fU & VL_DIV_III(6, (IData)(vlSelf->tb_structural__DOT__dut__DOT__greedy_inst__DOT__calc_resto), (IData)(5U)));
        if (((IData)(vlSelf->tb_structural__DOT__dut__DOT__greedy_inst__DOT__calc_qty) 
             > (IData)(vlSelf->tb_structural__DOT__dut__DOT__qty_c05_q))) {
            vlSelf->tb_structural__DOT__dut__DOT__greedy_inst__DOT__calc_qty 
                = vlSelf->tb_structural__DOT__dut__DOT__qty_c05_q;
        }
        vlSelf->tb_structural__DOT__dut__DOT__c05_calc 
            = vlSelf->tb_structural__DOT__dut__DOT__greedy_inst__DOT__calc_qty;
        vlSelf->tb_structural__DOT__dut__DOT__qc05_next 
            = (0x3fU & ((IData)(vlSelf->tb_structural__DOT__dut__DOT__qty_c05_q) 
                        - (IData)(vlSelf->tb_structural__DOT__dut__DOT__c05_calc)));
        vlSelf->tb_structural__DOT__dut__DOT__greedy_inst__DOT__calc_resto 
            = (0x3fU & ((IData)(vlSelf->tb_structural__DOT__dut__DOT__greedy_inst__DOT__calc_resto) 
                        - ((IData)(5U) * (IData)(vlSelf->tb_structural__DOT__dut__DOT__greedy_inst__DOT__calc_qty))));
        vlSelf->tb_structural__DOT__dut__DOT__greedy_inst__DOT__calc_qty 
            = (0x3fU & VL_SHIFTR_III(6,6,32, (IData)(vlSelf->tb_structural__DOT__dut__DOT__greedy_inst__DOT__calc_resto), 1U));
        if (((IData)(vlSelf->tb_structural__DOT__dut__DOT__greedy_inst__DOT__calc_qty) 
             > (IData)(vlSelf->tb_structural__DOT__dut__DOT__qty_c02_q))) {
            vlSelf->tb_structural__DOT__dut__DOT__greedy_inst__DOT__calc_qty 
                = vlSelf->tb_structural__DOT__dut__DOT__qty_c02_q;
        }
        vlSelf->tb_structural__DOT__dut__DOT__c02_calc 
            = vlSelf->tb_structural__DOT__dut__DOT__greedy_inst__DOT__calc_qty;
        vlSelf->tb_structural__DOT__dut__DOT__qc02_next 
            = (0x3fU & ((IData)(vlSelf->tb_structural__DOT__dut__DOT__qty_c02_q) 
                        - (IData)(vlSelf->tb_structural__DOT__dut__DOT__c02_calc)));
        vlSelf->tb_structural__DOT__dut__DOT__greedy_inst__DOT__calc_resto 
            = (0x3fU & ((IData)(vlSelf->tb_structural__DOT__dut__DOT__greedy_inst__DOT__calc_resto) 
                        - VL_SHIFTL_III(6,6,32, (IData)(vlSelf->tb_structural__DOT__dut__DOT__greedy_inst__DOT__calc_qty), 1U)));
        vlSelf->tb_structural__DOT__dut__DOT__greedy_inst__DOT__calc_qty 
            = vlSelf->tb_structural__DOT__dut__DOT__greedy_inst__DOT__calc_resto;
        if (((IData)(vlSelf->tb_structural__DOT__dut__DOT__greedy_inst__DOT__calc_qty) 
             > (IData)(vlSelf->tb_structural__DOT__dut__DOT__qty_c01_q))) {
            vlSelf->tb_structural__DOT__dut__DOT__greedy_inst__DOT__calc_qty 
                = vlSelf->tb_structural__DOT__dut__DOT__qty_c01_q;
        }
        vlSelf->tb_structural__DOT__dut__DOT__c01_calc 
            = vlSelf->tb_structural__DOT__dut__DOT__greedy_inst__DOT__calc_qty;
        vlSelf->tb_structural__DOT__dut__DOT__qc01_next 
            = (0x3fU & ((IData)(vlSelf->tb_structural__DOT__dut__DOT__qty_c01_q) 
                        - (IData)(vlSelf->tb_structural__DOT__dut__DOT__c01_calc)));
    }
    vlSelf->tb_structural__DOT__dut__DOT__qty_c10_d 
        = (0x3fU & ((IData)(vlSelf->tb_structural__DOT__dut__DOT__init_c10)
                     ? (IData)(vlSelf->tb_structural__DOT__dut__DOT__cfg_value)
                     : ((IData)(vlSelf->tb_structural__DOT__dut__DOT__add_c10)
                         ? ((IData)(1U) + (IData)(vlSelf->tb_structural__DOT__dut__DOT__qty_c10_q))
                         : ((IData)(vlSelf->tb_structural__DOT__dut__DOT__payout_active)
                             ? (IData)(vlSelf->tb_structural__DOT__dut__DOT__qc10_next)
                             : (IData)(vlSelf->tb_structural__DOT__dut__DOT__qty_c10_q)))));
    vlSelf->tb_structural__DOT__dut__DOT__qty_c05_d 
        = (0x3fU & ((IData)(vlSelf->tb_structural__DOT__dut__DOT__init_c05)
                     ? (IData)(vlSelf->tb_structural__DOT__dut__DOT__cfg_value)
                     : ((IData)(vlSelf->tb_structural__DOT__dut__DOT__add_c05)
                         ? ((IData)(1U) + (IData)(vlSelf->tb_structural__DOT__dut__DOT__qty_c05_q))
                         : ((IData)(vlSelf->tb_structural__DOT__dut__DOT__payout_active)
                             ? (IData)(vlSelf->tb_structural__DOT__dut__DOT__qc05_next)
                             : (IData)(vlSelf->tb_structural__DOT__dut__DOT__qty_c05_q)))));
    vlSelf->tb_structural__DOT__dut__DOT__qty_c02_d 
        = (0x3fU & ((IData)(vlSelf->tb_structural__DOT__dut__DOT__init_c02)
                     ? (IData)(vlSelf->tb_structural__DOT__dut__DOT__cfg_value)
                     : ((IData)(vlSelf->tb_structural__DOT__dut__DOT__add_c02)
                         ? ((IData)(1U) + (IData)(vlSelf->tb_structural__DOT__dut__DOT__qty_c02_q))
                         : ((IData)(vlSelf->tb_structural__DOT__dut__DOT__payout_active)
                             ? (IData)(vlSelf->tb_structural__DOT__dut__DOT__qc02_next)
                             : (IData)(vlSelf->tb_structural__DOT__dut__DOT__qty_c02_q)))));
    vlSelf->tb_structural__DOT__dut__DOT__payout_returned 
        = (0x3ffU & (((IData)(0xaU) * (IData)(vlSelf->tb_structural__DOT__dut__DOT__c10_calc)) 
                     + (((IData)(5U) * (IData)(vlSelf->tb_structural__DOT__dut__DOT__c05_calc)) 
                        + (VL_SHIFTL_III(10,10,32, (IData)(vlSelf->tb_structural__DOT__dut__DOT__c02_calc), 1U) 
                           + (IData)(vlSelf->tb_structural__DOT__dut__DOT__c01_calc)))));
    if (vlSelf->tb_structural__DOT__dut__DOT__init_c01) {
        vlSelf->tb_structural__DOT__dut__DOT__qty_c01_d 
            = (0x3fU & (IData)(vlSelf->tb_structural__DOT__dut__DOT__cfg_value));
        vlSelf->tb_structural__DOT__dut__DOT__disponibile_d 
            = (0x3ffU & (IData)(vlSelf->tb_structural__DOT__dut__DOT__cfg_value));
    } else {
        vlSelf->tb_structural__DOT__dut__DOT__qty_c01_d 
            = (0x3fU & ((IData)(vlSelf->tb_structural__DOT__dut__DOT__add_c01)
                         ? ((IData)(1U) + (IData)(vlSelf->tb_structural__DOT__dut__DOT__qty_c01_q))
                         : ((IData)(vlSelf->tb_structural__DOT__dut__DOT__payout_active)
                             ? (IData)(vlSelf->tb_structural__DOT__dut__DOT__qc01_next)
                             : (IData)(vlSelf->tb_structural__DOT__dut__DOT__qty_c01_q))));
        vlSelf->tb_structural__DOT__dut__DOT__disponibile_d 
            = (0x3ffU & ((IData)(vlSelf->tb_structural__DOT__dut__DOT__init_c02)
                          ? ((IData)(vlSelf->tb_structural__DOT__dut__DOT__disponibile_q) 
                             + VL_SHIFTL_III(10,10,32, (IData)(vlSelf->tb_structural__DOT__dut__DOT__cfg_value), 1U))
                          : ((IData)(vlSelf->tb_structural__DOT__dut__DOT__init_c05)
                              ? ((IData)(vlSelf->tb_structural__DOT__dut__DOT__disponibile_q) 
                                 + ((IData)(vlSelf->tb_structural__DOT__dut__DOT__cfg_value) 
                                    + VL_SHIFTL_III(10,10,32, (IData)(vlSelf->tb_structural__DOT__dut__DOT__cfg_value), 2U)))
                              : ((IData)(vlSelf->tb_structural__DOT__dut__DOT__init_c10)
                                  ? ((IData)(vlSelf->tb_structural__DOT__dut__DOT__disponibile_q) 
                                     + (VL_SHIFTL_III(10,10,32, (IData)(vlSelf->tb_structural__DOT__dut__DOT__cfg_value), 3U) 
                                        + VL_SHIFTL_III(10,10,32, (IData)(vlSelf->tb_structural__DOT__dut__DOT__cfg_value), 1U)))
                                  : ((IData)(vlSelf->tb_structural__DOT__dut__DOT__do_add_coin)
                                      ? ((IData)(vlSelf->tb_structural__DOT__dut__DOT__disponibile_q) 
                                         + (IData)(vlSelf->tb_structural__DOT__dut__DOT__coin_value))
                                      : ((IData)(vlSelf->tb_structural__DOT__dut__DOT__payout_active)
                                          ? (((IData)(vlSelf->tb_structural__DOT__dut__DOT__payout_returned) 
                                              > (IData)(vlSelf->tb_structural__DOT__dut__DOT__disponibile_q))
                                              ? 0U : 
                                             ((IData)(vlSelf->tb_structural__DOT__dut__DOT__disponibile_q) 
                                              - (IData)(vlSelf->tb_structural__DOT__dut__DOT__payout_returned)))
                                          : (IData)(vlSelf->tb_structural__DOT__dut__DOT__disponibile_q)))))));
    }
    if (vlSelf->tb_structural__DOT__dut__DOT__payout_active) {
        vlSelf->tb_structural__DOT__dut__DOT__coin10_d 
            = vlSelf->tb_structural__DOT__dut__DOT__c10_calc;
        vlSelf->tb_structural__DOT__dut__DOT__coin05_d 
            = vlSelf->tb_structural__DOT__dut__DOT__c05_calc;
        vlSelf->tb_structural__DOT__dut__DOT__coin02_d 
            = vlSelf->tb_structural__DOT__dut__DOT__c02_calc;
        vlSelf->tb_structural__DOT__dut__DOT__coin01_d 
            = vlSelf->tb_structural__DOT__dut__DOT__c01_calc;
        vlSelf->tb_structural__DOT__dut__DOT__resto_d 
            = (0x3fU & (IData)(vlSelf->tb_structural__DOT__dut__DOT__payout_returned));
    } else {
        if (vlSelf->tb_structural__DOT__dut__DOT__clear_outputs) {
            vlSelf->tb_structural__DOT__dut__DOT__coin10_d = 0U;
            vlSelf->tb_structural__DOT__dut__DOT__coin05_d = 0U;
            vlSelf->tb_structural__DOT__dut__DOT__coin02_d = 0U;
            vlSelf->tb_structural__DOT__dut__DOT__coin01_d = 0U;
        } else {
            vlSelf->tb_structural__DOT__dut__DOT__coin10_d 
                = vlSelf->tb_structural__DOT__dut__DOT__coin10_q;
            vlSelf->tb_structural__DOT__dut__DOT__coin05_d 
                = vlSelf->tb_structural__DOT__dut__DOT__coin05_q;
            vlSelf->tb_structural__DOT__dut__DOT__coin02_d 
                = vlSelf->tb_structural__DOT__dut__DOT__coin02_q;
            vlSelf->tb_structural__DOT__dut__DOT__coin01_d 
                = vlSelf->tb_structural__DOT__dut__DOT__coin01_q;
        }
        vlSelf->tb_structural__DOT__dut__DOT__resto_d 
            = (0x3fU & ((IData)(vlSelf->tb_structural__DOT__dut__DOT__do_err)
                         ? (((IData)(vlSelf->tb_structural__DOT__dut__DOT__valid_sel) 
                             & (IData)(vlSelf->tb_structural__DOT__dut__DOT__credito_insuff))
                             ? (IData)(vlSelf->tb_structural__DOT__dut__DOT__sel_price)
                             : 0U) : ((IData)(vlSelf->tb_structural__DOT__dut__DOT__clear_outputs)
                                       ? 0U : (IData)(vlSelf->tb_structural__DOT__dut__DOT__resto_q))));
    }
}

void Vtb_structural___024root___eval_nba(Vtb_structural___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_structural__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_structural___024root___eval_nba\n"); );
    // Body
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb_structural___024root___nba_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[4U] = 1U;
    }
    if ((6ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb_structural___024root___nba_comb__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[5U] = 1U;
    }
    if ((7ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb_structural___024root___nba_comb__TOP__1(vlSelf);
        vlSelf->__Vm_traceActivity[6U] = 1U;
    }
}

void Vtb_structural___024root___timing_resume(Vtb_structural___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_structural__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_structural___024root___timing_resume\n"); );
    // Body
    if ((4ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VtrigSched_hd70e924b__0.resume("@(posedge tb_structural.clk)");
    }
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VdlySched.resume();
    }
}

void Vtb_structural___024root___timing_commit(Vtb_structural___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_structural__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_structural___024root___timing_commit\n"); );
    // Body
    if ((! (4ULL & vlSelf->__VactTriggered.word(0U)))) {
        vlSelf->__VtrigSched_hd70e924b__0.commit("@(posedge tb_structural.clk)");
    }
}

void Vtb_structural___024root___eval_triggers__act(Vtb_structural___024root* vlSelf);

bool Vtb_structural___024root___eval_phase__act(Vtb_structural___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_structural__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_structural___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<3> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vtb_structural___024root___eval_triggers__act(vlSelf);
    Vtb_structural___024root___timing_commit(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        Vtb_structural___024root___timing_resume(vlSelf);
        Vtb_structural___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vtb_structural___024root___eval_phase__nba(Vtb_structural___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_structural__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_structural___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vtb_structural___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_structural___024root___dump_triggers__nba(Vtb_structural___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_structural___024root___dump_triggers__act(Vtb_structural___024root* vlSelf);
#endif  // VL_DEBUG

void Vtb_structural___024root___eval(Vtb_structural___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_structural__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_structural___024root___eval\n"); );
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vtb_structural___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("structural/tb_structural.v", 3, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                Vtb_structural___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("structural/tb_structural.v", 3, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (Vtb_structural___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (Vtb_structural___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vtb_structural___024root___eval_debug_assertions(Vtb_structural___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_structural__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_structural___024root___eval_debug_assertions\n"); );
}
#endif  // VL_DEBUG
