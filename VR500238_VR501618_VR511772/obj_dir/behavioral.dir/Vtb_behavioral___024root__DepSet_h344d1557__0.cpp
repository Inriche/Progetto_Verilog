// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_behavioral.h for the primary calling header

#include "Vtb_behavioral__pch.h"
#include "Vtb_behavioral___024root.h"

VlCoroutine Vtb_behavioral___024root___eval_initial__TOP__Vtiming__0(Vtb_behavioral___024root* vlSelf);
VlCoroutine Vtb_behavioral___024root___eval_initial__TOP__Vtiming__1(Vtb_behavioral___024root* vlSelf);

void Vtb_behavioral___024root___eval_initial(Vtb_behavioral___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_behavioral__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_behavioral___024root___eval_initial\n"); );
    // Body
    Vtb_behavioral___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vtb_behavioral___024root___eval_initial__TOP__Vtiming__1(vlSelf);
    vlSelf->__Vtrigprevexpr___TOP__tb_behavioral__DOT__clk__0 
        = vlSelf->tb_behavioral__DOT__clk;
    vlSelf->__Vtrigprevexpr___TOP__tb_behavioral__DOT__rst__0 
        = vlSelf->tb_behavioral__DOT__rst;
}

VlCoroutine Vtb_behavioral___024root___eval_initial__TOP__Vtiming__0__0(Vtb_behavioral___024root* vlSelf);
VlCoroutine Vtb_behavioral___024root___eval_initial__TOP__Vtiming__0__1(Vtb_behavioral___024root* vlSelf);

VL_INLINE_OPT VlCoroutine Vtb_behavioral___024root___eval_initial__TOP__Vtiming__0(Vtb_behavioral___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_behavioral__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_behavioral___024root___eval_initial__TOP__Vtiming__0\n"); );
    // Body
    co_await Vtb_behavioral___024root___eval_initial__TOP__Vtiming__0__0(vlSelf);
    co_await Vtb_behavioral___024root___eval_initial__TOP__Vtiming__0__1(vlSelf);
}

VL_INLINE_OPT VlCoroutine Vtb_behavioral___024root___eval_initial__TOP__Vtiming__1(Vtb_behavioral___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_behavioral__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_behavioral___024root___eval_initial__TOP__Vtiming__1\n"); );
    // Body
    while (1U) {
        co_await vlSelf->__VdlySched.delay(0x1388ULL, 
                                           nullptr, 
                                           "behavioral/tb_behavioral.v", 
                                           46);
        vlSelf->tb_behavioral__DOT__clk = (1U & (~ (IData)(vlSelf->tb_behavioral__DOT__clk)));
    }
}

void Vtb_behavioral___024root___eval_act(Vtb_behavioral___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_behavioral__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_behavioral___024root___eval_act\n"); );
}

VL_INLINE_OPT void Vtb_behavioral___024root___nba_sequent__TOP__0(Vtb_behavioral___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_behavioral__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_behavioral___024root___nba_sequent__TOP__0\n"); );
    // Init
    CData/*5:0*/ __Vtask_tb_behavioral__DOT__dut__DOT__greedy_return__624__amount;
    __Vtask_tb_behavioral__DOT__dut__DOT__greedy_return__624__amount = 0;
    CData/*5:0*/ __Vtask_tb_behavioral__DOT__dut__DOT__greedy_return__624__out10;
    __Vtask_tb_behavioral__DOT__dut__DOT__greedy_return__624__out10 = 0;
    CData/*5:0*/ __Vtask_tb_behavioral__DOT__dut__DOT__greedy_return__624__out05;
    __Vtask_tb_behavioral__DOT__dut__DOT__greedy_return__624__out05 = 0;
    CData/*5:0*/ __Vtask_tb_behavioral__DOT__dut__DOT__greedy_return__624__out02;
    __Vtask_tb_behavioral__DOT__dut__DOT__greedy_return__624__out02 = 0;
    CData/*5:0*/ __Vtask_tb_behavioral__DOT__dut__DOT__greedy_return__624__out01;
    __Vtask_tb_behavioral__DOT__dut__DOT__greedy_return__624__out01 = 0;
    CData/*5:0*/ __Vtask_tb_behavioral__DOT__dut__DOT__greedy_return__624__next10;
    __Vtask_tb_behavioral__DOT__dut__DOT__greedy_return__624__next10 = 0;
    CData/*5:0*/ __Vtask_tb_behavioral__DOT__dut__DOT__greedy_return__624__next05;
    __Vtask_tb_behavioral__DOT__dut__DOT__greedy_return__624__next05 = 0;
    CData/*5:0*/ __Vtask_tb_behavioral__DOT__dut__DOT__greedy_return__624__next02;
    __Vtask_tb_behavioral__DOT__dut__DOT__greedy_return__624__next02 = 0;
    CData/*5:0*/ __Vtask_tb_behavioral__DOT__dut__DOT__greedy_return__624__next01;
    __Vtask_tb_behavioral__DOT__dut__DOT__greedy_return__624__next01 = 0;
    CData/*5:0*/ __Vtask_tb_behavioral__DOT__dut__DOT__greedy_return__624__returned;
    __Vtask_tb_behavioral__DOT__dut__DOT__greedy_return__624__returned = 0;
    CData/*5:0*/ __Vfunc_tb_behavioral__DOT__dut__DOT__coin_value__625__Vfuncout;
    __Vfunc_tb_behavioral__DOT__dut__DOT__coin_value__625__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_tb_behavioral__DOT__dut__DOT__coin_value__625__code;
    __Vfunc_tb_behavioral__DOT__dut__DOT__coin_value__625__code = 0;
    CData/*5:0*/ __Vfunc_tb_behavioral__DOT__dut__DOT__coin_value__626__Vfuncout;
    __Vfunc_tb_behavioral__DOT__dut__DOT__coin_value__626__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_tb_behavioral__DOT__dut__DOT__coin_value__626__code;
    __Vfunc_tb_behavioral__DOT__dut__DOT__coin_value__626__code = 0;
    CData/*5:0*/ __Vfunc_tb_behavioral__DOT__dut__DOT__coin_value__627__Vfuncout;
    __Vfunc_tb_behavioral__DOT__dut__DOT__coin_value__627__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_tb_behavioral__DOT__dut__DOT__coin_value__627__code;
    __Vfunc_tb_behavioral__DOT__dut__DOT__coin_value__627__code = 0;
    CData/*5:0*/ __Vtask_tb_behavioral__DOT__dut__DOT__greedy_return__628__amount;
    __Vtask_tb_behavioral__DOT__dut__DOT__greedy_return__628__amount = 0;
    CData/*5:0*/ __Vtask_tb_behavioral__DOT__dut__DOT__greedy_return__628__out10;
    __Vtask_tb_behavioral__DOT__dut__DOT__greedy_return__628__out10 = 0;
    CData/*5:0*/ __Vtask_tb_behavioral__DOT__dut__DOT__greedy_return__628__out05;
    __Vtask_tb_behavioral__DOT__dut__DOT__greedy_return__628__out05 = 0;
    CData/*5:0*/ __Vtask_tb_behavioral__DOT__dut__DOT__greedy_return__628__out02;
    __Vtask_tb_behavioral__DOT__dut__DOT__greedy_return__628__out02 = 0;
    CData/*5:0*/ __Vtask_tb_behavioral__DOT__dut__DOT__greedy_return__628__out01;
    __Vtask_tb_behavioral__DOT__dut__DOT__greedy_return__628__out01 = 0;
    CData/*5:0*/ __Vtask_tb_behavioral__DOT__dut__DOT__greedy_return__628__next10;
    __Vtask_tb_behavioral__DOT__dut__DOT__greedy_return__628__next10 = 0;
    CData/*5:0*/ __Vtask_tb_behavioral__DOT__dut__DOT__greedy_return__628__next05;
    __Vtask_tb_behavioral__DOT__dut__DOT__greedy_return__628__next05 = 0;
    CData/*5:0*/ __Vtask_tb_behavioral__DOT__dut__DOT__greedy_return__628__next02;
    __Vtask_tb_behavioral__DOT__dut__DOT__greedy_return__628__next02 = 0;
    CData/*5:0*/ __Vtask_tb_behavioral__DOT__dut__DOT__greedy_return__628__next01;
    __Vtask_tb_behavioral__DOT__dut__DOT__greedy_return__628__next01 = 0;
    CData/*5:0*/ __Vtask_tb_behavioral__DOT__dut__DOT__greedy_return__628__returned;
    __Vtask_tb_behavioral__DOT__dut__DOT__greedy_return__628__returned = 0;
    CData/*5:0*/ __Vtask_tb_behavioral__DOT__dut__DOT__greedy_return__629__amount;
    __Vtask_tb_behavioral__DOT__dut__DOT__greedy_return__629__amount = 0;
    CData/*5:0*/ __Vtask_tb_behavioral__DOT__dut__DOT__greedy_return__629__out10;
    __Vtask_tb_behavioral__DOT__dut__DOT__greedy_return__629__out10 = 0;
    CData/*5:0*/ __Vtask_tb_behavioral__DOT__dut__DOT__greedy_return__629__out05;
    __Vtask_tb_behavioral__DOT__dut__DOT__greedy_return__629__out05 = 0;
    CData/*5:0*/ __Vtask_tb_behavioral__DOT__dut__DOT__greedy_return__629__out02;
    __Vtask_tb_behavioral__DOT__dut__DOT__greedy_return__629__out02 = 0;
    CData/*5:0*/ __Vtask_tb_behavioral__DOT__dut__DOT__greedy_return__629__out01;
    __Vtask_tb_behavioral__DOT__dut__DOT__greedy_return__629__out01 = 0;
    CData/*5:0*/ __Vtask_tb_behavioral__DOT__dut__DOT__greedy_return__629__next10;
    __Vtask_tb_behavioral__DOT__dut__DOT__greedy_return__629__next10 = 0;
    CData/*5:0*/ __Vtask_tb_behavioral__DOT__dut__DOT__greedy_return__629__next05;
    __Vtask_tb_behavioral__DOT__dut__DOT__greedy_return__629__next05 = 0;
    CData/*5:0*/ __Vtask_tb_behavioral__DOT__dut__DOT__greedy_return__629__next02;
    __Vtask_tb_behavioral__DOT__dut__DOT__greedy_return__629__next02 = 0;
    CData/*5:0*/ __Vtask_tb_behavioral__DOT__dut__DOT__greedy_return__629__next01;
    __Vtask_tb_behavioral__DOT__dut__DOT__greedy_return__629__next01 = 0;
    CData/*5:0*/ __Vtask_tb_behavioral__DOT__dut__DOT__greedy_return__629__returned;
    __Vtask_tb_behavioral__DOT__dut__DOT__greedy_return__629__returned = 0;
    CData/*5:0*/ __Vtask_tb_behavioral__DOT__dut__DOT__greedy_return__630__amount;
    __Vtask_tb_behavioral__DOT__dut__DOT__greedy_return__630__amount = 0;
    CData/*5:0*/ __Vtask_tb_behavioral__DOT__dut__DOT__greedy_return__630__out10;
    __Vtask_tb_behavioral__DOT__dut__DOT__greedy_return__630__out10 = 0;
    CData/*5:0*/ __Vtask_tb_behavioral__DOT__dut__DOT__greedy_return__630__out05;
    __Vtask_tb_behavioral__DOT__dut__DOT__greedy_return__630__out05 = 0;
    CData/*5:0*/ __Vtask_tb_behavioral__DOT__dut__DOT__greedy_return__630__out02;
    __Vtask_tb_behavioral__DOT__dut__DOT__greedy_return__630__out02 = 0;
    CData/*5:0*/ __Vtask_tb_behavioral__DOT__dut__DOT__greedy_return__630__out01;
    __Vtask_tb_behavioral__DOT__dut__DOT__greedy_return__630__out01 = 0;
    CData/*5:0*/ __Vtask_tb_behavioral__DOT__dut__DOT__greedy_return__630__next10;
    __Vtask_tb_behavioral__DOT__dut__DOT__greedy_return__630__next10 = 0;
    CData/*5:0*/ __Vtask_tb_behavioral__DOT__dut__DOT__greedy_return__630__next05;
    __Vtask_tb_behavioral__DOT__dut__DOT__greedy_return__630__next05 = 0;
    CData/*5:0*/ __Vtask_tb_behavioral__DOT__dut__DOT__greedy_return__630__next02;
    __Vtask_tb_behavioral__DOT__dut__DOT__greedy_return__630__next02 = 0;
    CData/*5:0*/ __Vtask_tb_behavioral__DOT__dut__DOT__greedy_return__630__next01;
    __Vtask_tb_behavioral__DOT__dut__DOT__greedy_return__630__next01 = 0;
    CData/*5:0*/ __Vtask_tb_behavioral__DOT__dut__DOT__greedy_return__630__returned;
    __Vtask_tb_behavioral__DOT__dut__DOT__greedy_return__630__returned = 0;
    CData/*5:0*/ __Vtask_tb_behavioral__DOT__dut__DOT__greedy_return__631__amount;
    __Vtask_tb_behavioral__DOT__dut__DOT__greedy_return__631__amount = 0;
    CData/*5:0*/ __Vtask_tb_behavioral__DOT__dut__DOT__greedy_return__631__out10;
    __Vtask_tb_behavioral__DOT__dut__DOT__greedy_return__631__out10 = 0;
    CData/*5:0*/ __Vtask_tb_behavioral__DOT__dut__DOT__greedy_return__631__out05;
    __Vtask_tb_behavioral__DOT__dut__DOT__greedy_return__631__out05 = 0;
    CData/*5:0*/ __Vtask_tb_behavioral__DOT__dut__DOT__greedy_return__631__out02;
    __Vtask_tb_behavioral__DOT__dut__DOT__greedy_return__631__out02 = 0;
    CData/*5:0*/ __Vtask_tb_behavioral__DOT__dut__DOT__greedy_return__631__out01;
    __Vtask_tb_behavioral__DOT__dut__DOT__greedy_return__631__out01 = 0;
    CData/*5:0*/ __Vtask_tb_behavioral__DOT__dut__DOT__greedy_return__631__next10;
    __Vtask_tb_behavioral__DOT__dut__DOT__greedy_return__631__next10 = 0;
    CData/*5:0*/ __Vtask_tb_behavioral__DOT__dut__DOT__greedy_return__631__next05;
    __Vtask_tb_behavioral__DOT__dut__DOT__greedy_return__631__next05 = 0;
    CData/*5:0*/ __Vtask_tb_behavioral__DOT__dut__DOT__greedy_return__631__next02;
    __Vtask_tb_behavioral__DOT__dut__DOT__greedy_return__631__next02 = 0;
    CData/*5:0*/ __Vtask_tb_behavioral__DOT__dut__DOT__greedy_return__631__next01;
    __Vtask_tb_behavioral__DOT__dut__DOT__greedy_return__631__next01 = 0;
    CData/*5:0*/ __Vtask_tb_behavioral__DOT__dut__DOT__greedy_return__631__returned;
    __Vtask_tb_behavioral__DOT__dut__DOT__greedy_return__631__returned = 0;
    CData/*5:0*/ __Vtask_tb_behavioral__DOT__dut__DOT__greedy_return__632__amount;
    __Vtask_tb_behavioral__DOT__dut__DOT__greedy_return__632__amount = 0;
    CData/*5:0*/ __Vtask_tb_behavioral__DOT__dut__DOT__greedy_return__632__out10;
    __Vtask_tb_behavioral__DOT__dut__DOT__greedy_return__632__out10 = 0;
    CData/*5:0*/ __Vtask_tb_behavioral__DOT__dut__DOT__greedy_return__632__out05;
    __Vtask_tb_behavioral__DOT__dut__DOT__greedy_return__632__out05 = 0;
    CData/*5:0*/ __Vtask_tb_behavioral__DOT__dut__DOT__greedy_return__632__out02;
    __Vtask_tb_behavioral__DOT__dut__DOT__greedy_return__632__out02 = 0;
    CData/*5:0*/ __Vtask_tb_behavioral__DOT__dut__DOT__greedy_return__632__out01;
    __Vtask_tb_behavioral__DOT__dut__DOT__greedy_return__632__out01 = 0;
    CData/*5:0*/ __Vtask_tb_behavioral__DOT__dut__DOT__greedy_return__632__next10;
    __Vtask_tb_behavioral__DOT__dut__DOT__greedy_return__632__next10 = 0;
    CData/*5:0*/ __Vtask_tb_behavioral__DOT__dut__DOT__greedy_return__632__next05;
    __Vtask_tb_behavioral__DOT__dut__DOT__greedy_return__632__next05 = 0;
    CData/*5:0*/ __Vtask_tb_behavioral__DOT__dut__DOT__greedy_return__632__next02;
    __Vtask_tb_behavioral__DOT__dut__DOT__greedy_return__632__next02 = 0;
    CData/*5:0*/ __Vtask_tb_behavioral__DOT__dut__DOT__greedy_return__632__next01;
    __Vtask_tb_behavioral__DOT__dut__DOT__greedy_return__632__next01 = 0;
    CData/*5:0*/ __Vtask_tb_behavioral__DOT__dut__DOT__greedy_return__632__returned;
    __Vtask_tb_behavioral__DOT__dut__DOT__greedy_return__632__returned = 0;
    CData/*5:0*/ __Vfunc_tb_behavioral__DOT__dut__DOT__coin_value__633__Vfuncout;
    __Vfunc_tb_behavioral__DOT__dut__DOT__coin_value__633__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_tb_behavioral__DOT__dut__DOT__coin_value__633__code;
    __Vfunc_tb_behavioral__DOT__dut__DOT__coin_value__633__code = 0;
    CData/*5:0*/ __Vfunc_tb_behavioral__DOT__dut__DOT__coin_value__634__Vfuncout;
    __Vfunc_tb_behavioral__DOT__dut__DOT__coin_value__634__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_tb_behavioral__DOT__dut__DOT__coin_value__634__code;
    __Vfunc_tb_behavioral__DOT__dut__DOT__coin_value__634__code = 0;
    CData/*5:0*/ __Vfunc_tb_behavioral__DOT__dut__DOT__coin_value__635__Vfuncout;
    __Vfunc_tb_behavioral__DOT__dut__DOT__coin_value__635__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_tb_behavioral__DOT__dut__DOT__coin_value__635__code;
    __Vfunc_tb_behavioral__DOT__dut__DOT__coin_value__635__code = 0;
    CData/*1:0*/ __Vdly__tb_behavioral__DOT__dut__DOT__stato;
    __Vdly__tb_behavioral__DOT__dut__DOT__stato = 0;
    CData/*5:0*/ __Vdly__tb_behavioral__DOT__credito;
    __Vdly__tb_behavioral__DOT__credito = 0;
    CData/*5:0*/ __Vdly__tb_behavioral__DOT__dut__DOT__qty_c10;
    __Vdly__tb_behavioral__DOT__dut__DOT__qty_c10 = 0;
    CData/*5:0*/ __Vdly__tb_behavioral__DOT__dut__DOT__qty_c05;
    __Vdly__tb_behavioral__DOT__dut__DOT__qty_c05 = 0;
    CData/*5:0*/ __Vdly__tb_behavioral__DOT__dut__DOT__qty_c02;
    __Vdly__tb_behavioral__DOT__dut__DOT__qty_c02 = 0;
    CData/*5:0*/ __Vdly__tb_behavioral__DOT__dut__DOT__qty_c01;
    __Vdly__tb_behavioral__DOT__dut__DOT__qty_c01 = 0;
    SData/*9:0*/ __Vdly__tb_behavioral__DOT__disponibile;
    __Vdly__tb_behavioral__DOT__disponibile = 0;
    CData/*3:0*/ __Vdly__tb_behavioral__DOT__dut__DOT__init_counter;
    __Vdly__tb_behavioral__DOT__dut__DOT__init_counter = 0;
    // Body
    __Vdly__tb_behavioral__DOT__dut__DOT__init_counter 
        = vlSelf->tb_behavioral__DOT__dut__DOT__init_counter;
    __Vdly__tb_behavioral__DOT__disponibile = vlSelf->tb_behavioral__DOT__disponibile;
    __Vdly__tb_behavioral__DOT__dut__DOT__qty_c01 = vlSelf->tb_behavioral__DOT__dut__DOT__qty_c01;
    __Vdly__tb_behavioral__DOT__dut__DOT__qty_c02 = vlSelf->tb_behavioral__DOT__dut__DOT__qty_c02;
    __Vdly__tb_behavioral__DOT__dut__DOT__qty_c05 = vlSelf->tb_behavioral__DOT__dut__DOT__qty_c05;
    __Vdly__tb_behavioral__DOT__dut__DOT__qty_c10 = vlSelf->tb_behavioral__DOT__dut__DOT__qty_c10;
    __Vdly__tb_behavioral__DOT__credito = vlSelf->tb_behavioral__DOT__credito;
    __Vdly__tb_behavioral__DOT__dut__DOT__stato = vlSelf->tb_behavioral__DOT__dut__DOT__stato;
    if (vlSelf->tb_behavioral__DOT__rst) {
        if ((1U & (~ ((IData)(vlSelf->tb_behavioral__DOT__dut__DOT__stato) 
                      >> 1U)))) {
            if ((1U & (IData)(vlSelf->tb_behavioral__DOT__dut__DOT__stato))) {
                if ((1U & (~ (IData)(vlSelf->tb_behavioral__DOT__annulla)))) {
                    if ((0U != ([&]() {
                                    __Vfunc_tb_behavioral__DOT__dut__DOT__coin_value__633__code 
                                        = vlSelf->tb_behavioral__DOT__coin;
                                    __Vfunc_tb_behavioral__DOT__dut__DOT__coin_value__633__Vfuncout 
                                        = ((4U & (IData)(__Vfunc_tb_behavioral__DOT__dut__DOT__coin_value__633__code))
                                            ? ((2U 
                                                & (IData)(__Vfunc_tb_behavioral__DOT__dut__DOT__coin_value__633__code))
                                                ? (
                                                   (1U 
                                                    & (IData)(__Vfunc_tb_behavioral__DOT__dut__DOT__coin_value__633__code))
                                                    ? 0xaU
                                                    : 5U)
                                                : (
                                                   (1U 
                                                    & (IData)(__Vfunc_tb_behavioral__DOT__dut__DOT__coin_value__633__code))
                                                    ? 2U
                                                    : 1U))
                                            : 0U);
                                }(), (IData)(__Vfunc_tb_behavioral__DOT__dut__DOT__coin_value__633__Vfuncout)))) {
                    }
                }
            }
        }
    }
    if (vlSelf->tb_behavioral__DOT__rst) {
        if ((1U & (~ ((IData)(vlSelf->tb_behavioral__DOT__dut__DOT__stato) 
                      >> 1U)))) {
            if ((1U & (IData)(vlSelf->tb_behavioral__DOT__dut__DOT__stato))) {
                if ((1U & (~ (IData)(vlSelf->tb_behavioral__DOT__annulla)))) {
                    if ((0U != ([&]() {
                                    __Vfunc_tb_behavioral__DOT__dut__DOT__coin_value__633__code 
                                        = vlSelf->tb_behavioral__DOT__coin;
                                    __Vfunc_tb_behavioral__DOT__dut__DOT__coin_value__633__Vfuncout 
                                        = ((4U & (IData)(__Vfunc_tb_behavioral__DOT__dut__DOT__coin_value__633__code))
                                            ? ((2U 
                                                & (IData)(__Vfunc_tb_behavioral__DOT__dut__DOT__coin_value__633__code))
                                                ? (
                                                   (1U 
                                                    & (IData)(__Vfunc_tb_behavioral__DOT__dut__DOT__coin_value__633__code))
                                                    ? 0xaU
                                                    : 5U)
                                                : (
                                                   (1U 
                                                    & (IData)(__Vfunc_tb_behavioral__DOT__dut__DOT__coin_value__633__code))
                                                    ? 2U
                                                    : 1U))
                                            : 0U);
                                }(), (IData)(__Vfunc_tb_behavioral__DOT__dut__DOT__coin_value__633__Vfuncout)))) {
                    }
                }
            }
        }
    }
    if (vlSelf->tb_behavioral__DOT__rst) {
        if ((1U & (~ ((IData)(vlSelf->tb_behavioral__DOT__dut__DOT__stato) 
                      >> 1U)))) {
            if ((1U & (IData)(vlSelf->tb_behavioral__DOT__dut__DOT__stato))) {
                if ((1U & (~ (IData)(vlSelf->tb_behavioral__DOT__annulla)))) {
                    if ((0U != ([&]() {
                                    __Vfunc_tb_behavioral__DOT__dut__DOT__coin_value__633__code 
                                        = vlSelf->tb_behavioral__DOT__coin;
                                    __Vfunc_tb_behavioral__DOT__dut__DOT__coin_value__633__Vfuncout 
                                        = ((4U & (IData)(__Vfunc_tb_behavioral__DOT__dut__DOT__coin_value__633__code))
                                            ? ((2U 
                                                & (IData)(__Vfunc_tb_behavioral__DOT__dut__DOT__coin_value__633__code))
                                                ? (
                                                   (1U 
                                                    & (IData)(__Vfunc_tb_behavioral__DOT__dut__DOT__coin_value__633__code))
                                                    ? 0xaU
                                                    : 5U)
                                                : (
                                                   (1U 
                                                    & (IData)(__Vfunc_tb_behavioral__DOT__dut__DOT__coin_value__633__code))
                                                    ? 2U
                                                    : 1U))
                                            : 0U);
                                }(), (IData)(__Vfunc_tb_behavioral__DOT__dut__DOT__coin_value__633__Vfuncout)))) {
                    }
                }
            }
        }
    }
    if (vlSelf->tb_behavioral__DOT__rst) {
        if ((1U & (~ ((IData)(vlSelf->tb_behavioral__DOT__dut__DOT__stato) 
                      >> 1U)))) {
            if ((1U & (IData)(vlSelf->tb_behavioral__DOT__dut__DOT__stato))) {
                if ((1U & (~ (IData)(vlSelf->tb_behavioral__DOT__annulla)))) {
                    if ((0U != ([&]() {
                                    __Vfunc_tb_behavioral__DOT__dut__DOT__coin_value__633__code 
                                        = vlSelf->tb_behavioral__DOT__coin;
                                    __Vfunc_tb_behavioral__DOT__dut__DOT__coin_value__633__Vfuncout 
                                        = ((4U & (IData)(__Vfunc_tb_behavioral__DOT__dut__DOT__coin_value__633__code))
                                            ? ((2U 
                                                & (IData)(__Vfunc_tb_behavioral__DOT__dut__DOT__coin_value__633__code))
                                                ? (
                                                   (1U 
                                                    & (IData)(__Vfunc_tb_behavioral__DOT__dut__DOT__coin_value__633__code))
                                                    ? 0xaU
                                                    : 5U)
                                                : (
                                                   (1U 
                                                    & (IData)(__Vfunc_tb_behavioral__DOT__dut__DOT__coin_value__633__code))
                                                    ? 2U
                                                    : 1U))
                                            : 0U);
                                }(), (IData)(__Vfunc_tb_behavioral__DOT__dut__DOT__coin_value__633__Vfuncout)))) {
                    }
                }
            }
        }
    }
    if (vlSelf->tb_behavioral__DOT__rst) {
        if ((2U & (IData)(vlSelf->tb_behavioral__DOT__dut__DOT__stato))) {
            if ((1U & (~ (IData)(vlSelf->tb_behavioral__DOT__dut__DOT__stato)))) {
                if ((1U & (~ (IData)(vlSelf->tb_behavioral__DOT__annulla)))) {
                    if ((0U != ([&]() {
                                    __Vfunc_tb_behavioral__DOT__dut__DOT__coin_value__625__code 
                                        = vlSelf->tb_behavioral__DOT__coin;
                                    __Vfunc_tb_behavioral__DOT__dut__DOT__coin_value__625__Vfuncout 
                                        = ((4U & (IData)(__Vfunc_tb_behavioral__DOT__dut__DOT__coin_value__625__code))
                                            ? ((2U 
                                                & (IData)(__Vfunc_tb_behavioral__DOT__dut__DOT__coin_value__625__code))
                                                ? (
                                                   (1U 
                                                    & (IData)(__Vfunc_tb_behavioral__DOT__dut__DOT__coin_value__625__code))
                                                    ? 0xaU
                                                    : 5U)
                                                : (
                                                   (1U 
                                                    & (IData)(__Vfunc_tb_behavioral__DOT__dut__DOT__coin_value__625__code))
                                                    ? 2U
                                                    : 1U))
                                            : 0U);
                                }(), (IData)(__Vfunc_tb_behavioral__DOT__dut__DOT__coin_value__625__Vfuncout)))) {
                    }
                }
            }
        }
    }
    if (vlSelf->tb_behavioral__DOT__rst) {
        if ((2U & (IData)(vlSelf->tb_behavioral__DOT__dut__DOT__stato))) {
            if ((1U & (~ (IData)(vlSelf->tb_behavioral__DOT__dut__DOT__stato)))) {
                if ((1U & (~ (IData)(vlSelf->tb_behavioral__DOT__annulla)))) {
                    if ((0U != ([&]() {
                                    __Vfunc_tb_behavioral__DOT__dut__DOT__coin_value__625__code 
                                        = vlSelf->tb_behavioral__DOT__coin;
                                    __Vfunc_tb_behavioral__DOT__dut__DOT__coin_value__625__Vfuncout 
                                        = ((4U & (IData)(__Vfunc_tb_behavioral__DOT__dut__DOT__coin_value__625__code))
                                            ? ((2U 
                                                & (IData)(__Vfunc_tb_behavioral__DOT__dut__DOT__coin_value__625__code))
                                                ? (
                                                   (1U 
                                                    & (IData)(__Vfunc_tb_behavioral__DOT__dut__DOT__coin_value__625__code))
                                                    ? 0xaU
                                                    : 5U)
                                                : (
                                                   (1U 
                                                    & (IData)(__Vfunc_tb_behavioral__DOT__dut__DOT__coin_value__625__code))
                                                    ? 2U
                                                    : 1U))
                                            : 0U);
                                }(), (IData)(__Vfunc_tb_behavioral__DOT__dut__DOT__coin_value__625__Vfuncout)))) {
                    }
                }
            }
        }
    }
    if (vlSelf->tb_behavioral__DOT__rst) {
        if ((2U & (IData)(vlSelf->tb_behavioral__DOT__dut__DOT__stato))) {
            if ((1U & (~ (IData)(vlSelf->tb_behavioral__DOT__dut__DOT__stato)))) {
                if ((1U & (~ (IData)(vlSelf->tb_behavioral__DOT__annulla)))) {
                    if ((0U != ([&]() {
                                    __Vfunc_tb_behavioral__DOT__dut__DOT__coin_value__625__code 
                                        = vlSelf->tb_behavioral__DOT__coin;
                                    __Vfunc_tb_behavioral__DOT__dut__DOT__coin_value__625__Vfuncout 
                                        = ((4U & (IData)(__Vfunc_tb_behavioral__DOT__dut__DOT__coin_value__625__code))
                                            ? ((2U 
                                                & (IData)(__Vfunc_tb_behavioral__DOT__dut__DOT__coin_value__625__code))
                                                ? (
                                                   (1U 
                                                    & (IData)(__Vfunc_tb_behavioral__DOT__dut__DOT__coin_value__625__code))
                                                    ? 0xaU
                                                    : 5U)
                                                : (
                                                   (1U 
                                                    & (IData)(__Vfunc_tb_behavioral__DOT__dut__DOT__coin_value__625__code))
                                                    ? 2U
                                                    : 1U))
                                            : 0U);
                                }(), (IData)(__Vfunc_tb_behavioral__DOT__dut__DOT__coin_value__625__Vfuncout)))) {
                    }
                }
            }
        }
    }
    if (vlSelf->tb_behavioral__DOT__rst) {
        if ((2U & (IData)(vlSelf->tb_behavioral__DOT__dut__DOT__stato))) {
            if ((1U & (~ (IData)(vlSelf->tb_behavioral__DOT__dut__DOT__stato)))) {
                if ((1U & (~ (IData)(vlSelf->tb_behavioral__DOT__annulla)))) {
                    if ((0U != ([&]() {
                                    __Vfunc_tb_behavioral__DOT__dut__DOT__coin_value__625__code 
                                        = vlSelf->tb_behavioral__DOT__coin;
                                    __Vfunc_tb_behavioral__DOT__dut__DOT__coin_value__625__Vfuncout 
                                        = ((4U & (IData)(__Vfunc_tb_behavioral__DOT__dut__DOT__coin_value__625__code))
                                            ? ((2U 
                                                & (IData)(__Vfunc_tb_behavioral__DOT__dut__DOT__coin_value__625__code))
                                                ? (
                                                   (1U 
                                                    & (IData)(__Vfunc_tb_behavioral__DOT__dut__DOT__coin_value__625__code))
                                                    ? 0xaU
                                                    : 5U)
                                                : (
                                                   (1U 
                                                    & (IData)(__Vfunc_tb_behavioral__DOT__dut__DOT__coin_value__625__code))
                                                    ? 2U
                                                    : 1U))
                                            : 0U);
                                }(), (IData)(__Vfunc_tb_behavioral__DOT__dut__DOT__coin_value__625__Vfuncout)))) {
                    }
                }
            }
        }
    }
    if (vlSelf->tb_behavioral__DOT__rst) {
        if ((2U & (IData)(vlSelf->tb_behavioral__DOT__dut__DOT__stato))) {
            if ((1U & (~ (IData)(vlSelf->tb_behavioral__DOT__dut__DOT__stato)))) {
                if ((1U & (~ (IData)(vlSelf->tb_behavioral__DOT__annulla)))) {
                    if ((0U != ([&]() {
                                    __Vfunc_tb_behavioral__DOT__dut__DOT__coin_value__625__code 
                                        = vlSelf->tb_behavioral__DOT__coin;
                                    __Vfunc_tb_behavioral__DOT__dut__DOT__coin_value__625__Vfuncout 
                                        = ((4U & (IData)(__Vfunc_tb_behavioral__DOT__dut__DOT__coin_value__625__code))
                                            ? ((2U 
                                                & (IData)(__Vfunc_tb_behavioral__DOT__dut__DOT__coin_value__625__code))
                                                ? (
                                                   (1U 
                                                    & (IData)(__Vfunc_tb_behavioral__DOT__dut__DOT__coin_value__625__code))
                                                    ? 0xaU
                                                    : 5U)
                                                : (
                                                   (1U 
                                                    & (IData)(__Vfunc_tb_behavioral__DOT__dut__DOT__coin_value__625__code))
                                                    ? 2U
                                                    : 1U))
                                            : 0U);
                                }(), (IData)(__Vfunc_tb_behavioral__DOT__dut__DOT__coin_value__625__Vfuncout)))) {
                    }
                }
            }
        }
    }
    if (vlSelf->tb_behavioral__DOT__rst) {
        if ((2U & (IData)(vlSelf->tb_behavioral__DOT__dut__DOT__stato))) {
            if ((1U & (~ (IData)(vlSelf->tb_behavioral__DOT__dut__DOT__stato)))) {
                if ((1U & (~ (IData)(vlSelf->tb_behavioral__DOT__annulla)))) {
                    if ((0U != ([&]() {
                                    __Vfunc_tb_behavioral__DOT__dut__DOT__coin_value__625__code 
                                        = vlSelf->tb_behavioral__DOT__coin;
                                    __Vfunc_tb_behavioral__DOT__dut__DOT__coin_value__625__Vfuncout 
                                        = ((4U & (IData)(__Vfunc_tb_behavioral__DOT__dut__DOT__coin_value__625__code))
                                            ? ((2U 
                                                & (IData)(__Vfunc_tb_behavioral__DOT__dut__DOT__coin_value__625__code))
                                                ? (
                                                   (1U 
                                                    & (IData)(__Vfunc_tb_behavioral__DOT__dut__DOT__coin_value__625__code))
                                                    ? 0xaU
                                                    : 5U)
                                                : (
                                                   (1U 
                                                    & (IData)(__Vfunc_tb_behavioral__DOT__dut__DOT__coin_value__625__code))
                                                    ? 2U
                                                    : 1U))
                                            : 0U);
                                }(), (IData)(__Vfunc_tb_behavioral__DOT__dut__DOT__coin_value__625__Vfuncout)))) {
                    }
                }
            }
        }
    }
    if (vlSelf->tb_behavioral__DOT__rst) {
        if ((2U & (IData)(vlSelf->tb_behavioral__DOT__dut__DOT__stato))) {
            if ((1U & (~ (IData)(vlSelf->tb_behavioral__DOT__dut__DOT__stato)))) {
                if ((1U & (~ (IData)(vlSelf->tb_behavioral__DOT__annulla)))) {
                    if ((0U != ([&]() {
                                    __Vfunc_tb_behavioral__DOT__dut__DOT__coin_value__625__code 
                                        = vlSelf->tb_behavioral__DOT__coin;
                                    __Vfunc_tb_behavioral__DOT__dut__DOT__coin_value__625__Vfuncout 
                                        = ((4U & (IData)(__Vfunc_tb_behavioral__DOT__dut__DOT__coin_value__625__code))
                                            ? ((2U 
                                                & (IData)(__Vfunc_tb_behavioral__DOT__dut__DOT__coin_value__625__code))
                                                ? (
                                                   (1U 
                                                    & (IData)(__Vfunc_tb_behavioral__DOT__dut__DOT__coin_value__625__code))
                                                    ? 0xaU
                                                    : 5U)
                                                : (
                                                   (1U 
                                                    & (IData)(__Vfunc_tb_behavioral__DOT__dut__DOT__coin_value__625__code))
                                                    ? 2U
                                                    : 1U))
                                            : 0U);
                                }(), (IData)(__Vfunc_tb_behavioral__DOT__dut__DOT__coin_value__625__Vfuncout)))) {
                    }
                }
            }
        }
    }
    if (vlSelf->tb_behavioral__DOT__rst) {
        if ((2U & (IData)(vlSelf->tb_behavioral__DOT__dut__DOT__stato))) {
            if ((1U & (~ (IData)(vlSelf->tb_behavioral__DOT__dut__DOT__stato)))) {
                if ((1U & (~ (IData)(vlSelf->tb_behavioral__DOT__annulla)))) {
                    if ((0U != ([&]() {
                                    __Vfunc_tb_behavioral__DOT__dut__DOT__coin_value__625__code 
                                        = vlSelf->tb_behavioral__DOT__coin;
                                    __Vfunc_tb_behavioral__DOT__dut__DOT__coin_value__625__Vfuncout 
                                        = ((4U & (IData)(__Vfunc_tb_behavioral__DOT__dut__DOT__coin_value__625__code))
                                            ? ((2U 
                                                & (IData)(__Vfunc_tb_behavioral__DOT__dut__DOT__coin_value__625__code))
                                                ? (
                                                   (1U 
                                                    & (IData)(__Vfunc_tb_behavioral__DOT__dut__DOT__coin_value__625__code))
                                                    ? 0xaU
                                                    : 5U)
                                                : (
                                                   (1U 
                                                    & (IData)(__Vfunc_tb_behavioral__DOT__dut__DOT__coin_value__625__code))
                                                    ? 2U
                                                    : 1U))
                                            : 0U);
                                }(), (IData)(__Vfunc_tb_behavioral__DOT__dut__DOT__coin_value__625__Vfuncout)))) {
                    }
                }
            }
        }
    }
    if (vlSelf->tb_behavioral__DOT__rst) {
        if ((2U & (IData)(vlSelf->tb_behavioral__DOT__dut__DOT__stato))) {
            if ((1U & (~ (IData)(vlSelf->tb_behavioral__DOT__dut__DOT__stato)))) {
                if ((1U & (~ (IData)(vlSelf->tb_behavioral__DOT__annulla)))) {
                    if ((0U != ([&]() {
                                    __Vfunc_tb_behavioral__DOT__dut__DOT__coin_value__625__code 
                                        = vlSelf->tb_behavioral__DOT__coin;
                                    __Vfunc_tb_behavioral__DOT__dut__DOT__coin_value__625__Vfuncout 
                                        = ((4U & (IData)(__Vfunc_tb_behavioral__DOT__dut__DOT__coin_value__625__code))
                                            ? ((2U 
                                                & (IData)(__Vfunc_tb_behavioral__DOT__dut__DOT__coin_value__625__code))
                                                ? (
                                                   (1U 
                                                    & (IData)(__Vfunc_tb_behavioral__DOT__dut__DOT__coin_value__625__code))
                                                    ? 0xaU
                                                    : 5U)
                                                : (
                                                   (1U 
                                                    & (IData)(__Vfunc_tb_behavioral__DOT__dut__DOT__coin_value__625__code))
                                                    ? 2U
                                                    : 1U))
                                            : 0U);
                                }(), (IData)(__Vfunc_tb_behavioral__DOT__dut__DOT__coin_value__625__Vfuncout)))) {
                    }
                }
            }
        }
    }
    if (vlSelf->tb_behavioral__DOT__rst) {
        if ((2U & (IData)(vlSelf->tb_behavioral__DOT__dut__DOT__stato))) {
            if ((1U & (~ (IData)(vlSelf->tb_behavioral__DOT__dut__DOT__stato)))) {
                if ((1U & (~ (IData)(vlSelf->tb_behavioral__DOT__annulla)))) {
                    if ((0U != ([&]() {
                                    __Vfunc_tb_behavioral__DOT__dut__DOT__coin_value__625__code 
                                        = vlSelf->tb_behavioral__DOT__coin;
                                    __Vfunc_tb_behavioral__DOT__dut__DOT__coin_value__625__Vfuncout 
                                        = ((4U & (IData)(__Vfunc_tb_behavioral__DOT__dut__DOT__coin_value__625__code))
                                            ? ((2U 
                                                & (IData)(__Vfunc_tb_behavioral__DOT__dut__DOT__coin_value__625__code))
                                                ? (
                                                   (1U 
                                                    & (IData)(__Vfunc_tb_behavioral__DOT__dut__DOT__coin_value__625__code))
                                                    ? 0xaU
                                                    : 5U)
                                                : (
                                                   (1U 
                                                    & (IData)(__Vfunc_tb_behavioral__DOT__dut__DOT__coin_value__625__code))
                                                    ? 2U
                                                    : 1U))
                                            : 0U);
                                }(), (IData)(__Vfunc_tb_behavioral__DOT__dut__DOT__coin_value__625__Vfuncout)))) {
                    }
                }
            }
        }
    }
    if (vlSelf->tb_behavioral__DOT__rst) {
        if ((2U & (IData)(vlSelf->tb_behavioral__DOT__dut__DOT__stato))) {
            if ((1U & (~ (IData)(vlSelf->tb_behavioral__DOT__dut__DOT__stato)))) {
                if ((1U & (~ (IData)(vlSelf->tb_behavioral__DOT__annulla)))) {
                    if ((0U != ([&]() {
                                    __Vfunc_tb_behavioral__DOT__dut__DOT__coin_value__625__code 
                                        = vlSelf->tb_behavioral__DOT__coin;
                                    __Vfunc_tb_behavioral__DOT__dut__DOT__coin_value__625__Vfuncout 
                                        = ((4U & (IData)(__Vfunc_tb_behavioral__DOT__dut__DOT__coin_value__625__code))
                                            ? ((2U 
                                                & (IData)(__Vfunc_tb_behavioral__DOT__dut__DOT__coin_value__625__code))
                                                ? (
                                                   (1U 
                                                    & (IData)(__Vfunc_tb_behavioral__DOT__dut__DOT__coin_value__625__code))
                                                    ? 0xaU
                                                    : 5U)
                                                : (
                                                   (1U 
                                                    & (IData)(__Vfunc_tb_behavioral__DOT__dut__DOT__coin_value__625__code))
                                                    ? 2U
                                                    : 1U))
                                            : 0U);
                                }(), (IData)(__Vfunc_tb_behavioral__DOT__dut__DOT__coin_value__625__Vfuncout)))) {
                    }
                }
            }
        }
    }
    if (vlSelf->tb_behavioral__DOT__rst) {
        if ((2U & (IData)(vlSelf->tb_behavioral__DOT__dut__DOT__stato))) {
            if ((1U & (~ (IData)(vlSelf->tb_behavioral__DOT__dut__DOT__stato)))) {
                if ((1U & (~ (IData)(vlSelf->tb_behavioral__DOT__annulla)))) {
                    if ((0U != ([&]() {
                                    __Vfunc_tb_behavioral__DOT__dut__DOT__coin_value__625__code 
                                        = vlSelf->tb_behavioral__DOT__coin;
                                    __Vfunc_tb_behavioral__DOT__dut__DOT__coin_value__625__Vfuncout 
                                        = ((4U & (IData)(__Vfunc_tb_behavioral__DOT__dut__DOT__coin_value__625__code))
                                            ? ((2U 
                                                & (IData)(__Vfunc_tb_behavioral__DOT__dut__DOT__coin_value__625__code))
                                                ? (
                                                   (1U 
                                                    & (IData)(__Vfunc_tb_behavioral__DOT__dut__DOT__coin_value__625__code))
                                                    ? 0xaU
                                                    : 5U)
                                                : (
                                                   (1U 
                                                    & (IData)(__Vfunc_tb_behavioral__DOT__dut__DOT__coin_value__625__code))
                                                    ? 2U
                                                    : 1U))
                                            : 0U);
                                }(), (IData)(__Vfunc_tb_behavioral__DOT__dut__DOT__coin_value__625__Vfuncout)))) {
                    }
                }
            }
        }
    }
    if (vlSelf->tb_behavioral__DOT__rst) {
        if ((2U & (IData)(vlSelf->tb_behavioral__DOT__dut__DOT__stato))) {
            if ((1U & (~ (IData)(vlSelf->tb_behavioral__DOT__dut__DOT__stato)))) {
                if ((1U & (~ (IData)(vlSelf->tb_behavioral__DOT__annulla)))) {
                    if ((0U != ([&]() {
                                    __Vfunc_tb_behavioral__DOT__dut__DOT__coin_value__625__code 
                                        = vlSelf->tb_behavioral__DOT__coin;
                                    __Vfunc_tb_behavioral__DOT__dut__DOT__coin_value__625__Vfuncout 
                                        = ((4U & (IData)(__Vfunc_tb_behavioral__DOT__dut__DOT__coin_value__625__code))
                                            ? ((2U 
                                                & (IData)(__Vfunc_tb_behavioral__DOT__dut__DOT__coin_value__625__code))
                                                ? (
                                                   (1U 
                                                    & (IData)(__Vfunc_tb_behavioral__DOT__dut__DOT__coin_value__625__code))
                                                    ? 0xaU
                                                    : 5U)
                                                : (
                                                   (1U 
                                                    & (IData)(__Vfunc_tb_behavioral__DOT__dut__DOT__coin_value__625__code))
                                                    ? 2U
                                                    : 1U))
                                            : 0U);
                                }(), (IData)(__Vfunc_tb_behavioral__DOT__dut__DOT__coin_value__625__Vfuncout)))) {
                    }
                }
            }
        }
    }
    if (vlSelf->tb_behavioral__DOT__rst) {
        if ((2U & (IData)(vlSelf->tb_behavioral__DOT__dut__DOT__stato))) {
            if ((1U & (IData)(vlSelf->tb_behavioral__DOT__dut__DOT__stato))) {
                vlSelf->tb_behavioral__DOT__prodotto1 = 0U;
                vlSelf->tb_behavioral__DOT__prodotto2 = 0U;
                vlSelf->tb_behavioral__DOT__prodotto3 = 0U;
                vlSelf->tb_behavioral__DOT__prodotto4 = 0U;
                vlSelf->tb_behavioral__DOT__errore = 0U;
                vlSelf->tb_behavioral__DOT__resto = 0U;
                vlSelf->tb_behavioral__DOT__coin_01 = 0U;
                vlSelf->tb_behavioral__DOT__coin_02 = 0U;
                vlSelf->tb_behavioral__DOT__coin_05 = 0U;
                vlSelf->tb_behavioral__DOT__coin_10 = 0U;
                __Vdly__tb_behavioral__DOT__dut__DOT__stato = 1U;
            } else {
                vlSelf->tb_behavioral__DOT__prodotto1 = 0U;
                vlSelf->tb_behavioral__DOT__prodotto2 = 0U;
                vlSelf->tb_behavioral__DOT__prodotto3 = 0U;
                vlSelf->tb_behavioral__DOT__prodotto4 = 0U;
                vlSelf->tb_behavioral__DOT__errore = 0U;
                vlSelf->tb_behavioral__DOT__resto = 0U;
                vlSelf->tb_behavioral__DOT__coin_01 = 0U;
                vlSelf->tb_behavioral__DOT__coin_02 = 0U;
                vlSelf->tb_behavioral__DOT__coin_05 = 0U;
                vlSelf->tb_behavioral__DOT__coin_10 = 0U;
                if (vlSelf->tb_behavioral__DOT__annulla) {
                    __Vtask_tb_behavioral__DOT__dut__DOT__greedy_return__624__amount 
                        = vlSelf->tb_behavioral__DOT__credito;
                    vlSelf->tb_behavioral__DOT__dut__DOT__greedy_return__Vstatic__remain 
                        = __Vtask_tb_behavioral__DOT__dut__DOT__greedy_return__624__amount;
                    __Vdly__tb_behavioral__DOT__dut__DOT__stato = 1U;
                    vlSelf->tb_behavioral__DOT__dut__DOT__greedy_return__Vstatic__take 
                        = (0x3fU & VL_DIV_III(6, (IData)(vlSelf->tb_behavioral__DOT__dut__DOT__greedy_return__Vstatic__remain), (IData)(0xaU)));
                    if (((IData)(vlSelf->tb_behavioral__DOT__dut__DOT__greedy_return__Vstatic__take) 
                         > (IData)(vlSelf->tb_behavioral__DOT__dut__DOT__qty_c10))) {
                        vlSelf->tb_behavioral__DOT__dut__DOT__greedy_return__Vstatic__take 
                            = vlSelf->tb_behavioral__DOT__dut__DOT__qty_c10;
                    }
                    __Vdly__tb_behavioral__DOT__credito = 0U;
                    __Vtask_tb_behavioral__DOT__dut__DOT__greedy_return__624__out10 
                        = vlSelf->tb_behavioral__DOT__dut__DOT__greedy_return__Vstatic__take;
                    __Vtask_tb_behavioral__DOT__dut__DOT__greedy_return__624__next10 
                        = (0x3fU & ((IData)(vlSelf->tb_behavioral__DOT__dut__DOT__qty_c10) 
                                    - (IData)(vlSelf->tb_behavioral__DOT__dut__DOT__greedy_return__Vstatic__take)));
                    vlSelf->tb_behavioral__DOT__dut__DOT__greedy_return__Vstatic__remain 
                        = (0x3fU & ((IData)(vlSelf->tb_behavioral__DOT__dut__DOT__greedy_return__Vstatic__remain) 
                                    - ((IData)(0xaU) 
                                       * (IData)(vlSelf->tb_behavioral__DOT__dut__DOT__greedy_return__Vstatic__take))));
                    vlSelf->tb_behavioral__DOT__dut__DOT__greedy_return__Vstatic__take 
                        = (0x3fU & VL_DIV_III(6, (IData)(vlSelf->tb_behavioral__DOT__dut__DOT__greedy_return__Vstatic__remain), (IData)(5U)));
                    if (((IData)(vlSelf->tb_behavioral__DOT__dut__DOT__greedy_return__Vstatic__take) 
                         > (IData)(vlSelf->tb_behavioral__DOT__dut__DOT__qty_c05))) {
                        vlSelf->tb_behavioral__DOT__dut__DOT__greedy_return__Vstatic__take 
                            = vlSelf->tb_behavioral__DOT__dut__DOT__qty_c05;
                    }
                    __Vtask_tb_behavioral__DOT__dut__DOT__greedy_return__624__out05 
                        = vlSelf->tb_behavioral__DOT__dut__DOT__greedy_return__Vstatic__take;
                    __Vtask_tb_behavioral__DOT__dut__DOT__greedy_return__624__next05 
                        = (0x3fU & ((IData)(vlSelf->tb_behavioral__DOT__dut__DOT__qty_c05) 
                                    - (IData)(vlSelf->tb_behavioral__DOT__dut__DOT__greedy_return__Vstatic__take)));
                    vlSelf->tb_behavioral__DOT__dut__DOT__greedy_return__Vstatic__remain 
                        = (0x3fU & ((IData)(vlSelf->tb_behavioral__DOT__dut__DOT__greedy_return__Vstatic__remain) 
                                    - ((IData)(5U) 
                                       * (IData)(vlSelf->tb_behavioral__DOT__dut__DOT__greedy_return__Vstatic__take))));
                    vlSelf->tb_behavioral__DOT__dut__DOT__greedy_return__Vstatic__take 
                        = (0x3fU & VL_SHIFTR_III(6,6,32, (IData)(vlSelf->tb_behavioral__DOT__dut__DOT__greedy_return__Vstatic__remain), 1U));
                    if (((IData)(vlSelf->tb_behavioral__DOT__dut__DOT__greedy_return__Vstatic__take) 
                         > (IData)(vlSelf->tb_behavioral__DOT__dut__DOT__qty_c02))) {
                        vlSelf->tb_behavioral__DOT__dut__DOT__greedy_return__Vstatic__take 
                            = vlSelf->tb_behavioral__DOT__dut__DOT__qty_c02;
                    }
                    __Vtask_tb_behavioral__DOT__dut__DOT__greedy_return__624__out02 
                        = vlSelf->tb_behavioral__DOT__dut__DOT__greedy_return__Vstatic__take;
                    __Vtask_tb_behavioral__DOT__dut__DOT__greedy_return__624__next02 
                        = (0x3fU & ((IData)(vlSelf->tb_behavioral__DOT__dut__DOT__qty_c02) 
                                    - (IData)(vlSelf->tb_behavioral__DOT__dut__DOT__greedy_return__Vstatic__take)));
                    vlSelf->tb_behavioral__DOT__dut__DOT__greedy_return__Vstatic__remain 
                        = (0x3fU & ((IData)(vlSelf->tb_behavioral__DOT__dut__DOT__greedy_return__Vstatic__remain) 
                                    - VL_SHIFTL_III(6,6,32, (IData)(vlSelf->tb_behavioral__DOT__dut__DOT__greedy_return__Vstatic__take), 1U)));
                    vlSelf->tb_behavioral__DOT__dut__DOT__greedy_return__Vstatic__take 
                        = vlSelf->tb_behavioral__DOT__dut__DOT__greedy_return__Vstatic__remain;
                    if (((IData)(vlSelf->tb_behavioral__DOT__dut__DOT__greedy_return__Vstatic__take) 
                         > (IData)(vlSelf->tb_behavioral__DOT__dut__DOT__qty_c01))) {
                        vlSelf->tb_behavioral__DOT__dut__DOT__greedy_return__Vstatic__take 
                            = vlSelf->tb_behavioral__DOT__dut__DOT__qty_c01;
                    }
                    __Vtask_tb_behavioral__DOT__dut__DOT__greedy_return__624__out01 
                        = vlSelf->tb_behavioral__DOT__dut__DOT__greedy_return__Vstatic__take;
                    __Vtask_tb_behavioral__DOT__dut__DOT__greedy_return__624__next01 
                        = (0x3fU & ((IData)(vlSelf->tb_behavioral__DOT__dut__DOT__qty_c01) 
                                    - (IData)(vlSelf->tb_behavioral__DOT__dut__DOT__greedy_return__Vstatic__take)));
                    vlSelf->tb_behavioral__DOT__dut__DOT__greedy_return__Vstatic__remain 
                        = (0x3fU & ((IData)(vlSelf->tb_behavioral__DOT__dut__DOT__greedy_return__Vstatic__remain) 
                                    - (IData)(vlSelf->tb_behavioral__DOT__dut__DOT__greedy_return__Vstatic__take)));
                    __Vtask_tb_behavioral__DOT__dut__DOT__greedy_return__624__returned 
                        = (0x3fU & ((IData)(__Vtask_tb_behavioral__DOT__dut__DOT__greedy_return__624__amount) 
                                    - (IData)(vlSelf->tb_behavioral__DOT__dut__DOT__greedy_return__Vstatic__remain)));
                    vlSelf->tb_behavioral__DOT__dut__DOT__greedy_out_10 
                        = __Vtask_tb_behavioral__DOT__dut__DOT__greedy_return__624__out10;
                    vlSelf->tb_behavioral__DOT__dut__DOT__greedy_out_05 
                        = __Vtask_tb_behavioral__DOT__dut__DOT__greedy_return__624__out05;
                    vlSelf->tb_behavioral__DOT__dut__DOT__greedy_out_02 
                        = __Vtask_tb_behavioral__DOT__dut__DOT__greedy_return__624__out02;
                    vlSelf->tb_behavioral__DOT__dut__DOT__greedy_out_01 
                        = __Vtask_tb_behavioral__DOT__dut__DOT__greedy_return__624__out01;
                    vlSelf->tb_behavioral__DOT__dut__DOT__greedy_next_10 
                        = __Vtask_tb_behavioral__DOT__dut__DOT__greedy_return__624__next10;
                    vlSelf->tb_behavioral__DOT__dut__DOT__greedy_next_05 
                        = __Vtask_tb_behavioral__DOT__dut__DOT__greedy_return__624__next05;
                    vlSelf->tb_behavioral__DOT__dut__DOT__greedy_next_02 
                        = __Vtask_tb_behavioral__DOT__dut__DOT__greedy_return__624__next02;
                    vlSelf->tb_behavioral__DOT__dut__DOT__greedy_next_01 
                        = __Vtask_tb_behavioral__DOT__dut__DOT__greedy_return__624__next01;
                    vlSelf->tb_behavioral__DOT__dut__DOT__greedy_returned 
                        = __Vtask_tb_behavioral__DOT__dut__DOT__greedy_return__624__returned;
                    vlSelf->tb_behavioral__DOT__coin_10 
                        = vlSelf->tb_behavioral__DOT__dut__DOT__greedy_out_10;
                    vlSelf->tb_behavioral__DOT__coin_05 
                        = vlSelf->tb_behavioral__DOT__dut__DOT__greedy_out_05;
                    vlSelf->tb_behavioral__DOT__coin_02 
                        = vlSelf->tb_behavioral__DOT__dut__DOT__greedy_out_02;
                    vlSelf->tb_behavioral__DOT__coin_01 
                        = vlSelf->tb_behavioral__DOT__dut__DOT__greedy_out_01;
                    __Vdly__tb_behavioral__DOT__dut__DOT__qty_c10 
                        = vlSelf->tb_behavioral__DOT__dut__DOT__greedy_next_10;
                    __Vdly__tb_behavioral__DOT__dut__DOT__qty_c05 
                        = vlSelf->tb_behavioral__DOT__dut__DOT__greedy_next_05;
                    __Vdly__tb_behavioral__DOT__dut__DOT__qty_c02 
                        = vlSelf->tb_behavioral__DOT__dut__DOT__greedy_next_02;
                    __Vdly__tb_behavioral__DOT__dut__DOT__qty_c01 
                        = vlSelf->tb_behavioral__DOT__dut__DOT__greedy_next_01;
                    vlSelf->tb_behavioral__DOT__resto 
                        = vlSelf->tb_behavioral__DOT__dut__DOT__greedy_returned;
                    __Vdly__tb_behavioral__DOT__disponibile 
                        = (((IData)(vlSelf->tb_behavioral__DOT__dut__DOT__greedy_returned) 
                            > (IData)(vlSelf->tb_behavioral__DOT__disponibile))
                            ? 0U : (0x3ffU & ((IData)(vlSelf->tb_behavioral__DOT__disponibile) 
                                              - (IData)(vlSelf->tb_behavioral__DOT__dut__DOT__greedy_returned))));
                } else if ((0U != ([&]() {
                                __Vfunc_tb_behavioral__DOT__dut__DOT__coin_value__625__code 
                                    = vlSelf->tb_behavioral__DOT__coin;
                                __Vfunc_tb_behavioral__DOT__dut__DOT__coin_value__625__Vfuncout 
                                    = ((4U & (IData)(__Vfunc_tb_behavioral__DOT__dut__DOT__coin_value__625__code))
                                        ? ((2U & (IData)(__Vfunc_tb_behavioral__DOT__dut__DOT__coin_value__625__code))
                                            ? ((1U 
                                                & (IData)(__Vfunc_tb_behavioral__DOT__dut__DOT__coin_value__625__code))
                                                ? 0xaU
                                                : 5U)
                                            : ((1U 
                                                & (IData)(__Vfunc_tb_behavioral__DOT__dut__DOT__coin_value__625__code))
                                                ? 2U
                                                : 1U))
                                        : 0U);
                            }(), (IData)(__Vfunc_tb_behavioral__DOT__dut__DOT__coin_value__625__Vfuncout)))) {
                    if ((4U & (IData)(vlSelf->tb_behavioral__DOT__coin))) {
                        if ((2U & (IData)(vlSelf->tb_behavioral__DOT__coin))) {
                            if ((1U & (IData)(vlSelf->tb_behavioral__DOT__coin))) {
                                __Vdly__tb_behavioral__DOT__dut__DOT__qty_c10 
                                    = (0x3fU & ((IData)(1U) 
                                                + (IData)(vlSelf->tb_behavioral__DOT__dut__DOT__qty_c10)));
                            } else {
                                __Vdly__tb_behavioral__DOT__dut__DOT__qty_c05 
                                    = (0x3fU & ((IData)(1U) 
                                                + (IData)(vlSelf->tb_behavioral__DOT__dut__DOT__qty_c05)));
                            }
                        } else if ((1U & (IData)(vlSelf->tb_behavioral__DOT__coin))) {
                            __Vdly__tb_behavioral__DOT__dut__DOT__qty_c02 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->tb_behavioral__DOT__dut__DOT__qty_c02)));
                        } else {
                            __Vdly__tb_behavioral__DOT__dut__DOT__qty_c01 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->tb_behavioral__DOT__dut__DOT__qty_c01)));
                        }
                    }
                    __Vdly__tb_behavioral__DOT__credito 
                        = (0x3fU & ((IData)(vlSelf->tb_behavioral__DOT__credito) 
                                    + ([&]() {
                                    __Vfunc_tb_behavioral__DOT__dut__DOT__coin_value__626__code 
                                        = vlSelf->tb_behavioral__DOT__coin;
                                    __Vfunc_tb_behavioral__DOT__dut__DOT__coin_value__626__Vfuncout 
                                        = ((4U & (IData)(__Vfunc_tb_behavioral__DOT__dut__DOT__coin_value__626__code))
                                            ? ((2U 
                                                & (IData)(__Vfunc_tb_behavioral__DOT__dut__DOT__coin_value__626__code))
                                                ? (
                                                   (1U 
                                                    & (IData)(__Vfunc_tb_behavioral__DOT__dut__DOT__coin_value__626__code))
                                                    ? 0xaU
                                                    : 5U)
                                                : (
                                                   (1U 
                                                    & (IData)(__Vfunc_tb_behavioral__DOT__dut__DOT__coin_value__626__code))
                                                    ? 2U
                                                    : 1U))
                                            : 0U);
                                }(), (IData)(__Vfunc_tb_behavioral__DOT__dut__DOT__coin_value__626__Vfuncout))));
                    __Vdly__tb_behavioral__DOT__disponibile 
                        = (0x3ffU & ((IData)(vlSelf->tb_behavioral__DOT__disponibile) 
                                     + VL_EXTEND_II(10,6, 
                                                    ([&]() {
                                        __Vfunc_tb_behavioral__DOT__dut__DOT__coin_value__627__code 
                                            = vlSelf->tb_behavioral__DOT__coin;
                                        __Vfunc_tb_behavioral__DOT__dut__DOT__coin_value__627__Vfuncout 
                                            = ((4U 
                                                & (IData)(__Vfunc_tb_behavioral__DOT__dut__DOT__coin_value__627__code))
                                                ? (
                                                   (2U 
                                                    & (IData)(__Vfunc_tb_behavioral__DOT__dut__DOT__coin_value__627__code))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(__Vfunc_tb_behavioral__DOT__dut__DOT__coin_value__627__code))
                                                     ? 0xaU
                                                     : 5U)
                                                    : 
                                                   ((1U 
                                                     & (IData)(__Vfunc_tb_behavioral__DOT__dut__DOT__coin_value__627__code))
                                                     ? 2U
                                                     : 1U))
                                                : 0U);
                                    }(), (IData)(__Vfunc_tb_behavioral__DOT__dut__DOT__coin_value__627__Vfuncout)))));
                } else if (vlSelf->tb_behavioral__DOT__conferma) {
                    if ((4U & (IData)(vlSelf->tb_behavioral__DOT__selezione))) {
                        if ((2U & (IData)(vlSelf->tb_behavioral__DOT__selezione))) {
                            if ((1U & (IData)(vlSelf->tb_behavioral__DOT__selezione))) {
                                if ((0U == (IData)(vlSelf->tb_behavioral__DOT__dut__DOT__qty_p4))) {
                                    vlSelf->tb_behavioral__DOT__errore 
                                        = (((IData)(vlSelf->tb_behavioral__DOT__credito) 
                                            < (IData)(vlSelf->tb_behavioral__DOT__dut__DOT__price_p4))
                                            ? 3U : 2U);
                                    if (((IData)(vlSelf->tb_behavioral__DOT__credito) 
                                         < (IData)(vlSelf->tb_behavioral__DOT__dut__DOT__price_p4))) {
                                        vlSelf->tb_behavioral__DOT__resto 
                                            = vlSelf->tb_behavioral__DOT__dut__DOT__price_p4;
                                    }
                                    __Vdly__tb_behavioral__DOT__dut__DOT__stato = 1U;
                                } else if (((IData)(vlSelf->tb_behavioral__DOT__credito) 
                                            < (IData)(vlSelf->tb_behavioral__DOT__dut__DOT__price_p4))) {
                                    vlSelf->tb_behavioral__DOT__errore = 1U;
                                    vlSelf->tb_behavioral__DOT__resto 
                                        = vlSelf->tb_behavioral__DOT__dut__DOT__price_p4;
                                    __Vdly__tb_behavioral__DOT__dut__DOT__stato = 1U;
                                } else {
                                    __Vtask_tb_behavioral__DOT__dut__DOT__greedy_return__628__amount 
                                        = (0x3fU & 
                                           ((IData)(vlSelf->tb_behavioral__DOT__credito) 
                                            - (IData)(vlSelf->tb_behavioral__DOT__dut__DOT__price_p4)));
                                    vlSelf->tb_behavioral__DOT__dut__DOT__qty_p4 
                                        = (0x3fU & 
                                           ((IData)(vlSelf->tb_behavioral__DOT__dut__DOT__qty_p4) 
                                            - (IData)(1U)));
                                    vlSelf->tb_behavioral__DOT__dut__DOT__greedy_return__Vstatic__remain 
                                        = __Vtask_tb_behavioral__DOT__dut__DOT__greedy_return__628__amount;
                                    vlSelf->tb_behavioral__DOT__prodotto4 = 1U;
                                    vlSelf->tb_behavioral__DOT__dut__DOT__current_price 
                                        = vlSelf->tb_behavioral__DOT__dut__DOT__price_p4;
                                    __Vdly__tb_behavioral__DOT__dut__DOT__stato = 3U;
                                    vlSelf->tb_behavioral__DOT__dut__DOT__greedy_return__Vstatic__take 
                                        = (0x3fU & 
                                           VL_DIV_III(6, (IData)(vlSelf->tb_behavioral__DOT__dut__DOT__greedy_return__Vstatic__remain), (IData)(0xaU)));
                                    if (((IData)(vlSelf->tb_behavioral__DOT__dut__DOT__greedy_return__Vstatic__take) 
                                         > (IData)(vlSelf->tb_behavioral__DOT__dut__DOT__qty_c10))) {
                                        vlSelf->tb_behavioral__DOT__dut__DOT__greedy_return__Vstatic__take 
                                            = vlSelf->tb_behavioral__DOT__dut__DOT__qty_c10;
                                    }
                                    __Vdly__tb_behavioral__DOT__credito = 0U;
                                    __Vtask_tb_behavioral__DOT__dut__DOT__greedy_return__628__out10 
                                        = vlSelf->tb_behavioral__DOT__dut__DOT__greedy_return__Vstatic__take;
                                    __Vtask_tb_behavioral__DOT__dut__DOT__greedy_return__628__next10 
                                        = (0x3fU & 
                                           ((IData)(vlSelf->tb_behavioral__DOT__dut__DOT__qty_c10) 
                                            - (IData)(vlSelf->tb_behavioral__DOT__dut__DOT__greedy_return__Vstatic__take)));
                                    vlSelf->tb_behavioral__DOT__dut__DOT__greedy_return__Vstatic__remain 
                                        = (0x3fU & 
                                           ((IData)(vlSelf->tb_behavioral__DOT__dut__DOT__greedy_return__Vstatic__remain) 
                                            - ((IData)(0xaU) 
                                               * (IData)(vlSelf->tb_behavioral__DOT__dut__DOT__greedy_return__Vstatic__take))));
                                    vlSelf->tb_behavioral__DOT__dut__DOT__greedy_return__Vstatic__take 
                                        = (0x3fU & 
                                           VL_DIV_III(6, (IData)(vlSelf->tb_behavioral__DOT__dut__DOT__greedy_return__Vstatic__remain), (IData)(5U)));
                                    if (((IData)(vlSelf->tb_behavioral__DOT__dut__DOT__greedy_return__Vstatic__take) 
                                         > (IData)(vlSelf->tb_behavioral__DOT__dut__DOT__qty_c05))) {
                                        vlSelf->tb_behavioral__DOT__dut__DOT__greedy_return__Vstatic__take 
                                            = vlSelf->tb_behavioral__DOT__dut__DOT__qty_c05;
                                    }
                                    __Vtask_tb_behavioral__DOT__dut__DOT__greedy_return__628__out05 
                                        = vlSelf->tb_behavioral__DOT__dut__DOT__greedy_return__Vstatic__take;
                                    __Vtask_tb_behavioral__DOT__dut__DOT__greedy_return__628__next05 
                                        = (0x3fU & 
                                           ((IData)(vlSelf->tb_behavioral__DOT__dut__DOT__qty_c05) 
                                            - (IData)(vlSelf->tb_behavioral__DOT__dut__DOT__greedy_return__Vstatic__take)));
                                    vlSelf->tb_behavioral__DOT__dut__DOT__greedy_return__Vstatic__remain 
                                        = (0x3fU & 
                                           ((IData)(vlSelf->tb_behavioral__DOT__dut__DOT__greedy_return__Vstatic__remain) 
                                            - ((IData)(5U) 
                                               * (IData)(vlSelf->tb_behavioral__DOT__dut__DOT__greedy_return__Vstatic__take))));
                                    vlSelf->tb_behavioral__DOT__dut__DOT__greedy_return__Vstatic__take 
                                        = (0x3fU & 
                                           VL_SHIFTR_III(6,6,32, (IData)(vlSelf->tb_behavioral__DOT__dut__DOT__greedy_return__Vstatic__remain), 1U));
                                    if (((IData)(vlSelf->tb_behavioral__DOT__dut__DOT__greedy_return__Vstatic__take) 
                                         > (IData)(vlSelf->tb_behavioral__DOT__dut__DOT__qty_c02))) {
                                        vlSelf->tb_behavioral__DOT__dut__DOT__greedy_return__Vstatic__take 
                                            = vlSelf->tb_behavioral__DOT__dut__DOT__qty_c02;
                                    }
                                    __Vtask_tb_behavioral__DOT__dut__DOT__greedy_return__628__out02 
                                        = vlSelf->tb_behavioral__DOT__dut__DOT__greedy_return__Vstatic__take;
                                    __Vtask_tb_behavioral__DOT__dut__DOT__greedy_return__628__next02 
                                        = (0x3fU & 
                                           ((IData)(vlSelf->tb_behavioral__DOT__dut__DOT__qty_c02) 
                                            - (IData)(vlSelf->tb_behavioral__DOT__dut__DOT__greedy_return__Vstatic__take)));
                                    vlSelf->tb_behavioral__DOT__dut__DOT__greedy_return__Vstatic__remain 
                                        = (0x3fU & 
                                           ((IData)(vlSelf->tb_behavioral__DOT__dut__DOT__greedy_return__Vstatic__remain) 
                                            - VL_SHIFTL_III(6,6,32, (IData)(vlSelf->tb_behavioral__DOT__dut__DOT__greedy_return__Vstatic__take), 1U)));
                                    vlSelf->tb_behavioral__DOT__dut__DOT__greedy_return__Vstatic__take 
                                        = vlSelf->tb_behavioral__DOT__dut__DOT__greedy_return__Vstatic__remain;
                                    if (((IData)(vlSelf->tb_behavioral__DOT__dut__DOT__greedy_return__Vstatic__take) 
                                         > (IData)(vlSelf->tb_behavioral__DOT__dut__DOT__qty_c01))) {
                                        vlSelf->tb_behavioral__DOT__dut__DOT__greedy_return__Vstatic__take 
                                            = vlSelf->tb_behavioral__DOT__dut__DOT__qty_c01;
                                    }
                                    __Vtask_tb_behavioral__DOT__dut__DOT__greedy_return__628__out01 
                                        = vlSelf->tb_behavioral__DOT__dut__DOT__greedy_return__Vstatic__take;
                                    __Vtask_tb_behavioral__DOT__dut__DOT__greedy_return__628__next01 
                                        = (0x3fU & 
                                           ((IData)(vlSelf->tb_behavioral__DOT__dut__DOT__qty_c01) 
                                            - (IData)(vlSelf->tb_behavioral__DOT__dut__DOT__greedy_return__Vstatic__take)));
                                    vlSelf->tb_behavioral__DOT__dut__DOT__greedy_return__Vstatic__remain 
                                        = (0x3fU & 
                                           ((IData)(vlSelf->tb_behavioral__DOT__dut__DOT__greedy_return__Vstatic__remain) 
                                            - (IData)(vlSelf->tb_behavioral__DOT__dut__DOT__greedy_return__Vstatic__take)));
                                    __Vtask_tb_behavioral__DOT__dut__DOT__greedy_return__628__returned 
                                        = (0x3fU & 
                                           ((IData)(__Vtask_tb_behavioral__DOT__dut__DOT__greedy_return__628__amount) 
                                            - (IData)(vlSelf->tb_behavioral__DOT__dut__DOT__greedy_return__Vstatic__remain)));
                                    vlSelf->tb_behavioral__DOT__dut__DOT__greedy_out_10 
                                        = __Vtask_tb_behavioral__DOT__dut__DOT__greedy_return__628__out10;
                                    vlSelf->tb_behavioral__DOT__dut__DOT__greedy_out_05 
                                        = __Vtask_tb_behavioral__DOT__dut__DOT__greedy_return__628__out05;
                                    vlSelf->tb_behavioral__DOT__dut__DOT__greedy_out_02 
                                        = __Vtask_tb_behavioral__DOT__dut__DOT__greedy_return__628__out02;
                                    vlSelf->tb_behavioral__DOT__dut__DOT__greedy_out_01 
                                        = __Vtask_tb_behavioral__DOT__dut__DOT__greedy_return__628__out01;
                                    vlSelf->tb_behavioral__DOT__dut__DOT__greedy_next_10 
                                        = __Vtask_tb_behavioral__DOT__dut__DOT__greedy_return__628__next10;
                                    vlSelf->tb_behavioral__DOT__dut__DOT__greedy_next_05 
                                        = __Vtask_tb_behavioral__DOT__dut__DOT__greedy_return__628__next05;
                                    vlSelf->tb_behavioral__DOT__dut__DOT__greedy_next_02 
                                        = __Vtask_tb_behavioral__DOT__dut__DOT__greedy_return__628__next02;
                                    vlSelf->tb_behavioral__DOT__dut__DOT__greedy_next_01 
                                        = __Vtask_tb_behavioral__DOT__dut__DOT__greedy_return__628__next01;
                                    vlSelf->tb_behavioral__DOT__dut__DOT__greedy_returned 
                                        = __Vtask_tb_behavioral__DOT__dut__DOT__greedy_return__628__returned;
                                    vlSelf->tb_behavioral__DOT__coin_10 
                                        = vlSelf->tb_behavioral__DOT__dut__DOT__greedy_out_10;
                                    vlSelf->tb_behavioral__DOT__coin_05 
                                        = vlSelf->tb_behavioral__DOT__dut__DOT__greedy_out_05;
                                    vlSelf->tb_behavioral__DOT__coin_02 
                                        = vlSelf->tb_behavioral__DOT__dut__DOT__greedy_out_02;
                                    vlSelf->tb_behavioral__DOT__coin_01 
                                        = vlSelf->tb_behavioral__DOT__dut__DOT__greedy_out_01;
                                    __Vdly__tb_behavioral__DOT__dut__DOT__qty_c10 
                                        = vlSelf->tb_behavioral__DOT__dut__DOT__greedy_next_10;
                                    __Vdly__tb_behavioral__DOT__dut__DOT__qty_c05 
                                        = vlSelf->tb_behavioral__DOT__dut__DOT__greedy_next_05;
                                    __Vdly__tb_behavioral__DOT__dut__DOT__qty_c02 
                                        = vlSelf->tb_behavioral__DOT__dut__DOT__greedy_next_02;
                                    __Vdly__tb_behavioral__DOT__dut__DOT__qty_c01 
                                        = vlSelf->tb_behavioral__DOT__dut__DOT__greedy_next_01;
                                    vlSelf->tb_behavioral__DOT__resto 
                                        = vlSelf->tb_behavioral__DOT__dut__DOT__greedy_returned;
                                    __Vdly__tb_behavioral__DOT__disponibile 
                                        = (((IData)(vlSelf->tb_behavioral__DOT__dut__DOT__greedy_returned) 
                                            > (IData)(vlSelf->tb_behavioral__DOT__disponibile))
                                            ? 0U : 
                                           (0x3ffU 
                                            & ((IData)(vlSelf->tb_behavioral__DOT__disponibile) 
                                               - (IData)(vlSelf->tb_behavioral__DOT__dut__DOT__greedy_returned))));
                                }
                            } else if ((0U == (IData)(vlSelf->tb_behavioral__DOT__dut__DOT__qty_p3))) {
                                vlSelf->tb_behavioral__DOT__errore 
                                    = (((IData)(vlSelf->tb_behavioral__DOT__credito) 
                                        < (IData)(vlSelf->tb_behavioral__DOT__dut__DOT__price_p3))
                                        ? 3U : 2U);
                                if (((IData)(vlSelf->tb_behavioral__DOT__credito) 
                                     < (IData)(vlSelf->tb_behavioral__DOT__dut__DOT__price_p3))) {
                                    vlSelf->tb_behavioral__DOT__resto 
                                        = vlSelf->tb_behavioral__DOT__dut__DOT__price_p3;
                                }
                                __Vdly__tb_behavioral__DOT__dut__DOT__stato = 1U;
                            } else if (((IData)(vlSelf->tb_behavioral__DOT__credito) 
                                        < (IData)(vlSelf->tb_behavioral__DOT__dut__DOT__price_p3))) {
                                vlSelf->tb_behavioral__DOT__errore = 1U;
                                vlSelf->tb_behavioral__DOT__resto 
                                    = vlSelf->tb_behavioral__DOT__dut__DOT__price_p3;
                                __Vdly__tb_behavioral__DOT__dut__DOT__stato = 1U;
                            } else {
                                __Vtask_tb_behavioral__DOT__dut__DOT__greedy_return__629__amount 
                                    = (0x3fU & ((IData)(vlSelf->tb_behavioral__DOT__credito) 
                                                - (IData)(vlSelf->tb_behavioral__DOT__dut__DOT__price_p3)));
                                vlSelf->tb_behavioral__DOT__dut__DOT__qty_p3 
                                    = (0x3fU & ((IData)(vlSelf->tb_behavioral__DOT__dut__DOT__qty_p3) 
                                                - (IData)(1U)));
                                vlSelf->tb_behavioral__DOT__dut__DOT__greedy_return__Vstatic__remain 
                                    = __Vtask_tb_behavioral__DOT__dut__DOT__greedy_return__629__amount;
                                vlSelf->tb_behavioral__DOT__prodotto3 = 1U;
                                vlSelf->tb_behavioral__DOT__dut__DOT__current_price 
                                    = vlSelf->tb_behavioral__DOT__dut__DOT__price_p3;
                                __Vdly__tb_behavioral__DOT__dut__DOT__stato = 3U;
                                vlSelf->tb_behavioral__DOT__dut__DOT__greedy_return__Vstatic__take 
                                    = (0x3fU & VL_DIV_III(6, (IData)(vlSelf->tb_behavioral__DOT__dut__DOT__greedy_return__Vstatic__remain), (IData)(0xaU)));
                                if (((IData)(vlSelf->tb_behavioral__DOT__dut__DOT__greedy_return__Vstatic__take) 
                                     > (IData)(vlSelf->tb_behavioral__DOT__dut__DOT__qty_c10))) {
                                    vlSelf->tb_behavioral__DOT__dut__DOT__greedy_return__Vstatic__take 
                                        = vlSelf->tb_behavioral__DOT__dut__DOT__qty_c10;
                                }
                                __Vdly__tb_behavioral__DOT__credito = 0U;
                                __Vtask_tb_behavioral__DOT__dut__DOT__greedy_return__629__out10 
                                    = vlSelf->tb_behavioral__DOT__dut__DOT__greedy_return__Vstatic__take;
                                __Vtask_tb_behavioral__DOT__dut__DOT__greedy_return__629__next10 
                                    = (0x3fU & ((IData)(vlSelf->tb_behavioral__DOT__dut__DOT__qty_c10) 
                                                - (IData)(vlSelf->tb_behavioral__DOT__dut__DOT__greedy_return__Vstatic__take)));
                                vlSelf->tb_behavioral__DOT__dut__DOT__greedy_return__Vstatic__remain 
                                    = (0x3fU & ((IData)(vlSelf->tb_behavioral__DOT__dut__DOT__greedy_return__Vstatic__remain) 
                                                - ((IData)(0xaU) 
                                                   * (IData)(vlSelf->tb_behavioral__DOT__dut__DOT__greedy_return__Vstatic__take))));
                                vlSelf->tb_behavioral__DOT__dut__DOT__greedy_return__Vstatic__take 
                                    = (0x3fU & VL_DIV_III(6, (IData)(vlSelf->tb_behavioral__DOT__dut__DOT__greedy_return__Vstatic__remain), (IData)(5U)));
                                if (((IData)(vlSelf->tb_behavioral__DOT__dut__DOT__greedy_return__Vstatic__take) 
                                     > (IData)(vlSelf->tb_behavioral__DOT__dut__DOT__qty_c05))) {
                                    vlSelf->tb_behavioral__DOT__dut__DOT__greedy_return__Vstatic__take 
                                        = vlSelf->tb_behavioral__DOT__dut__DOT__qty_c05;
                                }
                                __Vtask_tb_behavioral__DOT__dut__DOT__greedy_return__629__out05 
                                    = vlSelf->tb_behavioral__DOT__dut__DOT__greedy_return__Vstatic__take;
                                __Vtask_tb_behavioral__DOT__dut__DOT__greedy_return__629__next05 
                                    = (0x3fU & ((IData)(vlSelf->tb_behavioral__DOT__dut__DOT__qty_c05) 
                                                - (IData)(vlSelf->tb_behavioral__DOT__dut__DOT__greedy_return__Vstatic__take)));
                                vlSelf->tb_behavioral__DOT__dut__DOT__greedy_return__Vstatic__remain 
                                    = (0x3fU & ((IData)(vlSelf->tb_behavioral__DOT__dut__DOT__greedy_return__Vstatic__remain) 
                                                - ((IData)(5U) 
                                                   * (IData)(vlSelf->tb_behavioral__DOT__dut__DOT__greedy_return__Vstatic__take))));
                                vlSelf->tb_behavioral__DOT__dut__DOT__greedy_return__Vstatic__take 
                                    = (0x3fU & VL_SHIFTR_III(6,6,32, (IData)(vlSelf->tb_behavioral__DOT__dut__DOT__greedy_return__Vstatic__remain), 1U));
                                if (((IData)(vlSelf->tb_behavioral__DOT__dut__DOT__greedy_return__Vstatic__take) 
                                     > (IData)(vlSelf->tb_behavioral__DOT__dut__DOT__qty_c02))) {
                                    vlSelf->tb_behavioral__DOT__dut__DOT__greedy_return__Vstatic__take 
                                        = vlSelf->tb_behavioral__DOT__dut__DOT__qty_c02;
                                }
                                __Vtask_tb_behavioral__DOT__dut__DOT__greedy_return__629__out02 
                                    = vlSelf->tb_behavioral__DOT__dut__DOT__greedy_return__Vstatic__take;
                                __Vtask_tb_behavioral__DOT__dut__DOT__greedy_return__629__next02 
                                    = (0x3fU & ((IData)(vlSelf->tb_behavioral__DOT__dut__DOT__qty_c02) 
                                                - (IData)(vlSelf->tb_behavioral__DOT__dut__DOT__greedy_return__Vstatic__take)));
                                vlSelf->tb_behavioral__DOT__dut__DOT__greedy_return__Vstatic__remain 
                                    = (0x3fU & ((IData)(vlSelf->tb_behavioral__DOT__dut__DOT__greedy_return__Vstatic__remain) 
                                                - VL_SHIFTL_III(6,6,32, (IData)(vlSelf->tb_behavioral__DOT__dut__DOT__greedy_return__Vstatic__take), 1U)));
                                vlSelf->tb_behavioral__DOT__dut__DOT__greedy_return__Vstatic__take 
                                    = vlSelf->tb_behavioral__DOT__dut__DOT__greedy_return__Vstatic__remain;
                                if (((IData)(vlSelf->tb_behavioral__DOT__dut__DOT__greedy_return__Vstatic__take) 
                                     > (IData)(vlSelf->tb_behavioral__DOT__dut__DOT__qty_c01))) {
                                    vlSelf->tb_behavioral__DOT__dut__DOT__greedy_return__Vstatic__take 
                                        = vlSelf->tb_behavioral__DOT__dut__DOT__qty_c01;
                                }
                                __Vtask_tb_behavioral__DOT__dut__DOT__greedy_return__629__out01 
                                    = vlSelf->tb_behavioral__DOT__dut__DOT__greedy_return__Vstatic__take;
                                __Vtask_tb_behavioral__DOT__dut__DOT__greedy_return__629__next01 
                                    = (0x3fU & ((IData)(vlSelf->tb_behavioral__DOT__dut__DOT__qty_c01) 
                                                - (IData)(vlSelf->tb_behavioral__DOT__dut__DOT__greedy_return__Vstatic__take)));
                                vlSelf->tb_behavioral__DOT__dut__DOT__greedy_return__Vstatic__remain 
                                    = (0x3fU & ((IData)(vlSelf->tb_behavioral__DOT__dut__DOT__greedy_return__Vstatic__remain) 
                                                - (IData)(vlSelf->tb_behavioral__DOT__dut__DOT__greedy_return__Vstatic__take)));
                                __Vtask_tb_behavioral__DOT__dut__DOT__greedy_return__629__returned 
                                    = (0x3fU & ((IData)(__Vtask_tb_behavioral__DOT__dut__DOT__greedy_return__629__amount) 
                                                - (IData)(vlSelf->tb_behavioral__DOT__dut__DOT__greedy_return__Vstatic__remain)));
                                vlSelf->tb_behavioral__DOT__dut__DOT__greedy_out_10 
                                    = __Vtask_tb_behavioral__DOT__dut__DOT__greedy_return__629__out10;
                                vlSelf->tb_behavioral__DOT__dut__DOT__greedy_out_05 
                                    = __Vtask_tb_behavioral__DOT__dut__DOT__greedy_return__629__out05;
                                vlSelf->tb_behavioral__DOT__dut__DOT__greedy_out_02 
                                    = __Vtask_tb_behavioral__DOT__dut__DOT__greedy_return__629__out02;
                                vlSelf->tb_behavioral__DOT__dut__DOT__greedy_out_01 
                                    = __Vtask_tb_behavioral__DOT__dut__DOT__greedy_return__629__out01;
                                vlSelf->tb_behavioral__DOT__dut__DOT__greedy_next_10 
                                    = __Vtask_tb_behavioral__DOT__dut__DOT__greedy_return__629__next10;
                                vlSelf->tb_behavioral__DOT__dut__DOT__greedy_next_05 
                                    = __Vtask_tb_behavioral__DOT__dut__DOT__greedy_return__629__next05;
                                vlSelf->tb_behavioral__DOT__dut__DOT__greedy_next_02 
                                    = __Vtask_tb_behavioral__DOT__dut__DOT__greedy_return__629__next02;
                                vlSelf->tb_behavioral__DOT__dut__DOT__greedy_next_01 
                                    = __Vtask_tb_behavioral__DOT__dut__DOT__greedy_return__629__next01;
                                vlSelf->tb_behavioral__DOT__dut__DOT__greedy_returned 
                                    = __Vtask_tb_behavioral__DOT__dut__DOT__greedy_return__629__returned;
                                vlSelf->tb_behavioral__DOT__coin_10 
                                    = vlSelf->tb_behavioral__DOT__dut__DOT__greedy_out_10;
                                vlSelf->tb_behavioral__DOT__coin_05 
                                    = vlSelf->tb_behavioral__DOT__dut__DOT__greedy_out_05;
                                vlSelf->tb_behavioral__DOT__coin_02 
                                    = vlSelf->tb_behavioral__DOT__dut__DOT__greedy_out_02;
                                vlSelf->tb_behavioral__DOT__coin_01 
                                    = vlSelf->tb_behavioral__DOT__dut__DOT__greedy_out_01;
                                __Vdly__tb_behavioral__DOT__dut__DOT__qty_c10 
                                    = vlSelf->tb_behavioral__DOT__dut__DOT__greedy_next_10;
                                __Vdly__tb_behavioral__DOT__dut__DOT__qty_c05 
                                    = vlSelf->tb_behavioral__DOT__dut__DOT__greedy_next_05;
                                __Vdly__tb_behavioral__DOT__dut__DOT__qty_c02 
                                    = vlSelf->tb_behavioral__DOT__dut__DOT__greedy_next_02;
                                __Vdly__tb_behavioral__DOT__dut__DOT__qty_c01 
                                    = vlSelf->tb_behavioral__DOT__dut__DOT__greedy_next_01;
                                vlSelf->tb_behavioral__DOT__resto 
                                    = vlSelf->tb_behavioral__DOT__dut__DOT__greedy_returned;
                                __Vdly__tb_behavioral__DOT__disponibile 
                                    = (((IData)(vlSelf->tb_behavioral__DOT__dut__DOT__greedy_returned) 
                                        > (IData)(vlSelf->tb_behavioral__DOT__disponibile))
                                        ? 0U : (0x3ffU 
                                                & ((IData)(vlSelf->tb_behavioral__DOT__disponibile) 
                                                   - (IData)(vlSelf->tb_behavioral__DOT__dut__DOT__greedy_returned))));
                            }
                        } else if ((1U & (IData)(vlSelf->tb_behavioral__DOT__selezione))) {
                            if ((0U == (IData)(vlSelf->tb_behavioral__DOT__dut__DOT__qty_p2))) {
                                vlSelf->tb_behavioral__DOT__errore 
                                    = (((IData)(vlSelf->tb_behavioral__DOT__credito) 
                                        < (IData)(vlSelf->tb_behavioral__DOT__dut__DOT__price_p2))
                                        ? 3U : 2U);
                                if (((IData)(vlSelf->tb_behavioral__DOT__credito) 
                                     < (IData)(vlSelf->tb_behavioral__DOT__dut__DOT__price_p2))) {
                                    vlSelf->tb_behavioral__DOT__resto 
                                        = vlSelf->tb_behavioral__DOT__dut__DOT__price_p2;
                                }
                                __Vdly__tb_behavioral__DOT__dut__DOT__stato = 1U;
                            } else if (((IData)(vlSelf->tb_behavioral__DOT__credito) 
                                        < (IData)(vlSelf->tb_behavioral__DOT__dut__DOT__price_p2))) {
                                vlSelf->tb_behavioral__DOT__errore = 1U;
                                vlSelf->tb_behavioral__DOT__resto 
                                    = vlSelf->tb_behavioral__DOT__dut__DOT__price_p2;
                                __Vdly__tb_behavioral__DOT__dut__DOT__stato = 1U;
                            } else {
                                __Vtask_tb_behavioral__DOT__dut__DOT__greedy_return__630__amount 
                                    = (0x3fU & ((IData)(vlSelf->tb_behavioral__DOT__credito) 
                                                - (IData)(vlSelf->tb_behavioral__DOT__dut__DOT__price_p2)));
                                vlSelf->tb_behavioral__DOT__dut__DOT__qty_p2 
                                    = (0x3fU & ((IData)(vlSelf->tb_behavioral__DOT__dut__DOT__qty_p2) 
                                                - (IData)(1U)));
                                vlSelf->tb_behavioral__DOT__dut__DOT__greedy_return__Vstatic__remain 
                                    = __Vtask_tb_behavioral__DOT__dut__DOT__greedy_return__630__amount;
                                vlSelf->tb_behavioral__DOT__prodotto2 = 1U;
                                vlSelf->tb_behavioral__DOT__dut__DOT__current_price 
                                    = vlSelf->tb_behavioral__DOT__dut__DOT__price_p2;
                                __Vdly__tb_behavioral__DOT__dut__DOT__stato = 3U;
                                vlSelf->tb_behavioral__DOT__dut__DOT__greedy_return__Vstatic__take 
                                    = (0x3fU & VL_DIV_III(6, (IData)(vlSelf->tb_behavioral__DOT__dut__DOT__greedy_return__Vstatic__remain), (IData)(0xaU)));
                                if (((IData)(vlSelf->tb_behavioral__DOT__dut__DOT__greedy_return__Vstatic__take) 
                                     > (IData)(vlSelf->tb_behavioral__DOT__dut__DOT__qty_c10))) {
                                    vlSelf->tb_behavioral__DOT__dut__DOT__greedy_return__Vstatic__take 
                                        = vlSelf->tb_behavioral__DOT__dut__DOT__qty_c10;
                                }
                                __Vdly__tb_behavioral__DOT__credito = 0U;
                                __Vtask_tb_behavioral__DOT__dut__DOT__greedy_return__630__out10 
                                    = vlSelf->tb_behavioral__DOT__dut__DOT__greedy_return__Vstatic__take;
                                __Vtask_tb_behavioral__DOT__dut__DOT__greedy_return__630__next10 
                                    = (0x3fU & ((IData)(vlSelf->tb_behavioral__DOT__dut__DOT__qty_c10) 
                                                - (IData)(vlSelf->tb_behavioral__DOT__dut__DOT__greedy_return__Vstatic__take)));
                                vlSelf->tb_behavioral__DOT__dut__DOT__greedy_return__Vstatic__remain 
                                    = (0x3fU & ((IData)(vlSelf->tb_behavioral__DOT__dut__DOT__greedy_return__Vstatic__remain) 
                                                - ((IData)(0xaU) 
                                                   * (IData)(vlSelf->tb_behavioral__DOT__dut__DOT__greedy_return__Vstatic__take))));
                                vlSelf->tb_behavioral__DOT__dut__DOT__greedy_return__Vstatic__take 
                                    = (0x3fU & VL_DIV_III(6, (IData)(vlSelf->tb_behavioral__DOT__dut__DOT__greedy_return__Vstatic__remain), (IData)(5U)));
                                if (((IData)(vlSelf->tb_behavioral__DOT__dut__DOT__greedy_return__Vstatic__take) 
                                     > (IData)(vlSelf->tb_behavioral__DOT__dut__DOT__qty_c05))) {
                                    vlSelf->tb_behavioral__DOT__dut__DOT__greedy_return__Vstatic__take 
                                        = vlSelf->tb_behavioral__DOT__dut__DOT__qty_c05;
                                }
                                __Vtask_tb_behavioral__DOT__dut__DOT__greedy_return__630__out05 
                                    = vlSelf->tb_behavioral__DOT__dut__DOT__greedy_return__Vstatic__take;
                                __Vtask_tb_behavioral__DOT__dut__DOT__greedy_return__630__next05 
                                    = (0x3fU & ((IData)(vlSelf->tb_behavioral__DOT__dut__DOT__qty_c05) 
                                                - (IData)(vlSelf->tb_behavioral__DOT__dut__DOT__greedy_return__Vstatic__take)));
                                vlSelf->tb_behavioral__DOT__dut__DOT__greedy_return__Vstatic__remain 
                                    = (0x3fU & ((IData)(vlSelf->tb_behavioral__DOT__dut__DOT__greedy_return__Vstatic__remain) 
                                                - ((IData)(5U) 
                                                   * (IData)(vlSelf->tb_behavioral__DOT__dut__DOT__greedy_return__Vstatic__take))));
                                vlSelf->tb_behavioral__DOT__dut__DOT__greedy_return__Vstatic__take 
                                    = (0x3fU & VL_SHIFTR_III(6,6,32, (IData)(vlSelf->tb_behavioral__DOT__dut__DOT__greedy_return__Vstatic__remain), 1U));
                                if (((IData)(vlSelf->tb_behavioral__DOT__dut__DOT__greedy_return__Vstatic__take) 
                                     > (IData)(vlSelf->tb_behavioral__DOT__dut__DOT__qty_c02))) {
                                    vlSelf->tb_behavioral__DOT__dut__DOT__greedy_return__Vstatic__take 
                                        = vlSelf->tb_behavioral__DOT__dut__DOT__qty_c02;
                                }
                                __Vtask_tb_behavioral__DOT__dut__DOT__greedy_return__630__out02 
                                    = vlSelf->tb_behavioral__DOT__dut__DOT__greedy_return__Vstatic__take;
                                __Vtask_tb_behavioral__DOT__dut__DOT__greedy_return__630__next02 
                                    = (0x3fU & ((IData)(vlSelf->tb_behavioral__DOT__dut__DOT__qty_c02) 
                                                - (IData)(vlSelf->tb_behavioral__DOT__dut__DOT__greedy_return__Vstatic__take)));
                                vlSelf->tb_behavioral__DOT__dut__DOT__greedy_return__Vstatic__remain 
                                    = (0x3fU & ((IData)(vlSelf->tb_behavioral__DOT__dut__DOT__greedy_return__Vstatic__remain) 
                                                - VL_SHIFTL_III(6,6,32, (IData)(vlSelf->tb_behavioral__DOT__dut__DOT__greedy_return__Vstatic__take), 1U)));
                                vlSelf->tb_behavioral__DOT__dut__DOT__greedy_return__Vstatic__take 
                                    = vlSelf->tb_behavioral__DOT__dut__DOT__greedy_return__Vstatic__remain;
                                if (((IData)(vlSelf->tb_behavioral__DOT__dut__DOT__greedy_return__Vstatic__take) 
                                     > (IData)(vlSelf->tb_behavioral__DOT__dut__DOT__qty_c01))) {
                                    vlSelf->tb_behavioral__DOT__dut__DOT__greedy_return__Vstatic__take 
                                        = vlSelf->tb_behavioral__DOT__dut__DOT__qty_c01;
                                }
                                __Vtask_tb_behavioral__DOT__dut__DOT__greedy_return__630__out01 
                                    = vlSelf->tb_behavioral__DOT__dut__DOT__greedy_return__Vstatic__take;
                                __Vtask_tb_behavioral__DOT__dut__DOT__greedy_return__630__next01 
                                    = (0x3fU & ((IData)(vlSelf->tb_behavioral__DOT__dut__DOT__qty_c01) 
                                                - (IData)(vlSelf->tb_behavioral__DOT__dut__DOT__greedy_return__Vstatic__take)));
                                vlSelf->tb_behavioral__DOT__dut__DOT__greedy_return__Vstatic__remain 
                                    = (0x3fU & ((IData)(vlSelf->tb_behavioral__DOT__dut__DOT__greedy_return__Vstatic__remain) 
                                                - (IData)(vlSelf->tb_behavioral__DOT__dut__DOT__greedy_return__Vstatic__take)));
                                __Vtask_tb_behavioral__DOT__dut__DOT__greedy_return__630__returned 
                                    = (0x3fU & ((IData)(__Vtask_tb_behavioral__DOT__dut__DOT__greedy_return__630__amount) 
                                                - (IData)(vlSelf->tb_behavioral__DOT__dut__DOT__greedy_return__Vstatic__remain)));
                                vlSelf->tb_behavioral__DOT__dut__DOT__greedy_out_10 
                                    = __Vtask_tb_behavioral__DOT__dut__DOT__greedy_return__630__out10;
                                vlSelf->tb_behavioral__DOT__dut__DOT__greedy_out_05 
                                    = __Vtask_tb_behavioral__DOT__dut__DOT__greedy_return__630__out05;
                                vlSelf->tb_behavioral__DOT__dut__DOT__greedy_out_02 
                                    = __Vtask_tb_behavioral__DOT__dut__DOT__greedy_return__630__out02;
                                vlSelf->tb_behavioral__DOT__dut__DOT__greedy_out_01 
                                    = __Vtask_tb_behavioral__DOT__dut__DOT__greedy_return__630__out01;
                                vlSelf->tb_behavioral__DOT__dut__DOT__greedy_next_10 
                                    = __Vtask_tb_behavioral__DOT__dut__DOT__greedy_return__630__next10;
                                vlSelf->tb_behavioral__DOT__dut__DOT__greedy_next_05 
                                    = __Vtask_tb_behavioral__DOT__dut__DOT__greedy_return__630__next05;
                                vlSelf->tb_behavioral__DOT__dut__DOT__greedy_next_02 
                                    = __Vtask_tb_behavioral__DOT__dut__DOT__greedy_return__630__next02;
                                vlSelf->tb_behavioral__DOT__dut__DOT__greedy_next_01 
                                    = __Vtask_tb_behavioral__DOT__dut__DOT__greedy_return__630__next01;
                                vlSelf->tb_behavioral__DOT__dut__DOT__greedy_returned 
                                    = __Vtask_tb_behavioral__DOT__dut__DOT__greedy_return__630__returned;
                                vlSelf->tb_behavioral__DOT__coin_10 
                                    = vlSelf->tb_behavioral__DOT__dut__DOT__greedy_out_10;
                                vlSelf->tb_behavioral__DOT__coin_05 
                                    = vlSelf->tb_behavioral__DOT__dut__DOT__greedy_out_05;
                                vlSelf->tb_behavioral__DOT__coin_02 
                                    = vlSelf->tb_behavioral__DOT__dut__DOT__greedy_out_02;
                                vlSelf->tb_behavioral__DOT__coin_01 
                                    = vlSelf->tb_behavioral__DOT__dut__DOT__greedy_out_01;
                                __Vdly__tb_behavioral__DOT__dut__DOT__qty_c10 
                                    = vlSelf->tb_behavioral__DOT__dut__DOT__greedy_next_10;
                                __Vdly__tb_behavioral__DOT__dut__DOT__qty_c05 
                                    = vlSelf->tb_behavioral__DOT__dut__DOT__greedy_next_05;
                                __Vdly__tb_behavioral__DOT__dut__DOT__qty_c02 
                                    = vlSelf->tb_behavioral__DOT__dut__DOT__greedy_next_02;
                                __Vdly__tb_behavioral__DOT__dut__DOT__qty_c01 
                                    = vlSelf->tb_behavioral__DOT__dut__DOT__greedy_next_01;
                                vlSelf->tb_behavioral__DOT__resto 
                                    = vlSelf->tb_behavioral__DOT__dut__DOT__greedy_returned;
                                __Vdly__tb_behavioral__DOT__disponibile 
                                    = (((IData)(vlSelf->tb_behavioral__DOT__dut__DOT__greedy_returned) 
                                        > (IData)(vlSelf->tb_behavioral__DOT__disponibile))
                                        ? 0U : (0x3ffU 
                                                & ((IData)(vlSelf->tb_behavioral__DOT__disponibile) 
                                                   - (IData)(vlSelf->tb_behavioral__DOT__dut__DOT__greedy_returned))));
                            }
                        } else if ((0U == (IData)(vlSelf->tb_behavioral__DOT__dut__DOT__qty_p1))) {
                            vlSelf->tb_behavioral__DOT__errore 
                                = (((IData)(vlSelf->tb_behavioral__DOT__credito) 
                                    < (IData)(vlSelf->tb_behavioral__DOT__dut__DOT__price_p1))
                                    ? 3U : 2U);
                            if (((IData)(vlSelf->tb_behavioral__DOT__credito) 
                                 < (IData)(vlSelf->tb_behavioral__DOT__dut__DOT__price_p1))) {
                                vlSelf->tb_behavioral__DOT__resto 
                                    = vlSelf->tb_behavioral__DOT__dut__DOT__price_p1;
                            }
                            __Vdly__tb_behavioral__DOT__dut__DOT__stato = 1U;
                        } else if (((IData)(vlSelf->tb_behavioral__DOT__credito) 
                                    < (IData)(vlSelf->tb_behavioral__DOT__dut__DOT__price_p1))) {
                            vlSelf->tb_behavioral__DOT__errore = 1U;
                            vlSelf->tb_behavioral__DOT__resto 
                                = vlSelf->tb_behavioral__DOT__dut__DOT__price_p1;
                            __Vdly__tb_behavioral__DOT__dut__DOT__stato = 1U;
                        } else {
                            __Vtask_tb_behavioral__DOT__dut__DOT__greedy_return__631__amount 
                                = (0x3fU & ((IData)(vlSelf->tb_behavioral__DOT__credito) 
                                            - (IData)(vlSelf->tb_behavioral__DOT__dut__DOT__price_p1)));
                            vlSelf->tb_behavioral__DOT__dut__DOT__qty_p1 
                                = (0x3fU & ((IData)(vlSelf->tb_behavioral__DOT__dut__DOT__qty_p1) 
                                            - (IData)(1U)));
                            vlSelf->tb_behavioral__DOT__dut__DOT__greedy_return__Vstatic__remain 
                                = __Vtask_tb_behavioral__DOT__dut__DOT__greedy_return__631__amount;
                            vlSelf->tb_behavioral__DOT__prodotto1 = 1U;
                            vlSelf->tb_behavioral__DOT__dut__DOT__current_price 
                                = vlSelf->tb_behavioral__DOT__dut__DOT__price_p1;
                            __Vdly__tb_behavioral__DOT__dut__DOT__stato = 3U;
                            vlSelf->tb_behavioral__DOT__dut__DOT__greedy_return__Vstatic__take 
                                = (0x3fU & VL_DIV_III(6, (IData)(vlSelf->tb_behavioral__DOT__dut__DOT__greedy_return__Vstatic__remain), (IData)(0xaU)));
                            if (((IData)(vlSelf->tb_behavioral__DOT__dut__DOT__greedy_return__Vstatic__take) 
                                 > (IData)(vlSelf->tb_behavioral__DOT__dut__DOT__qty_c10))) {
                                vlSelf->tb_behavioral__DOT__dut__DOT__greedy_return__Vstatic__take 
                                    = vlSelf->tb_behavioral__DOT__dut__DOT__qty_c10;
                            }
                            __Vdly__tb_behavioral__DOT__credito = 0U;
                            __Vtask_tb_behavioral__DOT__dut__DOT__greedy_return__631__out10 
                                = vlSelf->tb_behavioral__DOT__dut__DOT__greedy_return__Vstatic__take;
                            __Vtask_tb_behavioral__DOT__dut__DOT__greedy_return__631__next10 
                                = (0x3fU & ((IData)(vlSelf->tb_behavioral__DOT__dut__DOT__qty_c10) 
                                            - (IData)(vlSelf->tb_behavioral__DOT__dut__DOT__greedy_return__Vstatic__take)));
                            vlSelf->tb_behavioral__DOT__dut__DOT__greedy_return__Vstatic__remain 
                                = (0x3fU & ((IData)(vlSelf->tb_behavioral__DOT__dut__DOT__greedy_return__Vstatic__remain) 
                                            - ((IData)(0xaU) 
                                               * (IData)(vlSelf->tb_behavioral__DOT__dut__DOT__greedy_return__Vstatic__take))));
                            vlSelf->tb_behavioral__DOT__dut__DOT__greedy_return__Vstatic__take 
                                = (0x3fU & VL_DIV_III(6, (IData)(vlSelf->tb_behavioral__DOT__dut__DOT__greedy_return__Vstatic__remain), (IData)(5U)));
                            if (((IData)(vlSelf->tb_behavioral__DOT__dut__DOT__greedy_return__Vstatic__take) 
                                 > (IData)(vlSelf->tb_behavioral__DOT__dut__DOT__qty_c05))) {
                                vlSelf->tb_behavioral__DOT__dut__DOT__greedy_return__Vstatic__take 
                                    = vlSelf->tb_behavioral__DOT__dut__DOT__qty_c05;
                            }
                            __Vtask_tb_behavioral__DOT__dut__DOT__greedy_return__631__out05 
                                = vlSelf->tb_behavioral__DOT__dut__DOT__greedy_return__Vstatic__take;
                            __Vtask_tb_behavioral__DOT__dut__DOT__greedy_return__631__next05 
                                = (0x3fU & ((IData)(vlSelf->tb_behavioral__DOT__dut__DOT__qty_c05) 
                                            - (IData)(vlSelf->tb_behavioral__DOT__dut__DOT__greedy_return__Vstatic__take)));
                            vlSelf->tb_behavioral__DOT__dut__DOT__greedy_return__Vstatic__remain 
                                = (0x3fU & ((IData)(vlSelf->tb_behavioral__DOT__dut__DOT__greedy_return__Vstatic__remain) 
                                            - ((IData)(5U) 
                                               * (IData)(vlSelf->tb_behavioral__DOT__dut__DOT__greedy_return__Vstatic__take))));
                            vlSelf->tb_behavioral__DOT__dut__DOT__greedy_return__Vstatic__take 
                                = (0x3fU & VL_SHIFTR_III(6,6,32, (IData)(vlSelf->tb_behavioral__DOT__dut__DOT__greedy_return__Vstatic__remain), 1U));
                            if (((IData)(vlSelf->tb_behavioral__DOT__dut__DOT__greedy_return__Vstatic__take) 
                                 > (IData)(vlSelf->tb_behavioral__DOT__dut__DOT__qty_c02))) {
                                vlSelf->tb_behavioral__DOT__dut__DOT__greedy_return__Vstatic__take 
                                    = vlSelf->tb_behavioral__DOT__dut__DOT__qty_c02;
                            }
                            __Vtask_tb_behavioral__DOT__dut__DOT__greedy_return__631__out02 
                                = vlSelf->tb_behavioral__DOT__dut__DOT__greedy_return__Vstatic__take;
                            __Vtask_tb_behavioral__DOT__dut__DOT__greedy_return__631__next02 
                                = (0x3fU & ((IData)(vlSelf->tb_behavioral__DOT__dut__DOT__qty_c02) 
                                            - (IData)(vlSelf->tb_behavioral__DOT__dut__DOT__greedy_return__Vstatic__take)));
                            vlSelf->tb_behavioral__DOT__dut__DOT__greedy_return__Vstatic__remain 
                                = (0x3fU & ((IData)(vlSelf->tb_behavioral__DOT__dut__DOT__greedy_return__Vstatic__remain) 
                                            - VL_SHIFTL_III(6,6,32, (IData)(vlSelf->tb_behavioral__DOT__dut__DOT__greedy_return__Vstatic__take), 1U)));
                            vlSelf->tb_behavioral__DOT__dut__DOT__greedy_return__Vstatic__take 
                                = vlSelf->tb_behavioral__DOT__dut__DOT__greedy_return__Vstatic__remain;
                            if (((IData)(vlSelf->tb_behavioral__DOT__dut__DOT__greedy_return__Vstatic__take) 
                                 > (IData)(vlSelf->tb_behavioral__DOT__dut__DOT__qty_c01))) {
                                vlSelf->tb_behavioral__DOT__dut__DOT__greedy_return__Vstatic__take 
                                    = vlSelf->tb_behavioral__DOT__dut__DOT__qty_c01;
                            }
                            __Vtask_tb_behavioral__DOT__dut__DOT__greedy_return__631__out01 
                                = vlSelf->tb_behavioral__DOT__dut__DOT__greedy_return__Vstatic__take;
                            __Vtask_tb_behavioral__DOT__dut__DOT__greedy_return__631__next01 
                                = (0x3fU & ((IData)(vlSelf->tb_behavioral__DOT__dut__DOT__qty_c01) 
                                            - (IData)(vlSelf->tb_behavioral__DOT__dut__DOT__greedy_return__Vstatic__take)));
                            vlSelf->tb_behavioral__DOT__dut__DOT__greedy_return__Vstatic__remain 
                                = (0x3fU & ((IData)(vlSelf->tb_behavioral__DOT__dut__DOT__greedy_return__Vstatic__remain) 
                                            - (IData)(vlSelf->tb_behavioral__DOT__dut__DOT__greedy_return__Vstatic__take)));
                            __Vtask_tb_behavioral__DOT__dut__DOT__greedy_return__631__returned 
                                = (0x3fU & ((IData)(__Vtask_tb_behavioral__DOT__dut__DOT__greedy_return__631__amount) 
                                            - (IData)(vlSelf->tb_behavioral__DOT__dut__DOT__greedy_return__Vstatic__remain)));
                            vlSelf->tb_behavioral__DOT__dut__DOT__greedy_out_10 
                                = __Vtask_tb_behavioral__DOT__dut__DOT__greedy_return__631__out10;
                            vlSelf->tb_behavioral__DOT__dut__DOT__greedy_out_05 
                                = __Vtask_tb_behavioral__DOT__dut__DOT__greedy_return__631__out05;
                            vlSelf->tb_behavioral__DOT__dut__DOT__greedy_out_02 
                                = __Vtask_tb_behavioral__DOT__dut__DOT__greedy_return__631__out02;
                            vlSelf->tb_behavioral__DOT__dut__DOT__greedy_out_01 
                                = __Vtask_tb_behavioral__DOT__dut__DOT__greedy_return__631__out01;
                            vlSelf->tb_behavioral__DOT__dut__DOT__greedy_next_10 
                                = __Vtask_tb_behavioral__DOT__dut__DOT__greedy_return__631__next10;
                            vlSelf->tb_behavioral__DOT__dut__DOT__greedy_next_05 
                                = __Vtask_tb_behavioral__DOT__dut__DOT__greedy_return__631__next05;
                            vlSelf->tb_behavioral__DOT__dut__DOT__greedy_next_02 
                                = __Vtask_tb_behavioral__DOT__dut__DOT__greedy_return__631__next02;
                            vlSelf->tb_behavioral__DOT__dut__DOT__greedy_next_01 
                                = __Vtask_tb_behavioral__DOT__dut__DOT__greedy_return__631__next01;
                            vlSelf->tb_behavioral__DOT__dut__DOT__greedy_returned 
                                = __Vtask_tb_behavioral__DOT__dut__DOT__greedy_return__631__returned;
                            vlSelf->tb_behavioral__DOT__coin_10 
                                = vlSelf->tb_behavioral__DOT__dut__DOT__greedy_out_10;
                            vlSelf->tb_behavioral__DOT__coin_05 
                                = vlSelf->tb_behavioral__DOT__dut__DOT__greedy_out_05;
                            vlSelf->tb_behavioral__DOT__coin_02 
                                = vlSelf->tb_behavioral__DOT__dut__DOT__greedy_out_02;
                            vlSelf->tb_behavioral__DOT__coin_01 
                                = vlSelf->tb_behavioral__DOT__dut__DOT__greedy_out_01;
                            __Vdly__tb_behavioral__DOT__dut__DOT__qty_c10 
                                = vlSelf->tb_behavioral__DOT__dut__DOT__greedy_next_10;
                            __Vdly__tb_behavioral__DOT__dut__DOT__qty_c05 
                                = vlSelf->tb_behavioral__DOT__dut__DOT__greedy_next_05;
                            __Vdly__tb_behavioral__DOT__dut__DOT__qty_c02 
                                = vlSelf->tb_behavioral__DOT__dut__DOT__greedy_next_02;
                            __Vdly__tb_behavioral__DOT__dut__DOT__qty_c01 
                                = vlSelf->tb_behavioral__DOT__dut__DOT__greedy_next_01;
                            vlSelf->tb_behavioral__DOT__resto 
                                = vlSelf->tb_behavioral__DOT__dut__DOT__greedy_returned;
                            __Vdly__tb_behavioral__DOT__disponibile 
                                = (((IData)(vlSelf->tb_behavioral__DOT__dut__DOT__greedy_returned) 
                                    > (IData)(vlSelf->tb_behavioral__DOT__disponibile))
                                    ? 0U : (0x3ffU 
                                            & ((IData)(vlSelf->tb_behavioral__DOT__disponibile) 
                                               - (IData)(vlSelf->tb_behavioral__DOT__dut__DOT__greedy_returned))));
                        }
                    } else {
                        vlSelf->tb_behavioral__DOT__errore = 2U;
                        __Vdly__tb_behavioral__DOT__dut__DOT__stato = 1U;
                    }
                } else {
                    __Vdly__tb_behavioral__DOT__dut__DOT__stato = 2U;
                }
            }
        } else if ((1U & (IData)(vlSelf->tb_behavioral__DOT__dut__DOT__stato))) {
            vlSelf->tb_behavioral__DOT__prodotto1 = 0U;
            vlSelf->tb_behavioral__DOT__prodotto2 = 0U;
            vlSelf->tb_behavioral__DOT__prodotto3 = 0U;
            vlSelf->tb_behavioral__DOT__prodotto4 = 0U;
            vlSelf->tb_behavioral__DOT__errore = 0U;
            vlSelf->tb_behavioral__DOT__resto = 0U;
            vlSelf->tb_behavioral__DOT__coin_01 = 0U;
            vlSelf->tb_behavioral__DOT__coin_02 = 0U;
            vlSelf->tb_behavioral__DOT__coin_05 = 0U;
            vlSelf->tb_behavioral__DOT__coin_10 = 0U;
            if (vlSelf->tb_behavioral__DOT__annulla) {
                __Vtask_tb_behavioral__DOT__dut__DOT__greedy_return__632__amount 
                    = vlSelf->tb_behavioral__DOT__credito;
                vlSelf->tb_behavioral__DOT__dut__DOT__greedy_return__Vstatic__remain 
                    = __Vtask_tb_behavioral__DOT__dut__DOT__greedy_return__632__amount;
                __Vdly__tb_behavioral__DOT__dut__DOT__stato = 1U;
                vlSelf->tb_behavioral__DOT__dut__DOT__greedy_return__Vstatic__take 
                    = (0x3fU & VL_DIV_III(6, (IData)(vlSelf->tb_behavioral__DOT__dut__DOT__greedy_return__Vstatic__remain), (IData)(0xaU)));
                if (((IData)(vlSelf->tb_behavioral__DOT__dut__DOT__greedy_return__Vstatic__take) 
                     > (IData)(vlSelf->tb_behavioral__DOT__dut__DOT__qty_c10))) {
                    vlSelf->tb_behavioral__DOT__dut__DOT__greedy_return__Vstatic__take 
                        = vlSelf->tb_behavioral__DOT__dut__DOT__qty_c10;
                }
                __Vdly__tb_behavioral__DOT__credito = 0U;
                __Vtask_tb_behavioral__DOT__dut__DOT__greedy_return__632__out10 
                    = vlSelf->tb_behavioral__DOT__dut__DOT__greedy_return__Vstatic__take;
                __Vtask_tb_behavioral__DOT__dut__DOT__greedy_return__632__next10 
                    = (0x3fU & ((IData)(vlSelf->tb_behavioral__DOT__dut__DOT__qty_c10) 
                                - (IData)(vlSelf->tb_behavioral__DOT__dut__DOT__greedy_return__Vstatic__take)));
                vlSelf->tb_behavioral__DOT__dut__DOT__greedy_return__Vstatic__remain 
                    = (0x3fU & ((IData)(vlSelf->tb_behavioral__DOT__dut__DOT__greedy_return__Vstatic__remain) 
                                - ((IData)(0xaU) * (IData)(vlSelf->tb_behavioral__DOT__dut__DOT__greedy_return__Vstatic__take))));
                vlSelf->tb_behavioral__DOT__dut__DOT__greedy_return__Vstatic__take 
                    = (0x3fU & VL_DIV_III(6, (IData)(vlSelf->tb_behavioral__DOT__dut__DOT__greedy_return__Vstatic__remain), (IData)(5U)));
                if (((IData)(vlSelf->tb_behavioral__DOT__dut__DOT__greedy_return__Vstatic__take) 
                     > (IData)(vlSelf->tb_behavioral__DOT__dut__DOT__qty_c05))) {
                    vlSelf->tb_behavioral__DOT__dut__DOT__greedy_return__Vstatic__take 
                        = vlSelf->tb_behavioral__DOT__dut__DOT__qty_c05;
                }
                __Vtask_tb_behavioral__DOT__dut__DOT__greedy_return__632__out05 
                    = vlSelf->tb_behavioral__DOT__dut__DOT__greedy_return__Vstatic__take;
                __Vtask_tb_behavioral__DOT__dut__DOT__greedy_return__632__next05 
                    = (0x3fU & ((IData)(vlSelf->tb_behavioral__DOT__dut__DOT__qty_c05) 
                                - (IData)(vlSelf->tb_behavioral__DOT__dut__DOT__greedy_return__Vstatic__take)));
                vlSelf->tb_behavioral__DOT__dut__DOT__greedy_return__Vstatic__remain 
                    = (0x3fU & ((IData)(vlSelf->tb_behavioral__DOT__dut__DOT__greedy_return__Vstatic__remain) 
                                - ((IData)(5U) * (IData)(vlSelf->tb_behavioral__DOT__dut__DOT__greedy_return__Vstatic__take))));
                vlSelf->tb_behavioral__DOT__dut__DOT__greedy_return__Vstatic__take 
                    = (0x3fU & VL_SHIFTR_III(6,6,32, (IData)(vlSelf->tb_behavioral__DOT__dut__DOT__greedy_return__Vstatic__remain), 1U));
                if (((IData)(vlSelf->tb_behavioral__DOT__dut__DOT__greedy_return__Vstatic__take) 
                     > (IData)(vlSelf->tb_behavioral__DOT__dut__DOT__qty_c02))) {
                    vlSelf->tb_behavioral__DOT__dut__DOT__greedy_return__Vstatic__take 
                        = vlSelf->tb_behavioral__DOT__dut__DOT__qty_c02;
                }
                __Vtask_tb_behavioral__DOT__dut__DOT__greedy_return__632__out02 
                    = vlSelf->tb_behavioral__DOT__dut__DOT__greedy_return__Vstatic__take;
                __Vtask_tb_behavioral__DOT__dut__DOT__greedy_return__632__next02 
                    = (0x3fU & ((IData)(vlSelf->tb_behavioral__DOT__dut__DOT__qty_c02) 
                                - (IData)(vlSelf->tb_behavioral__DOT__dut__DOT__greedy_return__Vstatic__take)));
                vlSelf->tb_behavioral__DOT__dut__DOT__greedy_return__Vstatic__remain 
                    = (0x3fU & ((IData)(vlSelf->tb_behavioral__DOT__dut__DOT__greedy_return__Vstatic__remain) 
                                - VL_SHIFTL_III(6,6,32, (IData)(vlSelf->tb_behavioral__DOT__dut__DOT__greedy_return__Vstatic__take), 1U)));
                vlSelf->tb_behavioral__DOT__dut__DOT__greedy_return__Vstatic__take 
                    = vlSelf->tb_behavioral__DOT__dut__DOT__greedy_return__Vstatic__remain;
                if (((IData)(vlSelf->tb_behavioral__DOT__dut__DOT__greedy_return__Vstatic__take) 
                     > (IData)(vlSelf->tb_behavioral__DOT__dut__DOT__qty_c01))) {
                    vlSelf->tb_behavioral__DOT__dut__DOT__greedy_return__Vstatic__take 
                        = vlSelf->tb_behavioral__DOT__dut__DOT__qty_c01;
                }
                __Vtask_tb_behavioral__DOT__dut__DOT__greedy_return__632__out01 
                    = vlSelf->tb_behavioral__DOT__dut__DOT__greedy_return__Vstatic__take;
                __Vtask_tb_behavioral__DOT__dut__DOT__greedy_return__632__next01 
                    = (0x3fU & ((IData)(vlSelf->tb_behavioral__DOT__dut__DOT__qty_c01) 
                                - (IData)(vlSelf->tb_behavioral__DOT__dut__DOT__greedy_return__Vstatic__take)));
                vlSelf->tb_behavioral__DOT__dut__DOT__greedy_return__Vstatic__remain 
                    = (0x3fU & ((IData)(vlSelf->tb_behavioral__DOT__dut__DOT__greedy_return__Vstatic__remain) 
                                - (IData)(vlSelf->tb_behavioral__DOT__dut__DOT__greedy_return__Vstatic__take)));
                __Vtask_tb_behavioral__DOT__dut__DOT__greedy_return__632__returned 
                    = (0x3fU & ((IData)(__Vtask_tb_behavioral__DOT__dut__DOT__greedy_return__632__amount) 
                                - (IData)(vlSelf->tb_behavioral__DOT__dut__DOT__greedy_return__Vstatic__remain)));
                vlSelf->tb_behavioral__DOT__dut__DOT__greedy_out_10 
                    = __Vtask_tb_behavioral__DOT__dut__DOT__greedy_return__632__out10;
                vlSelf->tb_behavioral__DOT__dut__DOT__greedy_out_05 
                    = __Vtask_tb_behavioral__DOT__dut__DOT__greedy_return__632__out05;
                vlSelf->tb_behavioral__DOT__dut__DOT__greedy_out_02 
                    = __Vtask_tb_behavioral__DOT__dut__DOT__greedy_return__632__out02;
                vlSelf->tb_behavioral__DOT__dut__DOT__greedy_out_01 
                    = __Vtask_tb_behavioral__DOT__dut__DOT__greedy_return__632__out01;
                vlSelf->tb_behavioral__DOT__dut__DOT__greedy_next_10 
                    = __Vtask_tb_behavioral__DOT__dut__DOT__greedy_return__632__next10;
                vlSelf->tb_behavioral__DOT__dut__DOT__greedy_next_05 
                    = __Vtask_tb_behavioral__DOT__dut__DOT__greedy_return__632__next05;
                vlSelf->tb_behavioral__DOT__dut__DOT__greedy_next_02 
                    = __Vtask_tb_behavioral__DOT__dut__DOT__greedy_return__632__next02;
                vlSelf->tb_behavioral__DOT__dut__DOT__greedy_next_01 
                    = __Vtask_tb_behavioral__DOT__dut__DOT__greedy_return__632__next01;
                vlSelf->tb_behavioral__DOT__dut__DOT__greedy_returned 
                    = __Vtask_tb_behavioral__DOT__dut__DOT__greedy_return__632__returned;
                vlSelf->tb_behavioral__DOT__coin_10 
                    = vlSelf->tb_behavioral__DOT__dut__DOT__greedy_out_10;
                vlSelf->tb_behavioral__DOT__coin_05 
                    = vlSelf->tb_behavioral__DOT__dut__DOT__greedy_out_05;
                vlSelf->tb_behavioral__DOT__coin_02 
                    = vlSelf->tb_behavioral__DOT__dut__DOT__greedy_out_02;
                vlSelf->tb_behavioral__DOT__coin_01 
                    = vlSelf->tb_behavioral__DOT__dut__DOT__greedy_out_01;
                __Vdly__tb_behavioral__DOT__dut__DOT__qty_c10 
                    = vlSelf->tb_behavioral__DOT__dut__DOT__greedy_next_10;
                __Vdly__tb_behavioral__DOT__dut__DOT__qty_c05 
                    = vlSelf->tb_behavioral__DOT__dut__DOT__greedy_next_05;
                __Vdly__tb_behavioral__DOT__dut__DOT__qty_c02 
                    = vlSelf->tb_behavioral__DOT__dut__DOT__greedy_next_02;
                __Vdly__tb_behavioral__DOT__dut__DOT__qty_c01 
                    = vlSelf->tb_behavioral__DOT__dut__DOT__greedy_next_01;
                vlSelf->tb_behavioral__DOT__resto = vlSelf->tb_behavioral__DOT__dut__DOT__greedy_returned;
                __Vdly__tb_behavioral__DOT__disponibile 
                    = (((IData)(vlSelf->tb_behavioral__DOT__dut__DOT__greedy_returned) 
                        > (IData)(vlSelf->tb_behavioral__DOT__disponibile))
                        ? 0U : (0x3ffU & ((IData)(vlSelf->tb_behavioral__DOT__disponibile) 
                                          - (IData)(vlSelf->tb_behavioral__DOT__dut__DOT__greedy_returned))));
            } else if ((0U != ([&]() {
                            __Vfunc_tb_behavioral__DOT__dut__DOT__coin_value__633__code 
                                = vlSelf->tb_behavioral__DOT__coin;
                            __Vfunc_tb_behavioral__DOT__dut__DOT__coin_value__633__Vfuncout 
                                = ((4U & (IData)(__Vfunc_tb_behavioral__DOT__dut__DOT__coin_value__633__code))
                                    ? ((2U & (IData)(__Vfunc_tb_behavioral__DOT__dut__DOT__coin_value__633__code))
                                        ? ((1U & (IData)(__Vfunc_tb_behavioral__DOT__dut__DOT__coin_value__633__code))
                                            ? 0xaU : 5U)
                                        : ((1U & (IData)(__Vfunc_tb_behavioral__DOT__dut__DOT__coin_value__633__code))
                                            ? 2U : 1U))
                                    : 0U);
                        }(), (IData)(__Vfunc_tb_behavioral__DOT__dut__DOT__coin_value__633__Vfuncout)))) {
                if ((4U & (IData)(vlSelf->tb_behavioral__DOT__coin))) {
                    if ((2U & (IData)(vlSelf->tb_behavioral__DOT__coin))) {
                        if ((1U & (IData)(vlSelf->tb_behavioral__DOT__coin))) {
                            __Vdly__tb_behavioral__DOT__dut__DOT__qty_c10 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->tb_behavioral__DOT__dut__DOT__qty_c10)));
                        } else {
                            __Vdly__tb_behavioral__DOT__dut__DOT__qty_c05 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->tb_behavioral__DOT__dut__DOT__qty_c05)));
                        }
                    } else if ((1U & (IData)(vlSelf->tb_behavioral__DOT__coin))) {
                        __Vdly__tb_behavioral__DOT__dut__DOT__qty_c02 
                            = (0x3fU & ((IData)(1U) 
                                        + (IData)(vlSelf->tb_behavioral__DOT__dut__DOT__qty_c02)));
                    } else {
                        __Vdly__tb_behavioral__DOT__dut__DOT__qty_c01 
                            = (0x3fU & ((IData)(1U) 
                                        + (IData)(vlSelf->tb_behavioral__DOT__dut__DOT__qty_c01)));
                    }
                }
                __Vdly__tb_behavioral__DOT__credito 
                    = (0x3fU & ((IData)(vlSelf->tb_behavioral__DOT__credito) 
                                + ([&]() {
                                __Vfunc_tb_behavioral__DOT__dut__DOT__coin_value__634__code 
                                    = vlSelf->tb_behavioral__DOT__coin;
                                __Vfunc_tb_behavioral__DOT__dut__DOT__coin_value__634__Vfuncout 
                                    = ((4U & (IData)(__Vfunc_tb_behavioral__DOT__dut__DOT__coin_value__634__code))
                                        ? ((2U & (IData)(__Vfunc_tb_behavioral__DOT__dut__DOT__coin_value__634__code))
                                            ? ((1U 
                                                & (IData)(__Vfunc_tb_behavioral__DOT__dut__DOT__coin_value__634__code))
                                                ? 0xaU
                                                : 5U)
                                            : ((1U 
                                                & (IData)(__Vfunc_tb_behavioral__DOT__dut__DOT__coin_value__634__code))
                                                ? 2U
                                                : 1U))
                                        : 0U);
                            }(), (IData)(__Vfunc_tb_behavioral__DOT__dut__DOT__coin_value__634__Vfuncout))));
                __Vdly__tb_behavioral__DOT__disponibile 
                    = (0x3ffU & ((IData)(vlSelf->tb_behavioral__DOT__disponibile) 
                                 + VL_EXTEND_II(10,6, 
                                                ([&]() {
                                    __Vfunc_tb_behavioral__DOT__dut__DOT__coin_value__635__code 
                                        = vlSelf->tb_behavioral__DOT__coin;
                                    __Vfunc_tb_behavioral__DOT__dut__DOT__coin_value__635__Vfuncout 
                                        = ((4U & (IData)(__Vfunc_tb_behavioral__DOT__dut__DOT__coin_value__635__code))
                                            ? ((2U 
                                                & (IData)(__Vfunc_tb_behavioral__DOT__dut__DOT__coin_value__635__code))
                                                ? (
                                                   (1U 
                                                    & (IData)(__Vfunc_tb_behavioral__DOT__dut__DOT__coin_value__635__code))
                                                    ? 0xaU
                                                    : 5U)
                                                : (
                                                   (1U 
                                                    & (IData)(__Vfunc_tb_behavioral__DOT__dut__DOT__coin_value__635__code))
                                                    ? 2U
                                                    : 1U))
                                            : 0U);
                                }(), (IData)(__Vfunc_tb_behavioral__DOT__dut__DOT__coin_value__635__Vfuncout)))));
                __Vdly__tb_behavioral__DOT__dut__DOT__stato = 2U;
            } else {
                __Vdly__tb_behavioral__DOT__dut__DOT__stato = 1U;
            }
        } else {
            vlSelf->tb_behavioral__DOT__dut__DOT__init_value 
                = (((IData)(vlSelf->tb_behavioral__DOT__coin) 
                    << 3U) | (IData)(vlSelf->tb_behavioral__DOT__selezione));
            __Vdly__tb_behavioral__DOT__credito = 0U;
            vlSelf->tb_behavioral__DOT__prodotto1 = 0U;
            vlSelf->tb_behavioral__DOT__prodotto2 = 0U;
            vlSelf->tb_behavioral__DOT__prodotto3 = 0U;
            vlSelf->tb_behavioral__DOT__prodotto4 = 0U;
            vlSelf->tb_behavioral__DOT__errore = 0U;
            vlSelf->tb_behavioral__DOT__resto = 0U;
            vlSelf->tb_behavioral__DOT__coin_01 = 0U;
            vlSelf->tb_behavioral__DOT__coin_02 = 0U;
            vlSelf->tb_behavioral__DOT__coin_05 = 0U;
            vlSelf->tb_behavioral__DOT__coin_10 = 0U;
            vlSelf->tb_behavioral__DOT__dut__DOT__current_price = 0U;
            if ((8U & (IData)(vlSelf->tb_behavioral__DOT__dut__DOT__init_counter))) {
                if ((1U & (~ ((IData)(vlSelf->tb_behavioral__DOT__dut__DOT__init_counter) 
                              >> 2U)))) {
                    if ((2U & (IData)(vlSelf->tb_behavioral__DOT__dut__DOT__init_counter))) {
                        if ((1U & (IData)(vlSelf->tb_behavioral__DOT__dut__DOT__init_counter))) {
                            __Vdly__tb_behavioral__DOT__dut__DOT__qty_c10 
                                = (0x3fU & (IData)(vlSelf->tb_behavioral__DOT__dut__DOT__init_value));
                            __Vdly__tb_behavioral__DOT__dut__DOT__stato = 1U;
                            __Vdly__tb_behavioral__DOT__dut__DOT__init_counter = 0U;
                            __Vdly__tb_behavioral__DOT__disponibile 
                                = (0x3ffU & ((((IData)(vlSelf->tb_behavioral__DOT__dut__DOT__qty_c01) 
                                               + VL_SHIFTL_III(10,10,32, (IData)(vlSelf->tb_behavioral__DOT__dut__DOT__qty_c02), 1U)) 
                                              + ((IData)(vlSelf->tb_behavioral__DOT__dut__DOT__qty_c05) 
                                                 + 
                                                 VL_SHIFTL_III(10,10,32, (IData)(vlSelf->tb_behavioral__DOT__dut__DOT__qty_c05), 2U))) 
                                             + (VL_SHIFTL_III(10,10,32, 
                                                              (0x3fU 
                                                               & (IData)(vlSelf->tb_behavioral__DOT__dut__DOT__init_value)), 3U) 
                                                + VL_SHIFTL_III(10,10,32, 
                                                                (0x3fU 
                                                                 & (IData)(vlSelf->tb_behavioral__DOT__dut__DOT__init_value)), 1U))));
                        } else {
                            __Vdly__tb_behavioral__DOT__dut__DOT__qty_c05 
                                = (0x3fU & (IData)(vlSelf->tb_behavioral__DOT__dut__DOT__init_value));
                        }
                    } else if ((1U & (IData)(vlSelf->tb_behavioral__DOT__dut__DOT__init_counter))) {
                        __Vdly__tb_behavioral__DOT__dut__DOT__qty_c02 
                            = (0x3fU & (IData)(vlSelf->tb_behavioral__DOT__dut__DOT__init_value));
                    } else {
                        __Vdly__tb_behavioral__DOT__dut__DOT__qty_c01 
                            = (0x3fU & (IData)(vlSelf->tb_behavioral__DOT__dut__DOT__init_value));
                    }
                }
            } else if ((4U & (IData)(vlSelf->tb_behavioral__DOT__dut__DOT__init_counter))) {
                if ((2U & (IData)(vlSelf->tb_behavioral__DOT__dut__DOT__init_counter))) {
                    if ((1U & (IData)(vlSelf->tb_behavioral__DOT__dut__DOT__init_counter))) {
                        vlSelf->tb_behavioral__DOT__dut__DOT__price_p4 
                            = (0x3fU & (IData)(vlSelf->tb_behavioral__DOT__dut__DOT__init_value));
                    } else {
                        vlSelf->tb_behavioral__DOT__dut__DOT__qty_p4 
                            = (0x3fU & (IData)(vlSelf->tb_behavioral__DOT__dut__DOT__init_value));
                    }
                } else if ((1U & (IData)(vlSelf->tb_behavioral__DOT__dut__DOT__init_counter))) {
                    vlSelf->tb_behavioral__DOT__dut__DOT__price_p3 
                        = (0x3fU & (IData)(vlSelf->tb_behavioral__DOT__dut__DOT__init_value));
                } else {
                    vlSelf->tb_behavioral__DOT__dut__DOT__qty_p3 
                        = (0x3fU & (IData)(vlSelf->tb_behavioral__DOT__dut__DOT__init_value));
                }
            } else if ((2U & (IData)(vlSelf->tb_behavioral__DOT__dut__DOT__init_counter))) {
                if ((1U & (IData)(vlSelf->tb_behavioral__DOT__dut__DOT__init_counter))) {
                    vlSelf->tb_behavioral__DOT__dut__DOT__price_p2 
                        = (0x3fU & (IData)(vlSelf->tb_behavioral__DOT__dut__DOT__init_value));
                } else {
                    vlSelf->tb_behavioral__DOT__dut__DOT__qty_p2 
                        = (0x3fU & (IData)(vlSelf->tb_behavioral__DOT__dut__DOT__init_value));
                }
            } else if ((1U & (IData)(vlSelf->tb_behavioral__DOT__dut__DOT__init_counter))) {
                vlSelf->tb_behavioral__DOT__dut__DOT__price_p1 
                    = (0x3fU & (IData)(vlSelf->tb_behavioral__DOT__dut__DOT__init_value));
            } else {
                vlSelf->tb_behavioral__DOT__dut__DOT__qty_p1 
                    = (0x3fU & (IData)(vlSelf->tb_behavioral__DOT__dut__DOT__init_value));
            }
            if ((0xbU > (IData)(vlSelf->tb_behavioral__DOT__dut__DOT__init_counter))) {
                __Vdly__tb_behavioral__DOT__dut__DOT__init_counter 
                    = (0xfU & ((IData)(1U) + (IData)(vlSelf->tb_behavioral__DOT__dut__DOT__init_counter)));
            }
        }
    } else {
        vlSelf->tb_behavioral__DOT__dut__DOT__qty_p1 = 0U;
        vlSelf->tb_behavioral__DOT__dut__DOT__qty_p2 = 0U;
        vlSelf->tb_behavioral__DOT__dut__DOT__qty_p3 = 0U;
        vlSelf->tb_behavioral__DOT__dut__DOT__qty_p4 = 0U;
        __Vdly__tb_behavioral__DOT__dut__DOT__stato = 0U;
        __Vdly__tb_behavioral__DOT__dut__DOT__init_counter = 0U;
        __Vdly__tb_behavioral__DOT__credito = 0U;
        vlSelf->tb_behavioral__DOT__prodotto1 = 0U;
        vlSelf->tb_behavioral__DOT__prodotto2 = 0U;
        vlSelf->tb_behavioral__DOT__prodotto3 = 0U;
        vlSelf->tb_behavioral__DOT__prodotto4 = 0U;
        vlSelf->tb_behavioral__DOT__errore = 0U;
        vlSelf->tb_behavioral__DOT__resto = 0U;
        __Vdly__tb_behavioral__DOT__disponibile = 0U;
        vlSelf->tb_behavioral__DOT__coin_01 = 0U;
        vlSelf->tb_behavioral__DOT__coin_02 = 0U;
        vlSelf->tb_behavioral__DOT__coin_05 = 0U;
        vlSelf->tb_behavioral__DOT__coin_10 = 0U;
        vlSelf->tb_behavioral__DOT__dut__DOT__price_p1 = 0U;
        vlSelf->tb_behavioral__DOT__dut__DOT__price_p2 = 0U;
        vlSelf->tb_behavioral__DOT__dut__DOT__price_p3 = 0U;
        vlSelf->tb_behavioral__DOT__dut__DOT__price_p4 = 0U;
        __Vdly__tb_behavioral__DOT__dut__DOT__qty_c01 = 0U;
        __Vdly__tb_behavioral__DOT__dut__DOT__qty_c02 = 0U;
        __Vdly__tb_behavioral__DOT__dut__DOT__qty_c05 = 0U;
        __Vdly__tb_behavioral__DOT__dut__DOT__qty_c10 = 0U;
        vlSelf->tb_behavioral__DOT__dut__DOT__current_price = 0U;
    }
    vlSelf->tb_behavioral__DOT__credito = __Vdly__tb_behavioral__DOT__credito;
    vlSelf->tb_behavioral__DOT__dut__DOT__qty_c10 = __Vdly__tb_behavioral__DOT__dut__DOT__qty_c10;
    vlSelf->tb_behavioral__DOT__dut__DOT__qty_c05 = __Vdly__tb_behavioral__DOT__dut__DOT__qty_c05;
    vlSelf->tb_behavioral__DOT__dut__DOT__qty_c02 = __Vdly__tb_behavioral__DOT__dut__DOT__qty_c02;
    vlSelf->tb_behavioral__DOT__dut__DOT__qty_c01 = __Vdly__tb_behavioral__DOT__dut__DOT__qty_c01;
    vlSelf->tb_behavioral__DOT__disponibile = __Vdly__tb_behavioral__DOT__disponibile;
    vlSelf->tb_behavioral__DOT__dut__DOT__init_counter 
        = __Vdly__tb_behavioral__DOT__dut__DOT__init_counter;
    vlSelf->tb_behavioral__DOT__dut__DOT__stato = __Vdly__tb_behavioral__DOT__dut__DOT__stato;
}

void Vtb_behavioral___024root___eval_nba(Vtb_behavioral___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_behavioral__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_behavioral___024root___eval_nba\n"); );
    // Body
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtb_behavioral___024root___nba_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[3U] = 1U;
    }
}

void Vtb_behavioral___024root___timing_resume(Vtb_behavioral___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_behavioral__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_behavioral___024root___timing_resume\n"); );
    // Body
    if ((4ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VtrigSched_h2394f4a5__0.resume("@(posedge tb_behavioral.clk)");
    }
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VdlySched.resume();
    }
}

void Vtb_behavioral___024root___timing_commit(Vtb_behavioral___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_behavioral__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_behavioral___024root___timing_commit\n"); );
    // Body
    if ((! (4ULL & vlSelf->__VactTriggered.word(0U)))) {
        vlSelf->__VtrigSched_h2394f4a5__0.commit("@(posedge tb_behavioral.clk)");
    }
}

void Vtb_behavioral___024root___eval_triggers__act(Vtb_behavioral___024root* vlSelf);

bool Vtb_behavioral___024root___eval_phase__act(Vtb_behavioral___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_behavioral__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_behavioral___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<3> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vtb_behavioral___024root___eval_triggers__act(vlSelf);
    Vtb_behavioral___024root___timing_commit(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        Vtb_behavioral___024root___timing_resume(vlSelf);
        Vtb_behavioral___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vtb_behavioral___024root___eval_phase__nba(Vtb_behavioral___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_behavioral__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_behavioral___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vtb_behavioral___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_behavioral___024root___dump_triggers__nba(Vtb_behavioral___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_behavioral___024root___dump_triggers__act(Vtb_behavioral___024root* vlSelf);
#endif  // VL_DEBUG

void Vtb_behavioral___024root___eval(Vtb_behavioral___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_behavioral__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_behavioral___024root___eval\n"); );
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vtb_behavioral___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("behavioral/tb_behavioral.v", 3, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                Vtb_behavioral___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("behavioral/tb_behavioral.v", 3, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (Vtb_behavioral___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (Vtb_behavioral___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vtb_behavioral___024root___eval_debug_assertions(Vtb_behavioral___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_behavioral__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_behavioral___024root___eval_debug_assertions\n"); );
}
#endif  // VL_DEBUG
