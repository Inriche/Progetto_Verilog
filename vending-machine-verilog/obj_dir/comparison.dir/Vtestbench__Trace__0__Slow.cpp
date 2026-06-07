// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtestbench__Syms.h"


VL_ATTR_COLD void Vtestbench___024root__trace_init_sub__TOP__0(Vtestbench___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushPrefix("testbench", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+220,0,"clk",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2,0,"coin",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+3,0,"selezione",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+4,0,"conferma",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+5,0,"annulla",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+6,0,"mismatch_count",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+130,0,"credito_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+131,0,"credito_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBit(c+132,0,"p1_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+133,0,"p2_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+134,0,"p3_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+135,0,"p4_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+136,0,"p1_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+137,0,"p2_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+138,0,"p3_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+139,0,"p4_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+140,0,"errore_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+141,0,"errore_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+142,0,"resto_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+143,0,"resto_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+144,0,"disp_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+145,0,"disp_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+146,0,"c01_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+147,0,"c02_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+148,0,"c05_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+149,0,"c10_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+150,0,"c01_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+151,0,"c02_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+152,0,"c05_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+153,0,"c10_s",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+221,0,"report_fd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declArray(c+7,0,"current_test_name",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1023,0);
    tracep->declBus(c+39,0,"last_coin",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+40,0,"last_selezione",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+41,0,"last_conferma",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+42,0,"last_annulla",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("beh_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+220,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2,0,"coin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+3,0,"selezione",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+4,0,"conferma",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+5,0,"annulla",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+130,0,"credito",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBit(c+132,0,"prodotto1",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+133,0,"prodotto2",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+134,0,"prodotto3",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+135,0,"prodotto4",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+140,0,"errore",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+142,0,"resto",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+144,0,"disponibile",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+146,0,"coin_01",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+147,0,"coin_02",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+148,0,"coin_05",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+149,0,"coin_10",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+225,0,"S_INIT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+226,0,"S_IDLE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+227,0,"S_OPERATIVA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+228,0,"S_EROGAZIONE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+154,0,"stato",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+155,0,"init_counter",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+156,0,"qty_p1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+157,0,"qty_p2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+158,0,"qty_p3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+159,0,"qty_p4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+160,0,"price_p1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+161,0,"price_p2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+162,0,"price_p3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+163,0,"price_p4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+164,0,"qty_c01",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+165,0,"qty_c02",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+166,0,"qty_c05",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+167,0,"qty_c10",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+168,0,"current_price",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+169,0,"greedy_out_01",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+170,0,"greedy_out_02",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+171,0,"greedy_out_05",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+172,0,"greedy_out_10",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+173,0,"greedy_next_01",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+174,0,"greedy_next_02",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+175,0,"greedy_next_05",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+176,0,"greedy_next_10",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+177,0,"greedy_returned",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+178,0,"init_value",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+179,0,"greedy_return__Vstatic__remain",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+180,0,"greedy_return__Vstatic__take",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->popPrefix();
    tracep->pushPrefix("str_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+220,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2,0,"coin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+3,0,"selezione",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+4,0,"conferma",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+5,0,"annulla",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+131,0,"credito",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBit(c+136,0,"prodotto1",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+137,0,"prodotto2",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+138,0,"prodotto3",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+139,0,"prodotto4",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+141,0,"errore",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+143,0,"resto",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+145,0,"disponibile",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+150,0,"coin_01",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+151,0,"coin_02",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+152,0,"coin_05",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+153,0,"coin_10",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBit(c+181,0,"mode_init",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+182,0,"init_counter_w",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+183,0,"clear_outputs",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+92,0,"do_add_coin",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+93,0,"do_cancel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+94,0,"do_err",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+95,0,"do_ok",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+184,0,"do_erogazione",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+185,0,"sel_latched",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+96,0,"c_prod1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+97,0,"c_prod2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+98,0,"c_prod3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+99,0,"c_prod4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+186,0,"qty_p1_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+187,0,"qty_p2_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+188,0,"qty_p3_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+189,0,"qty_p4_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+190,0,"price_p1_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+191,0,"price_p2_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+192,0,"price_p3_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+193,0,"price_p4_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+194,0,"qty_c01_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+195,0,"qty_c02_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+196,0,"qty_c05_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+197,0,"qty_c10_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+198,0,"current_price_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+131,0,"credito_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+145,0,"disponibile_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+141,0,"errore_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+143,0,"resto_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBit(c+136,0,"prod1_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+137,0,"prod2_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+138,0,"prod3_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+139,0,"prod4_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+150,0,"coin01_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+151,0,"coin02_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+152,0,"coin05_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+153,0,"coin10_q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBit(c+87,0,"valid_sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+43,0,"sel_idx",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+100,0,"sel_price",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+222,0,"sel_qty",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBit(c+101,0,"credito_ge_selprice",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+102,0,"credito_insuff",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+103,0,"stock_empty",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+223,0,"err_calc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+65,0,"purchase_change",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+66,0,"payout_amount",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBit(c+104,0,"payout_active",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+105,0,"c10_calc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+106,0,"c05_calc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+107,0,"c02_calc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+108,0,"c01_calc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+109,0,"qc10_next",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+110,0,"qc05_next",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+111,0,"qc02_next",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+112,0,"qc01_next",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+113,0,"payout_returned",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+67,0,"available_after_payout",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+88,0,"coin_value",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+89,0,"cfg_value",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+90,0,"cfg_value_10",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+90,0,"disp_init_c01",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+44,0,"disp_init_c02",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+45,0,"disp_init_c05",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+46,0,"disp_init_c10",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+91,0,"coin_value_10",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+47,0,"disponibile_plus_coin",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBit(c+199,0,"init_qty_p1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+200,0,"init_price_p1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+201,0,"init_qty_p2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+202,0,"init_price_p2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+203,0,"init_qty_p3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+204,0,"init_price_p3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+205,0,"init_qty_p4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+206,0,"init_price_p4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+207,0,"init_c01",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+208,0,"init_c02",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+209,0,"init_c05",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+210,0,"init_c10",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+114,0,"do_p1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+115,0,"do_p2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+116,0,"do_p3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+117,0,"do_p4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+118,0,"add_c01",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+119,0,"add_c02",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+120,0,"add_c05",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+121,0,"add_c10",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+211,0,"qty_p1_dec",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+212,0,"qty_p2_dec",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+213,0,"qty_p3_dec",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+214,0,"qty_p4_dec",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+215,0,"qty_c01_inc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+216,0,"qty_c02_inc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+217,0,"qty_c05_inc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+218,0,"qty_c10_inc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+53,0,"qty_p1_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+54,0,"qty_p2_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+55,0,"qty_p3_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+56,0,"qty_p4_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+48,0,"price_p1_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+49,0,"price_p2_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+50,0,"price_p3_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+51,0,"price_p4_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+57,0,"qty_c01_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+58,0,"qty_c02_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+59,0,"qty_c05_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+60,0,"qty_c10_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+68,0,"current_price_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+52,0,"credito_plus_coin",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+61,0,"credito_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+62,0,"disponibile_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+63,0,"errore_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+224,0,"resto_err_value",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+64,0,"resto_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBit(c+69,0,"prod1_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+70,0,"prod2_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+71,0,"prod3_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+72,0,"prod4_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+73,0,"coin01_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+74,0,"coin02_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+75,0,"coin05_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+76,0,"coin10_d",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBit(c+77,0,"we_qty_p1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+78,0,"we_qty_p2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+79,0,"we_qty_p3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+80,0,"we_qty_p4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+200,0,"we_price_p1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+202,0,"we_price_p2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+204,0,"we_price_p3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+206,0,"we_price_p4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+81,0,"we_c01",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+82,0,"we_c02",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+83,0,"we_c05",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+84,0,"we_c10",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+95,0,"we_current_price",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+85,0,"we_credito",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+86,0,"we_disponibile",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+122,0,"we_errore",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+123,0,"we_resto",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+124,0,"we_prod",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+125,0,"we_coin_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("R_c01", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+229,0,"N",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+220,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+81,0,"enable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+57,0,"D",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+194,0,"Q",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->popPrefix();
    tracep->pushPrefix("R_c02", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+229,0,"N",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+220,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+82,0,"enable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+58,0,"D",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+195,0,"Q",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->popPrefix();
    tracep->pushPrefix("R_c05", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+229,0,"N",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+220,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+83,0,"enable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+59,0,"D",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+196,0,"Q",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->popPrefix();
    tracep->pushPrefix("R_c10", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+229,0,"N",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+220,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+84,0,"enable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+60,0,"D",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+197,0,"Q",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->popPrefix();
    tracep->pushPrefix("R_credito", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+229,0,"N",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+220,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+85,0,"enable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+61,0,"D",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+131,0,"Q",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->popPrefix();
    tracep->pushPrefix("R_curprice", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+229,0,"N",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+220,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+95,0,"enable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+68,0,"D",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+198,0,"Q",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->popPrefix();
    tracep->pushPrefix("R_disp", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+230,0,"N",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+220,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+86,0,"enable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+62,0,"D",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->declBus(c+145,0,"Q",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 9,0);
    tracep->popPrefix();
    tracep->pushPrefix("R_err", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+231,0,"N",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+220,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+122,0,"enable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+63,0,"D",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+141,0,"Q",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->popPrefix();
    tracep->pushPrefix("R_out01", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+229,0,"N",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+220,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+125,0,"enable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+73,0,"D",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+150,0,"Q",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->popPrefix();
    tracep->pushPrefix("R_out02", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+229,0,"N",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+220,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+125,0,"enable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+74,0,"D",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+151,0,"Q",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->popPrefix();
    tracep->pushPrefix("R_out05", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+229,0,"N",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+220,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+125,0,"enable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+75,0,"D",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+152,0,"Q",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->popPrefix();
    tracep->pushPrefix("R_out10", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+229,0,"N",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+220,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+125,0,"enable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+76,0,"D",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+153,0,"Q",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->popPrefix();
    tracep->pushPrefix("R_p1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+232,0,"N",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+220,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+124,0,"enable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+69,0,"D",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+136,0,"Q",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->popPrefix();
    tracep->pushPrefix("R_p2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+232,0,"N",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+220,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+124,0,"enable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+70,0,"D",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+137,0,"Q",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->popPrefix();
    tracep->pushPrefix("R_p3", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+232,0,"N",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+220,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+124,0,"enable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+71,0,"D",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+138,0,"Q",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->popPrefix();
    tracep->pushPrefix("R_p4", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+232,0,"N",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+220,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+124,0,"enable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+72,0,"D",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->declBus(c+139,0,"Q",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 0,0);
    tracep->popPrefix();
    tracep->pushPrefix("R_price_p1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+229,0,"N",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+220,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+200,0,"enable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+48,0,"D",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+190,0,"Q",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->popPrefix();
    tracep->pushPrefix("R_price_p2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+229,0,"N",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+220,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+202,0,"enable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+49,0,"D",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+191,0,"Q",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->popPrefix();
    tracep->pushPrefix("R_price_p3", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+229,0,"N",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+220,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+204,0,"enable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+50,0,"D",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+192,0,"Q",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->popPrefix();
    tracep->pushPrefix("R_price_p4", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+229,0,"N",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+220,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+206,0,"enable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+51,0,"D",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+193,0,"Q",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->popPrefix();
    tracep->pushPrefix("R_qty_p1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+229,0,"N",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+220,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+77,0,"enable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+53,0,"D",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+186,0,"Q",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->popPrefix();
    tracep->pushPrefix("R_qty_p2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+229,0,"N",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+220,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+78,0,"enable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+54,0,"D",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+187,0,"Q",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->popPrefix();
    tracep->pushPrefix("R_qty_p3", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+229,0,"N",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+220,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+79,0,"enable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+55,0,"D",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+188,0,"Q",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->popPrefix();
    tracep->pushPrefix("R_qty_p4", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+229,0,"N",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+220,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+80,0,"enable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+56,0,"D",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+189,0,"Q",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->popPrefix();
    tracep->pushPrefix("R_resto", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+229,0,"N",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+220,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+123,0,"enable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+64,0,"D",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+143,0,"Q",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->popPrefix();
    tracep->pushPrefix("cmp_credito", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+229,0,"N",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+131,0,"A",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+100,0,"B",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBit(c+101,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("fsm", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+220,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2,0,"coin",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+3,0,"selezione",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+4,0,"conferma",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+5,0,"annulla",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+101,0,"is_credito_suff",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+126,0,"is_stock_ok",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+181,0,"mode_init",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+182,0,"init_counter",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+183,0,"clear_outputs",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+92,0,"do_add_coin",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+93,0,"do_cancel",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+94,0,"do_err",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+95,0,"do_ok",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+184,0,"do_erogazione",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+185,0,"sel_latched",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+96,0,"prodotto1",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+97,0,"prodotto2",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+98,0,"prodotto3",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+99,0,"prodotto4",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+225,0,"S_INIT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+226,0,"S_IDLE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+227,0,"S_OPERATIVA",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+228,0,"S_EROGAZIONE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+219,0,"stato",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+127,0,"next_stato",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+87,0,"valid_sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("greedy_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+104,0,"do_erogazione",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+66,0,"change6",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+197,0,"qty_c10_curr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+196,0,"qty_c05_curr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+195,0,"qty_c02_curr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+194,0,"qty_c01_curr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+105,0,"c10_to_emit",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+106,0,"c05_to_emit",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+107,0,"c02_to_emit",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+108,0,"c01_to_emit",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+109,0,"qc10_next",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+110,0,"qc05_next",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+111,0,"qc02_next",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+112,0,"qc01_next",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+128,0,"calc_resto",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+129,0,"calc_qty",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->popPrefix();
    tracep->pushPrefix("mux_price", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+229,0,"N",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+190,0,"In0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+191,0,"In1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+192,0,"In2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+193,0,"In3",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+43,0,"sel",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+100,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->popPrefix();
    tracep->pushPrefix("mux_qty", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+229,0,"N",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+186,0,"In0",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+187,0,"In1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+188,0,"In2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+189,0,"In3",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+43,0,"sel",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBus(c+222,0,"O",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Vtestbench___024root__trace_init_top(Vtestbench___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root__trace_init_top\n"); );
    // Body
    Vtestbench___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vtestbench___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vtestbench___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtestbench___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtestbench___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vtestbench___024root__trace_register(Vtestbench___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root__trace_register\n"); );
    // Body
    tracep->addConstCb(&Vtestbench___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&Vtestbench___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&Vtestbench___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&Vtestbench___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vtestbench___024root__trace_const_0_sub_0(Vtestbench___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtestbench___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root__trace_const_0\n"); );
    // Init
    Vtestbench___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtestbench___024root*>(voidSelf);
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtestbench___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtestbench___024root__trace_const_0_sub_0(Vtestbench___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root__trace_const_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullCData(oldp+225,(0U),2);
    bufp->fullCData(oldp+226,(1U),2);
    bufp->fullCData(oldp+227,(2U),2);
    bufp->fullCData(oldp+228,(3U),2);
    bufp->fullIData(oldp+229,(6U),32);
    bufp->fullIData(oldp+230,(0xaU),32);
    bufp->fullIData(oldp+231,(2U),32);
    bufp->fullIData(oldp+232,(1U),32);
}

VL_ATTR_COLD void Vtestbench___024root__trace_full_0_sub_0(Vtestbench___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtestbench___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root__trace_full_0\n"); );
    // Init
    Vtestbench___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtestbench___024root*>(voidSelf);
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtestbench___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtestbench___024root__trace_full_0_sub_0(Vtestbench___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestbench___024root__trace_full_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,(vlSelf->testbench__DOT__rst));
    bufp->fullCData(oldp+2,(vlSelf->testbench__DOT__coin),3);
    bufp->fullCData(oldp+3,(vlSelf->testbench__DOT__selezione),3);
    bufp->fullBit(oldp+4,(vlSelf->testbench__DOT__conferma));
    bufp->fullBit(oldp+5,(vlSelf->testbench__DOT__annulla));
    bufp->fullIData(oldp+6,(vlSelf->testbench__DOT__mismatch_count),32);
    bufp->fullWData(oldp+7,(vlSelf->testbench__DOT__current_test_name),1024);
    bufp->fullCData(oldp+39,(vlSelf->testbench__DOT__last_coin),3);
    bufp->fullCData(oldp+40,(vlSelf->testbench__DOT__last_selezione),3);
    bufp->fullBit(oldp+41,(vlSelf->testbench__DOT__last_conferma));
    bufp->fullBit(oldp+42,(vlSelf->testbench__DOT__last_annulla));
    bufp->fullCData(oldp+43,((3U & (IData)(vlSelf->testbench__DOT__selezione))),2);
    bufp->fullSData(oldp+44,((0x3ffU & ((IData)(vlSelf->testbench__DOT__str_inst__DOT__disponibile_q) 
                                        + VL_SHIFTL_III(10,10,32, (IData)(vlSelf->testbench__DOT__str_inst__DOT__cfg_value), 1U)))),10);
    bufp->fullSData(oldp+45,((0x3ffU & ((IData)(vlSelf->testbench__DOT__str_inst__DOT__disponibile_q) 
                                        + ((IData)(vlSelf->testbench__DOT__str_inst__DOT__cfg_value) 
                                           + VL_SHIFTL_III(10,10,32, (IData)(vlSelf->testbench__DOT__str_inst__DOT__cfg_value), 2U))))),10);
    bufp->fullSData(oldp+46,((0x3ffU & ((IData)(vlSelf->testbench__DOT__str_inst__DOT__disponibile_q) 
                                        + (VL_SHIFTL_III(10,10,32, (IData)(vlSelf->testbench__DOT__str_inst__DOT__cfg_value), 3U) 
                                           + VL_SHIFTL_III(10,10,32, (IData)(vlSelf->testbench__DOT__str_inst__DOT__cfg_value), 1U))))),10);
    bufp->fullSData(oldp+47,((0x3ffU & ((IData)(vlSelf->testbench__DOT__str_inst__DOT__disponibile_q) 
                                        + (IData)(vlSelf->testbench__DOT__str_inst__DOT__coin_value)))),10);
    bufp->fullCData(oldp+48,(((IData)(vlSelf->testbench__DOT__str_inst__DOT__init_price_p1)
                               ? (IData)(vlSelf->testbench__DOT__str_inst__DOT__cfg_value)
                               : (IData)(vlSelf->testbench__DOT__str_inst__DOT__price_p1_q))),6);
    bufp->fullCData(oldp+49,(((IData)(vlSelf->testbench__DOT__str_inst__DOT__init_price_p2)
                               ? (IData)(vlSelf->testbench__DOT__str_inst__DOT__cfg_value)
                               : (IData)(vlSelf->testbench__DOT__str_inst__DOT__price_p2_q))),6);
    bufp->fullCData(oldp+50,(((IData)(vlSelf->testbench__DOT__str_inst__DOT__init_price_p3)
                               ? (IData)(vlSelf->testbench__DOT__str_inst__DOT__cfg_value)
                               : (IData)(vlSelf->testbench__DOT__str_inst__DOT__price_p3_q))),6);
    bufp->fullCData(oldp+51,(((IData)(vlSelf->testbench__DOT__str_inst__DOT__init_price_p4)
                               ? (IData)(vlSelf->testbench__DOT__str_inst__DOT__cfg_value)
                               : (IData)(vlSelf->testbench__DOT__str_inst__DOT__price_p4_q))),6);
    bufp->fullCData(oldp+52,((0x3fU & ((IData)(vlSelf->testbench__DOT__str_inst__DOT__coin_value) 
                                       + (IData)(vlSelf->testbench__DOT__str_inst__DOT__credito_q)))),6);
    bufp->fullCData(oldp+53,((0x3fU & ((IData)(vlSelf->testbench__DOT__str_inst__DOT__init_qty_p1)
                                        ? (IData)(vlSelf->testbench__DOT__str_inst__DOT__cfg_value)
                                        : ((IData)(vlSelf->testbench__DOT__str_inst__DOT__qty_p1_q) 
                                           - (IData)(vlSelf->testbench__DOT__str_inst__DOT__do_p1))))),6);
    bufp->fullCData(oldp+54,((0x3fU & ((IData)(vlSelf->testbench__DOT__str_inst__DOT__init_qty_p2)
                                        ? (IData)(vlSelf->testbench__DOT__str_inst__DOT__cfg_value)
                                        : ((IData)(vlSelf->testbench__DOT__str_inst__DOT__qty_p2_q) 
                                           - (IData)(vlSelf->testbench__DOT__str_inst__DOT__do_p2))))),6);
    bufp->fullCData(oldp+55,((0x3fU & ((IData)(vlSelf->testbench__DOT__str_inst__DOT__init_qty_p3)
                                        ? (IData)(vlSelf->testbench__DOT__str_inst__DOT__cfg_value)
                                        : ((IData)(vlSelf->testbench__DOT__str_inst__DOT__qty_p3_q) 
                                           - (IData)(vlSelf->testbench__DOT__str_inst__DOT__do_p3))))),6);
    bufp->fullCData(oldp+56,((0x3fU & ((IData)(vlSelf->testbench__DOT__str_inst__DOT__init_qty_p4)
                                        ? (IData)(vlSelf->testbench__DOT__str_inst__DOT__cfg_value)
                                        : ((IData)(vlSelf->testbench__DOT__str_inst__DOT__qty_p4_q) 
                                           - (IData)(vlSelf->testbench__DOT__str_inst__DOT__do_p4))))),6);
    bufp->fullCData(oldp+57,((0x3fU & ((IData)(vlSelf->testbench__DOT__str_inst__DOT__init_c01)
                                        ? (IData)(vlSelf->testbench__DOT__str_inst__DOT__cfg_value)
                                        : ((IData)(vlSelf->testbench__DOT__str_inst__DOT__add_c01)
                                            ? ((IData)(1U) 
                                               + (IData)(vlSelf->testbench__DOT__str_inst__DOT__qty_c01_q))
                                            : ((IData)(vlSelf->testbench__DOT__str_inst__DOT__payout_active)
                                                ? (IData)(vlSelf->testbench__DOT__str_inst__DOT__qc01_next)
                                                : (IData)(vlSelf->testbench__DOT__str_inst__DOT__qty_c01_q)))))),6);
    bufp->fullCData(oldp+58,((0x3fU & ((IData)(vlSelf->testbench__DOT__str_inst__DOT__init_c02)
                                        ? (IData)(vlSelf->testbench__DOT__str_inst__DOT__cfg_value)
                                        : ((IData)(vlSelf->testbench__DOT__str_inst__DOT__add_c02)
                                            ? ((IData)(1U) 
                                               + (IData)(vlSelf->testbench__DOT__str_inst__DOT__qty_c02_q))
                                            : ((IData)(vlSelf->testbench__DOT__str_inst__DOT__payout_active)
                                                ? (IData)(vlSelf->testbench__DOT__str_inst__DOT__qc02_next)
                                                : (IData)(vlSelf->testbench__DOT__str_inst__DOT__qty_c02_q)))))),6);
    bufp->fullCData(oldp+59,((0x3fU & ((IData)(vlSelf->testbench__DOT__str_inst__DOT__init_c05)
                                        ? (IData)(vlSelf->testbench__DOT__str_inst__DOT__cfg_value)
                                        : ((IData)(vlSelf->testbench__DOT__str_inst__DOT__add_c05)
                                            ? ((IData)(1U) 
                                               + (IData)(vlSelf->testbench__DOT__str_inst__DOT__qty_c05_q))
                                            : ((IData)(vlSelf->testbench__DOT__str_inst__DOT__payout_active)
                                                ? (IData)(vlSelf->testbench__DOT__str_inst__DOT__qc05_next)
                                                : (IData)(vlSelf->testbench__DOT__str_inst__DOT__qty_c05_q)))))),6);
    bufp->fullCData(oldp+60,((0x3fU & ((IData)(vlSelf->testbench__DOT__str_inst__DOT__init_c10)
                                        ? (IData)(vlSelf->testbench__DOT__str_inst__DOT__cfg_value)
                                        : ((IData)(vlSelf->testbench__DOT__str_inst__DOT__add_c10)
                                            ? ((IData)(1U) 
                                               + (IData)(vlSelf->testbench__DOT__str_inst__DOT__qty_c10_q))
                                            : ((IData)(vlSelf->testbench__DOT__str_inst__DOT__payout_active)
                                                ? (IData)(vlSelf->testbench__DOT__str_inst__DOT__qc10_next)
                                                : (IData)(vlSelf->testbench__DOT__str_inst__DOT__qty_c10_q)))))),6);
    bufp->fullCData(oldp+61,(((IData)(vlSelf->testbench__DOT__str_inst__DOT__mode_init)
                               ? 0U : ((IData)(vlSelf->testbench__DOT__str_inst__DOT__payout_active)
                                        ? 0U : (0x3fU 
                                                & ((IData)(vlSelf->testbench__DOT__str_inst__DOT__do_add_coin)
                                                    ? 
                                                   ((IData)(vlSelf->testbench__DOT__str_inst__DOT__coin_value) 
                                                    + (IData)(vlSelf->testbench__DOT__str_inst__DOT__credito_q))
                                                    : (IData)(vlSelf->testbench__DOT__str_inst__DOT__credito_q)))))),6);
    bufp->fullSData(oldp+62,((0x3ffU & ((IData)(vlSelf->testbench__DOT__str_inst__DOT__init_c01)
                                         ? (IData)(vlSelf->testbench__DOT__str_inst__DOT__cfg_value)
                                         : ((IData)(vlSelf->testbench__DOT__str_inst__DOT__init_c02)
                                             ? ((IData)(vlSelf->testbench__DOT__str_inst__DOT__disponibile_q) 
                                                + VL_SHIFTL_III(10,10,32, (IData)(vlSelf->testbench__DOT__str_inst__DOT__cfg_value), 1U))
                                             : ((IData)(vlSelf->testbench__DOT__str_inst__DOT__init_c05)
                                                 ? 
                                                ((IData)(vlSelf->testbench__DOT__str_inst__DOT__disponibile_q) 
                                                 + 
                                                 ((IData)(vlSelf->testbench__DOT__str_inst__DOT__cfg_value) 
                                                  + 
                                                  VL_SHIFTL_III(10,10,32, (IData)(vlSelf->testbench__DOT__str_inst__DOT__cfg_value), 2U)))
                                                 : 
                                                ((IData)(vlSelf->testbench__DOT__str_inst__DOT__init_c10)
                                                  ? 
                                                 ((IData)(vlSelf->testbench__DOT__str_inst__DOT__disponibile_q) 
                                                  + 
                                                  (VL_SHIFTL_III(10,10,32, (IData)(vlSelf->testbench__DOT__str_inst__DOT__cfg_value), 3U) 
                                                   + 
                                                   VL_SHIFTL_III(10,10,32, (IData)(vlSelf->testbench__DOT__str_inst__DOT__cfg_value), 1U)))
                                                  : 
                                                 ((IData)(vlSelf->testbench__DOT__str_inst__DOT__do_add_coin)
                                                   ? 
                                                  ((IData)(vlSelf->testbench__DOT__str_inst__DOT__disponibile_q) 
                                                   + (IData)(vlSelf->testbench__DOT__str_inst__DOT__coin_value))
                                                   : 
                                                  ((IData)(vlSelf->testbench__DOT__str_inst__DOT__payout_active)
                                                    ? 
                                                   (((IData)(vlSelf->testbench__DOT__str_inst__DOT__payout_returned) 
                                                     > (IData)(vlSelf->testbench__DOT__str_inst__DOT__disponibile_q))
                                                     ? 0U
                                                     : 
                                                    ((IData)(vlSelf->testbench__DOT__str_inst__DOT__disponibile_q) 
                                                     - (IData)(vlSelf->testbench__DOT__str_inst__DOT__payout_returned)))
                                                    : (IData)(vlSelf->testbench__DOT__str_inst__DOT__disponibile_q))))))))),10);
    bufp->fullCData(oldp+63,(((IData)(vlSelf->testbench__DOT__str_inst__DOT__do_err)
                               ? ((IData)(vlSelf->testbench__DOT__str_inst__DOT__valid_sel)
                                   ? (((IData)(vlSelf->testbench__DOT__str_inst__DOT__stock_empty) 
                                       << 1U) | (IData)(vlSelf->testbench__DOT__str_inst__DOT__credito_insuff))
                                   : 2U) : ((IData)(vlSelf->testbench__DOT__str_inst__DOT__clear_outputs)
                                             ? 0U : (IData)(vlSelf->testbench__DOT__str_inst__DOT__errore_q)))),2);
    bufp->fullCData(oldp+64,((0x3fU & ((IData)(vlSelf->testbench__DOT__str_inst__DOT__payout_active)
                                        ? (IData)(vlSelf->testbench__DOT__str_inst__DOT__payout_returned)
                                        : ((IData)(vlSelf->testbench__DOT__str_inst__DOT__do_err)
                                            ? (((IData)(vlSelf->testbench__DOT__str_inst__DOT__valid_sel) 
                                                & (IData)(vlSelf->testbench__DOT__str_inst__DOT__credito_insuff))
                                                ? (IData)(vlSelf->testbench__DOT__str_inst__DOT__sel_price)
                                                : 0U)
                                            : ((IData)(vlSelf->testbench__DOT__str_inst__DOT__clear_outputs)
                                                ? 0U
                                                : (IData)(vlSelf->testbench__DOT__str_inst__DOT__resto_q)))))),6);
    bufp->fullCData(oldp+65,((0x3fU & ((IData)(vlSelf->testbench__DOT__str_inst__DOT__credito_q) 
                                       - (IData)(vlSelf->testbench__DOT__str_inst__DOT__sel_price)))),6);
    bufp->fullCData(oldp+66,((0x3fU & ((IData)(vlSelf->testbench__DOT__str_inst__DOT__do_ok)
                                        ? ((IData)(vlSelf->testbench__DOT__str_inst__DOT__credito_q) 
                                           - (IData)(vlSelf->testbench__DOT__str_inst__DOT__sel_price))
                                        : (IData)(vlSelf->testbench__DOT__str_inst__DOT__credito_q)))),6);
    bufp->fullSData(oldp+67,((((IData)(vlSelf->testbench__DOT__str_inst__DOT__payout_returned) 
                               > (IData)(vlSelf->testbench__DOT__str_inst__DOT__disponibile_q))
                               ? 0U : (0x3ffU & ((IData)(vlSelf->testbench__DOT__str_inst__DOT__disponibile_q) 
                                                 - (IData)(vlSelf->testbench__DOT__str_inst__DOT__payout_returned))))),10);
    bufp->fullCData(oldp+68,(((IData)(vlSelf->testbench__DOT__str_inst__DOT__do_ok)
                               ? (IData)(vlSelf->testbench__DOT__str_inst__DOT__sel_price)
                               : (IData)(vlSelf->testbench__DOT__str_inst__DOT__current_price_q))),6);
    bufp->fullBit(oldp+69,(((~ (IData)(vlSelf->testbench__DOT__str_inst__DOT__clear_outputs)) 
                            & ((IData)(vlSelf->testbench__DOT__str_inst__DOT__do_ok)
                                ? (IData)(vlSelf->testbench__DOT__str_inst__DOT__c_prod1)
                                : (IData)(vlSelf->testbench__DOT__str_inst__DOT__prod1_q)))));
    bufp->fullBit(oldp+70,(((~ (IData)(vlSelf->testbench__DOT__str_inst__DOT__clear_outputs)) 
                            & ((IData)(vlSelf->testbench__DOT__str_inst__DOT__do_ok)
                                ? (IData)(vlSelf->testbench__DOT__str_inst__DOT__c_prod2)
                                : (IData)(vlSelf->testbench__DOT__str_inst__DOT__prod2_q)))));
    bufp->fullBit(oldp+71,(((~ (IData)(vlSelf->testbench__DOT__str_inst__DOT__clear_outputs)) 
                            & ((IData)(vlSelf->testbench__DOT__str_inst__DOT__do_ok)
                                ? (IData)(vlSelf->testbench__DOT__str_inst__DOT__c_prod3)
                                : (IData)(vlSelf->testbench__DOT__str_inst__DOT__prod3_q)))));
    bufp->fullBit(oldp+72,(((~ (IData)(vlSelf->testbench__DOT__str_inst__DOT__clear_outputs)) 
                            & ((IData)(vlSelf->testbench__DOT__str_inst__DOT__do_ok)
                                ? (IData)(vlSelf->testbench__DOT__str_inst__DOT__c_prod4)
                                : (IData)(vlSelf->testbench__DOT__str_inst__DOT__prod4_q)))));
    bufp->fullCData(oldp+73,(((IData)(vlSelf->testbench__DOT__str_inst__DOT__payout_active)
                               ? (IData)(vlSelf->testbench__DOT__str_inst__DOT__c01_calc)
                               : ((IData)(vlSelf->testbench__DOT__str_inst__DOT__clear_outputs)
                                   ? 0U : (IData)(vlSelf->testbench__DOT__str_inst__DOT__coin01_q)))),6);
    bufp->fullCData(oldp+74,(((IData)(vlSelf->testbench__DOT__str_inst__DOT__payout_active)
                               ? (IData)(vlSelf->testbench__DOT__str_inst__DOT__c02_calc)
                               : ((IData)(vlSelf->testbench__DOT__str_inst__DOT__clear_outputs)
                                   ? 0U : (IData)(vlSelf->testbench__DOT__str_inst__DOT__coin02_q)))),6);
    bufp->fullCData(oldp+75,(((IData)(vlSelf->testbench__DOT__str_inst__DOT__payout_active)
                               ? (IData)(vlSelf->testbench__DOT__str_inst__DOT__c05_calc)
                               : ((IData)(vlSelf->testbench__DOT__str_inst__DOT__clear_outputs)
                                   ? 0U : (IData)(vlSelf->testbench__DOT__str_inst__DOT__coin05_q)))),6);
    bufp->fullCData(oldp+76,(((IData)(vlSelf->testbench__DOT__str_inst__DOT__payout_active)
                               ? (IData)(vlSelf->testbench__DOT__str_inst__DOT__c10_calc)
                               : ((IData)(vlSelf->testbench__DOT__str_inst__DOT__clear_outputs)
                                   ? 0U : (IData)(vlSelf->testbench__DOT__str_inst__DOT__coin10_q)))),6);
    bufp->fullBit(oldp+77,(((IData)(vlSelf->testbench__DOT__str_inst__DOT__init_qty_p1) 
                            | (IData)(vlSelf->testbench__DOT__str_inst__DOT__do_p1))));
    bufp->fullBit(oldp+78,(((IData)(vlSelf->testbench__DOT__str_inst__DOT__init_qty_p2) 
                            | (IData)(vlSelf->testbench__DOT__str_inst__DOT__do_p2))));
    bufp->fullBit(oldp+79,(((IData)(vlSelf->testbench__DOT__str_inst__DOT__init_qty_p3) 
                            | (IData)(vlSelf->testbench__DOT__str_inst__DOT__do_p3))));
    bufp->fullBit(oldp+80,(((IData)(vlSelf->testbench__DOT__str_inst__DOT__init_qty_p4) 
                            | (IData)(vlSelf->testbench__DOT__str_inst__DOT__do_p4))));
    bufp->fullBit(oldp+81,(((IData)(vlSelf->testbench__DOT__str_inst__DOT__init_c01) 
                            | ((IData)(vlSelf->testbench__DOT__str_inst__DOT__add_c01) 
                               | (IData)(vlSelf->testbench__DOT__str_inst__DOT__payout_active)))));
    bufp->fullBit(oldp+82,(((IData)(vlSelf->testbench__DOT__str_inst__DOT__init_c02) 
                            | ((IData)(vlSelf->testbench__DOT__str_inst__DOT__add_c02) 
                               | (IData)(vlSelf->testbench__DOT__str_inst__DOT__payout_active)))));
    bufp->fullBit(oldp+83,(((IData)(vlSelf->testbench__DOT__str_inst__DOT__init_c05) 
                            | ((IData)(vlSelf->testbench__DOT__str_inst__DOT__add_c05) 
                               | (IData)(vlSelf->testbench__DOT__str_inst__DOT__payout_active)))));
    bufp->fullBit(oldp+84,(((IData)(vlSelf->testbench__DOT__str_inst__DOT__init_c10) 
                            | ((IData)(vlSelf->testbench__DOT__str_inst__DOT__add_c10) 
                               | (IData)(vlSelf->testbench__DOT__str_inst__DOT__payout_active)))));
    bufp->fullBit(oldp+85,(((IData)(vlSelf->testbench__DOT__str_inst__DOT__mode_init) 
                            | (IData)(vlSelf->testbench__DOT__str_inst__DOT____VdfgTmp_h4b786e47__0))));
    bufp->fullBit(oldp+86,(((IData)(vlSelf->testbench__DOT__str_inst__DOT__init_c01) 
                            | ((IData)(vlSelf->testbench__DOT__str_inst__DOT__init_c02) 
                               | ((IData)(vlSelf->testbench__DOT__str_inst__DOT__init_c05) 
                                  | ((IData)(vlSelf->testbench__DOT__str_inst__DOT__init_c10) 
                                     | (IData)(vlSelf->testbench__DOT__str_inst__DOT____VdfgTmp_h4b786e47__0)))))));
    bufp->fullBit(oldp+87,(vlSelf->testbench__DOT__str_inst__DOT__valid_sel));
    bufp->fullCData(oldp+88,(vlSelf->testbench__DOT__str_inst__DOT__coin_value),6);
    bufp->fullCData(oldp+89,(vlSelf->testbench__DOT__str_inst__DOT__cfg_value),6);
    bufp->fullSData(oldp+90,(vlSelf->testbench__DOT__str_inst__DOT__cfg_value),10);
    bufp->fullSData(oldp+91,(vlSelf->testbench__DOT__str_inst__DOT__coin_value),10);
    bufp->fullBit(oldp+92,(vlSelf->testbench__DOT__str_inst__DOT__do_add_coin));
    bufp->fullBit(oldp+93,(vlSelf->testbench__DOT__str_inst__DOT__do_cancel));
    bufp->fullBit(oldp+94,(vlSelf->testbench__DOT__str_inst__DOT__do_err));
    bufp->fullBit(oldp+95,(vlSelf->testbench__DOT__str_inst__DOT__do_ok));
    bufp->fullBit(oldp+96,(vlSelf->testbench__DOT__str_inst__DOT__c_prod1));
    bufp->fullBit(oldp+97,(vlSelf->testbench__DOT__str_inst__DOT__c_prod2));
    bufp->fullBit(oldp+98,(vlSelf->testbench__DOT__str_inst__DOT__c_prod3));
    bufp->fullBit(oldp+99,(vlSelf->testbench__DOT__str_inst__DOT__c_prod4));
    bufp->fullCData(oldp+100,(vlSelf->testbench__DOT__str_inst__DOT__sel_price),6);
    bufp->fullBit(oldp+101,(vlSelf->testbench__DOT__str_inst__DOT__credito_ge_selprice));
    bufp->fullBit(oldp+102,(vlSelf->testbench__DOT__str_inst__DOT__credito_insuff));
    bufp->fullBit(oldp+103,(vlSelf->testbench__DOT__str_inst__DOT__stock_empty));
    bufp->fullBit(oldp+104,(vlSelf->testbench__DOT__str_inst__DOT__payout_active));
    bufp->fullCData(oldp+105,(vlSelf->testbench__DOT__str_inst__DOT__c10_calc),6);
    bufp->fullCData(oldp+106,(vlSelf->testbench__DOT__str_inst__DOT__c05_calc),6);
    bufp->fullCData(oldp+107,(vlSelf->testbench__DOT__str_inst__DOT__c02_calc),6);
    bufp->fullCData(oldp+108,(vlSelf->testbench__DOT__str_inst__DOT__c01_calc),6);
    bufp->fullCData(oldp+109,(vlSelf->testbench__DOT__str_inst__DOT__qc10_next),6);
    bufp->fullCData(oldp+110,(vlSelf->testbench__DOT__str_inst__DOT__qc05_next),6);
    bufp->fullCData(oldp+111,(vlSelf->testbench__DOT__str_inst__DOT__qc02_next),6);
    bufp->fullCData(oldp+112,(vlSelf->testbench__DOT__str_inst__DOT__qc01_next),6);
    bufp->fullSData(oldp+113,(vlSelf->testbench__DOT__str_inst__DOT__payout_returned),10);
    bufp->fullBit(oldp+114,(vlSelf->testbench__DOT__str_inst__DOT__do_p1));
    bufp->fullBit(oldp+115,(vlSelf->testbench__DOT__str_inst__DOT__do_p2));
    bufp->fullBit(oldp+116,(vlSelf->testbench__DOT__str_inst__DOT__do_p3));
    bufp->fullBit(oldp+117,(vlSelf->testbench__DOT__str_inst__DOT__do_p4));
    bufp->fullBit(oldp+118,(vlSelf->testbench__DOT__str_inst__DOT__add_c01));
    bufp->fullBit(oldp+119,(vlSelf->testbench__DOT__str_inst__DOT__add_c02));
    bufp->fullBit(oldp+120,(vlSelf->testbench__DOT__str_inst__DOT__add_c05));
    bufp->fullBit(oldp+121,(vlSelf->testbench__DOT__str_inst__DOT__add_c10));
    bufp->fullBit(oldp+122,(vlSelf->testbench__DOT__str_inst__DOT__we_errore));
    bufp->fullBit(oldp+123,(((IData)(vlSelf->testbench__DOT__str_inst__DOT__we_errore) 
                             | (IData)(vlSelf->testbench__DOT__str_inst__DOT__payout_active))));
    bufp->fullBit(oldp+124,(vlSelf->testbench__DOT__str_inst__DOT__we_prod));
    bufp->fullBit(oldp+125,(vlSelf->testbench__DOT__str_inst__DOT__we_coin_out));
    bufp->fullBit(oldp+126,((1U & (~ (IData)(vlSelf->testbench__DOT__str_inst__DOT__stock_empty)))));
    bufp->fullCData(oldp+127,(vlSelf->testbench__DOT__str_inst__DOT__fsm__DOT__next_stato),2);
    bufp->fullCData(oldp+128,(vlSelf->testbench__DOT__str_inst__DOT__greedy_inst__DOT__calc_resto),6);
    bufp->fullCData(oldp+129,(vlSelf->testbench__DOT__str_inst__DOT__greedy_inst__DOT__calc_qty),6);
    bufp->fullCData(oldp+130,(vlSelf->testbench__DOT__credito_b),6);
    bufp->fullCData(oldp+131,(vlSelf->testbench__DOT__str_inst__DOT__credito_q),6);
    bufp->fullBit(oldp+132,(vlSelf->testbench__DOT__p1_b));
    bufp->fullBit(oldp+133,(vlSelf->testbench__DOT__p2_b));
    bufp->fullBit(oldp+134,(vlSelf->testbench__DOT__p3_b));
    bufp->fullBit(oldp+135,(vlSelf->testbench__DOT__p4_b));
    bufp->fullBit(oldp+136,(vlSelf->testbench__DOT__str_inst__DOT__prod1_q));
    bufp->fullBit(oldp+137,(vlSelf->testbench__DOT__str_inst__DOT__prod2_q));
    bufp->fullBit(oldp+138,(vlSelf->testbench__DOT__str_inst__DOT__prod3_q));
    bufp->fullBit(oldp+139,(vlSelf->testbench__DOT__str_inst__DOT__prod4_q));
    bufp->fullCData(oldp+140,(vlSelf->testbench__DOT__errore_b),2);
    bufp->fullCData(oldp+141,(vlSelf->testbench__DOT__str_inst__DOT__errore_q),2);
    bufp->fullCData(oldp+142,(vlSelf->testbench__DOT__resto_b),6);
    bufp->fullCData(oldp+143,(vlSelf->testbench__DOT__str_inst__DOT__resto_q),6);
    bufp->fullSData(oldp+144,(vlSelf->testbench__DOT__disp_b),10);
    bufp->fullSData(oldp+145,(vlSelf->testbench__DOT__str_inst__DOT__disponibile_q),10);
    bufp->fullCData(oldp+146,(vlSelf->testbench__DOT__c01_b),6);
    bufp->fullCData(oldp+147,(vlSelf->testbench__DOT__c02_b),6);
    bufp->fullCData(oldp+148,(vlSelf->testbench__DOT__c05_b),6);
    bufp->fullCData(oldp+149,(vlSelf->testbench__DOT__c10_b),6);
    bufp->fullCData(oldp+150,(vlSelf->testbench__DOT__str_inst__DOT__coin01_q),6);
    bufp->fullCData(oldp+151,(vlSelf->testbench__DOT__str_inst__DOT__coin02_q),6);
    bufp->fullCData(oldp+152,(vlSelf->testbench__DOT__str_inst__DOT__coin05_q),6);
    bufp->fullCData(oldp+153,(vlSelf->testbench__DOT__str_inst__DOT__coin10_q),6);
    bufp->fullCData(oldp+154,(vlSelf->testbench__DOT__beh_inst__DOT__stato),2);
    bufp->fullCData(oldp+155,(vlSelf->testbench__DOT__beh_inst__DOT__init_counter),4);
    bufp->fullCData(oldp+156,(vlSelf->testbench__DOT__beh_inst__DOT__qty_p1),6);
    bufp->fullCData(oldp+157,(vlSelf->testbench__DOT__beh_inst__DOT__qty_p2),6);
    bufp->fullCData(oldp+158,(vlSelf->testbench__DOT__beh_inst__DOT__qty_p3),6);
    bufp->fullCData(oldp+159,(vlSelf->testbench__DOT__beh_inst__DOT__qty_p4),6);
    bufp->fullCData(oldp+160,(vlSelf->testbench__DOT__beh_inst__DOT__price_p1),6);
    bufp->fullCData(oldp+161,(vlSelf->testbench__DOT__beh_inst__DOT__price_p2),6);
    bufp->fullCData(oldp+162,(vlSelf->testbench__DOT__beh_inst__DOT__price_p3),6);
    bufp->fullCData(oldp+163,(vlSelf->testbench__DOT__beh_inst__DOT__price_p4),6);
    bufp->fullCData(oldp+164,(vlSelf->testbench__DOT__beh_inst__DOT__qty_c01),6);
    bufp->fullCData(oldp+165,(vlSelf->testbench__DOT__beh_inst__DOT__qty_c02),6);
    bufp->fullCData(oldp+166,(vlSelf->testbench__DOT__beh_inst__DOT__qty_c05),6);
    bufp->fullCData(oldp+167,(vlSelf->testbench__DOT__beh_inst__DOT__qty_c10),6);
    bufp->fullCData(oldp+168,(vlSelf->testbench__DOT__beh_inst__DOT__current_price),6);
    bufp->fullCData(oldp+169,(vlSelf->testbench__DOT__beh_inst__DOT__greedy_out_01),6);
    bufp->fullCData(oldp+170,(vlSelf->testbench__DOT__beh_inst__DOT__greedy_out_02),6);
    bufp->fullCData(oldp+171,(vlSelf->testbench__DOT__beh_inst__DOT__greedy_out_05),6);
    bufp->fullCData(oldp+172,(vlSelf->testbench__DOT__beh_inst__DOT__greedy_out_10),6);
    bufp->fullCData(oldp+173,(vlSelf->testbench__DOT__beh_inst__DOT__greedy_next_01),6);
    bufp->fullCData(oldp+174,(vlSelf->testbench__DOT__beh_inst__DOT__greedy_next_02),6);
    bufp->fullCData(oldp+175,(vlSelf->testbench__DOT__beh_inst__DOT__greedy_next_05),6);
    bufp->fullCData(oldp+176,(vlSelf->testbench__DOT__beh_inst__DOT__greedy_next_10),6);
    bufp->fullCData(oldp+177,(vlSelf->testbench__DOT__beh_inst__DOT__greedy_returned),6);
    bufp->fullSData(oldp+178,(vlSelf->testbench__DOT__beh_inst__DOT__init_value),10);
    bufp->fullCData(oldp+179,(vlSelf->testbench__DOT__beh_inst__DOT__greedy_return__Vstatic__remain),6);
    bufp->fullCData(oldp+180,(vlSelf->testbench__DOT__beh_inst__DOT__greedy_return__Vstatic__take),6);
    bufp->fullBit(oldp+181,(vlSelf->testbench__DOT__str_inst__DOT__mode_init));
    bufp->fullCData(oldp+182,(vlSelf->testbench__DOT__str_inst__DOT__init_counter_w),4);
    bufp->fullBit(oldp+183,(vlSelf->testbench__DOT__str_inst__DOT__clear_outputs));
    bufp->fullBit(oldp+184,(vlSelf->testbench__DOT__str_inst__DOT__do_erogazione));
    bufp->fullCData(oldp+185,(vlSelf->testbench__DOT__str_inst__DOT__sel_latched),3);
    bufp->fullCData(oldp+186,(vlSelf->testbench__DOT__str_inst__DOT__qty_p1_q),6);
    bufp->fullCData(oldp+187,(vlSelf->testbench__DOT__str_inst__DOT__qty_p2_q),6);
    bufp->fullCData(oldp+188,(vlSelf->testbench__DOT__str_inst__DOT__qty_p3_q),6);
    bufp->fullCData(oldp+189,(vlSelf->testbench__DOT__str_inst__DOT__qty_p4_q),6);
    bufp->fullCData(oldp+190,(vlSelf->testbench__DOT__str_inst__DOT__price_p1_q),6);
    bufp->fullCData(oldp+191,(vlSelf->testbench__DOT__str_inst__DOT__price_p2_q),6);
    bufp->fullCData(oldp+192,(vlSelf->testbench__DOT__str_inst__DOT__price_p3_q),6);
    bufp->fullCData(oldp+193,(vlSelf->testbench__DOT__str_inst__DOT__price_p4_q),6);
    bufp->fullCData(oldp+194,(vlSelf->testbench__DOT__str_inst__DOT__qty_c01_q),6);
    bufp->fullCData(oldp+195,(vlSelf->testbench__DOT__str_inst__DOT__qty_c02_q),6);
    bufp->fullCData(oldp+196,(vlSelf->testbench__DOT__str_inst__DOT__qty_c05_q),6);
    bufp->fullCData(oldp+197,(vlSelf->testbench__DOT__str_inst__DOT__qty_c10_q),6);
    bufp->fullCData(oldp+198,(vlSelf->testbench__DOT__str_inst__DOT__current_price_q),6);
    bufp->fullBit(oldp+199,(vlSelf->testbench__DOT__str_inst__DOT__init_qty_p1));
    bufp->fullBit(oldp+200,(vlSelf->testbench__DOT__str_inst__DOT__init_price_p1));
    bufp->fullBit(oldp+201,(vlSelf->testbench__DOT__str_inst__DOT__init_qty_p2));
    bufp->fullBit(oldp+202,(vlSelf->testbench__DOT__str_inst__DOT__init_price_p2));
    bufp->fullBit(oldp+203,(vlSelf->testbench__DOT__str_inst__DOT__init_qty_p3));
    bufp->fullBit(oldp+204,(vlSelf->testbench__DOT__str_inst__DOT__init_price_p3));
    bufp->fullBit(oldp+205,(vlSelf->testbench__DOT__str_inst__DOT__init_qty_p4));
    bufp->fullBit(oldp+206,(vlSelf->testbench__DOT__str_inst__DOT__init_price_p4));
    bufp->fullBit(oldp+207,(vlSelf->testbench__DOT__str_inst__DOT__init_c01));
    bufp->fullBit(oldp+208,(vlSelf->testbench__DOT__str_inst__DOT__init_c02));
    bufp->fullBit(oldp+209,(vlSelf->testbench__DOT__str_inst__DOT__init_c05));
    bufp->fullBit(oldp+210,(vlSelf->testbench__DOT__str_inst__DOT__init_c10));
    bufp->fullCData(oldp+211,((0x3fU & ((IData)(vlSelf->testbench__DOT__str_inst__DOT__qty_p1_q) 
                                        - (IData)(1U)))),6);
    bufp->fullCData(oldp+212,((0x3fU & ((IData)(vlSelf->testbench__DOT__str_inst__DOT__qty_p2_q) 
                                        - (IData)(1U)))),6);
    bufp->fullCData(oldp+213,((0x3fU & ((IData)(vlSelf->testbench__DOT__str_inst__DOT__qty_p3_q) 
                                        - (IData)(1U)))),6);
    bufp->fullCData(oldp+214,((0x3fU & ((IData)(vlSelf->testbench__DOT__str_inst__DOT__qty_p4_q) 
                                        - (IData)(1U)))),6);
    bufp->fullCData(oldp+215,((0x3fU & ((IData)(1U) 
                                        + (IData)(vlSelf->testbench__DOT__str_inst__DOT__qty_c01_q)))),6);
    bufp->fullCData(oldp+216,((0x3fU & ((IData)(1U) 
                                        + (IData)(vlSelf->testbench__DOT__str_inst__DOT__qty_c02_q)))),6);
    bufp->fullCData(oldp+217,((0x3fU & ((IData)(1U) 
                                        + (IData)(vlSelf->testbench__DOT__str_inst__DOT__qty_c05_q)))),6);
    bufp->fullCData(oldp+218,((0x3fU & ((IData)(1U) 
                                        + (IData)(vlSelf->testbench__DOT__str_inst__DOT__qty_c10_q)))),6);
    bufp->fullCData(oldp+219,(vlSelf->testbench__DOT__str_inst__DOT__fsm__DOT__stato),2);
    bufp->fullBit(oldp+220,(vlSelf->testbench__DOT__clk));
    bufp->fullIData(oldp+221,(vlSelf->testbench__DOT__report_fd),32);
    bufp->fullCData(oldp+222,(((2U & (IData)(vlSelf->testbench__DOT__selezione))
                                ? ((1U & (IData)(vlSelf->testbench__DOT__selezione))
                                    ? (IData)(vlSelf->testbench__DOT__str_inst__DOT__qty_p4_q)
                                    : (IData)(vlSelf->testbench__DOT__str_inst__DOT__qty_p3_q))
                                : ((1U & (IData)(vlSelf->testbench__DOT__selezione))
                                    ? (IData)(vlSelf->testbench__DOT__str_inst__DOT__qty_p2_q)
                                    : (IData)(vlSelf->testbench__DOT__str_inst__DOT__qty_p1_q)))),6);
    bufp->fullCData(oldp+223,(((IData)(vlSelf->testbench__DOT__str_inst__DOT__valid_sel)
                                ? (((IData)(vlSelf->testbench__DOT__str_inst__DOT__stock_empty) 
                                    << 1U) | (IData)(vlSelf->testbench__DOT__str_inst__DOT__credito_insuff))
                                : 2U)),2);
    bufp->fullCData(oldp+224,((((IData)(vlSelf->testbench__DOT__str_inst__DOT__valid_sel) 
                                & (IData)(vlSelf->testbench__DOT__str_inst__DOT__credito_insuff))
                                ? (IData)(vlSelf->testbench__DOT__str_inst__DOT__sel_price)
                                : 0U)),6);
}
