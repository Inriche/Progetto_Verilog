// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_structural.h for the primary calling header

#include "Vtb_structural__pch.h"
#include "Vtb_structural__Syms.h"
#include "Vtb_structural___024root.h"

void Vtb_structural___024root___ctor_var_reset(Vtb_structural___024root* vlSelf);

Vtb_structural___024root::Vtb_structural___024root(Vtb_structural__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , __VdlySched{*symsp->_vm_contextp__}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vtb_structural___024root___ctor_var_reset(this);
}

void Vtb_structural___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vtb_structural___024root::~Vtb_structural___024root() {
}
