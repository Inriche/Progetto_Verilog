// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_behavioral.h for the primary calling header

#include "Vtb_behavioral__pch.h"
#include "Vtb_behavioral___024root.h"

VL_ATTR_COLD void Vtb_behavioral___024root___eval_static(Vtb_behavioral___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_behavioral__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_behavioral___024root___eval_static\n"); );
}

VL_ATTR_COLD void Vtb_behavioral___024root___eval_final(Vtb_behavioral___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_behavioral__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_behavioral___024root___eval_final\n"); );
}

VL_ATTR_COLD void Vtb_behavioral___024root___eval_settle(Vtb_behavioral___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_behavioral__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_behavioral___024root___eval_settle\n"); );
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_behavioral___024root___dump_triggers__act(Vtb_behavioral___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_behavioral__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_behavioral___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge tb_behavioral.clk or negedge tb_behavioral.rst)\n");
    }
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
    if ((4ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @(posedge tb_behavioral.clk)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_behavioral___024root___dump_triggers__nba(Vtb_behavioral___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_behavioral__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_behavioral___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge tb_behavioral.clk or negedge tb_behavioral.rst)\n");
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
    if ((4ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @(posedge tb_behavioral.clk)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb_behavioral___024root___ctor_var_reset(Vtb_behavioral___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_behavioral__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_behavioral___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->tb_behavioral__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->tb_behavioral__DOT__rst = VL_RAND_RESET_I(1);
    vlSelf->tb_behavioral__DOT__coin = VL_RAND_RESET_I(3);
    vlSelf->tb_behavioral__DOT__selezione = VL_RAND_RESET_I(3);
    vlSelf->tb_behavioral__DOT__conferma = VL_RAND_RESET_I(1);
    vlSelf->tb_behavioral__DOT__annulla = VL_RAND_RESET_I(1);
    vlSelf->tb_behavioral__DOT__credito = VL_RAND_RESET_I(6);
    vlSelf->tb_behavioral__DOT__prodotto1 = VL_RAND_RESET_I(1);
    vlSelf->tb_behavioral__DOT__prodotto2 = VL_RAND_RESET_I(1);
    vlSelf->tb_behavioral__DOT__prodotto3 = VL_RAND_RESET_I(1);
    vlSelf->tb_behavioral__DOT__prodotto4 = VL_RAND_RESET_I(1);
    vlSelf->tb_behavioral__DOT__errore = VL_RAND_RESET_I(2);
    vlSelf->tb_behavioral__DOT__resto = VL_RAND_RESET_I(6);
    vlSelf->tb_behavioral__DOT__disponibile = VL_RAND_RESET_I(10);
    vlSelf->tb_behavioral__DOT__coin_01 = VL_RAND_RESET_I(6);
    vlSelf->tb_behavioral__DOT__coin_02 = VL_RAND_RESET_I(6);
    vlSelf->tb_behavioral__DOT__coin_05 = VL_RAND_RESET_I(6);
    vlSelf->tb_behavioral__DOT__coin_10 = VL_RAND_RESET_I(6);
    vlSelf->tb_behavioral__DOT__report_fd = 0;
    VL_RAND_RESET_W(1024, vlSelf->tb_behavioral__DOT__current_test_name);
    vlSelf->tb_behavioral__DOT__last_coin = VL_RAND_RESET_I(3);
    vlSelf->tb_behavioral__DOT__last_selezione = VL_RAND_RESET_I(3);
    vlSelf->tb_behavioral__DOT__last_conferma = VL_RAND_RESET_I(1);
    vlSelf->tb_behavioral__DOT__last_annulla = VL_RAND_RESET_I(1);
    vlSelf->tb_behavioral__DOT__dut__DOT__stato = VL_RAND_RESET_I(2);
    vlSelf->tb_behavioral__DOT__dut__DOT__init_counter = VL_RAND_RESET_I(4);
    vlSelf->tb_behavioral__DOT__dut__DOT__qty_p1 = VL_RAND_RESET_I(6);
    vlSelf->tb_behavioral__DOT__dut__DOT__qty_p2 = VL_RAND_RESET_I(6);
    vlSelf->tb_behavioral__DOT__dut__DOT__qty_p3 = VL_RAND_RESET_I(6);
    vlSelf->tb_behavioral__DOT__dut__DOT__qty_p4 = VL_RAND_RESET_I(6);
    vlSelf->tb_behavioral__DOT__dut__DOT__price_p1 = VL_RAND_RESET_I(6);
    vlSelf->tb_behavioral__DOT__dut__DOT__price_p2 = VL_RAND_RESET_I(6);
    vlSelf->tb_behavioral__DOT__dut__DOT__price_p3 = VL_RAND_RESET_I(6);
    vlSelf->tb_behavioral__DOT__dut__DOT__price_p4 = VL_RAND_RESET_I(6);
    vlSelf->tb_behavioral__DOT__dut__DOT__qty_c01 = VL_RAND_RESET_I(6);
    vlSelf->tb_behavioral__DOT__dut__DOT__qty_c02 = VL_RAND_RESET_I(6);
    vlSelf->tb_behavioral__DOT__dut__DOT__qty_c05 = VL_RAND_RESET_I(6);
    vlSelf->tb_behavioral__DOT__dut__DOT__qty_c10 = VL_RAND_RESET_I(6);
    vlSelf->tb_behavioral__DOT__dut__DOT__current_price = VL_RAND_RESET_I(6);
    vlSelf->tb_behavioral__DOT__dut__DOT__greedy_out_01 = VL_RAND_RESET_I(6);
    vlSelf->tb_behavioral__DOT__dut__DOT__greedy_out_02 = VL_RAND_RESET_I(6);
    vlSelf->tb_behavioral__DOT__dut__DOT__greedy_out_05 = VL_RAND_RESET_I(6);
    vlSelf->tb_behavioral__DOT__dut__DOT__greedy_out_10 = VL_RAND_RESET_I(6);
    vlSelf->tb_behavioral__DOT__dut__DOT__greedy_next_01 = VL_RAND_RESET_I(6);
    vlSelf->tb_behavioral__DOT__dut__DOT__greedy_next_02 = VL_RAND_RESET_I(6);
    vlSelf->tb_behavioral__DOT__dut__DOT__greedy_next_05 = VL_RAND_RESET_I(6);
    vlSelf->tb_behavioral__DOT__dut__DOT__greedy_next_10 = VL_RAND_RESET_I(6);
    vlSelf->tb_behavioral__DOT__dut__DOT__greedy_returned = VL_RAND_RESET_I(6);
    vlSelf->tb_behavioral__DOT__dut__DOT__init_value = VL_RAND_RESET_I(10);
    vlSelf->tb_behavioral__DOT__dut__DOT__greedy_return__Vstatic__remain = VL_RAND_RESET_I(6);
    vlSelf->tb_behavioral__DOT__dut__DOT__greedy_return__Vstatic__take = VL_RAND_RESET_I(6);
    vlSelf->__Vtask_tb_behavioral__DOT__step__550__coin_i = VL_RAND_RESET_I(3);
    vlSelf->__Vtask_tb_behavioral__DOT__step__550__selezione_i = VL_RAND_RESET_I(3);
    vlSelf->__Vtask_tb_behavioral__DOT__step__550__conferma_i = VL_RAND_RESET_I(1);
    vlSelf->__Vtask_tb_behavioral__DOT__step__550__annulla_i = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__tb_behavioral__DOT__clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__tb_behavioral__DOT__rst__0 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
