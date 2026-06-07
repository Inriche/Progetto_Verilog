// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vtestbench__pch.h"
#include "Vtestbench.h"
#include "Vtestbench___024root.h"

// FUNCTIONS
Vtestbench__Syms::~Vtestbench__Syms()
{
#ifdef VM_TRACE
    if (__Vm_dumping) _traceDumpClose();
#endif  // VM_TRACE
}

void Vtestbench__Syms::_traceDump() {
    const VerilatedLockGuard lock(__Vm_dumperMutex);
    __Vm_dumperp->dump(VL_TIME_Q());
}

void Vtestbench__Syms::_traceDumpOpen() {
    const VerilatedLockGuard lock(__Vm_dumperMutex);
    if (VL_UNLIKELY(!__Vm_dumperp)) {
        __Vm_dumperp = new VerilatedVcdC();
        __Vm_modelp->trace(__Vm_dumperp, 0, 0);
        std::string dumpfile = _vm_contextp__->dumpfileCheck();
        __Vm_dumperp->open(dumpfile.c_str());
        __Vm_dumping = true;
    }
}

void Vtestbench__Syms::_traceDumpClose() {
    const VerilatedLockGuard lock(__Vm_dumperMutex);
    __Vm_dumping = false;
    VL_DO_CLEAR(delete __Vm_dumperp, __Vm_dumperp = nullptr);
}

Vtestbench__Syms::Vtestbench__Syms(VerilatedContext* contextp, const char* namep, Vtestbench* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
{
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-9);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
    // Setup scopes
    __Vscope_testbench.configure(this, name(), "testbench", "testbench", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_testbench__check_eq1.configure(this, name(), "testbench.check_eq1", "check_eq1", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_testbench__check_eq10.configure(this, name(), "testbench.check_eq10", "check_eq10", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_testbench__check_eq2.configure(this, name(), "testbench.check_eq2", "check_eq2", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_testbench__check_eq6.configure(this, name(), "testbench.check_eq6", "check_eq6", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_testbench__fail_mismatch.configure(this, name(), "testbench.fail_mismatch", "fail_mismatch", -9, VerilatedScope::SCOPE_OTHER);
}
