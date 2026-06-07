// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_structural.h for the primary calling header

#include "Vtb_structural__pch.h"
#include "Vtb_structural__Syms.h"
#include "Vtb_structural___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_structural___024root___dump_triggers__act(Vtb_structural___024root* vlSelf);
#endif  // VL_DEBUG

void Vtb_structural___024root___eval_triggers__act(Vtb_structural___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_structural__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_structural___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.set(0U, (((IData)(vlSelf->tb_structural__DOT__clk) 
                                      & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__tb_structural__DOT__clk__0))) 
                                     | ((~ (IData)(vlSelf->tb_structural__DOT__rst)) 
                                        & (IData)(vlSelf->__Vtrigprevexpr___TOP__tb_structural__DOT__rst__0))));
    vlSelf->__VactTriggered.set(1U, vlSelf->__VdlySched.awaitingCurrentTime());
    vlSelf->__VactTriggered.set(2U, ((IData)(vlSelf->tb_structural__DOT__clk) 
                                     & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__tb_structural__DOT__clk__0))));
    vlSelf->__Vtrigprevexpr___TOP__tb_structural__DOT__clk__0 
        = vlSelf->tb_structural__DOT__clk;
    vlSelf->__Vtrigprevexpr___TOP__tb_structural__DOT__rst__0 
        = vlSelf->tb_structural__DOT__rst;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_structural___024root___dump_triggers__act(vlSelf);
    }
#endif
}
