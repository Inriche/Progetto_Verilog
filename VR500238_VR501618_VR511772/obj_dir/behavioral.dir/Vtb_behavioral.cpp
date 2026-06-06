// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vtb_behavioral__pch.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vtb_behavioral::Vtb_behavioral(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vtb_behavioral__Syms(contextp(), _vcname__, this)}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vtb_behavioral::Vtb_behavioral(const char* _vcname__)
    : Vtb_behavioral(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vtb_behavioral::~Vtb_behavioral() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vtb_behavioral___024root___eval_debug_assertions(Vtb_behavioral___024root* vlSelf);
#endif  // VL_DEBUG
void Vtb_behavioral___024root___eval_static(Vtb_behavioral___024root* vlSelf);
void Vtb_behavioral___024root___eval_initial(Vtb_behavioral___024root* vlSelf);
void Vtb_behavioral___024root___eval_settle(Vtb_behavioral___024root* vlSelf);
void Vtb_behavioral___024root___eval(Vtb_behavioral___024root* vlSelf);

void Vtb_behavioral::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vtb_behavioral::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vtb_behavioral___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vtb_behavioral___024root___eval_static(&(vlSymsp->TOP));
        Vtb_behavioral___024root___eval_initial(&(vlSymsp->TOP));
        Vtb_behavioral___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vtb_behavioral___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

void Vtb_behavioral::eval_end_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+eval_end_step Vtb_behavioral::eval_end_step\n"); );
#ifdef VM_TRACE
    // Tracing
    if (VL_UNLIKELY(vlSymsp->__Vm_dumping)) vlSymsp->_traceDump();
#endif  // VM_TRACE
}

//============================================================
// Events and timing
bool Vtb_behavioral::eventsPending() { return !vlSymsp->TOP.__VdlySched.empty(); }

uint64_t Vtb_behavioral::nextTimeSlot() { return vlSymsp->TOP.__VdlySched.nextTimeSlot(); }

//============================================================
// Utilities

const char* Vtb_behavioral::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vtb_behavioral___024root___eval_final(Vtb_behavioral___024root* vlSelf);

VL_ATTR_COLD void Vtb_behavioral::final() {
    Vtb_behavioral___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vtb_behavioral::hierName() const { return vlSymsp->name(); }
const char* Vtb_behavioral::modelName() const { return "Vtb_behavioral"; }
unsigned Vtb_behavioral::threads() const { return 1; }
void Vtb_behavioral::prepareClone() const { contextp()->prepareClone(); }
void Vtb_behavioral::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> Vtb_behavioral::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vtb_behavioral___024root__trace_decl_types(VerilatedVcd* tracep);

void Vtb_behavioral___024root__trace_init_top(Vtb_behavioral___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vtb_behavioral___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_behavioral___024root*>(voidSelf);
    Vtb_behavioral__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(std::string{vlSymsp->name()}, VerilatedTracePrefixType::SCOPE_MODULE);
    Vtb_behavioral___024root__trace_decl_types(tracep);
    Vtb_behavioral___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vtb_behavioral___024root__trace_register(Vtb_behavioral___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vtb_behavioral::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (tfp->isOpen()) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vtb_behavioral::trace()' shall not be called after 'VerilatedVcdC::open()'.");
    }
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addModel(this);
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vtb_behavioral___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
