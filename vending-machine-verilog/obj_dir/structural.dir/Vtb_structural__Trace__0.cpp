// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtb_structural__Syms.h"


void Vtb_structural___024root__trace_chg_0_sub_0(Vtb_structural___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vtb_structural___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_structural___024root__trace_chg_0\n"); );
    // Init
    Vtb_structural___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_structural___024root*>(voidSelf);
    Vtb_structural__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vtb_structural___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vtb_structural___024root__trace_chg_0_sub_0(Vtb_structural___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_structural__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_structural___024root__trace_chg_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[2U]))) {
        bufp->chgBit(oldp+0,(vlSelf->tb_structural__DOT__rst));
        bufp->chgCData(oldp+1,(vlSelf->tb_structural__DOT__coin),3);
        bufp->chgCData(oldp+2,(vlSelf->tb_structural__DOT__selezione),3);
        bufp->chgBit(oldp+3,(vlSelf->tb_structural__DOT__conferma));
        bufp->chgBit(oldp+4,(vlSelf->tb_structural__DOT__annulla));
        bufp->chgIData(oldp+5,(vlSelf->tb_structural__DOT__report_fd),32);
        bufp->chgWData(oldp+6,(vlSelf->tb_structural__DOT__current_test_name),1024);
        bufp->chgCData(oldp+38,(vlSelf->tb_structural__DOT__last_coin),3);
        bufp->chgCData(oldp+39,(vlSelf->tb_structural__DOT__last_selezione),3);
        bufp->chgBit(oldp+40,(vlSelf->tb_structural__DOT__last_conferma));
        bufp->chgBit(oldp+41,(vlSelf->tb_structural__DOT__last_annulla));
        bufp->chgCData(oldp+42,((3U & (IData)(vlSelf->tb_structural__DOT__selezione))),2);
    }
    if (VL_UNLIKELY(((vlSelf->__Vm_traceActivity[3U] 
                      | vlSelf->__Vm_traceActivity[4U]) 
                     | vlSelf->__Vm_traceActivity[5U]))) {
        bufp->chgSData(oldp+43,((0x3ffU & ((IData)(vlSelf->tb_structural__DOT__dut__DOT__disponibile_q) 
                                           + VL_SHIFTL_III(10,10,32, (IData)(vlSelf->tb_structural__DOT__dut__DOT__cfg_value), 1U)))),10);
        bufp->chgSData(oldp+44,((0x3ffU & ((IData)(vlSelf->tb_structural__DOT__dut__DOT__disponibile_q) 
                                           + ((IData)(vlSelf->tb_structural__DOT__dut__DOT__cfg_value) 
                                              + VL_SHIFTL_III(10,10,32, (IData)(vlSelf->tb_structural__DOT__dut__DOT__cfg_value), 2U))))),10);
        bufp->chgSData(oldp+45,((0x3ffU & ((IData)(vlSelf->tb_structural__DOT__dut__DOT__disponibile_q) 
                                           + (VL_SHIFTL_III(10,10,32, (IData)(vlSelf->tb_structural__DOT__dut__DOT__cfg_value), 3U) 
                                              + VL_SHIFTL_III(10,10,32, (IData)(vlSelf->tb_structural__DOT__dut__DOT__cfg_value), 1U))))),10);
        bufp->chgSData(oldp+46,((0x3ffU & ((IData)(vlSelf->tb_structural__DOT__dut__DOT__disponibile_q) 
                                           + (IData)(vlSelf->tb_structural__DOT__dut__DOT__coin_value)))),10);
        bufp->chgCData(oldp+47,(((IData)(vlSelf->tb_structural__DOT__dut__DOT__init_price_p1)
                                  ? (IData)(vlSelf->tb_structural__DOT__dut__DOT__cfg_value)
                                  : (IData)(vlSelf->tb_structural__DOT__dut__DOT__price_p1_q))),6);
        bufp->chgCData(oldp+48,(((IData)(vlSelf->tb_structural__DOT__dut__DOT__init_price_p2)
                                  ? (IData)(vlSelf->tb_structural__DOT__dut__DOT__cfg_value)
                                  : (IData)(vlSelf->tb_structural__DOT__dut__DOT__price_p2_q))),6);
        bufp->chgCData(oldp+49,(((IData)(vlSelf->tb_structural__DOT__dut__DOT__init_price_p3)
                                  ? (IData)(vlSelf->tb_structural__DOT__dut__DOT__cfg_value)
                                  : (IData)(vlSelf->tb_structural__DOT__dut__DOT__price_p3_q))),6);
        bufp->chgCData(oldp+50,(((IData)(vlSelf->tb_structural__DOT__dut__DOT__init_price_p4)
                                  ? (IData)(vlSelf->tb_structural__DOT__dut__DOT__cfg_value)
                                  : (IData)(vlSelf->tb_structural__DOT__dut__DOT__price_p4_q))),6);
        bufp->chgCData(oldp+51,((0x3fU & ((IData)(vlSelf->tb_structural__DOT__dut__DOT__coin_value) 
                                          + (IData)(vlSelf->tb_structural__DOT__dut__DOT__credito_q)))),6);
    }
    if (VL_UNLIKELY((((vlSelf->__Vm_traceActivity[3U] 
                       | vlSelf->__Vm_traceActivity
                       [4U]) | vlSelf->__Vm_traceActivity
                      [5U]) | vlSelf->__Vm_traceActivity
                     [6U]))) {
        bufp->chgCData(oldp+52,((0x3fU & ((IData)(vlSelf->tb_structural__DOT__dut__DOT__init_qty_p1)
                                           ? (IData)(vlSelf->tb_structural__DOT__dut__DOT__cfg_value)
                                           : ((IData)(vlSelf->tb_structural__DOT__dut__DOT__qty_p1_q) 
                                              - (IData)(vlSelf->tb_structural__DOT__dut__DOT__do_p1))))),6);
        bufp->chgCData(oldp+53,((0x3fU & ((IData)(vlSelf->tb_structural__DOT__dut__DOT__init_qty_p2)
                                           ? (IData)(vlSelf->tb_structural__DOT__dut__DOT__cfg_value)
                                           : ((IData)(vlSelf->tb_structural__DOT__dut__DOT__qty_p2_q) 
                                              - (IData)(vlSelf->tb_structural__DOT__dut__DOT__do_p2))))),6);
        bufp->chgCData(oldp+54,((0x3fU & ((IData)(vlSelf->tb_structural__DOT__dut__DOT__init_qty_p3)
                                           ? (IData)(vlSelf->tb_structural__DOT__dut__DOT__cfg_value)
                                           : ((IData)(vlSelf->tb_structural__DOT__dut__DOT__qty_p3_q) 
                                              - (IData)(vlSelf->tb_structural__DOT__dut__DOT__do_p3))))),6);
        bufp->chgCData(oldp+55,((0x3fU & ((IData)(vlSelf->tb_structural__DOT__dut__DOT__init_qty_p4)
                                           ? (IData)(vlSelf->tb_structural__DOT__dut__DOT__cfg_value)
                                           : ((IData)(vlSelf->tb_structural__DOT__dut__DOT__qty_p4_q) 
                                              - (IData)(vlSelf->tb_structural__DOT__dut__DOT__do_p4))))),6);
        bufp->chgCData(oldp+56,((0x3fU & ((IData)(vlSelf->tb_structural__DOT__dut__DOT__init_c01)
                                           ? (IData)(vlSelf->tb_structural__DOT__dut__DOT__cfg_value)
                                           : ((IData)(vlSelf->tb_structural__DOT__dut__DOT__add_c01)
                                               ? ((IData)(1U) 
                                                  + (IData)(vlSelf->tb_structural__DOT__dut__DOT__qty_c01_q))
                                               : ((IData)(vlSelf->tb_structural__DOT__dut__DOT__payout_active)
                                                   ? (IData)(vlSelf->tb_structural__DOT__dut__DOT__qc01_next)
                                                   : (IData)(vlSelf->tb_structural__DOT__dut__DOT__qty_c01_q)))))),6);
        bufp->chgCData(oldp+57,((0x3fU & ((IData)(vlSelf->tb_structural__DOT__dut__DOT__init_c02)
                                           ? (IData)(vlSelf->tb_structural__DOT__dut__DOT__cfg_value)
                                           : ((IData)(vlSelf->tb_structural__DOT__dut__DOT__add_c02)
                                               ? ((IData)(1U) 
                                                  + (IData)(vlSelf->tb_structural__DOT__dut__DOT__qty_c02_q))
                                               : ((IData)(vlSelf->tb_structural__DOT__dut__DOT__payout_active)
                                                   ? (IData)(vlSelf->tb_structural__DOT__dut__DOT__qc02_next)
                                                   : (IData)(vlSelf->tb_structural__DOT__dut__DOT__qty_c02_q)))))),6);
        bufp->chgCData(oldp+58,((0x3fU & ((IData)(vlSelf->tb_structural__DOT__dut__DOT__init_c05)
                                           ? (IData)(vlSelf->tb_structural__DOT__dut__DOT__cfg_value)
                                           : ((IData)(vlSelf->tb_structural__DOT__dut__DOT__add_c05)
                                               ? ((IData)(1U) 
                                                  + (IData)(vlSelf->tb_structural__DOT__dut__DOT__qty_c05_q))
                                               : ((IData)(vlSelf->tb_structural__DOT__dut__DOT__payout_active)
                                                   ? (IData)(vlSelf->tb_structural__DOT__dut__DOT__qc05_next)
                                                   : (IData)(vlSelf->tb_structural__DOT__dut__DOT__qty_c05_q)))))),6);
        bufp->chgCData(oldp+59,((0x3fU & ((IData)(vlSelf->tb_structural__DOT__dut__DOT__init_c10)
                                           ? (IData)(vlSelf->tb_structural__DOT__dut__DOT__cfg_value)
                                           : ((IData)(vlSelf->tb_structural__DOT__dut__DOT__add_c10)
                                               ? ((IData)(1U) 
                                                  + (IData)(vlSelf->tb_structural__DOT__dut__DOT__qty_c10_q))
                                               : ((IData)(vlSelf->tb_structural__DOT__dut__DOT__payout_active)
                                                   ? (IData)(vlSelf->tb_structural__DOT__dut__DOT__qc10_next)
                                                   : (IData)(vlSelf->tb_structural__DOT__dut__DOT__qty_c10_q)))))),6);
        bufp->chgCData(oldp+60,(((IData)(vlSelf->tb_structural__DOT__dut__DOT__mode_init)
                                  ? 0U : ((IData)(vlSelf->tb_structural__DOT__dut__DOT__payout_active)
                                           ? 0U : (0x3fU 
                                                   & ((IData)(vlSelf->tb_structural__DOT__dut__DOT__do_add_coin)
                                                       ? 
                                                      ((IData)(vlSelf->tb_structural__DOT__dut__DOT__coin_value) 
                                                       + (IData)(vlSelf->tb_structural__DOT__dut__DOT__credito_q))
                                                       : (IData)(vlSelf->tb_structural__DOT__dut__DOT__credito_q)))))),6);
        bufp->chgSData(oldp+61,((0x3ffU & ((IData)(vlSelf->tb_structural__DOT__dut__DOT__init_c01)
                                            ? (IData)(vlSelf->tb_structural__DOT__dut__DOT__cfg_value)
                                            : ((IData)(vlSelf->tb_structural__DOT__dut__DOT__init_c02)
                                                ? ((IData)(vlSelf->tb_structural__DOT__dut__DOT__disponibile_q) 
                                                   + 
                                                   VL_SHIFTL_III(10,10,32, (IData)(vlSelf->tb_structural__DOT__dut__DOT__cfg_value), 1U))
                                                : ((IData)(vlSelf->tb_structural__DOT__dut__DOT__init_c05)
                                                    ? 
                                                   ((IData)(vlSelf->tb_structural__DOT__dut__DOT__disponibile_q) 
                                                    + 
                                                    ((IData)(vlSelf->tb_structural__DOT__dut__DOT__cfg_value) 
                                                     + 
                                                     VL_SHIFTL_III(10,10,32, (IData)(vlSelf->tb_structural__DOT__dut__DOT__cfg_value), 2U)))
                                                    : 
                                                   ((IData)(vlSelf->tb_structural__DOT__dut__DOT__init_c10)
                                                     ? 
                                                    ((IData)(vlSelf->tb_structural__DOT__dut__DOT__disponibile_q) 
                                                     + 
                                                     (VL_SHIFTL_III(10,10,32, (IData)(vlSelf->tb_structural__DOT__dut__DOT__cfg_value), 3U) 
                                                      + 
                                                      VL_SHIFTL_III(10,10,32, (IData)(vlSelf->tb_structural__DOT__dut__DOT__cfg_value), 1U)))
                                                     : 
                                                    ((IData)(vlSelf->tb_structural__DOT__dut__DOT__do_add_coin)
                                                      ? 
                                                     ((IData)(vlSelf->tb_structural__DOT__dut__DOT__disponibile_q) 
                                                      + (IData)(vlSelf->tb_structural__DOT__dut__DOT__coin_value))
                                                      : 
                                                     ((IData)(vlSelf->tb_structural__DOT__dut__DOT__payout_active)
                                                       ? 
                                                      (((IData)(vlSelf->tb_structural__DOT__dut__DOT__payout_returned) 
                                                        > (IData)(vlSelf->tb_structural__DOT__dut__DOT__disponibile_q))
                                                        ? 0U
                                                        : 
                                                       ((IData)(vlSelf->tb_structural__DOT__dut__DOT__disponibile_q) 
                                                        - (IData)(vlSelf->tb_structural__DOT__dut__DOT__payout_returned)))
                                                       : (IData)(vlSelf->tb_structural__DOT__dut__DOT__disponibile_q))))))))),10);
        bufp->chgCData(oldp+62,(((IData)(vlSelf->tb_structural__DOT__dut__DOT__do_err)
                                  ? ((IData)(vlSelf->tb_structural__DOT__dut__DOT__valid_sel)
                                      ? (((IData)(vlSelf->tb_structural__DOT__dut__DOT__stock_empty) 
                                          << 1U) | (IData)(vlSelf->tb_structural__DOT__dut__DOT__credito_insuff))
                                      : 2U) : ((IData)(vlSelf->tb_structural__DOT__dut__DOT__clear_outputs)
                                                ? 0U
                                                : (IData)(vlSelf->tb_structural__DOT__dut__DOT__errore_q)))),2);
        bufp->chgCData(oldp+63,((0x3fU & ((IData)(vlSelf->tb_structural__DOT__dut__DOT__payout_active)
                                           ? (IData)(vlSelf->tb_structural__DOT__dut__DOT__payout_returned)
                                           : ((IData)(vlSelf->tb_structural__DOT__dut__DOT__do_err)
                                               ? (((IData)(vlSelf->tb_structural__DOT__dut__DOT__valid_sel) 
                                                   & (IData)(vlSelf->tb_structural__DOT__dut__DOT__credito_insuff))
                                                   ? (IData)(vlSelf->tb_structural__DOT__dut__DOT__sel_price)
                                                   : 0U)
                                               : ((IData)(vlSelf->tb_structural__DOT__dut__DOT__clear_outputs)
                                                   ? 0U
                                                   : (IData)(vlSelf->tb_structural__DOT__dut__DOT__resto_q)))))),6);
    }
    if (VL_UNLIKELY(((vlSelf->__Vm_traceActivity[3U] 
                      | vlSelf->__Vm_traceActivity[4U]) 
                     | vlSelf->__Vm_traceActivity[6U]))) {
        bufp->chgCData(oldp+64,((0x3fU & ((IData)(vlSelf->tb_structural__DOT__dut__DOT__credito_q) 
                                          - (IData)(vlSelf->tb_structural__DOT__dut__DOT__sel_price)))),6);
        bufp->chgCData(oldp+65,((0x3fU & ((IData)(vlSelf->tb_structural__DOT__dut__DOT__do_ok)
                                           ? ((IData)(vlSelf->tb_structural__DOT__dut__DOT__credito_q) 
                                              - (IData)(vlSelf->tb_structural__DOT__dut__DOT__sel_price))
                                           : (IData)(vlSelf->tb_structural__DOT__dut__DOT__credito_q)))),6);
        bufp->chgSData(oldp+66,((((IData)(vlSelf->tb_structural__DOT__dut__DOT__payout_returned) 
                                  > (IData)(vlSelf->tb_structural__DOT__dut__DOT__disponibile_q))
                                  ? 0U : (0x3ffU & 
                                          ((IData)(vlSelf->tb_structural__DOT__dut__DOT__disponibile_q) 
                                           - (IData)(vlSelf->tb_structural__DOT__dut__DOT__payout_returned))))),10);
        bufp->chgCData(oldp+67,(((IData)(vlSelf->tb_structural__DOT__dut__DOT__do_ok)
                                  ? (IData)(vlSelf->tb_structural__DOT__dut__DOT__sel_price)
                                  : (IData)(vlSelf->tb_structural__DOT__dut__DOT__current_price_q))),6);
        bufp->chgBit(oldp+68,(((~ (IData)(vlSelf->tb_structural__DOT__dut__DOT__clear_outputs)) 
                               & ((IData)(vlSelf->tb_structural__DOT__dut__DOT__do_ok)
                                   ? (IData)(vlSelf->tb_structural__DOT__dut__DOT__c_prod1)
                                   : (IData)(vlSelf->tb_structural__DOT__dut__DOT__prod1_q)))));
        bufp->chgBit(oldp+69,(((~ (IData)(vlSelf->tb_structural__DOT__dut__DOT__clear_outputs)) 
                               & ((IData)(vlSelf->tb_structural__DOT__dut__DOT__do_ok)
                                   ? (IData)(vlSelf->tb_structural__DOT__dut__DOT__c_prod2)
                                   : (IData)(vlSelf->tb_structural__DOT__dut__DOT__prod2_q)))));
        bufp->chgBit(oldp+70,(((~ (IData)(vlSelf->tb_structural__DOT__dut__DOT__clear_outputs)) 
                               & ((IData)(vlSelf->tb_structural__DOT__dut__DOT__do_ok)
                                   ? (IData)(vlSelf->tb_structural__DOT__dut__DOT__c_prod3)
                                   : (IData)(vlSelf->tb_structural__DOT__dut__DOT__prod3_q)))));
        bufp->chgBit(oldp+71,(((~ (IData)(vlSelf->tb_structural__DOT__dut__DOT__clear_outputs)) 
                               & ((IData)(vlSelf->tb_structural__DOT__dut__DOT__do_ok)
                                   ? (IData)(vlSelf->tb_structural__DOT__dut__DOT__c_prod4)
                                   : (IData)(vlSelf->tb_structural__DOT__dut__DOT__prod4_q)))));
        bufp->chgCData(oldp+72,(((IData)(vlSelf->tb_structural__DOT__dut__DOT__payout_active)
                                  ? (IData)(vlSelf->tb_structural__DOT__dut__DOT__c01_calc)
                                  : ((IData)(vlSelf->tb_structural__DOT__dut__DOT__clear_outputs)
                                      ? 0U : (IData)(vlSelf->tb_structural__DOT__dut__DOT__coin01_q)))),6);
        bufp->chgCData(oldp+73,(((IData)(vlSelf->tb_structural__DOT__dut__DOT__payout_active)
                                  ? (IData)(vlSelf->tb_structural__DOT__dut__DOT__c02_calc)
                                  : ((IData)(vlSelf->tb_structural__DOT__dut__DOT__clear_outputs)
                                      ? 0U : (IData)(vlSelf->tb_structural__DOT__dut__DOT__coin02_q)))),6);
        bufp->chgCData(oldp+74,(((IData)(vlSelf->tb_structural__DOT__dut__DOT__payout_active)
                                  ? (IData)(vlSelf->tb_structural__DOT__dut__DOT__c05_calc)
                                  : ((IData)(vlSelf->tb_structural__DOT__dut__DOT__clear_outputs)
                                      ? 0U : (IData)(vlSelf->tb_structural__DOT__dut__DOT__coin05_q)))),6);
        bufp->chgCData(oldp+75,(((IData)(vlSelf->tb_structural__DOT__dut__DOT__payout_active)
                                  ? (IData)(vlSelf->tb_structural__DOT__dut__DOT__c10_calc)
                                  : ((IData)(vlSelf->tb_structural__DOT__dut__DOT__clear_outputs)
                                      ? 0U : (IData)(vlSelf->tb_structural__DOT__dut__DOT__coin10_q)))),6);
        bufp->chgBit(oldp+76,(((IData)(vlSelf->tb_structural__DOT__dut__DOT__init_qty_p1) 
                               | (IData)(vlSelf->tb_structural__DOT__dut__DOT__do_p1))));
        bufp->chgBit(oldp+77,(((IData)(vlSelf->tb_structural__DOT__dut__DOT__init_qty_p2) 
                               | (IData)(vlSelf->tb_structural__DOT__dut__DOT__do_p2))));
        bufp->chgBit(oldp+78,(((IData)(vlSelf->tb_structural__DOT__dut__DOT__init_qty_p3) 
                               | (IData)(vlSelf->tb_structural__DOT__dut__DOT__do_p3))));
        bufp->chgBit(oldp+79,(((IData)(vlSelf->tb_structural__DOT__dut__DOT__init_qty_p4) 
                               | (IData)(vlSelf->tb_structural__DOT__dut__DOT__do_p4))));
        bufp->chgBit(oldp+80,(((IData)(vlSelf->tb_structural__DOT__dut__DOT__init_c01) 
                               | ((IData)(vlSelf->tb_structural__DOT__dut__DOT__add_c01) 
                                  | (IData)(vlSelf->tb_structural__DOT__dut__DOT__payout_active)))));
        bufp->chgBit(oldp+81,(((IData)(vlSelf->tb_structural__DOT__dut__DOT__init_c02) 
                               | ((IData)(vlSelf->tb_structural__DOT__dut__DOT__add_c02) 
                                  | (IData)(vlSelf->tb_structural__DOT__dut__DOT__payout_active)))));
        bufp->chgBit(oldp+82,(((IData)(vlSelf->tb_structural__DOT__dut__DOT__init_c05) 
                               | ((IData)(vlSelf->tb_structural__DOT__dut__DOT__add_c05) 
                                  | (IData)(vlSelf->tb_structural__DOT__dut__DOT__payout_active)))));
        bufp->chgBit(oldp+83,(((IData)(vlSelf->tb_structural__DOT__dut__DOT__init_c10) 
                               | ((IData)(vlSelf->tb_structural__DOT__dut__DOT__add_c10) 
                                  | (IData)(vlSelf->tb_structural__DOT__dut__DOT__payout_active)))));
        bufp->chgBit(oldp+84,(((IData)(vlSelf->tb_structural__DOT__dut__DOT__mode_init) 
                               | (IData)(vlSelf->tb_structural__DOT__dut__DOT____VdfgTmp_h4b786e47__0))));
        bufp->chgBit(oldp+85,(((IData)(vlSelf->tb_structural__DOT__dut__DOT__init_c01) 
                               | ((IData)(vlSelf->tb_structural__DOT__dut__DOT__init_c02) 
                                  | ((IData)(vlSelf->tb_structural__DOT__dut__DOT__init_c05) 
                                     | ((IData)(vlSelf->tb_structural__DOT__dut__DOT__init_c10) 
                                        | (IData)(vlSelf->tb_structural__DOT__dut__DOT____VdfgTmp_h4b786e47__0)))))));
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[3U] 
                     | vlSelf->__Vm_traceActivity[5U]))) {
        bufp->chgBit(oldp+86,(vlSelf->tb_structural__DOT__dut__DOT__valid_sel));
        bufp->chgCData(oldp+87,(vlSelf->tb_structural__DOT__dut__DOT__coin_value),6);
        bufp->chgCData(oldp+88,(vlSelf->tb_structural__DOT__dut__DOT__cfg_value),6);
        bufp->chgSData(oldp+89,(vlSelf->tb_structural__DOT__dut__DOT__cfg_value),10);
        bufp->chgSData(oldp+90,(vlSelf->tb_structural__DOT__dut__DOT__coin_value),10);
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[3U] 
                     | vlSelf->__Vm_traceActivity[6U]))) {
        bufp->chgBit(oldp+91,(vlSelf->tb_structural__DOT__dut__DOT__do_add_coin));
        bufp->chgBit(oldp+92,(vlSelf->tb_structural__DOT__dut__DOT__do_cancel));
        bufp->chgBit(oldp+93,(vlSelf->tb_structural__DOT__dut__DOT__do_err));
        bufp->chgBit(oldp+94,(vlSelf->tb_structural__DOT__dut__DOT__do_ok));
        bufp->chgBit(oldp+95,(vlSelf->tb_structural__DOT__dut__DOT__c_prod1));
        bufp->chgBit(oldp+96,(vlSelf->tb_structural__DOT__dut__DOT__c_prod2));
        bufp->chgBit(oldp+97,(vlSelf->tb_structural__DOT__dut__DOT__c_prod3));
        bufp->chgBit(oldp+98,(vlSelf->tb_structural__DOT__dut__DOT__c_prod4));
        bufp->chgCData(oldp+99,(vlSelf->tb_structural__DOT__dut__DOT__sel_price),6);
        bufp->chgBit(oldp+100,(vlSelf->tb_structural__DOT__dut__DOT__credito_ge_selprice));
        bufp->chgBit(oldp+101,(vlSelf->tb_structural__DOT__dut__DOT__credito_insuff));
        bufp->chgBit(oldp+102,(vlSelf->tb_structural__DOT__dut__DOT__stock_empty));
        bufp->chgBit(oldp+103,(vlSelf->tb_structural__DOT__dut__DOT__payout_active));
        bufp->chgCData(oldp+104,(vlSelf->tb_structural__DOT__dut__DOT__c10_calc),6);
        bufp->chgCData(oldp+105,(vlSelf->tb_structural__DOT__dut__DOT__c05_calc),6);
        bufp->chgCData(oldp+106,(vlSelf->tb_structural__DOT__dut__DOT__c02_calc),6);
        bufp->chgCData(oldp+107,(vlSelf->tb_structural__DOT__dut__DOT__c01_calc),6);
        bufp->chgCData(oldp+108,(vlSelf->tb_structural__DOT__dut__DOT__qc10_next),6);
        bufp->chgCData(oldp+109,(vlSelf->tb_structural__DOT__dut__DOT__qc05_next),6);
        bufp->chgCData(oldp+110,(vlSelf->tb_structural__DOT__dut__DOT__qc02_next),6);
        bufp->chgCData(oldp+111,(vlSelf->tb_structural__DOT__dut__DOT__qc01_next),6);
        bufp->chgSData(oldp+112,(vlSelf->tb_structural__DOT__dut__DOT__payout_returned),10);
        bufp->chgBit(oldp+113,(vlSelf->tb_structural__DOT__dut__DOT__do_p1));
        bufp->chgBit(oldp+114,(vlSelf->tb_structural__DOT__dut__DOT__do_p2));
        bufp->chgBit(oldp+115,(vlSelf->tb_structural__DOT__dut__DOT__do_p3));
        bufp->chgBit(oldp+116,(vlSelf->tb_structural__DOT__dut__DOT__do_p4));
        bufp->chgBit(oldp+117,(vlSelf->tb_structural__DOT__dut__DOT__add_c01));
        bufp->chgBit(oldp+118,(vlSelf->tb_structural__DOT__dut__DOT__add_c02));
        bufp->chgBit(oldp+119,(vlSelf->tb_structural__DOT__dut__DOT__add_c05));
        bufp->chgBit(oldp+120,(vlSelf->tb_structural__DOT__dut__DOT__add_c10));
        bufp->chgBit(oldp+121,(vlSelf->tb_structural__DOT__dut__DOT__we_errore));
        bufp->chgBit(oldp+122,(((IData)(vlSelf->tb_structural__DOT__dut__DOT__we_errore) 
                                | (IData)(vlSelf->tb_structural__DOT__dut__DOT__payout_active))));
        bufp->chgBit(oldp+123,(vlSelf->tb_structural__DOT__dut__DOT__we_prod));
        bufp->chgBit(oldp+124,(vlSelf->tb_structural__DOT__dut__DOT__we_coin_out));
        bufp->chgBit(oldp+125,((1U & (~ (IData)(vlSelf->tb_structural__DOT__dut__DOT__stock_empty)))));
        bufp->chgCData(oldp+126,(vlSelf->tb_structural__DOT__dut__DOT__fsm__DOT__next_stato),2);
        bufp->chgCData(oldp+127,(vlSelf->tb_structural__DOT__dut__DOT__greedy_inst__DOT__calc_resto),6);
        bufp->chgCData(oldp+128,(vlSelf->tb_structural__DOT__dut__DOT__greedy_inst__DOT__calc_qty),6);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[4U])) {
        bufp->chgCData(oldp+129,(vlSelf->tb_structural__DOT__dut__DOT__credito_q),6);
        bufp->chgBit(oldp+130,(vlSelf->tb_structural__DOT__dut__DOT__prod1_q));
        bufp->chgBit(oldp+131,(vlSelf->tb_structural__DOT__dut__DOT__prod2_q));
        bufp->chgBit(oldp+132,(vlSelf->tb_structural__DOT__dut__DOT__prod3_q));
        bufp->chgBit(oldp+133,(vlSelf->tb_structural__DOT__dut__DOT__prod4_q));
        bufp->chgCData(oldp+134,(vlSelf->tb_structural__DOT__dut__DOT__errore_q),2);
        bufp->chgCData(oldp+135,(vlSelf->tb_structural__DOT__dut__DOT__resto_q),6);
        bufp->chgSData(oldp+136,(vlSelf->tb_structural__DOT__dut__DOT__disponibile_q),10);
        bufp->chgCData(oldp+137,(vlSelf->tb_structural__DOT__dut__DOT__coin01_q),6);
        bufp->chgCData(oldp+138,(vlSelf->tb_structural__DOT__dut__DOT__coin02_q),6);
        bufp->chgCData(oldp+139,(vlSelf->tb_structural__DOT__dut__DOT__coin05_q),6);
        bufp->chgCData(oldp+140,(vlSelf->tb_structural__DOT__dut__DOT__coin10_q),6);
        bufp->chgBit(oldp+141,(vlSelf->tb_structural__DOT__dut__DOT__mode_init));
        bufp->chgCData(oldp+142,(vlSelf->tb_structural__DOT__dut__DOT__init_counter_w),4);
        bufp->chgBit(oldp+143,(vlSelf->tb_structural__DOT__dut__DOT__clear_outputs));
        bufp->chgBit(oldp+144,(vlSelf->tb_structural__DOT__dut__DOT__do_erogazione));
        bufp->chgCData(oldp+145,(vlSelf->tb_structural__DOT__dut__DOT__sel_latched),3);
        bufp->chgCData(oldp+146,(vlSelf->tb_structural__DOT__dut__DOT__qty_p1_q),6);
        bufp->chgCData(oldp+147,(vlSelf->tb_structural__DOT__dut__DOT__qty_p2_q),6);
        bufp->chgCData(oldp+148,(vlSelf->tb_structural__DOT__dut__DOT__qty_p3_q),6);
        bufp->chgCData(oldp+149,(vlSelf->tb_structural__DOT__dut__DOT__qty_p4_q),6);
        bufp->chgCData(oldp+150,(vlSelf->tb_structural__DOT__dut__DOT__price_p1_q),6);
        bufp->chgCData(oldp+151,(vlSelf->tb_structural__DOT__dut__DOT__price_p2_q),6);
        bufp->chgCData(oldp+152,(vlSelf->tb_structural__DOT__dut__DOT__price_p3_q),6);
        bufp->chgCData(oldp+153,(vlSelf->tb_structural__DOT__dut__DOT__price_p4_q),6);
        bufp->chgCData(oldp+154,(vlSelf->tb_structural__DOT__dut__DOT__qty_c01_q),6);
        bufp->chgCData(oldp+155,(vlSelf->tb_structural__DOT__dut__DOT__qty_c02_q),6);
        bufp->chgCData(oldp+156,(vlSelf->tb_structural__DOT__dut__DOT__qty_c05_q),6);
        bufp->chgCData(oldp+157,(vlSelf->tb_structural__DOT__dut__DOT__qty_c10_q),6);
        bufp->chgCData(oldp+158,(vlSelf->tb_structural__DOT__dut__DOT__current_price_q),6);
        bufp->chgBit(oldp+159,(vlSelf->tb_structural__DOT__dut__DOT__init_qty_p1));
        bufp->chgBit(oldp+160,(vlSelf->tb_structural__DOT__dut__DOT__init_price_p1));
        bufp->chgBit(oldp+161,(vlSelf->tb_structural__DOT__dut__DOT__init_qty_p2));
        bufp->chgBit(oldp+162,(vlSelf->tb_structural__DOT__dut__DOT__init_price_p2));
        bufp->chgBit(oldp+163,(vlSelf->tb_structural__DOT__dut__DOT__init_qty_p3));
        bufp->chgBit(oldp+164,(vlSelf->tb_structural__DOT__dut__DOT__init_price_p3));
        bufp->chgBit(oldp+165,(vlSelf->tb_structural__DOT__dut__DOT__init_qty_p4));
        bufp->chgBit(oldp+166,(vlSelf->tb_structural__DOT__dut__DOT__init_price_p4));
        bufp->chgBit(oldp+167,(vlSelf->tb_structural__DOT__dut__DOT__init_c01));
        bufp->chgBit(oldp+168,(vlSelf->tb_structural__DOT__dut__DOT__init_c02));
        bufp->chgBit(oldp+169,(vlSelf->tb_structural__DOT__dut__DOT__init_c05));
        bufp->chgBit(oldp+170,(vlSelf->tb_structural__DOT__dut__DOT__init_c10));
        bufp->chgCData(oldp+171,((0x3fU & ((IData)(vlSelf->tb_structural__DOT__dut__DOT__qty_p1_q) 
                                           - (IData)(1U)))),6);
        bufp->chgCData(oldp+172,((0x3fU & ((IData)(vlSelf->tb_structural__DOT__dut__DOT__qty_p2_q) 
                                           - (IData)(1U)))),6);
        bufp->chgCData(oldp+173,((0x3fU & ((IData)(vlSelf->tb_structural__DOT__dut__DOT__qty_p3_q) 
                                           - (IData)(1U)))),6);
        bufp->chgCData(oldp+174,((0x3fU & ((IData)(vlSelf->tb_structural__DOT__dut__DOT__qty_p4_q) 
                                           - (IData)(1U)))),6);
        bufp->chgCData(oldp+175,((0x3fU & ((IData)(1U) 
                                           + (IData)(vlSelf->tb_structural__DOT__dut__DOT__qty_c01_q)))),6);
        bufp->chgCData(oldp+176,((0x3fU & ((IData)(1U) 
                                           + (IData)(vlSelf->tb_structural__DOT__dut__DOT__qty_c02_q)))),6);
        bufp->chgCData(oldp+177,((0x3fU & ((IData)(1U) 
                                           + (IData)(vlSelf->tb_structural__DOT__dut__DOT__qty_c05_q)))),6);
        bufp->chgCData(oldp+178,((0x3fU & ((IData)(1U) 
                                           + (IData)(vlSelf->tb_structural__DOT__dut__DOT__qty_c10_q)))),6);
        bufp->chgCData(oldp+179,(vlSelf->tb_structural__DOT__dut__DOT__fsm__DOT__stato),2);
    }
    bufp->chgBit(oldp+180,(vlSelf->tb_structural__DOT__clk));
    bufp->chgCData(oldp+181,(((2U & (IData)(vlSelf->tb_structural__DOT__selezione))
                               ? ((1U & (IData)(vlSelf->tb_structural__DOT__selezione))
                                   ? (IData)(vlSelf->tb_structural__DOT__dut__DOT__qty_p4_q)
                                   : (IData)(vlSelf->tb_structural__DOT__dut__DOT__qty_p3_q))
                               : ((1U & (IData)(vlSelf->tb_structural__DOT__selezione))
                                   ? (IData)(vlSelf->tb_structural__DOT__dut__DOT__qty_p2_q)
                                   : (IData)(vlSelf->tb_structural__DOT__dut__DOT__qty_p1_q)))),6);
    bufp->chgCData(oldp+182,(((IData)(vlSelf->tb_structural__DOT__dut__DOT__valid_sel)
                               ? (((IData)(vlSelf->tb_structural__DOT__dut__DOT__stock_empty) 
                                   << 1U) | (IData)(vlSelf->tb_structural__DOT__dut__DOT__credito_insuff))
                               : 2U)),2);
    bufp->chgCData(oldp+183,((((IData)(vlSelf->tb_structural__DOT__dut__DOT__valid_sel) 
                               & (IData)(vlSelf->tb_structural__DOT__dut__DOT__credito_insuff))
                               ? (IData)(vlSelf->tb_structural__DOT__dut__DOT__sel_price)
                               : 0U)),6);
}

void Vtb_structural___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_structural___024root__trace_cleanup\n"); );
    // Init
    Vtb_structural___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_structural___024root*>(voidSelf);
    Vtb_structural__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[4U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[5U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[6U] = 0U;
}
