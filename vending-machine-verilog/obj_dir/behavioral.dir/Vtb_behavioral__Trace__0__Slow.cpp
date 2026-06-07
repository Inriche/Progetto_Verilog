// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtb_behavioral__Syms.h"


VL_ATTR_COLD void Vtb_behavioral___024root__trace_init_sub__TOP__0(Vtb_behavioral___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_behavioral__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_behavioral___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushPrefix("tb_behavioral", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+81,0,"clk",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2,0,"coin",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+3,0,"selezione",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+4,0,"conferma",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+5,0,"annulla",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+42,0,"credito",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBit(c+43,0,"prodotto1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+44,0,"prodotto2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+45,0,"prodotto3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+46,0,"prodotto4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+47,0,"errore",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+48,0,"resto",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+49,0,"disponibile",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+50,0,"coin_01",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+51,0,"coin_02",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+52,0,"coin_05",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+53,0,"coin_10",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+82,0,"report_fd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declArray(c+6,0,"current_test_name",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1023,0);
    tracep->declBus(c+38,0,"last_coin",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+39,0,"last_selezione",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+40,0,"last_conferma",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+41,0,"last_annulla",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("dut", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+81,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2,0,"coin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+3,0,"selezione",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+4,0,"conferma",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+5,0,"annulla",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+42,0,"credito",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBit(c+43,0,"prodotto1",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+44,0,"prodotto2",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+45,0,"prodotto3",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+46,0,"prodotto4",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+47,0,"errore",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+48,0,"resto",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+49,0,"disponibile",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+50,0,"coin_01",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+51,0,"coin_02",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+52,0,"coin_05",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+53,0,"coin_10",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+83,0,"S_INIT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+84,0,"S_IDLE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+85,0,"S_OPERATIVA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+86,0,"S_EROGAZIONE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+54,0,"stato",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+55,0,"init_counter",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+56,0,"qty_p1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+57,0,"qty_p2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+58,0,"qty_p3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+59,0,"qty_p4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+60,0,"price_p1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+61,0,"price_p2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+62,0,"price_p3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+63,0,"price_p4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+64,0,"qty_c01",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+65,0,"qty_c02",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+66,0,"qty_c05",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+67,0,"qty_c10",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+68,0,"current_price",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+69,0,"greedy_out_01",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+70,0,"greedy_out_02",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+71,0,"greedy_out_05",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+72,0,"greedy_out_10",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+73,0,"greedy_next_01",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+74,0,"greedy_next_02",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+75,0,"greedy_next_05",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+76,0,"greedy_next_10",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+77,0,"greedy_returned",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+78,0,"init_value",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+79,0,"greedy_return__Vstatic__remain",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+80,0,"greedy_return__Vstatic__take",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Vtb_behavioral___024root__trace_init_top(Vtb_behavioral___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_behavioral__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_behavioral___024root__trace_init_top\n"); );
    // Body
    Vtb_behavioral___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vtb_behavioral___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vtb_behavioral___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtb_behavioral___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtb_behavioral___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vtb_behavioral___024root__trace_register(Vtb_behavioral___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_behavioral__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_behavioral___024root__trace_register\n"); );
    // Body
    tracep->addConstCb(&Vtb_behavioral___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&Vtb_behavioral___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&Vtb_behavioral___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&Vtb_behavioral___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vtb_behavioral___024root__trace_const_0_sub_0(Vtb_behavioral___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtb_behavioral___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_behavioral___024root__trace_const_0\n"); );
    // Init
    Vtb_behavioral___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_behavioral___024root*>(voidSelf);
    Vtb_behavioral__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtb_behavioral___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtb_behavioral___024root__trace_const_0_sub_0(Vtb_behavioral___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_behavioral__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_behavioral___024root__trace_const_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullCData(oldp+83,(0U),2);
    bufp->fullCData(oldp+84,(1U),2);
    bufp->fullCData(oldp+85,(2U),2);
    bufp->fullCData(oldp+86,(3U),2);
}

VL_ATTR_COLD void Vtb_behavioral___024root__trace_full_0_sub_0(Vtb_behavioral___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtb_behavioral___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_behavioral___024root__trace_full_0\n"); );
    // Init
    Vtb_behavioral___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_behavioral___024root*>(voidSelf);
    Vtb_behavioral__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtb_behavioral___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtb_behavioral___024root__trace_full_0_sub_0(Vtb_behavioral___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_behavioral__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_behavioral___024root__trace_full_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,(vlSelf->tb_behavioral__DOT__rst));
    bufp->fullCData(oldp+2,(vlSelf->tb_behavioral__DOT__coin),3);
    bufp->fullCData(oldp+3,(vlSelf->tb_behavioral__DOT__selezione),3);
    bufp->fullBit(oldp+4,(vlSelf->tb_behavioral__DOT__conferma));
    bufp->fullBit(oldp+5,(vlSelf->tb_behavioral__DOT__annulla));
    bufp->fullWData(oldp+6,(vlSelf->tb_behavioral__DOT__current_test_name),1024);
    bufp->fullCData(oldp+38,(vlSelf->tb_behavioral__DOT__last_coin),3);
    bufp->fullCData(oldp+39,(vlSelf->tb_behavioral__DOT__last_selezione),3);
    bufp->fullBit(oldp+40,(vlSelf->tb_behavioral__DOT__last_conferma));
    bufp->fullBit(oldp+41,(vlSelf->tb_behavioral__DOT__last_annulla));
    bufp->fullCData(oldp+42,(vlSelf->tb_behavioral__DOT__credito),6);
    bufp->fullBit(oldp+43,(vlSelf->tb_behavioral__DOT__prodotto1));
    bufp->fullBit(oldp+44,(vlSelf->tb_behavioral__DOT__prodotto2));
    bufp->fullBit(oldp+45,(vlSelf->tb_behavioral__DOT__prodotto3));
    bufp->fullBit(oldp+46,(vlSelf->tb_behavioral__DOT__prodotto4));
    bufp->fullCData(oldp+47,(vlSelf->tb_behavioral__DOT__errore),2);
    bufp->fullCData(oldp+48,(vlSelf->tb_behavioral__DOT__resto),6);
    bufp->fullSData(oldp+49,(vlSelf->tb_behavioral__DOT__disponibile),10);
    bufp->fullCData(oldp+50,(vlSelf->tb_behavioral__DOT__coin_01),6);
    bufp->fullCData(oldp+51,(vlSelf->tb_behavioral__DOT__coin_02),6);
    bufp->fullCData(oldp+52,(vlSelf->tb_behavioral__DOT__coin_05),6);
    bufp->fullCData(oldp+53,(vlSelf->tb_behavioral__DOT__coin_10),6);
    bufp->fullCData(oldp+54,(vlSelf->tb_behavioral__DOT__dut__DOT__stato),2);
    bufp->fullCData(oldp+55,(vlSelf->tb_behavioral__DOT__dut__DOT__init_counter),4);
    bufp->fullCData(oldp+56,(vlSelf->tb_behavioral__DOT__dut__DOT__qty_p1),6);
    bufp->fullCData(oldp+57,(vlSelf->tb_behavioral__DOT__dut__DOT__qty_p2),6);
    bufp->fullCData(oldp+58,(vlSelf->tb_behavioral__DOT__dut__DOT__qty_p3),6);
    bufp->fullCData(oldp+59,(vlSelf->tb_behavioral__DOT__dut__DOT__qty_p4),6);
    bufp->fullCData(oldp+60,(vlSelf->tb_behavioral__DOT__dut__DOT__price_p1),6);
    bufp->fullCData(oldp+61,(vlSelf->tb_behavioral__DOT__dut__DOT__price_p2),6);
    bufp->fullCData(oldp+62,(vlSelf->tb_behavioral__DOT__dut__DOT__price_p3),6);
    bufp->fullCData(oldp+63,(vlSelf->tb_behavioral__DOT__dut__DOT__price_p4),6);
    bufp->fullCData(oldp+64,(vlSelf->tb_behavioral__DOT__dut__DOT__qty_c01),6);
    bufp->fullCData(oldp+65,(vlSelf->tb_behavioral__DOT__dut__DOT__qty_c02),6);
    bufp->fullCData(oldp+66,(vlSelf->tb_behavioral__DOT__dut__DOT__qty_c05),6);
    bufp->fullCData(oldp+67,(vlSelf->tb_behavioral__DOT__dut__DOT__qty_c10),6);
    bufp->fullCData(oldp+68,(vlSelf->tb_behavioral__DOT__dut__DOT__current_price),6);
    bufp->fullCData(oldp+69,(vlSelf->tb_behavioral__DOT__dut__DOT__greedy_out_01),6);
    bufp->fullCData(oldp+70,(vlSelf->tb_behavioral__DOT__dut__DOT__greedy_out_02),6);
    bufp->fullCData(oldp+71,(vlSelf->tb_behavioral__DOT__dut__DOT__greedy_out_05),6);
    bufp->fullCData(oldp+72,(vlSelf->tb_behavioral__DOT__dut__DOT__greedy_out_10),6);
    bufp->fullCData(oldp+73,(vlSelf->tb_behavioral__DOT__dut__DOT__greedy_next_01),6);
    bufp->fullCData(oldp+74,(vlSelf->tb_behavioral__DOT__dut__DOT__greedy_next_02),6);
    bufp->fullCData(oldp+75,(vlSelf->tb_behavioral__DOT__dut__DOT__greedy_next_05),6);
    bufp->fullCData(oldp+76,(vlSelf->tb_behavioral__DOT__dut__DOT__greedy_next_10),6);
    bufp->fullCData(oldp+77,(vlSelf->tb_behavioral__DOT__dut__DOT__greedy_returned),6);
    bufp->fullSData(oldp+78,(vlSelf->tb_behavioral__DOT__dut__DOT__init_value),10);
    bufp->fullCData(oldp+79,(vlSelf->tb_behavioral__DOT__dut__DOT__greedy_return__Vstatic__remain),6);
    bufp->fullCData(oldp+80,(vlSelf->tb_behavioral__DOT__dut__DOT__greedy_return__Vstatic__take),6);
    bufp->fullBit(oldp+81,(vlSelf->tb_behavioral__DOT__clk));
    bufp->fullIData(oldp+82,(vlSelf->tb_behavioral__DOT__report_fd),32);
}
