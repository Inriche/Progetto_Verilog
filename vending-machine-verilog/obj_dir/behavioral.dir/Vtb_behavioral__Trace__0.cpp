// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtb_behavioral__Syms.h"


void Vtb_behavioral___024root__trace_chg_0_sub_0(Vtb_behavioral___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vtb_behavioral___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_behavioral___024root__trace_chg_0\n"); );
    // Init
    Vtb_behavioral___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_behavioral___024root*>(voidSelf);
    Vtb_behavioral__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vtb_behavioral___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vtb_behavioral___024root__trace_chg_0_sub_0(Vtb_behavioral___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_behavioral__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_behavioral___024root__trace_chg_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[2U]))) {
        bufp->chgBit(oldp+0,(vlSelf->tb_behavioral__DOT__rst));
        bufp->chgCData(oldp+1,(vlSelf->tb_behavioral__DOT__coin),3);
        bufp->chgCData(oldp+2,(vlSelf->tb_behavioral__DOT__selezione),3);
        bufp->chgBit(oldp+3,(vlSelf->tb_behavioral__DOT__conferma));
        bufp->chgBit(oldp+4,(vlSelf->tb_behavioral__DOT__annulla));
        bufp->chgWData(oldp+5,(vlSelf->tb_behavioral__DOT__current_test_name),1024);
        bufp->chgCData(oldp+37,(vlSelf->tb_behavioral__DOT__last_coin),3);
        bufp->chgCData(oldp+38,(vlSelf->tb_behavioral__DOT__last_selezione),3);
        bufp->chgBit(oldp+39,(vlSelf->tb_behavioral__DOT__last_conferma));
        bufp->chgBit(oldp+40,(vlSelf->tb_behavioral__DOT__last_annulla));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[3U])) {
        bufp->chgCData(oldp+41,(vlSelf->tb_behavioral__DOT__credito),6);
        bufp->chgBit(oldp+42,(vlSelf->tb_behavioral__DOT__prodotto1));
        bufp->chgBit(oldp+43,(vlSelf->tb_behavioral__DOT__prodotto2));
        bufp->chgBit(oldp+44,(vlSelf->tb_behavioral__DOT__prodotto3));
        bufp->chgBit(oldp+45,(vlSelf->tb_behavioral__DOT__prodotto4));
        bufp->chgCData(oldp+46,(vlSelf->tb_behavioral__DOT__errore),2);
        bufp->chgCData(oldp+47,(vlSelf->tb_behavioral__DOT__resto),6);
        bufp->chgSData(oldp+48,(vlSelf->tb_behavioral__DOT__disponibile),10);
        bufp->chgCData(oldp+49,(vlSelf->tb_behavioral__DOT__coin_01),6);
        bufp->chgCData(oldp+50,(vlSelf->tb_behavioral__DOT__coin_02),6);
        bufp->chgCData(oldp+51,(vlSelf->tb_behavioral__DOT__coin_05),6);
        bufp->chgCData(oldp+52,(vlSelf->tb_behavioral__DOT__coin_10),6);
        bufp->chgCData(oldp+53,(vlSelf->tb_behavioral__DOT__dut__DOT__stato),2);
        bufp->chgCData(oldp+54,(vlSelf->tb_behavioral__DOT__dut__DOT__init_counter),4);
        bufp->chgCData(oldp+55,(vlSelf->tb_behavioral__DOT__dut__DOT__qty_p1),6);
        bufp->chgCData(oldp+56,(vlSelf->tb_behavioral__DOT__dut__DOT__qty_p2),6);
        bufp->chgCData(oldp+57,(vlSelf->tb_behavioral__DOT__dut__DOT__qty_p3),6);
        bufp->chgCData(oldp+58,(vlSelf->tb_behavioral__DOT__dut__DOT__qty_p4),6);
        bufp->chgCData(oldp+59,(vlSelf->tb_behavioral__DOT__dut__DOT__price_p1),6);
        bufp->chgCData(oldp+60,(vlSelf->tb_behavioral__DOT__dut__DOT__price_p2),6);
        bufp->chgCData(oldp+61,(vlSelf->tb_behavioral__DOT__dut__DOT__price_p3),6);
        bufp->chgCData(oldp+62,(vlSelf->tb_behavioral__DOT__dut__DOT__price_p4),6);
        bufp->chgCData(oldp+63,(vlSelf->tb_behavioral__DOT__dut__DOT__qty_c01),6);
        bufp->chgCData(oldp+64,(vlSelf->tb_behavioral__DOT__dut__DOT__qty_c02),6);
        bufp->chgCData(oldp+65,(vlSelf->tb_behavioral__DOT__dut__DOT__qty_c05),6);
        bufp->chgCData(oldp+66,(vlSelf->tb_behavioral__DOT__dut__DOT__qty_c10),6);
        bufp->chgCData(oldp+67,(vlSelf->tb_behavioral__DOT__dut__DOT__current_price),6);
        bufp->chgCData(oldp+68,(vlSelf->tb_behavioral__DOT__dut__DOT__greedy_out_01),6);
        bufp->chgCData(oldp+69,(vlSelf->tb_behavioral__DOT__dut__DOT__greedy_out_02),6);
        bufp->chgCData(oldp+70,(vlSelf->tb_behavioral__DOT__dut__DOT__greedy_out_05),6);
        bufp->chgCData(oldp+71,(vlSelf->tb_behavioral__DOT__dut__DOT__greedy_out_10),6);
        bufp->chgCData(oldp+72,(vlSelf->tb_behavioral__DOT__dut__DOT__greedy_next_01),6);
        bufp->chgCData(oldp+73,(vlSelf->tb_behavioral__DOT__dut__DOT__greedy_next_02),6);
        bufp->chgCData(oldp+74,(vlSelf->tb_behavioral__DOT__dut__DOT__greedy_next_05),6);
        bufp->chgCData(oldp+75,(vlSelf->tb_behavioral__DOT__dut__DOT__greedy_next_10),6);
        bufp->chgCData(oldp+76,(vlSelf->tb_behavioral__DOT__dut__DOT__greedy_returned),6);
        bufp->chgSData(oldp+77,(vlSelf->tb_behavioral__DOT__dut__DOT__init_value),10);
        bufp->chgCData(oldp+78,(vlSelf->tb_behavioral__DOT__dut__DOT__greedy_return__Vstatic__remain),6);
        bufp->chgCData(oldp+79,(vlSelf->tb_behavioral__DOT__dut__DOT__greedy_return__Vstatic__take),6);
    }
    bufp->chgBit(oldp+80,(vlSelf->tb_behavioral__DOT__clk));
    bufp->chgIData(oldp+81,(vlSelf->tb_behavioral__DOT__report_fd),32);
}

void Vtb_behavioral___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_behavioral___024root__trace_cleanup\n"); );
    // Init
    Vtb_behavioral___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_behavioral___024root*>(voidSelf);
    Vtb_behavioral__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
}
