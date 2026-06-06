// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_behavioral.h for the primary calling header

#include "Vtb_behavioral__pch.h"
#include "Vtb_behavioral__Syms.h"
#include "Vtb_behavioral___024root.h"

extern const VlWide<8>/*255:0*/ Vtb_behavioral__ConstPool__CONST_h72b6a473_0;
extern const VlWide<8>/*255:0*/ Vtb_behavioral__ConstPool__CONST_hf846785c_0;
extern const VlWide<8>/*255:0*/ Vtb_behavioral__ConstPool__CONST_h670e2312_0;
extern const VlWide<8>/*255:0*/ Vtb_behavioral__ConstPool__CONST_h9ed4c3f5_0;
extern const VlWide<8>/*255:0*/ Vtb_behavioral__ConstPool__CONST_h0c5996b4_0;
extern const VlWide<8>/*255:0*/ Vtb_behavioral__ConstPool__CONST_hc23eaddf_0;
extern const VlWide<8>/*255:0*/ Vtb_behavioral__ConstPool__CONST_hf0db003b_0;
extern const VlWide<8>/*255:0*/ Vtb_behavioral__ConstPool__CONST_h9e307437_0;
extern const VlWide<8>/*255:0*/ Vtb_behavioral__ConstPool__CONST_h8a69c039_0;
extern const VlWide<8>/*255:0*/ Vtb_behavioral__ConstPool__CONST_hf10bdf90_0;
extern const VlWide<8>/*255:0*/ Vtb_behavioral__ConstPool__CONST_h11897a12_0;
extern const VlWide<8>/*255:0*/ Vtb_behavioral__ConstPool__CONST_h23467a71_0;
extern const VlWide<32>/*1023:0*/ Vtb_behavioral__ConstPool__CONST_h44c98468_0;
extern const VlWide<32>/*1023:0*/ Vtb_behavioral__ConstPool__CONST_hdf4033ca_0;

VlCoroutine Vtb_behavioral___024root___eval_initial__TOP__Vtiming__0__1(Vtb_behavioral___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_behavioral__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_behavioral___024root___eval_initial__TOP__Vtiming__0__1\n"); );
    // Init
    CData/*5:0*/ __Vtask_tb_behavioral__DOT__check_outputs__551__exp_credito;
    __Vtask_tb_behavioral__DOT__check_outputs__551__exp_credito = 0;
    CData/*0:0*/ __Vtask_tb_behavioral__DOT__check_outputs__551__exp_p1;
    __Vtask_tb_behavioral__DOT__check_outputs__551__exp_p1 = 0;
    CData/*0:0*/ __Vtask_tb_behavioral__DOT__check_outputs__551__exp_p2;
    __Vtask_tb_behavioral__DOT__check_outputs__551__exp_p2 = 0;
    CData/*0:0*/ __Vtask_tb_behavioral__DOT__check_outputs__551__exp_p3;
    __Vtask_tb_behavioral__DOT__check_outputs__551__exp_p3 = 0;
    CData/*0:0*/ __Vtask_tb_behavioral__DOT__check_outputs__551__exp_p4;
    __Vtask_tb_behavioral__DOT__check_outputs__551__exp_p4 = 0;
    CData/*1:0*/ __Vtask_tb_behavioral__DOT__check_outputs__551__exp_errore;
    __Vtask_tb_behavioral__DOT__check_outputs__551__exp_errore = 0;
    CData/*5:0*/ __Vtask_tb_behavioral__DOT__check_outputs__551__exp_resto;
    __Vtask_tb_behavioral__DOT__check_outputs__551__exp_resto = 0;
    SData/*9:0*/ __Vtask_tb_behavioral__DOT__check_outputs__551__exp_disp;
    __Vtask_tb_behavioral__DOT__check_outputs__551__exp_disp = 0;
    CData/*5:0*/ __Vtask_tb_behavioral__DOT__check_outputs__551__exp_c01;
    __Vtask_tb_behavioral__DOT__check_outputs__551__exp_c01 = 0;
    CData/*5:0*/ __Vtask_tb_behavioral__DOT__check_outputs__551__exp_c02;
    __Vtask_tb_behavioral__DOT__check_outputs__551__exp_c02 = 0;
    CData/*5:0*/ __Vtask_tb_behavioral__DOT__check_outputs__551__exp_c05;
    __Vtask_tb_behavioral__DOT__check_outputs__551__exp_c05 = 0;
    CData/*5:0*/ __Vtask_tb_behavioral__DOT__check_outputs__551__exp_c10;
    __Vtask_tb_behavioral__DOT__check_outputs__551__exp_c10 = 0;
    VlWide<8>/*255:0*/ __Vtask_tb_behavioral__DOT__check_eq6__552__label;
    VL_ZERO_W(256, __Vtask_tb_behavioral__DOT__check_eq6__552__label);
    CData/*5:0*/ __Vtask_tb_behavioral__DOT__check_eq6__552__got;
    __Vtask_tb_behavioral__DOT__check_eq6__552__got = 0;
    CData/*5:0*/ __Vtask_tb_behavioral__DOT__check_eq6__552__exp;
    __Vtask_tb_behavioral__DOT__check_eq6__552__exp = 0;
    VlWide<8>/*255:0*/ __Vtask_tb_behavioral__DOT__check_eq1__553__label;
    VL_ZERO_W(256, __Vtask_tb_behavioral__DOT__check_eq1__553__label);
    CData/*0:0*/ __Vtask_tb_behavioral__DOT__check_eq1__553__got;
    __Vtask_tb_behavioral__DOT__check_eq1__553__got = 0;
    CData/*0:0*/ __Vtask_tb_behavioral__DOT__check_eq1__553__exp;
    __Vtask_tb_behavioral__DOT__check_eq1__553__exp = 0;
    VlWide<8>/*255:0*/ __Vtask_tb_behavioral__DOT__check_eq1__554__label;
    VL_ZERO_W(256, __Vtask_tb_behavioral__DOT__check_eq1__554__label);
    CData/*0:0*/ __Vtask_tb_behavioral__DOT__check_eq1__554__got;
    __Vtask_tb_behavioral__DOT__check_eq1__554__got = 0;
    CData/*0:0*/ __Vtask_tb_behavioral__DOT__check_eq1__554__exp;
    __Vtask_tb_behavioral__DOT__check_eq1__554__exp = 0;
    VlWide<8>/*255:0*/ __Vtask_tb_behavioral__DOT__check_eq1__555__label;
    VL_ZERO_W(256, __Vtask_tb_behavioral__DOT__check_eq1__555__label);
    CData/*0:0*/ __Vtask_tb_behavioral__DOT__check_eq1__555__got;
    __Vtask_tb_behavioral__DOT__check_eq1__555__got = 0;
    CData/*0:0*/ __Vtask_tb_behavioral__DOT__check_eq1__555__exp;
    __Vtask_tb_behavioral__DOT__check_eq1__555__exp = 0;
    VlWide<8>/*255:0*/ __Vtask_tb_behavioral__DOT__check_eq1__556__label;
    VL_ZERO_W(256, __Vtask_tb_behavioral__DOT__check_eq1__556__label);
    CData/*0:0*/ __Vtask_tb_behavioral__DOT__check_eq1__556__got;
    __Vtask_tb_behavioral__DOT__check_eq1__556__got = 0;
    CData/*0:0*/ __Vtask_tb_behavioral__DOT__check_eq1__556__exp;
    __Vtask_tb_behavioral__DOT__check_eq1__556__exp = 0;
    VlWide<8>/*255:0*/ __Vtask_tb_behavioral__DOT__check_eq2__557__label;
    VL_ZERO_W(256, __Vtask_tb_behavioral__DOT__check_eq2__557__label);
    CData/*1:0*/ __Vtask_tb_behavioral__DOT__check_eq2__557__got;
    __Vtask_tb_behavioral__DOT__check_eq2__557__got = 0;
    CData/*1:0*/ __Vtask_tb_behavioral__DOT__check_eq2__557__exp;
    __Vtask_tb_behavioral__DOT__check_eq2__557__exp = 0;
    VlWide<8>/*255:0*/ __Vtask_tb_behavioral__DOT__check_eq6__558__label;
    VL_ZERO_W(256, __Vtask_tb_behavioral__DOT__check_eq6__558__label);
    CData/*5:0*/ __Vtask_tb_behavioral__DOT__check_eq6__558__got;
    __Vtask_tb_behavioral__DOT__check_eq6__558__got = 0;
    CData/*5:0*/ __Vtask_tb_behavioral__DOT__check_eq6__558__exp;
    __Vtask_tb_behavioral__DOT__check_eq6__558__exp = 0;
    VlWide<8>/*255:0*/ __Vtask_tb_behavioral__DOT__check_eq10__559__label;
    VL_ZERO_W(256, __Vtask_tb_behavioral__DOT__check_eq10__559__label);
    SData/*9:0*/ __Vtask_tb_behavioral__DOT__check_eq10__559__got;
    __Vtask_tb_behavioral__DOT__check_eq10__559__got = 0;
    SData/*9:0*/ __Vtask_tb_behavioral__DOT__check_eq10__559__exp;
    __Vtask_tb_behavioral__DOT__check_eq10__559__exp = 0;
    VlWide<8>/*255:0*/ __Vtask_tb_behavioral__DOT__check_eq6__560__label;
    VL_ZERO_W(256, __Vtask_tb_behavioral__DOT__check_eq6__560__label);
    CData/*5:0*/ __Vtask_tb_behavioral__DOT__check_eq6__560__got;
    __Vtask_tb_behavioral__DOT__check_eq6__560__got = 0;
    CData/*5:0*/ __Vtask_tb_behavioral__DOT__check_eq6__560__exp;
    __Vtask_tb_behavioral__DOT__check_eq6__560__exp = 0;
    VlWide<8>/*255:0*/ __Vtask_tb_behavioral__DOT__check_eq6__561__label;
    VL_ZERO_W(256, __Vtask_tb_behavioral__DOT__check_eq6__561__label);
    CData/*5:0*/ __Vtask_tb_behavioral__DOT__check_eq6__561__got;
    __Vtask_tb_behavioral__DOT__check_eq6__561__got = 0;
    CData/*5:0*/ __Vtask_tb_behavioral__DOT__check_eq6__561__exp;
    __Vtask_tb_behavioral__DOT__check_eq6__561__exp = 0;
    VlWide<8>/*255:0*/ __Vtask_tb_behavioral__DOT__check_eq6__562__label;
    VL_ZERO_W(256, __Vtask_tb_behavioral__DOT__check_eq6__562__label);
    CData/*5:0*/ __Vtask_tb_behavioral__DOT__check_eq6__562__got;
    __Vtask_tb_behavioral__DOT__check_eq6__562__got = 0;
    CData/*5:0*/ __Vtask_tb_behavioral__DOT__check_eq6__562__exp;
    __Vtask_tb_behavioral__DOT__check_eq6__562__exp = 0;
    VlWide<8>/*255:0*/ __Vtask_tb_behavioral__DOT__check_eq6__563__label;
    VL_ZERO_W(256, __Vtask_tb_behavioral__DOT__check_eq6__563__label);
    CData/*5:0*/ __Vtask_tb_behavioral__DOT__check_eq6__563__got;
    __Vtask_tb_behavioral__DOT__check_eq6__563__got = 0;
    CData/*5:0*/ __Vtask_tb_behavioral__DOT__check_eq6__563__exp;
    __Vtask_tb_behavioral__DOT__check_eq6__563__exp = 0;
    CData/*5:0*/ __Vtask_tb_behavioral__DOT__print_case_report__564__exp_credito;
    __Vtask_tb_behavioral__DOT__print_case_report__564__exp_credito = 0;
    CData/*0:0*/ __Vtask_tb_behavioral__DOT__print_case_report__564__exp_p1;
    __Vtask_tb_behavioral__DOT__print_case_report__564__exp_p1 = 0;
    CData/*0:0*/ __Vtask_tb_behavioral__DOT__print_case_report__564__exp_p2;
    __Vtask_tb_behavioral__DOT__print_case_report__564__exp_p2 = 0;
    CData/*0:0*/ __Vtask_tb_behavioral__DOT__print_case_report__564__exp_p3;
    __Vtask_tb_behavioral__DOT__print_case_report__564__exp_p3 = 0;
    CData/*0:0*/ __Vtask_tb_behavioral__DOT__print_case_report__564__exp_p4;
    __Vtask_tb_behavioral__DOT__print_case_report__564__exp_p4 = 0;
    CData/*1:0*/ __Vtask_tb_behavioral__DOT__print_case_report__564__exp_errore;
    __Vtask_tb_behavioral__DOT__print_case_report__564__exp_errore = 0;
    CData/*5:0*/ __Vtask_tb_behavioral__DOT__print_case_report__564__exp_resto;
    __Vtask_tb_behavioral__DOT__print_case_report__564__exp_resto = 0;
    SData/*9:0*/ __Vtask_tb_behavioral__DOT__print_case_report__564__exp_disp;
    __Vtask_tb_behavioral__DOT__print_case_report__564__exp_disp = 0;
    CData/*5:0*/ __Vtask_tb_behavioral__DOT__print_case_report__564__exp_c01;
    __Vtask_tb_behavioral__DOT__print_case_report__564__exp_c01 = 0;
    CData/*5:0*/ __Vtask_tb_behavioral__DOT__print_case_report__564__exp_c02;
    __Vtask_tb_behavioral__DOT__print_case_report__564__exp_c02 = 0;
    CData/*5:0*/ __Vtask_tb_behavioral__DOT__print_case_report__564__exp_c05;
    __Vtask_tb_behavioral__DOT__print_case_report__564__exp_c05 = 0;
    CData/*5:0*/ __Vtask_tb_behavioral__DOT__print_case_report__564__exp_c10;
    __Vtask_tb_behavioral__DOT__print_case_report__564__exp_c10 = 0;
    VlWide<32>/*1023:0*/ __Vtask_tb_behavioral__DOT__announce_test__566__name;
    VL_ZERO_W(1024, __Vtask_tb_behavioral__DOT__announce_test__566__name);
    CData/*5:0*/ __Vtask_tb_behavioral__DOT__check_outputs__567__exp_credito;
    __Vtask_tb_behavioral__DOT__check_outputs__567__exp_credito = 0;
    CData/*0:0*/ __Vtask_tb_behavioral__DOT__check_outputs__567__exp_p1;
    __Vtask_tb_behavioral__DOT__check_outputs__567__exp_p1 = 0;
    CData/*0:0*/ __Vtask_tb_behavioral__DOT__check_outputs__567__exp_p2;
    __Vtask_tb_behavioral__DOT__check_outputs__567__exp_p2 = 0;
    CData/*0:0*/ __Vtask_tb_behavioral__DOT__check_outputs__567__exp_p3;
    __Vtask_tb_behavioral__DOT__check_outputs__567__exp_p3 = 0;
    CData/*0:0*/ __Vtask_tb_behavioral__DOT__check_outputs__567__exp_p4;
    __Vtask_tb_behavioral__DOT__check_outputs__567__exp_p4 = 0;
    CData/*1:0*/ __Vtask_tb_behavioral__DOT__check_outputs__567__exp_errore;
    __Vtask_tb_behavioral__DOT__check_outputs__567__exp_errore = 0;
    CData/*5:0*/ __Vtask_tb_behavioral__DOT__check_outputs__567__exp_resto;
    __Vtask_tb_behavioral__DOT__check_outputs__567__exp_resto = 0;
    SData/*9:0*/ __Vtask_tb_behavioral__DOT__check_outputs__567__exp_disp;
    __Vtask_tb_behavioral__DOT__check_outputs__567__exp_disp = 0;
    CData/*5:0*/ __Vtask_tb_behavioral__DOT__check_outputs__567__exp_c01;
    __Vtask_tb_behavioral__DOT__check_outputs__567__exp_c01 = 0;
    CData/*5:0*/ __Vtask_tb_behavioral__DOT__check_outputs__567__exp_c02;
    __Vtask_tb_behavioral__DOT__check_outputs__567__exp_c02 = 0;
    CData/*5:0*/ __Vtask_tb_behavioral__DOT__check_outputs__567__exp_c05;
    __Vtask_tb_behavioral__DOT__check_outputs__567__exp_c05 = 0;
    CData/*5:0*/ __Vtask_tb_behavioral__DOT__check_outputs__567__exp_c10;
    __Vtask_tb_behavioral__DOT__check_outputs__567__exp_c10 = 0;
    VlWide<8>/*255:0*/ __Vtask_tb_behavioral__DOT__check_eq6__568__label;
    VL_ZERO_W(256, __Vtask_tb_behavioral__DOT__check_eq6__568__label);
    CData/*5:0*/ __Vtask_tb_behavioral__DOT__check_eq6__568__got;
    __Vtask_tb_behavioral__DOT__check_eq6__568__got = 0;
    CData/*5:0*/ __Vtask_tb_behavioral__DOT__check_eq6__568__exp;
    __Vtask_tb_behavioral__DOT__check_eq6__568__exp = 0;
    VlWide<8>/*255:0*/ __Vtask_tb_behavioral__DOT__check_eq1__569__label;
    VL_ZERO_W(256, __Vtask_tb_behavioral__DOT__check_eq1__569__label);
    CData/*0:0*/ __Vtask_tb_behavioral__DOT__check_eq1__569__got;
    __Vtask_tb_behavioral__DOT__check_eq1__569__got = 0;
    CData/*0:0*/ __Vtask_tb_behavioral__DOT__check_eq1__569__exp;
    __Vtask_tb_behavioral__DOT__check_eq1__569__exp = 0;
    VlWide<8>/*255:0*/ __Vtask_tb_behavioral__DOT__check_eq1__570__label;
    VL_ZERO_W(256, __Vtask_tb_behavioral__DOT__check_eq1__570__label);
    CData/*0:0*/ __Vtask_tb_behavioral__DOT__check_eq1__570__got;
    __Vtask_tb_behavioral__DOT__check_eq1__570__got = 0;
    CData/*0:0*/ __Vtask_tb_behavioral__DOT__check_eq1__570__exp;
    __Vtask_tb_behavioral__DOT__check_eq1__570__exp = 0;
    VlWide<8>/*255:0*/ __Vtask_tb_behavioral__DOT__check_eq1__571__label;
    VL_ZERO_W(256, __Vtask_tb_behavioral__DOT__check_eq1__571__label);
    CData/*0:0*/ __Vtask_tb_behavioral__DOT__check_eq1__571__got;
    __Vtask_tb_behavioral__DOT__check_eq1__571__got = 0;
    CData/*0:0*/ __Vtask_tb_behavioral__DOT__check_eq1__571__exp;
    __Vtask_tb_behavioral__DOT__check_eq1__571__exp = 0;
    VlWide<8>/*255:0*/ __Vtask_tb_behavioral__DOT__check_eq1__572__label;
    VL_ZERO_W(256, __Vtask_tb_behavioral__DOT__check_eq1__572__label);
    CData/*0:0*/ __Vtask_tb_behavioral__DOT__check_eq1__572__got;
    __Vtask_tb_behavioral__DOT__check_eq1__572__got = 0;
    CData/*0:0*/ __Vtask_tb_behavioral__DOT__check_eq1__572__exp;
    __Vtask_tb_behavioral__DOT__check_eq1__572__exp = 0;
    VlWide<8>/*255:0*/ __Vtask_tb_behavioral__DOT__check_eq2__573__label;
    VL_ZERO_W(256, __Vtask_tb_behavioral__DOT__check_eq2__573__label);
    CData/*1:0*/ __Vtask_tb_behavioral__DOT__check_eq2__573__got;
    __Vtask_tb_behavioral__DOT__check_eq2__573__got = 0;
    CData/*1:0*/ __Vtask_tb_behavioral__DOT__check_eq2__573__exp;
    __Vtask_tb_behavioral__DOT__check_eq2__573__exp = 0;
    VlWide<8>/*255:0*/ __Vtask_tb_behavioral__DOT__check_eq6__574__label;
    VL_ZERO_W(256, __Vtask_tb_behavioral__DOT__check_eq6__574__label);
    CData/*5:0*/ __Vtask_tb_behavioral__DOT__check_eq6__574__got;
    __Vtask_tb_behavioral__DOT__check_eq6__574__got = 0;
    CData/*5:0*/ __Vtask_tb_behavioral__DOT__check_eq6__574__exp;
    __Vtask_tb_behavioral__DOT__check_eq6__574__exp = 0;
    VlWide<8>/*255:0*/ __Vtask_tb_behavioral__DOT__check_eq10__575__label;
    VL_ZERO_W(256, __Vtask_tb_behavioral__DOT__check_eq10__575__label);
    SData/*9:0*/ __Vtask_tb_behavioral__DOT__check_eq10__575__got;
    __Vtask_tb_behavioral__DOT__check_eq10__575__got = 0;
    SData/*9:0*/ __Vtask_tb_behavioral__DOT__check_eq10__575__exp;
    __Vtask_tb_behavioral__DOT__check_eq10__575__exp = 0;
    VlWide<8>/*255:0*/ __Vtask_tb_behavioral__DOT__check_eq6__576__label;
    VL_ZERO_W(256, __Vtask_tb_behavioral__DOT__check_eq6__576__label);
    CData/*5:0*/ __Vtask_tb_behavioral__DOT__check_eq6__576__got;
    __Vtask_tb_behavioral__DOT__check_eq6__576__got = 0;
    CData/*5:0*/ __Vtask_tb_behavioral__DOT__check_eq6__576__exp;
    __Vtask_tb_behavioral__DOT__check_eq6__576__exp = 0;
    VlWide<8>/*255:0*/ __Vtask_tb_behavioral__DOT__check_eq6__577__label;
    VL_ZERO_W(256, __Vtask_tb_behavioral__DOT__check_eq6__577__label);
    CData/*5:0*/ __Vtask_tb_behavioral__DOT__check_eq6__577__got;
    __Vtask_tb_behavioral__DOT__check_eq6__577__got = 0;
    CData/*5:0*/ __Vtask_tb_behavioral__DOT__check_eq6__577__exp;
    __Vtask_tb_behavioral__DOT__check_eq6__577__exp = 0;
    VlWide<8>/*255:0*/ __Vtask_tb_behavioral__DOT__check_eq6__578__label;
    VL_ZERO_W(256, __Vtask_tb_behavioral__DOT__check_eq6__578__label);
    CData/*5:0*/ __Vtask_tb_behavioral__DOT__check_eq6__578__got;
    __Vtask_tb_behavioral__DOT__check_eq6__578__got = 0;
    CData/*5:0*/ __Vtask_tb_behavioral__DOT__check_eq6__578__exp;
    __Vtask_tb_behavioral__DOT__check_eq6__578__exp = 0;
    VlWide<8>/*255:0*/ __Vtask_tb_behavioral__DOT__check_eq6__579__label;
    VL_ZERO_W(256, __Vtask_tb_behavioral__DOT__check_eq6__579__label);
    CData/*5:0*/ __Vtask_tb_behavioral__DOT__check_eq6__579__got;
    __Vtask_tb_behavioral__DOT__check_eq6__579__got = 0;
    CData/*5:0*/ __Vtask_tb_behavioral__DOT__check_eq6__579__exp;
    __Vtask_tb_behavioral__DOT__check_eq6__579__exp = 0;
    CData/*5:0*/ __Vtask_tb_behavioral__DOT__print_case_report__580__exp_credito;
    __Vtask_tb_behavioral__DOT__print_case_report__580__exp_credito = 0;
    CData/*0:0*/ __Vtask_tb_behavioral__DOT__print_case_report__580__exp_p1;
    __Vtask_tb_behavioral__DOT__print_case_report__580__exp_p1 = 0;
    CData/*0:0*/ __Vtask_tb_behavioral__DOT__print_case_report__580__exp_p2;
    __Vtask_tb_behavioral__DOT__print_case_report__580__exp_p2 = 0;
    CData/*0:0*/ __Vtask_tb_behavioral__DOT__print_case_report__580__exp_p3;
    __Vtask_tb_behavioral__DOT__print_case_report__580__exp_p3 = 0;
    CData/*0:0*/ __Vtask_tb_behavioral__DOT__print_case_report__580__exp_p4;
    __Vtask_tb_behavioral__DOT__print_case_report__580__exp_p4 = 0;
    CData/*1:0*/ __Vtask_tb_behavioral__DOT__print_case_report__580__exp_errore;
    __Vtask_tb_behavioral__DOT__print_case_report__580__exp_errore = 0;
    CData/*5:0*/ __Vtask_tb_behavioral__DOT__print_case_report__580__exp_resto;
    __Vtask_tb_behavioral__DOT__print_case_report__580__exp_resto = 0;
    SData/*9:0*/ __Vtask_tb_behavioral__DOT__print_case_report__580__exp_disp;
    __Vtask_tb_behavioral__DOT__print_case_report__580__exp_disp = 0;
    CData/*5:0*/ __Vtask_tb_behavioral__DOT__print_case_report__580__exp_c01;
    __Vtask_tb_behavioral__DOT__print_case_report__580__exp_c01 = 0;
    CData/*5:0*/ __Vtask_tb_behavioral__DOT__print_case_report__580__exp_c02;
    __Vtask_tb_behavioral__DOT__print_case_report__580__exp_c02 = 0;
    CData/*5:0*/ __Vtask_tb_behavioral__DOT__print_case_report__580__exp_c05;
    __Vtask_tb_behavioral__DOT__print_case_report__580__exp_c05 = 0;
    CData/*5:0*/ __Vtask_tb_behavioral__DOT__print_case_report__580__exp_c10;
    __Vtask_tb_behavioral__DOT__print_case_report__580__exp_c10 = 0;
    VlWide<32>/*1023:0*/ __Vtask_tb_behavioral__DOT__announce_test__582__name;
    VL_ZERO_W(1024, __Vtask_tb_behavioral__DOT__announce_test__582__name);
    CData/*5:0*/ __Vtask_tb_behavioral__DOT__init_word__584__cfg_value;
    __Vtask_tb_behavioral__DOT__init_word__584__cfg_value = 0;
    CData/*2:0*/ __Vtask_tb_behavioral__DOT__step__585__coin_i;
    __Vtask_tb_behavioral__DOT__step__585__coin_i = 0;
    CData/*2:0*/ __Vtask_tb_behavioral__DOT__step__585__selezione_i;
    __Vtask_tb_behavioral__DOT__step__585__selezione_i = 0;
    CData/*0:0*/ __Vtask_tb_behavioral__DOT__step__585__conferma_i;
    __Vtask_tb_behavioral__DOT__step__585__conferma_i = 0;
    CData/*0:0*/ __Vtask_tb_behavioral__DOT__step__585__annulla_i;
    __Vtask_tb_behavioral__DOT__step__585__annulla_i = 0;
    CData/*5:0*/ __Vtask_tb_behavioral__DOT__init_word__586__cfg_value;
    __Vtask_tb_behavioral__DOT__init_word__586__cfg_value = 0;
    CData/*2:0*/ __Vtask_tb_behavioral__DOT__step__587__coin_i;
    __Vtask_tb_behavioral__DOT__step__587__coin_i = 0;
    CData/*2:0*/ __Vtask_tb_behavioral__DOT__step__587__selezione_i;
    __Vtask_tb_behavioral__DOT__step__587__selezione_i = 0;
    CData/*0:0*/ __Vtask_tb_behavioral__DOT__step__587__conferma_i;
    __Vtask_tb_behavioral__DOT__step__587__conferma_i = 0;
    CData/*0:0*/ __Vtask_tb_behavioral__DOT__step__587__annulla_i;
    __Vtask_tb_behavioral__DOT__step__587__annulla_i = 0;
    CData/*5:0*/ __Vtask_tb_behavioral__DOT__init_word__588__cfg_value;
    __Vtask_tb_behavioral__DOT__init_word__588__cfg_value = 0;
    CData/*2:0*/ __Vtask_tb_behavioral__DOT__step__589__coin_i;
    __Vtask_tb_behavioral__DOT__step__589__coin_i = 0;
    CData/*2:0*/ __Vtask_tb_behavioral__DOT__step__589__selezione_i;
    __Vtask_tb_behavioral__DOT__step__589__selezione_i = 0;
    CData/*0:0*/ __Vtask_tb_behavioral__DOT__step__589__conferma_i;
    __Vtask_tb_behavioral__DOT__step__589__conferma_i = 0;
    CData/*0:0*/ __Vtask_tb_behavioral__DOT__step__589__annulla_i;
    __Vtask_tb_behavioral__DOT__step__589__annulla_i = 0;
    CData/*5:0*/ __Vtask_tb_behavioral__DOT__init_word__590__cfg_value;
    __Vtask_tb_behavioral__DOT__init_word__590__cfg_value = 0;
    CData/*2:0*/ __Vtask_tb_behavioral__DOT__step__591__coin_i;
    __Vtask_tb_behavioral__DOT__step__591__coin_i = 0;
    CData/*2:0*/ __Vtask_tb_behavioral__DOT__step__591__selezione_i;
    __Vtask_tb_behavioral__DOT__step__591__selezione_i = 0;
    CData/*0:0*/ __Vtask_tb_behavioral__DOT__step__591__conferma_i;
    __Vtask_tb_behavioral__DOT__step__591__conferma_i = 0;
    CData/*0:0*/ __Vtask_tb_behavioral__DOT__step__591__annulla_i;
    __Vtask_tb_behavioral__DOT__step__591__annulla_i = 0;
    CData/*5:0*/ __Vtask_tb_behavioral__DOT__init_word__592__cfg_value;
    __Vtask_tb_behavioral__DOT__init_word__592__cfg_value = 0;
    CData/*2:0*/ __Vtask_tb_behavioral__DOT__step__593__coin_i;
    __Vtask_tb_behavioral__DOT__step__593__coin_i = 0;
    CData/*2:0*/ __Vtask_tb_behavioral__DOT__step__593__selezione_i;
    __Vtask_tb_behavioral__DOT__step__593__selezione_i = 0;
    CData/*0:0*/ __Vtask_tb_behavioral__DOT__step__593__conferma_i;
    __Vtask_tb_behavioral__DOT__step__593__conferma_i = 0;
    CData/*0:0*/ __Vtask_tb_behavioral__DOT__step__593__annulla_i;
    __Vtask_tb_behavioral__DOT__step__593__annulla_i = 0;
    CData/*5:0*/ __Vtask_tb_behavioral__DOT__init_word__594__cfg_value;
    __Vtask_tb_behavioral__DOT__init_word__594__cfg_value = 0;
    CData/*2:0*/ __Vtask_tb_behavioral__DOT__step__595__coin_i;
    __Vtask_tb_behavioral__DOT__step__595__coin_i = 0;
    CData/*2:0*/ __Vtask_tb_behavioral__DOT__step__595__selezione_i;
    __Vtask_tb_behavioral__DOT__step__595__selezione_i = 0;
    CData/*0:0*/ __Vtask_tb_behavioral__DOT__step__595__conferma_i;
    __Vtask_tb_behavioral__DOT__step__595__conferma_i = 0;
    CData/*0:0*/ __Vtask_tb_behavioral__DOT__step__595__annulla_i;
    __Vtask_tb_behavioral__DOT__step__595__annulla_i = 0;
    CData/*5:0*/ __Vtask_tb_behavioral__DOT__init_word__596__cfg_value;
    __Vtask_tb_behavioral__DOT__init_word__596__cfg_value = 0;
    CData/*2:0*/ __Vtask_tb_behavioral__DOT__step__597__coin_i;
    __Vtask_tb_behavioral__DOT__step__597__coin_i = 0;
    CData/*2:0*/ __Vtask_tb_behavioral__DOT__step__597__selezione_i;
    __Vtask_tb_behavioral__DOT__step__597__selezione_i = 0;
    CData/*0:0*/ __Vtask_tb_behavioral__DOT__step__597__conferma_i;
    __Vtask_tb_behavioral__DOT__step__597__conferma_i = 0;
    CData/*0:0*/ __Vtask_tb_behavioral__DOT__step__597__annulla_i;
    __Vtask_tb_behavioral__DOT__step__597__annulla_i = 0;
    CData/*5:0*/ __Vtask_tb_behavioral__DOT__init_word__598__cfg_value;
    __Vtask_tb_behavioral__DOT__init_word__598__cfg_value = 0;
    CData/*2:0*/ __Vtask_tb_behavioral__DOT__step__599__coin_i;
    __Vtask_tb_behavioral__DOT__step__599__coin_i = 0;
    CData/*2:0*/ __Vtask_tb_behavioral__DOT__step__599__selezione_i;
    __Vtask_tb_behavioral__DOT__step__599__selezione_i = 0;
    CData/*0:0*/ __Vtask_tb_behavioral__DOT__step__599__conferma_i;
    __Vtask_tb_behavioral__DOT__step__599__conferma_i = 0;
    CData/*0:0*/ __Vtask_tb_behavioral__DOT__step__599__annulla_i;
    __Vtask_tb_behavioral__DOT__step__599__annulla_i = 0;
    CData/*5:0*/ __Vtask_tb_behavioral__DOT__init_word__600__cfg_value;
    __Vtask_tb_behavioral__DOT__init_word__600__cfg_value = 0;
    CData/*2:0*/ __Vtask_tb_behavioral__DOT__step__601__coin_i;
    __Vtask_tb_behavioral__DOT__step__601__coin_i = 0;
    CData/*2:0*/ __Vtask_tb_behavioral__DOT__step__601__selezione_i;
    __Vtask_tb_behavioral__DOT__step__601__selezione_i = 0;
    CData/*0:0*/ __Vtask_tb_behavioral__DOT__step__601__conferma_i;
    __Vtask_tb_behavioral__DOT__step__601__conferma_i = 0;
    CData/*0:0*/ __Vtask_tb_behavioral__DOT__step__601__annulla_i;
    __Vtask_tb_behavioral__DOT__step__601__annulla_i = 0;
    CData/*5:0*/ __Vtask_tb_behavioral__DOT__init_word__602__cfg_value;
    __Vtask_tb_behavioral__DOT__init_word__602__cfg_value = 0;
    CData/*2:0*/ __Vtask_tb_behavioral__DOT__step__603__coin_i;
    __Vtask_tb_behavioral__DOT__step__603__coin_i = 0;
    CData/*2:0*/ __Vtask_tb_behavioral__DOT__step__603__selezione_i;
    __Vtask_tb_behavioral__DOT__step__603__selezione_i = 0;
    CData/*0:0*/ __Vtask_tb_behavioral__DOT__step__603__conferma_i;
    __Vtask_tb_behavioral__DOT__step__603__conferma_i = 0;
    CData/*0:0*/ __Vtask_tb_behavioral__DOT__step__603__annulla_i;
    __Vtask_tb_behavioral__DOT__step__603__annulla_i = 0;
    CData/*5:0*/ __Vtask_tb_behavioral__DOT__init_word__604__cfg_value;
    __Vtask_tb_behavioral__DOT__init_word__604__cfg_value = 0;
    CData/*2:0*/ __Vtask_tb_behavioral__DOT__step__605__coin_i;
    __Vtask_tb_behavioral__DOT__step__605__coin_i = 0;
    CData/*2:0*/ __Vtask_tb_behavioral__DOT__step__605__selezione_i;
    __Vtask_tb_behavioral__DOT__step__605__selezione_i = 0;
    CData/*0:0*/ __Vtask_tb_behavioral__DOT__step__605__conferma_i;
    __Vtask_tb_behavioral__DOT__step__605__conferma_i = 0;
    CData/*0:0*/ __Vtask_tb_behavioral__DOT__step__605__annulla_i;
    __Vtask_tb_behavioral__DOT__step__605__annulla_i = 0;
    CData/*5:0*/ __Vtask_tb_behavioral__DOT__init_word__606__cfg_value;
    __Vtask_tb_behavioral__DOT__init_word__606__cfg_value = 0;
    CData/*2:0*/ __Vtask_tb_behavioral__DOT__step__607__coin_i;
    __Vtask_tb_behavioral__DOT__step__607__coin_i = 0;
    CData/*2:0*/ __Vtask_tb_behavioral__DOT__step__607__selezione_i;
    __Vtask_tb_behavioral__DOT__step__607__selezione_i = 0;
    CData/*0:0*/ __Vtask_tb_behavioral__DOT__step__607__conferma_i;
    __Vtask_tb_behavioral__DOT__step__607__conferma_i = 0;
    CData/*0:0*/ __Vtask_tb_behavioral__DOT__step__607__annulla_i;
    __Vtask_tb_behavioral__DOT__step__607__annulla_i = 0;
    CData/*2:0*/ __Vtask_tb_behavioral__DOT__step__608__coin_i;
    __Vtask_tb_behavioral__DOT__step__608__coin_i = 0;
    CData/*2:0*/ __Vtask_tb_behavioral__DOT__step__608__selezione_i;
    __Vtask_tb_behavioral__DOT__step__608__selezione_i = 0;
    CData/*0:0*/ __Vtask_tb_behavioral__DOT__step__608__conferma_i;
    __Vtask_tb_behavioral__DOT__step__608__conferma_i = 0;
    CData/*0:0*/ __Vtask_tb_behavioral__DOT__step__608__annulla_i;
    __Vtask_tb_behavioral__DOT__step__608__annulla_i = 0;
    CData/*5:0*/ __Vtask_tb_behavioral__DOT__check_outputs__609__exp_credito;
    __Vtask_tb_behavioral__DOT__check_outputs__609__exp_credito = 0;
    CData/*0:0*/ __Vtask_tb_behavioral__DOT__check_outputs__609__exp_p1;
    __Vtask_tb_behavioral__DOT__check_outputs__609__exp_p1 = 0;
    CData/*0:0*/ __Vtask_tb_behavioral__DOT__check_outputs__609__exp_p2;
    __Vtask_tb_behavioral__DOT__check_outputs__609__exp_p2 = 0;
    CData/*0:0*/ __Vtask_tb_behavioral__DOT__check_outputs__609__exp_p3;
    __Vtask_tb_behavioral__DOT__check_outputs__609__exp_p3 = 0;
    CData/*0:0*/ __Vtask_tb_behavioral__DOT__check_outputs__609__exp_p4;
    __Vtask_tb_behavioral__DOT__check_outputs__609__exp_p4 = 0;
    CData/*1:0*/ __Vtask_tb_behavioral__DOT__check_outputs__609__exp_errore;
    __Vtask_tb_behavioral__DOT__check_outputs__609__exp_errore = 0;
    CData/*5:0*/ __Vtask_tb_behavioral__DOT__check_outputs__609__exp_resto;
    __Vtask_tb_behavioral__DOT__check_outputs__609__exp_resto = 0;
    SData/*9:0*/ __Vtask_tb_behavioral__DOT__check_outputs__609__exp_disp;
    __Vtask_tb_behavioral__DOT__check_outputs__609__exp_disp = 0;
    CData/*5:0*/ __Vtask_tb_behavioral__DOT__check_outputs__609__exp_c01;
    __Vtask_tb_behavioral__DOT__check_outputs__609__exp_c01 = 0;
    CData/*5:0*/ __Vtask_tb_behavioral__DOT__check_outputs__609__exp_c02;
    __Vtask_tb_behavioral__DOT__check_outputs__609__exp_c02 = 0;
    CData/*5:0*/ __Vtask_tb_behavioral__DOT__check_outputs__609__exp_c05;
    __Vtask_tb_behavioral__DOT__check_outputs__609__exp_c05 = 0;
    CData/*5:0*/ __Vtask_tb_behavioral__DOT__check_outputs__609__exp_c10;
    __Vtask_tb_behavioral__DOT__check_outputs__609__exp_c10 = 0;
    VlWide<8>/*255:0*/ __Vtask_tb_behavioral__DOT__check_eq6__610__label;
    VL_ZERO_W(256, __Vtask_tb_behavioral__DOT__check_eq6__610__label);
    CData/*5:0*/ __Vtask_tb_behavioral__DOT__check_eq6__610__got;
    __Vtask_tb_behavioral__DOT__check_eq6__610__got = 0;
    CData/*5:0*/ __Vtask_tb_behavioral__DOT__check_eq6__610__exp;
    __Vtask_tb_behavioral__DOT__check_eq6__610__exp = 0;
    VlWide<8>/*255:0*/ __Vtask_tb_behavioral__DOT__check_eq1__611__label;
    VL_ZERO_W(256, __Vtask_tb_behavioral__DOT__check_eq1__611__label);
    CData/*0:0*/ __Vtask_tb_behavioral__DOT__check_eq1__611__got;
    __Vtask_tb_behavioral__DOT__check_eq1__611__got = 0;
    CData/*0:0*/ __Vtask_tb_behavioral__DOT__check_eq1__611__exp;
    __Vtask_tb_behavioral__DOT__check_eq1__611__exp = 0;
    VlWide<8>/*255:0*/ __Vtask_tb_behavioral__DOT__check_eq1__612__label;
    VL_ZERO_W(256, __Vtask_tb_behavioral__DOT__check_eq1__612__label);
    CData/*0:0*/ __Vtask_tb_behavioral__DOT__check_eq1__612__got;
    __Vtask_tb_behavioral__DOT__check_eq1__612__got = 0;
    CData/*0:0*/ __Vtask_tb_behavioral__DOT__check_eq1__612__exp;
    __Vtask_tb_behavioral__DOT__check_eq1__612__exp = 0;
    VlWide<8>/*255:0*/ __Vtask_tb_behavioral__DOT__check_eq1__613__label;
    VL_ZERO_W(256, __Vtask_tb_behavioral__DOT__check_eq1__613__label);
    CData/*0:0*/ __Vtask_tb_behavioral__DOT__check_eq1__613__got;
    __Vtask_tb_behavioral__DOT__check_eq1__613__got = 0;
    CData/*0:0*/ __Vtask_tb_behavioral__DOT__check_eq1__613__exp;
    __Vtask_tb_behavioral__DOT__check_eq1__613__exp = 0;
    VlWide<8>/*255:0*/ __Vtask_tb_behavioral__DOT__check_eq1__614__label;
    VL_ZERO_W(256, __Vtask_tb_behavioral__DOT__check_eq1__614__label);
    CData/*0:0*/ __Vtask_tb_behavioral__DOT__check_eq1__614__got;
    __Vtask_tb_behavioral__DOT__check_eq1__614__got = 0;
    CData/*0:0*/ __Vtask_tb_behavioral__DOT__check_eq1__614__exp;
    __Vtask_tb_behavioral__DOT__check_eq1__614__exp = 0;
    VlWide<8>/*255:0*/ __Vtask_tb_behavioral__DOT__check_eq2__615__label;
    VL_ZERO_W(256, __Vtask_tb_behavioral__DOT__check_eq2__615__label);
    CData/*1:0*/ __Vtask_tb_behavioral__DOT__check_eq2__615__got;
    __Vtask_tb_behavioral__DOT__check_eq2__615__got = 0;
    CData/*1:0*/ __Vtask_tb_behavioral__DOT__check_eq2__615__exp;
    __Vtask_tb_behavioral__DOT__check_eq2__615__exp = 0;
    VlWide<8>/*255:0*/ __Vtask_tb_behavioral__DOT__check_eq6__616__label;
    VL_ZERO_W(256, __Vtask_tb_behavioral__DOT__check_eq6__616__label);
    CData/*5:0*/ __Vtask_tb_behavioral__DOT__check_eq6__616__got;
    __Vtask_tb_behavioral__DOT__check_eq6__616__got = 0;
    CData/*5:0*/ __Vtask_tb_behavioral__DOT__check_eq6__616__exp;
    __Vtask_tb_behavioral__DOT__check_eq6__616__exp = 0;
    VlWide<8>/*255:0*/ __Vtask_tb_behavioral__DOT__check_eq10__617__label;
    VL_ZERO_W(256, __Vtask_tb_behavioral__DOT__check_eq10__617__label);
    SData/*9:0*/ __Vtask_tb_behavioral__DOT__check_eq10__617__got;
    __Vtask_tb_behavioral__DOT__check_eq10__617__got = 0;
    SData/*9:0*/ __Vtask_tb_behavioral__DOT__check_eq10__617__exp;
    __Vtask_tb_behavioral__DOT__check_eq10__617__exp = 0;
    VlWide<8>/*255:0*/ __Vtask_tb_behavioral__DOT__check_eq6__618__label;
    VL_ZERO_W(256, __Vtask_tb_behavioral__DOT__check_eq6__618__label);
    CData/*5:0*/ __Vtask_tb_behavioral__DOT__check_eq6__618__got;
    __Vtask_tb_behavioral__DOT__check_eq6__618__got = 0;
    CData/*5:0*/ __Vtask_tb_behavioral__DOT__check_eq6__618__exp;
    __Vtask_tb_behavioral__DOT__check_eq6__618__exp = 0;
    VlWide<8>/*255:0*/ __Vtask_tb_behavioral__DOT__check_eq6__619__label;
    VL_ZERO_W(256, __Vtask_tb_behavioral__DOT__check_eq6__619__label);
    CData/*5:0*/ __Vtask_tb_behavioral__DOT__check_eq6__619__got;
    __Vtask_tb_behavioral__DOT__check_eq6__619__got = 0;
    CData/*5:0*/ __Vtask_tb_behavioral__DOT__check_eq6__619__exp;
    __Vtask_tb_behavioral__DOT__check_eq6__619__exp = 0;
    VlWide<8>/*255:0*/ __Vtask_tb_behavioral__DOT__check_eq6__620__label;
    VL_ZERO_W(256, __Vtask_tb_behavioral__DOT__check_eq6__620__label);
    CData/*5:0*/ __Vtask_tb_behavioral__DOT__check_eq6__620__got;
    __Vtask_tb_behavioral__DOT__check_eq6__620__got = 0;
    CData/*5:0*/ __Vtask_tb_behavioral__DOT__check_eq6__620__exp;
    __Vtask_tb_behavioral__DOT__check_eq6__620__exp = 0;
    VlWide<8>/*255:0*/ __Vtask_tb_behavioral__DOT__check_eq6__621__label;
    VL_ZERO_W(256, __Vtask_tb_behavioral__DOT__check_eq6__621__label);
    CData/*5:0*/ __Vtask_tb_behavioral__DOT__check_eq6__621__got;
    __Vtask_tb_behavioral__DOT__check_eq6__621__got = 0;
    CData/*5:0*/ __Vtask_tb_behavioral__DOT__check_eq6__621__exp;
    __Vtask_tb_behavioral__DOT__check_eq6__621__exp = 0;
    CData/*5:0*/ __Vtask_tb_behavioral__DOT__print_case_report__622__exp_credito;
    __Vtask_tb_behavioral__DOT__print_case_report__622__exp_credito = 0;
    CData/*0:0*/ __Vtask_tb_behavioral__DOT__print_case_report__622__exp_p1;
    __Vtask_tb_behavioral__DOT__print_case_report__622__exp_p1 = 0;
    CData/*0:0*/ __Vtask_tb_behavioral__DOT__print_case_report__622__exp_p2;
    __Vtask_tb_behavioral__DOT__print_case_report__622__exp_p2 = 0;
    CData/*0:0*/ __Vtask_tb_behavioral__DOT__print_case_report__622__exp_p3;
    __Vtask_tb_behavioral__DOT__print_case_report__622__exp_p3 = 0;
    CData/*0:0*/ __Vtask_tb_behavioral__DOT__print_case_report__622__exp_p4;
    __Vtask_tb_behavioral__DOT__print_case_report__622__exp_p4 = 0;
    CData/*1:0*/ __Vtask_tb_behavioral__DOT__print_case_report__622__exp_errore;
    __Vtask_tb_behavioral__DOT__print_case_report__622__exp_errore = 0;
    CData/*5:0*/ __Vtask_tb_behavioral__DOT__print_case_report__622__exp_resto;
    __Vtask_tb_behavioral__DOT__print_case_report__622__exp_resto = 0;
    SData/*9:0*/ __Vtask_tb_behavioral__DOT__print_case_report__622__exp_disp;
    __Vtask_tb_behavioral__DOT__print_case_report__622__exp_disp = 0;
    CData/*5:0*/ __Vtask_tb_behavioral__DOT__print_case_report__622__exp_c01;
    __Vtask_tb_behavioral__DOT__print_case_report__622__exp_c01 = 0;
    CData/*5:0*/ __Vtask_tb_behavioral__DOT__print_case_report__622__exp_c02;
    __Vtask_tb_behavioral__DOT__print_case_report__622__exp_c02 = 0;
    CData/*5:0*/ __Vtask_tb_behavioral__DOT__print_case_report__622__exp_c05;
    __Vtask_tb_behavioral__DOT__print_case_report__622__exp_c05 = 0;
    CData/*5:0*/ __Vtask_tb_behavioral__DOT__print_case_report__622__exp_c10;
    __Vtask_tb_behavioral__DOT__print_case_report__622__exp_c10 = 0;
    // Body
    vlSelf->tb_behavioral__DOT__conferma = vlSelf->__Vtask_tb_behavioral__DOT__step__550__conferma_i;
    vlSelf->tb_behavioral__DOT__annulla = vlSelf->__Vtask_tb_behavioral__DOT__step__550__annulla_i;
    vlSelf->tb_behavioral__DOT__last_coin = vlSelf->__Vtask_tb_behavioral__DOT__step__550__coin_i;
    vlSelf->tb_behavioral__DOT__last_selezione = vlSelf->__Vtask_tb_behavioral__DOT__step__550__selezione_i;
    vlSelf->tb_behavioral__DOT__last_conferma = vlSelf->__Vtask_tb_behavioral__DOT__step__550__conferma_i;
    vlSelf->tb_behavioral__DOT__last_annulla = vlSelf->__Vtask_tb_behavioral__DOT__step__550__annulla_i;
    co_await vlSelf->__VtrigSched_h2394f4a5__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_behavioral.clk)", 
                                                       "behavioral/tb_behavioral.v", 
                                                       79);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "behavioral/tb_behavioral.v", 
                                       80);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_behavioral__DOT__check_outputs__551__exp_c10 = 0U;
    __Vtask_tb_behavioral__DOT__check_outputs__551__exp_c05 = 0U;
    __Vtask_tb_behavioral__DOT__check_outputs__551__exp_c02 = 0U;
    __Vtask_tb_behavioral__DOT__check_outputs__551__exp_c01 = 0U;
    __Vtask_tb_behavioral__DOT__check_outputs__551__exp_disp = 0x96U;
    __Vtask_tb_behavioral__DOT__check_outputs__551__exp_resto = 0U;
    __Vtask_tb_behavioral__DOT__check_outputs__551__exp_errore = 0U;
    __Vtask_tb_behavioral__DOT__check_outputs__551__exp_p4 = 0U;
    __Vtask_tb_behavioral__DOT__check_outputs__551__exp_p3 = 0U;
    __Vtask_tb_behavioral__DOT__check_outputs__551__exp_p2 = 0U;
    __Vtask_tb_behavioral__DOT__check_outputs__551__exp_p1 = 0U;
    __Vtask_tb_behavioral__DOT__check_outputs__551__exp_credito = 0xaU;
    __Vtask_tb_behavioral__DOT__check_eq6__552__exp 
        = __Vtask_tb_behavioral__DOT__check_outputs__551__exp_credito;
    __Vtask_tb_behavioral__DOT__check_eq6__552__got 
        = vlSelf->tb_behavioral__DOT__credito;
    __Vtask_tb_behavioral__DOT__check_eq6__552__label[0U] 
        = Vtb_behavioral__ConstPool__CONST_h72b6a473_0[0U];
    __Vtask_tb_behavioral__DOT__check_eq6__552__label[1U] 
        = Vtb_behavioral__ConstPool__CONST_h72b6a473_0[1U];
    __Vtask_tb_behavioral__DOT__check_eq6__552__label[2U] 
        = Vtb_behavioral__ConstPool__CONST_h72b6a473_0[2U];
    __Vtask_tb_behavioral__DOT__check_eq6__552__label[3U] 
        = Vtb_behavioral__ConstPool__CONST_h72b6a473_0[3U];
    __Vtask_tb_behavioral__DOT__check_eq6__552__label[4U] 
        = Vtb_behavioral__ConstPool__CONST_h72b6a473_0[4U];
    __Vtask_tb_behavioral__DOT__check_eq6__552__label[5U] 
        = Vtb_behavioral__ConstPool__CONST_h72b6a473_0[5U];
    __Vtask_tb_behavioral__DOT__check_eq6__552__label[6U] 
        = Vtb_behavioral__ConstPool__CONST_h72b6a473_0[6U];
    __Vtask_tb_behavioral__DOT__check_eq6__552__label[7U] 
        = Vtb_behavioral__ConstPool__CONST_h72b6a473_0[7U];
    if (VL_UNLIKELY(((IData)(__Vtask_tb_behavioral__DOT__check_eq6__552__got) 
                     != (IData)(__Vtask_tb_behavioral__DOT__check_eq6__552__exp)))) {
        VL_WRITEF("FAIL %0s time=%0t got=%0# exp=%0#\n[%0t] %%Fatal: tb_behavioral.v:115: Assertion failed in %Ntb_behavioral.check_eq6\n",
                  256,__Vtask_tb_behavioral__DOT__check_eq6__552__label.data(),
                  64,VL_TIME_UNITED_Q(1000),-9,6,(IData)(__Vtask_tb_behavioral__DOT__check_eq6__552__got),
                  6,__Vtask_tb_behavioral__DOT__check_eq6__552__exp,
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("behavioral/tb_behavioral.v", 115, "");
    }
    __Vtask_tb_behavioral__DOT__check_eq1__553__exp 
        = __Vtask_tb_behavioral__DOT__check_outputs__551__exp_p1;
    __Vtask_tb_behavioral__DOT__check_eq1__553__got 
        = vlSelf->tb_behavioral__DOT__prodotto1;
    __Vtask_tb_behavioral__DOT__check_eq1__553__label[0U] 
        = Vtb_behavioral__ConstPool__CONST_hf846785c_0[0U];
    __Vtask_tb_behavioral__DOT__check_eq1__553__label[1U] 
        = Vtb_behavioral__ConstPool__CONST_hf846785c_0[1U];
    __Vtask_tb_behavioral__DOT__check_eq1__553__label[2U] 
        = Vtb_behavioral__ConstPool__CONST_hf846785c_0[2U];
    __Vtask_tb_behavioral__DOT__check_eq1__553__label[3U] 
        = Vtb_behavioral__ConstPool__CONST_hf846785c_0[3U];
    __Vtask_tb_behavioral__DOT__check_eq1__553__label[4U] 
        = Vtb_behavioral__ConstPool__CONST_hf846785c_0[4U];
    __Vtask_tb_behavioral__DOT__check_eq1__553__label[5U] 
        = Vtb_behavioral__ConstPool__CONST_hf846785c_0[5U];
    __Vtask_tb_behavioral__DOT__check_eq1__553__label[6U] 
        = Vtb_behavioral__ConstPool__CONST_hf846785c_0[6U];
    __Vtask_tb_behavioral__DOT__check_eq1__553__label[7U] 
        = Vtb_behavioral__ConstPool__CONST_hf846785c_0[7U];
    if (VL_UNLIKELY(((IData)(__Vtask_tb_behavioral__DOT__check_eq1__553__got) 
                     != (IData)(__Vtask_tb_behavioral__DOT__check_eq1__553__exp)))) {
        VL_WRITEF("FAIL %0s time=%0t got=%0# exp=%0#\n[%0t] %%Fatal: tb_behavioral.v:91: Assertion failed in %Ntb_behavioral.check_eq1\n",
                  256,__Vtask_tb_behavioral__DOT__check_eq1__553__label.data(),
                  64,VL_TIME_UNITED_Q(1000),-9,1,(IData)(__Vtask_tb_behavioral__DOT__check_eq1__553__got),
                  1,__Vtask_tb_behavioral__DOT__check_eq1__553__exp,
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("behavioral/tb_behavioral.v", 91, "");
    }
    __Vtask_tb_behavioral__DOT__check_eq1__554__exp 
        = __Vtask_tb_behavioral__DOT__check_outputs__551__exp_p2;
    __Vtask_tb_behavioral__DOT__check_eq1__554__got 
        = vlSelf->tb_behavioral__DOT__prodotto2;
    __Vtask_tb_behavioral__DOT__check_eq1__554__label[0U] 
        = Vtb_behavioral__ConstPool__CONST_h670e2312_0[0U];
    __Vtask_tb_behavioral__DOT__check_eq1__554__label[1U] 
        = Vtb_behavioral__ConstPool__CONST_h670e2312_0[1U];
    __Vtask_tb_behavioral__DOT__check_eq1__554__label[2U] 
        = Vtb_behavioral__ConstPool__CONST_h670e2312_0[2U];
    __Vtask_tb_behavioral__DOT__check_eq1__554__label[3U] 
        = Vtb_behavioral__ConstPool__CONST_h670e2312_0[3U];
    __Vtask_tb_behavioral__DOT__check_eq1__554__label[4U] 
        = Vtb_behavioral__ConstPool__CONST_h670e2312_0[4U];
    __Vtask_tb_behavioral__DOT__check_eq1__554__label[5U] 
        = Vtb_behavioral__ConstPool__CONST_h670e2312_0[5U];
    __Vtask_tb_behavioral__DOT__check_eq1__554__label[6U] 
        = Vtb_behavioral__ConstPool__CONST_h670e2312_0[6U];
    __Vtask_tb_behavioral__DOT__check_eq1__554__label[7U] 
        = Vtb_behavioral__ConstPool__CONST_h670e2312_0[7U];
    if (VL_UNLIKELY(((IData)(__Vtask_tb_behavioral__DOT__check_eq1__554__got) 
                     != (IData)(__Vtask_tb_behavioral__DOT__check_eq1__554__exp)))) {
        VL_WRITEF("FAIL %0s time=%0t got=%0# exp=%0#\n[%0t] %%Fatal: tb_behavioral.v:91: Assertion failed in %Ntb_behavioral.check_eq1\n",
                  256,__Vtask_tb_behavioral__DOT__check_eq1__554__label.data(),
                  64,VL_TIME_UNITED_Q(1000),-9,1,(IData)(__Vtask_tb_behavioral__DOT__check_eq1__554__got),
                  1,__Vtask_tb_behavioral__DOT__check_eq1__554__exp,
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("behavioral/tb_behavioral.v", 91, "");
    }
    __Vtask_tb_behavioral__DOT__check_eq1__555__exp 
        = __Vtask_tb_behavioral__DOT__check_outputs__551__exp_p3;
    __Vtask_tb_behavioral__DOT__check_eq1__555__got 
        = vlSelf->tb_behavioral__DOT__prodotto3;
    __Vtask_tb_behavioral__DOT__check_eq1__555__label[0U] 
        = Vtb_behavioral__ConstPool__CONST_h9ed4c3f5_0[0U];
    __Vtask_tb_behavioral__DOT__check_eq1__555__label[1U] 
        = Vtb_behavioral__ConstPool__CONST_h9ed4c3f5_0[1U];
    __Vtask_tb_behavioral__DOT__check_eq1__555__label[2U] 
        = Vtb_behavioral__ConstPool__CONST_h9ed4c3f5_0[2U];
    __Vtask_tb_behavioral__DOT__check_eq1__555__label[3U] 
        = Vtb_behavioral__ConstPool__CONST_h9ed4c3f5_0[3U];
    __Vtask_tb_behavioral__DOT__check_eq1__555__label[4U] 
        = Vtb_behavioral__ConstPool__CONST_h9ed4c3f5_0[4U];
    __Vtask_tb_behavioral__DOT__check_eq1__555__label[5U] 
        = Vtb_behavioral__ConstPool__CONST_h9ed4c3f5_0[5U];
    __Vtask_tb_behavioral__DOT__check_eq1__555__label[6U] 
        = Vtb_behavioral__ConstPool__CONST_h9ed4c3f5_0[6U];
    __Vtask_tb_behavioral__DOT__check_eq1__555__label[7U] 
        = Vtb_behavioral__ConstPool__CONST_h9ed4c3f5_0[7U];
    if (VL_UNLIKELY(((IData)(__Vtask_tb_behavioral__DOT__check_eq1__555__got) 
                     != (IData)(__Vtask_tb_behavioral__DOT__check_eq1__555__exp)))) {
        VL_WRITEF("FAIL %0s time=%0t got=%0# exp=%0#\n[%0t] %%Fatal: tb_behavioral.v:91: Assertion failed in %Ntb_behavioral.check_eq1\n",
                  256,__Vtask_tb_behavioral__DOT__check_eq1__555__label.data(),
                  64,VL_TIME_UNITED_Q(1000),-9,1,(IData)(__Vtask_tb_behavioral__DOT__check_eq1__555__got),
                  1,__Vtask_tb_behavioral__DOT__check_eq1__555__exp,
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("behavioral/tb_behavioral.v", 91, "");
    }
    __Vtask_tb_behavioral__DOT__check_eq1__556__exp 
        = __Vtask_tb_behavioral__DOT__check_outputs__551__exp_p4;
    __Vtask_tb_behavioral__DOT__check_eq1__556__got 
        = vlSelf->tb_behavioral__DOT__prodotto4;
    __Vtask_tb_behavioral__DOT__check_eq1__556__label[0U] 
        = Vtb_behavioral__ConstPool__CONST_h0c5996b4_0[0U];
    __Vtask_tb_behavioral__DOT__check_eq1__556__label[1U] 
        = Vtb_behavioral__ConstPool__CONST_h0c5996b4_0[1U];
    __Vtask_tb_behavioral__DOT__check_eq1__556__label[2U] 
        = Vtb_behavioral__ConstPool__CONST_h0c5996b4_0[2U];
    __Vtask_tb_behavioral__DOT__check_eq1__556__label[3U] 
        = Vtb_behavioral__ConstPool__CONST_h0c5996b4_0[3U];
    __Vtask_tb_behavioral__DOT__check_eq1__556__label[4U] 
        = Vtb_behavioral__ConstPool__CONST_h0c5996b4_0[4U];
    __Vtask_tb_behavioral__DOT__check_eq1__556__label[5U] 
        = Vtb_behavioral__ConstPool__CONST_h0c5996b4_0[5U];
    __Vtask_tb_behavioral__DOT__check_eq1__556__label[6U] 
        = Vtb_behavioral__ConstPool__CONST_h0c5996b4_0[6U];
    __Vtask_tb_behavioral__DOT__check_eq1__556__label[7U] 
        = Vtb_behavioral__ConstPool__CONST_h0c5996b4_0[7U];
    if (VL_UNLIKELY(((IData)(__Vtask_tb_behavioral__DOT__check_eq1__556__got) 
                     != (IData)(__Vtask_tb_behavioral__DOT__check_eq1__556__exp)))) {
        VL_WRITEF("FAIL %0s time=%0t got=%0# exp=%0#\n[%0t] %%Fatal: tb_behavioral.v:91: Assertion failed in %Ntb_behavioral.check_eq1\n",
                  256,__Vtask_tb_behavioral__DOT__check_eq1__556__label.data(),
                  64,VL_TIME_UNITED_Q(1000),-9,1,(IData)(__Vtask_tb_behavioral__DOT__check_eq1__556__got),
                  1,__Vtask_tb_behavioral__DOT__check_eq1__556__exp,
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("behavioral/tb_behavioral.v", 91, "");
    }
    __Vtask_tb_behavioral__DOT__check_eq2__557__exp 
        = __Vtask_tb_behavioral__DOT__check_outputs__551__exp_errore;
    __Vtask_tb_behavioral__DOT__check_eq2__557__got 
        = vlSelf->tb_behavioral__DOT__errore;
    __Vtask_tb_behavioral__DOT__check_eq2__557__label[0U] 
        = Vtb_behavioral__ConstPool__CONST_hc23eaddf_0[0U];
    __Vtask_tb_behavioral__DOT__check_eq2__557__label[1U] 
        = Vtb_behavioral__ConstPool__CONST_hc23eaddf_0[1U];
    __Vtask_tb_behavioral__DOT__check_eq2__557__label[2U] 
        = Vtb_behavioral__ConstPool__CONST_hc23eaddf_0[2U];
    __Vtask_tb_behavioral__DOT__check_eq2__557__label[3U] 
        = Vtb_behavioral__ConstPool__CONST_hc23eaddf_0[3U];
    __Vtask_tb_behavioral__DOT__check_eq2__557__label[4U] 
        = Vtb_behavioral__ConstPool__CONST_hc23eaddf_0[4U];
    __Vtask_tb_behavioral__DOT__check_eq2__557__label[5U] 
        = Vtb_behavioral__ConstPool__CONST_hc23eaddf_0[5U];
    __Vtask_tb_behavioral__DOT__check_eq2__557__label[6U] 
        = Vtb_behavioral__ConstPool__CONST_hc23eaddf_0[6U];
    __Vtask_tb_behavioral__DOT__check_eq2__557__label[7U] 
        = Vtb_behavioral__ConstPool__CONST_hc23eaddf_0[7U];
    if (VL_UNLIKELY(((IData)(__Vtask_tb_behavioral__DOT__check_eq2__557__got) 
                     != (IData)(__Vtask_tb_behavioral__DOT__check_eq2__557__exp)))) {
        VL_WRITEF("FAIL %0s time=%0t got=%0# exp=%0#\n[%0t] %%Fatal: tb_behavioral.v:103: Assertion failed in %Ntb_behavioral.check_eq2\n",
                  256,__Vtask_tb_behavioral__DOT__check_eq2__557__label.data(),
                  64,VL_TIME_UNITED_Q(1000),-9,2,(IData)(__Vtask_tb_behavioral__DOT__check_eq2__557__got),
                  2,__Vtask_tb_behavioral__DOT__check_eq2__557__exp,
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("behavioral/tb_behavioral.v", 103, "");
    }
    __Vtask_tb_behavioral__DOT__check_eq6__558__exp 
        = __Vtask_tb_behavioral__DOT__check_outputs__551__exp_resto;
    __Vtask_tb_behavioral__DOT__check_eq6__558__got 
        = vlSelf->tb_behavioral__DOT__resto;
    __Vtask_tb_behavioral__DOT__check_eq6__558__label[0U] 
        = Vtb_behavioral__ConstPool__CONST_hf0db003b_0[0U];
    __Vtask_tb_behavioral__DOT__check_eq6__558__label[1U] 
        = Vtb_behavioral__ConstPool__CONST_hf0db003b_0[1U];
    __Vtask_tb_behavioral__DOT__check_eq6__558__label[2U] 
        = Vtb_behavioral__ConstPool__CONST_hf0db003b_0[2U];
    __Vtask_tb_behavioral__DOT__check_eq6__558__label[3U] 
        = Vtb_behavioral__ConstPool__CONST_hf0db003b_0[3U];
    __Vtask_tb_behavioral__DOT__check_eq6__558__label[4U] 
        = Vtb_behavioral__ConstPool__CONST_hf0db003b_0[4U];
    __Vtask_tb_behavioral__DOT__check_eq6__558__label[5U] 
        = Vtb_behavioral__ConstPool__CONST_hf0db003b_0[5U];
    __Vtask_tb_behavioral__DOT__check_eq6__558__label[6U] 
        = Vtb_behavioral__ConstPool__CONST_hf0db003b_0[6U];
    __Vtask_tb_behavioral__DOT__check_eq6__558__label[7U] 
        = Vtb_behavioral__ConstPool__CONST_hf0db003b_0[7U];
    if (VL_UNLIKELY(((IData)(__Vtask_tb_behavioral__DOT__check_eq6__558__got) 
                     != (IData)(__Vtask_tb_behavioral__DOT__check_eq6__558__exp)))) {
        VL_WRITEF("FAIL %0s time=%0t got=%0# exp=%0#\n[%0t] %%Fatal: tb_behavioral.v:115: Assertion failed in %Ntb_behavioral.check_eq6\n",
                  256,__Vtask_tb_behavioral__DOT__check_eq6__558__label.data(),
                  64,VL_TIME_UNITED_Q(1000),-9,6,(IData)(__Vtask_tb_behavioral__DOT__check_eq6__558__got),
                  6,__Vtask_tb_behavioral__DOT__check_eq6__558__exp,
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("behavioral/tb_behavioral.v", 115, "");
    }
    __Vtask_tb_behavioral__DOT__check_eq10__559__exp 
        = __Vtask_tb_behavioral__DOT__check_outputs__551__exp_disp;
    __Vtask_tb_behavioral__DOT__check_eq10__559__got 
        = vlSelf->tb_behavioral__DOT__disponibile;
    __Vtask_tb_behavioral__DOT__check_eq10__559__label[0U] 
        = Vtb_behavioral__ConstPool__CONST_h9e307437_0[0U];
    __Vtask_tb_behavioral__DOT__check_eq10__559__label[1U] 
        = Vtb_behavioral__ConstPool__CONST_h9e307437_0[1U];
    __Vtask_tb_behavioral__DOT__check_eq10__559__label[2U] 
        = Vtb_behavioral__ConstPool__CONST_h9e307437_0[2U];
    __Vtask_tb_behavioral__DOT__check_eq10__559__label[3U] 
        = Vtb_behavioral__ConstPool__CONST_h9e307437_0[3U];
    __Vtask_tb_behavioral__DOT__check_eq10__559__label[4U] 
        = Vtb_behavioral__ConstPool__CONST_h9e307437_0[4U];
    __Vtask_tb_behavioral__DOT__check_eq10__559__label[5U] 
        = Vtb_behavioral__ConstPool__CONST_h9e307437_0[5U];
    __Vtask_tb_behavioral__DOT__check_eq10__559__label[6U] 
        = Vtb_behavioral__ConstPool__CONST_h9e307437_0[6U];
    __Vtask_tb_behavioral__DOT__check_eq10__559__label[7U] 
        = Vtb_behavioral__ConstPool__CONST_h9e307437_0[7U];
    if (VL_UNLIKELY(((IData)(__Vtask_tb_behavioral__DOT__check_eq10__559__got) 
                     != (IData)(__Vtask_tb_behavioral__DOT__check_eq10__559__exp)))) {
        VL_WRITEF("FAIL %0s time=%0t got=%0# exp=%0#\n[%0t] %%Fatal: tb_behavioral.v:127: Assertion failed in %Ntb_behavioral.check_eq10\n",
                  256,__Vtask_tb_behavioral__DOT__check_eq10__559__label.data(),
                  64,VL_TIME_UNITED_Q(1000),-9,10,(IData)(__Vtask_tb_behavioral__DOT__check_eq10__559__got),
                  10,__Vtask_tb_behavioral__DOT__check_eq10__559__exp,
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("behavioral/tb_behavioral.v", 127, "");
    }
    __Vtask_tb_behavioral__DOT__check_eq6__560__exp 
        = __Vtask_tb_behavioral__DOT__check_outputs__551__exp_c01;
    __Vtask_tb_behavioral__DOT__check_eq6__560__got 
        = vlSelf->tb_behavioral__DOT__coin_01;
    __Vtask_tb_behavioral__DOT__check_eq6__560__label[0U] 
        = Vtb_behavioral__ConstPool__CONST_h8a69c039_0[0U];
    __Vtask_tb_behavioral__DOT__check_eq6__560__label[1U] 
        = Vtb_behavioral__ConstPool__CONST_h8a69c039_0[1U];
    __Vtask_tb_behavioral__DOT__check_eq6__560__label[2U] 
        = Vtb_behavioral__ConstPool__CONST_h8a69c039_0[2U];
    __Vtask_tb_behavioral__DOT__check_eq6__560__label[3U] 
        = Vtb_behavioral__ConstPool__CONST_h8a69c039_0[3U];
    __Vtask_tb_behavioral__DOT__check_eq6__560__label[4U] 
        = Vtb_behavioral__ConstPool__CONST_h8a69c039_0[4U];
    __Vtask_tb_behavioral__DOT__check_eq6__560__label[5U] 
        = Vtb_behavioral__ConstPool__CONST_h8a69c039_0[5U];
    __Vtask_tb_behavioral__DOT__check_eq6__560__label[6U] 
        = Vtb_behavioral__ConstPool__CONST_h8a69c039_0[6U];
    __Vtask_tb_behavioral__DOT__check_eq6__560__label[7U] 
        = Vtb_behavioral__ConstPool__CONST_h8a69c039_0[7U];
    if (VL_UNLIKELY(((IData)(__Vtask_tb_behavioral__DOT__check_eq6__560__got) 
                     != (IData)(__Vtask_tb_behavioral__DOT__check_eq6__560__exp)))) {
        VL_WRITEF("FAIL %0s time=%0t got=%0# exp=%0#\n[%0t] %%Fatal: tb_behavioral.v:115: Assertion failed in %Ntb_behavioral.check_eq6\n",
                  256,__Vtask_tb_behavioral__DOT__check_eq6__560__label.data(),
                  64,VL_TIME_UNITED_Q(1000),-9,6,(IData)(__Vtask_tb_behavioral__DOT__check_eq6__560__got),
                  6,__Vtask_tb_behavioral__DOT__check_eq6__560__exp,
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("behavioral/tb_behavioral.v", 115, "");
    }
    __Vtask_tb_behavioral__DOT__check_eq6__561__exp 
        = __Vtask_tb_behavioral__DOT__check_outputs__551__exp_c02;
    __Vtask_tb_behavioral__DOT__check_eq6__561__got 
        = vlSelf->tb_behavioral__DOT__coin_02;
    __Vtask_tb_behavioral__DOT__check_eq6__561__label[0U] 
        = Vtb_behavioral__ConstPool__CONST_hf10bdf90_0[0U];
    __Vtask_tb_behavioral__DOT__check_eq6__561__label[1U] 
        = Vtb_behavioral__ConstPool__CONST_hf10bdf90_0[1U];
    __Vtask_tb_behavioral__DOT__check_eq6__561__label[2U] 
        = Vtb_behavioral__ConstPool__CONST_hf10bdf90_0[2U];
    __Vtask_tb_behavioral__DOT__check_eq6__561__label[3U] 
        = Vtb_behavioral__ConstPool__CONST_hf10bdf90_0[3U];
    __Vtask_tb_behavioral__DOT__check_eq6__561__label[4U] 
        = Vtb_behavioral__ConstPool__CONST_hf10bdf90_0[4U];
    __Vtask_tb_behavioral__DOT__check_eq6__561__label[5U] 
        = Vtb_behavioral__ConstPool__CONST_hf10bdf90_0[5U];
    __Vtask_tb_behavioral__DOT__check_eq6__561__label[6U] 
        = Vtb_behavioral__ConstPool__CONST_hf10bdf90_0[6U];
    __Vtask_tb_behavioral__DOT__check_eq6__561__label[7U] 
        = Vtb_behavioral__ConstPool__CONST_hf10bdf90_0[7U];
    if (VL_UNLIKELY(((IData)(__Vtask_tb_behavioral__DOT__check_eq6__561__got) 
                     != (IData)(__Vtask_tb_behavioral__DOT__check_eq6__561__exp)))) {
        VL_WRITEF("FAIL %0s time=%0t got=%0# exp=%0#\n[%0t] %%Fatal: tb_behavioral.v:115: Assertion failed in %Ntb_behavioral.check_eq6\n",
                  256,__Vtask_tb_behavioral__DOT__check_eq6__561__label.data(),
                  64,VL_TIME_UNITED_Q(1000),-9,6,(IData)(__Vtask_tb_behavioral__DOT__check_eq6__561__got),
                  6,__Vtask_tb_behavioral__DOT__check_eq6__561__exp,
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("behavioral/tb_behavioral.v", 115, "");
    }
    __Vtask_tb_behavioral__DOT__check_eq6__562__exp 
        = __Vtask_tb_behavioral__DOT__check_outputs__551__exp_c05;
    __Vtask_tb_behavioral__DOT__check_eq6__562__got 
        = vlSelf->tb_behavioral__DOT__coin_05;
    __Vtask_tb_behavioral__DOT__check_eq6__562__label[0U] 
        = Vtb_behavioral__ConstPool__CONST_h11897a12_0[0U];
    __Vtask_tb_behavioral__DOT__check_eq6__562__label[1U] 
        = Vtb_behavioral__ConstPool__CONST_h11897a12_0[1U];
    __Vtask_tb_behavioral__DOT__check_eq6__562__label[2U] 
        = Vtb_behavioral__ConstPool__CONST_h11897a12_0[2U];
    __Vtask_tb_behavioral__DOT__check_eq6__562__label[3U] 
        = Vtb_behavioral__ConstPool__CONST_h11897a12_0[3U];
    __Vtask_tb_behavioral__DOT__check_eq6__562__label[4U] 
        = Vtb_behavioral__ConstPool__CONST_h11897a12_0[4U];
    __Vtask_tb_behavioral__DOT__check_eq6__562__label[5U] 
        = Vtb_behavioral__ConstPool__CONST_h11897a12_0[5U];
    __Vtask_tb_behavioral__DOT__check_eq6__562__label[6U] 
        = Vtb_behavioral__ConstPool__CONST_h11897a12_0[6U];
    __Vtask_tb_behavioral__DOT__check_eq6__562__label[7U] 
        = Vtb_behavioral__ConstPool__CONST_h11897a12_0[7U];
    if (VL_UNLIKELY(((IData)(__Vtask_tb_behavioral__DOT__check_eq6__562__got) 
                     != (IData)(__Vtask_tb_behavioral__DOT__check_eq6__562__exp)))) {
        VL_WRITEF("FAIL %0s time=%0t got=%0# exp=%0#\n[%0t] %%Fatal: tb_behavioral.v:115: Assertion failed in %Ntb_behavioral.check_eq6\n",
                  256,__Vtask_tb_behavioral__DOT__check_eq6__562__label.data(),
                  64,VL_TIME_UNITED_Q(1000),-9,6,(IData)(__Vtask_tb_behavioral__DOT__check_eq6__562__got),
                  6,__Vtask_tb_behavioral__DOT__check_eq6__562__exp,
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("behavioral/tb_behavioral.v", 115, "");
    }
    __Vtask_tb_behavioral__DOT__check_eq6__563__exp 
        = __Vtask_tb_behavioral__DOT__check_outputs__551__exp_c10;
    __Vtask_tb_behavioral__DOT__check_eq6__563__got 
        = vlSelf->tb_behavioral__DOT__coin_10;
    __Vtask_tb_behavioral__DOT__check_eq6__563__label[0U] 
        = Vtb_behavioral__ConstPool__CONST_h23467a71_0[0U];
    __Vtask_tb_behavioral__DOT__check_eq6__563__label[1U] 
        = Vtb_behavioral__ConstPool__CONST_h23467a71_0[1U];
    __Vtask_tb_behavioral__DOT__check_eq6__563__label[2U] 
        = Vtb_behavioral__ConstPool__CONST_h23467a71_0[2U];
    __Vtask_tb_behavioral__DOT__check_eq6__563__label[3U] 
        = Vtb_behavioral__ConstPool__CONST_h23467a71_0[3U];
    __Vtask_tb_behavioral__DOT__check_eq6__563__label[4U] 
        = Vtb_behavioral__ConstPool__CONST_h23467a71_0[4U];
    __Vtask_tb_behavioral__DOT__check_eq6__563__label[5U] 
        = Vtb_behavioral__ConstPool__CONST_h23467a71_0[5U];
    __Vtask_tb_behavioral__DOT__check_eq6__563__label[6U] 
        = Vtb_behavioral__ConstPool__CONST_h23467a71_0[6U];
    __Vtask_tb_behavioral__DOT__check_eq6__563__label[7U] 
        = Vtb_behavioral__ConstPool__CONST_h23467a71_0[7U];
    if (VL_UNLIKELY(((IData)(__Vtask_tb_behavioral__DOT__check_eq6__563__got) 
                     != (IData)(__Vtask_tb_behavioral__DOT__check_eq6__563__exp)))) {
        VL_WRITEF("FAIL %0s time=%0t got=%0# exp=%0#\n[%0t] %%Fatal: tb_behavioral.v:115: Assertion failed in %Ntb_behavioral.check_eq6\n",
                  256,__Vtask_tb_behavioral__DOT__check_eq6__563__label.data(),
                  64,VL_TIME_UNITED_Q(1000),-9,6,(IData)(__Vtask_tb_behavioral__DOT__check_eq6__563__got),
                  6,__Vtask_tb_behavioral__DOT__check_eq6__563__exp,
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("behavioral/tb_behavioral.v", 115, "");
    }
    __Vtask_tb_behavioral__DOT__print_case_report__564__exp_c10 
        = __Vtask_tb_behavioral__DOT__check_outputs__551__exp_c10;
    __Vtask_tb_behavioral__DOT__print_case_report__564__exp_c05 
        = __Vtask_tb_behavioral__DOT__check_outputs__551__exp_c05;
    __Vtask_tb_behavioral__DOT__print_case_report__564__exp_c02 
        = __Vtask_tb_behavioral__DOT__check_outputs__551__exp_c02;
    __Vtask_tb_behavioral__DOT__print_case_report__564__exp_c01 
        = __Vtask_tb_behavioral__DOT__check_outputs__551__exp_c01;
    __Vtask_tb_behavioral__DOT__print_case_report__564__exp_disp 
        = __Vtask_tb_behavioral__DOT__check_outputs__551__exp_disp;
    __Vtask_tb_behavioral__DOT__print_case_report__564__exp_resto 
        = __Vtask_tb_behavioral__DOT__check_outputs__551__exp_resto;
    __Vtask_tb_behavioral__DOT__print_case_report__564__exp_errore 
        = __Vtask_tb_behavioral__DOT__check_outputs__551__exp_errore;
    __Vtask_tb_behavioral__DOT__print_case_report__564__exp_p4 
        = __Vtask_tb_behavioral__DOT__check_outputs__551__exp_p4;
    __Vtask_tb_behavioral__DOT__print_case_report__564__exp_p3 
        = __Vtask_tb_behavioral__DOT__check_outputs__551__exp_p3;
    __Vtask_tb_behavioral__DOT__print_case_report__564__exp_p2 
        = __Vtask_tb_behavioral__DOT__check_outputs__551__exp_p2;
    __Vtask_tb_behavioral__DOT__print_case_report__564__exp_p1 
        = __Vtask_tb_behavioral__DOT__check_outputs__551__exp_p1;
    __Vtask_tb_behavioral__DOT__print_case_report__564__exp_credito 
        = __Vtask_tb_behavioral__DOT__check_outputs__551__exp_credito;
    VL_WRITEF("IN : coin=%03b selezione=%03b conferma=%0# annulla=%0#\nOUT: credito=%0# prodotto=%b errore=%02b resto=%0# disponibile=%0# coin_01=%0# coin_02=%0# coin_05=%0# coin_10=%0#\nEXP: credito=%0# prodotto=%b errore=%02b resto=%0# disponibile=%0# coin_01=%0# coin_02=%0# coin_05=%0# coin_10=%0#\n[PASS] %0s\n\n",
              3,vlSelf->tb_behavioral__DOT__last_coin,
              3,(IData)(vlSelf->tb_behavioral__DOT__last_selezione),
              1,vlSelf->tb_behavioral__DOT__last_conferma,
              1,(IData)(vlSelf->tb_behavioral__DOT__last_annulla),
              6,vlSelf->tb_behavioral__DOT__credito,
              4,(((IData)(vlSelf->tb_behavioral__DOT__prodotto1) 
                  << 3U) | (((IData)(vlSelf->tb_behavioral__DOT__prodotto2) 
                             << 2U) | (((IData)(vlSelf->tb_behavioral__DOT__prodotto3) 
                                        << 1U) | (IData)(vlSelf->tb_behavioral__DOT__prodotto4)))),
              2,(IData)(vlSelf->tb_behavioral__DOT__errore),
              6,vlSelf->tb_behavioral__DOT__resto,10,
              (IData)(vlSelf->tb_behavioral__DOT__disponibile),
              6,vlSelf->tb_behavioral__DOT__coin_01,
              6,(IData)(vlSelf->tb_behavioral__DOT__coin_02),
              6,vlSelf->tb_behavioral__DOT__coin_05,
              6,(IData)(vlSelf->tb_behavioral__DOT__coin_10),
              6,__Vtask_tb_behavioral__DOT__print_case_report__564__exp_credito,
              4,(((IData)(__Vtask_tb_behavioral__DOT__print_case_report__564__exp_p1) 
                  << 3U) | (((IData)(__Vtask_tb_behavioral__DOT__print_case_report__564__exp_p2) 
                             << 2U) | (((IData)(__Vtask_tb_behavioral__DOT__print_case_report__564__exp_p3) 
                                        << 1U) | (IData)(__Vtask_tb_behavioral__DOT__print_case_report__564__exp_p4)))),
              2,(IData)(__Vtask_tb_behavioral__DOT__print_case_report__564__exp_errore),
              6,__Vtask_tb_behavioral__DOT__print_case_report__564__exp_resto,
              10,(IData)(__Vtask_tb_behavioral__DOT__print_case_report__564__exp_disp),
              6,__Vtask_tb_behavioral__DOT__print_case_report__564__exp_c01,
              6,(IData)(__Vtask_tb_behavioral__DOT__print_case_report__564__exp_c02),
              6,__Vtask_tb_behavioral__DOT__print_case_report__564__exp_c05,
              6,(IData)(__Vtask_tb_behavioral__DOT__print_case_report__564__exp_c10),
              1024,vlSelf->tb_behavioral__DOT__current_test_name.data());
    if (VL_UNLIKELY((0U != vlSelf->tb_behavioral__DOT__report_fd))) {
        VL_FWRITEF(vlSelf->tb_behavioral__DOT__report_fd,"IN : coin=%03b selezione=%03b conferma=%0# annulla=%0#\nOUT: credito=%0# prodotto=%b errore=%02b resto=%0# disponibile=%0# coin_01=%0# coin_02=%0# coin_05=%0# coin_10=%0#\nEXP: credito=%0# prodotto=%b errore=%02b resto=%0# disponibile=%0# coin_01=%0# coin_02=%0# coin_05=%0# coin_10=%0#\n[PASS] %0s\n\n",
                   3,vlSelf->tb_behavioral__DOT__last_coin,
                   3,(IData)(vlSelf->tb_behavioral__DOT__last_selezione),
                   1,vlSelf->tb_behavioral__DOT__last_conferma,
                   1,(IData)(vlSelf->tb_behavioral__DOT__last_annulla),
                   6,vlSelf->tb_behavioral__DOT__credito,
                   4,(((IData)(vlSelf->tb_behavioral__DOT__prodotto1) 
                       << 3U) | (((IData)(vlSelf->tb_behavioral__DOT__prodotto2) 
                                  << 2U) | (((IData)(vlSelf->tb_behavioral__DOT__prodotto3) 
                                             << 1U) 
                                            | (IData)(vlSelf->tb_behavioral__DOT__prodotto4)))),
                   2,(IData)(vlSelf->tb_behavioral__DOT__errore),
                   6,vlSelf->tb_behavioral__DOT__resto,
                   10,(IData)(vlSelf->tb_behavioral__DOT__disponibile),
                   6,vlSelf->tb_behavioral__DOT__coin_01,
                   6,(IData)(vlSelf->tb_behavioral__DOT__coin_02),
                   6,vlSelf->tb_behavioral__DOT__coin_05,
                   6,(IData)(vlSelf->tb_behavioral__DOT__coin_10),
                   6,__Vtask_tb_behavioral__DOT__print_case_report__564__exp_credito,
                   4,(((IData)(__Vtask_tb_behavioral__DOT__print_case_report__564__exp_p1) 
                       << 3U) | (((IData)(__Vtask_tb_behavioral__DOT__print_case_report__564__exp_p2) 
                                  << 2U) | (((IData)(__Vtask_tb_behavioral__DOT__print_case_report__564__exp_p3) 
                                             << 1U) 
                                            | (IData)(__Vtask_tb_behavioral__DOT__print_case_report__564__exp_p4)))),
                   2,(IData)(__Vtask_tb_behavioral__DOT__print_case_report__564__exp_errore),
                   6,__Vtask_tb_behavioral__DOT__print_case_report__564__exp_resto,
                   10,(IData)(__Vtask_tb_behavioral__DOT__print_case_report__564__exp_disp),
                   6,__Vtask_tb_behavioral__DOT__print_case_report__564__exp_c01,
                   6,(IData)(__Vtask_tb_behavioral__DOT__print_case_report__564__exp_c02),
                   6,__Vtask_tb_behavioral__DOT__print_case_report__564__exp_c05,
                   6,(IData)(__Vtask_tb_behavioral__DOT__print_case_report__564__exp_c10),
                   1024,vlSelf->tb_behavioral__DOT__current_test_name.data());
    }
    vlSelf->tb_behavioral__DOT__rst = 0U;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "behavioral/tb_behavioral.v", 
                                       432);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_behavioral__DOT__announce_test__566__name[0U] 
        = Vtb_behavioral__ConstPool__CONST_h44c98468_0[0U];
    __Vtask_tb_behavioral__DOT__announce_test__566__name[1U] 
        = Vtb_behavioral__ConstPool__CONST_h44c98468_0[1U];
    __Vtask_tb_behavioral__DOT__announce_test__566__name[2U] 
        = Vtb_behavioral__ConstPool__CONST_h44c98468_0[2U];
    __Vtask_tb_behavioral__DOT__announce_test__566__name[3U] 
        = Vtb_behavioral__ConstPool__CONST_h44c98468_0[3U];
    __Vtask_tb_behavioral__DOT__announce_test__566__name[4U] 
        = Vtb_behavioral__ConstPool__CONST_h44c98468_0[4U];
    __Vtask_tb_behavioral__DOT__announce_test__566__name[5U] 
        = Vtb_behavioral__ConstPool__CONST_h44c98468_0[5U];
    __Vtask_tb_behavioral__DOT__announce_test__566__name[6U] 
        = Vtb_behavioral__ConstPool__CONST_h44c98468_0[6U];
    __Vtask_tb_behavioral__DOT__announce_test__566__name[7U] 
        = Vtb_behavioral__ConstPool__CONST_h44c98468_0[7U];
    __Vtask_tb_behavioral__DOT__announce_test__566__name[8U] 
        = Vtb_behavioral__ConstPool__CONST_h44c98468_0[8U];
    __Vtask_tb_behavioral__DOT__announce_test__566__name[9U] 
        = Vtb_behavioral__ConstPool__CONST_h44c98468_0[9U];
    __Vtask_tb_behavioral__DOT__announce_test__566__name[0xaU] 
        = Vtb_behavioral__ConstPool__CONST_h44c98468_0[0xaU];
    __Vtask_tb_behavioral__DOT__announce_test__566__name[0xbU] 
        = Vtb_behavioral__ConstPool__CONST_h44c98468_0[0xbU];
    __Vtask_tb_behavioral__DOT__announce_test__566__name[0xcU] 
        = Vtb_behavioral__ConstPool__CONST_h44c98468_0[0xcU];
    __Vtask_tb_behavioral__DOT__announce_test__566__name[0xdU] 
        = Vtb_behavioral__ConstPool__CONST_h44c98468_0[0xdU];
    __Vtask_tb_behavioral__DOT__announce_test__566__name[0xeU] 
        = Vtb_behavioral__ConstPool__CONST_h44c98468_0[0xeU];
    __Vtask_tb_behavioral__DOT__announce_test__566__name[0xfU] 
        = Vtb_behavioral__ConstPool__CONST_h44c98468_0[0xfU];
    __Vtask_tb_behavioral__DOT__announce_test__566__name[0x10U] 
        = Vtb_behavioral__ConstPool__CONST_h44c98468_0[0x10U];
    __Vtask_tb_behavioral__DOT__announce_test__566__name[0x11U] 
        = Vtb_behavioral__ConstPool__CONST_h44c98468_0[0x11U];
    __Vtask_tb_behavioral__DOT__announce_test__566__name[0x12U] 
        = Vtb_behavioral__ConstPool__CONST_h44c98468_0[0x12U];
    __Vtask_tb_behavioral__DOT__announce_test__566__name[0x13U] 
        = Vtb_behavioral__ConstPool__CONST_h44c98468_0[0x13U];
    __Vtask_tb_behavioral__DOT__announce_test__566__name[0x14U] 
        = Vtb_behavioral__ConstPool__CONST_h44c98468_0[0x14U];
    __Vtask_tb_behavioral__DOT__announce_test__566__name[0x15U] 
        = Vtb_behavioral__ConstPool__CONST_h44c98468_0[0x15U];
    __Vtask_tb_behavioral__DOT__announce_test__566__name[0x16U] 
        = Vtb_behavioral__ConstPool__CONST_h44c98468_0[0x16U];
    __Vtask_tb_behavioral__DOT__announce_test__566__name[0x17U] 
        = Vtb_behavioral__ConstPool__CONST_h44c98468_0[0x17U];
    __Vtask_tb_behavioral__DOT__announce_test__566__name[0x18U] 
        = Vtb_behavioral__ConstPool__CONST_h44c98468_0[0x18U];
    __Vtask_tb_behavioral__DOT__announce_test__566__name[0x19U] 
        = Vtb_behavioral__ConstPool__CONST_h44c98468_0[0x19U];
    __Vtask_tb_behavioral__DOT__announce_test__566__name[0x1aU] 
        = Vtb_behavioral__ConstPool__CONST_h44c98468_0[0x1aU];
    __Vtask_tb_behavioral__DOT__announce_test__566__name[0x1bU] 
        = Vtb_behavioral__ConstPool__CONST_h44c98468_0[0x1bU];
    __Vtask_tb_behavioral__DOT__announce_test__566__name[0x1cU] 
        = Vtb_behavioral__ConstPool__CONST_h44c98468_0[0x1cU];
    __Vtask_tb_behavioral__DOT__announce_test__566__name[0x1dU] 
        = Vtb_behavioral__ConstPool__CONST_h44c98468_0[0x1dU];
    __Vtask_tb_behavioral__DOT__announce_test__566__name[0x1eU] 
        = Vtb_behavioral__ConstPool__CONST_h44c98468_0[0x1eU];
    __Vtask_tb_behavioral__DOT__announce_test__566__name[0x1fU] 
        = Vtb_behavioral__ConstPool__CONST_h44c98468_0[0x1fU];
    vlSelf->tb_behavioral__DOT__current_test_name[0U] 
        = __Vtask_tb_behavioral__DOT__announce_test__566__name[0U];
    vlSelf->tb_behavioral__DOT__current_test_name[1U] 
        = __Vtask_tb_behavioral__DOT__announce_test__566__name[1U];
    vlSelf->tb_behavioral__DOT__current_test_name[2U] 
        = __Vtask_tb_behavioral__DOT__announce_test__566__name[2U];
    vlSelf->tb_behavioral__DOT__current_test_name[3U] 
        = __Vtask_tb_behavioral__DOT__announce_test__566__name[3U];
    vlSelf->tb_behavioral__DOT__current_test_name[4U] 
        = __Vtask_tb_behavioral__DOT__announce_test__566__name[4U];
    vlSelf->tb_behavioral__DOT__current_test_name[5U] 
        = __Vtask_tb_behavioral__DOT__announce_test__566__name[5U];
    vlSelf->tb_behavioral__DOT__current_test_name[6U] 
        = __Vtask_tb_behavioral__DOT__announce_test__566__name[6U];
    vlSelf->tb_behavioral__DOT__current_test_name[7U] 
        = __Vtask_tb_behavioral__DOT__announce_test__566__name[7U];
    vlSelf->tb_behavioral__DOT__current_test_name[8U] 
        = __Vtask_tb_behavioral__DOT__announce_test__566__name[8U];
    vlSelf->tb_behavioral__DOT__current_test_name[9U] 
        = __Vtask_tb_behavioral__DOT__announce_test__566__name[9U];
    vlSelf->tb_behavioral__DOT__current_test_name[0xaU] 
        = __Vtask_tb_behavioral__DOT__announce_test__566__name[0xaU];
    vlSelf->tb_behavioral__DOT__current_test_name[0xbU] 
        = __Vtask_tb_behavioral__DOT__announce_test__566__name[0xbU];
    vlSelf->tb_behavioral__DOT__current_test_name[0xcU] 
        = __Vtask_tb_behavioral__DOT__announce_test__566__name[0xcU];
    vlSelf->tb_behavioral__DOT__current_test_name[0xdU] 
        = __Vtask_tb_behavioral__DOT__announce_test__566__name[0xdU];
    vlSelf->tb_behavioral__DOT__current_test_name[0xeU] 
        = __Vtask_tb_behavioral__DOT__announce_test__566__name[0xeU];
    vlSelf->tb_behavioral__DOT__current_test_name[0xfU] 
        = __Vtask_tb_behavioral__DOT__announce_test__566__name[0xfU];
    vlSelf->tb_behavioral__DOT__current_test_name[0x10U] 
        = __Vtask_tb_behavioral__DOT__announce_test__566__name[0x10U];
    vlSelf->tb_behavioral__DOT__current_test_name[0x11U] 
        = __Vtask_tb_behavioral__DOT__announce_test__566__name[0x11U];
    vlSelf->tb_behavioral__DOT__current_test_name[0x12U] 
        = __Vtask_tb_behavioral__DOT__announce_test__566__name[0x12U];
    vlSelf->tb_behavioral__DOT__current_test_name[0x13U] 
        = __Vtask_tb_behavioral__DOT__announce_test__566__name[0x13U];
    vlSelf->tb_behavioral__DOT__current_test_name[0x14U] 
        = __Vtask_tb_behavioral__DOT__announce_test__566__name[0x14U];
    vlSelf->tb_behavioral__DOT__current_test_name[0x15U] 
        = __Vtask_tb_behavioral__DOT__announce_test__566__name[0x15U];
    vlSelf->tb_behavioral__DOT__current_test_name[0x16U] 
        = __Vtask_tb_behavioral__DOT__announce_test__566__name[0x16U];
    vlSelf->tb_behavioral__DOT__current_test_name[0x17U] 
        = __Vtask_tb_behavioral__DOT__announce_test__566__name[0x17U];
    vlSelf->tb_behavioral__DOT__current_test_name[0x18U] 
        = __Vtask_tb_behavioral__DOT__announce_test__566__name[0x18U];
    vlSelf->tb_behavioral__DOT__current_test_name[0x19U] 
        = __Vtask_tb_behavioral__DOT__announce_test__566__name[0x19U];
    vlSelf->tb_behavioral__DOT__current_test_name[0x1aU] 
        = __Vtask_tb_behavioral__DOT__announce_test__566__name[0x1aU];
    vlSelf->tb_behavioral__DOT__current_test_name[0x1bU] 
        = __Vtask_tb_behavioral__DOT__announce_test__566__name[0x1bU];
    vlSelf->tb_behavioral__DOT__current_test_name[0x1cU] 
        = __Vtask_tb_behavioral__DOT__announce_test__566__name[0x1cU];
    vlSelf->tb_behavioral__DOT__current_test_name[0x1dU] 
        = __Vtask_tb_behavioral__DOT__announce_test__566__name[0x1dU];
    vlSelf->tb_behavioral__DOT__current_test_name[0x1eU] 
        = __Vtask_tb_behavioral__DOT__announce_test__566__name[0x1eU];
    vlSelf->tb_behavioral__DOT__current_test_name[0x1fU] 
        = __Vtask_tb_behavioral__DOT__announce_test__566__name[0x1fU];
    VL_WRITEF("%0s\n",1024,__Vtask_tb_behavioral__DOT__announce_test__566__name.data());
    if (VL_UNLIKELY((0U != vlSelf->tb_behavioral__DOT__report_fd))) {
        VL_FWRITEF(vlSelf->tb_behavioral__DOT__report_fd,"%0s\n",
                   1024,__Vtask_tb_behavioral__DOT__announce_test__566__name.data());
    }
    __Vtask_tb_behavioral__DOT__check_outputs__567__exp_c10 = 0U;
    __Vtask_tb_behavioral__DOT__check_outputs__567__exp_c05 = 0U;
    __Vtask_tb_behavioral__DOT__check_outputs__567__exp_c02 = 0U;
    __Vtask_tb_behavioral__DOT__check_outputs__567__exp_c01 = 0U;
    __Vtask_tb_behavioral__DOT__check_outputs__567__exp_disp = 0U;
    __Vtask_tb_behavioral__DOT__check_outputs__567__exp_resto = 0U;
    __Vtask_tb_behavioral__DOT__check_outputs__567__exp_errore = 0U;
    __Vtask_tb_behavioral__DOT__check_outputs__567__exp_p4 = 0U;
    __Vtask_tb_behavioral__DOT__check_outputs__567__exp_p3 = 0U;
    __Vtask_tb_behavioral__DOT__check_outputs__567__exp_p2 = 0U;
    __Vtask_tb_behavioral__DOT__check_outputs__567__exp_p1 = 0U;
    __Vtask_tb_behavioral__DOT__check_outputs__567__exp_credito = 0U;
    __Vtask_tb_behavioral__DOT__check_eq6__568__exp 
        = __Vtask_tb_behavioral__DOT__check_outputs__567__exp_credito;
    __Vtask_tb_behavioral__DOT__check_eq6__568__got 
        = vlSelf->tb_behavioral__DOT__credito;
    __Vtask_tb_behavioral__DOT__check_eq6__568__label[0U] 
        = Vtb_behavioral__ConstPool__CONST_h72b6a473_0[0U];
    __Vtask_tb_behavioral__DOT__check_eq6__568__label[1U] 
        = Vtb_behavioral__ConstPool__CONST_h72b6a473_0[1U];
    __Vtask_tb_behavioral__DOT__check_eq6__568__label[2U] 
        = Vtb_behavioral__ConstPool__CONST_h72b6a473_0[2U];
    __Vtask_tb_behavioral__DOT__check_eq6__568__label[3U] 
        = Vtb_behavioral__ConstPool__CONST_h72b6a473_0[3U];
    __Vtask_tb_behavioral__DOT__check_eq6__568__label[4U] 
        = Vtb_behavioral__ConstPool__CONST_h72b6a473_0[4U];
    __Vtask_tb_behavioral__DOT__check_eq6__568__label[5U] 
        = Vtb_behavioral__ConstPool__CONST_h72b6a473_0[5U];
    __Vtask_tb_behavioral__DOT__check_eq6__568__label[6U] 
        = Vtb_behavioral__ConstPool__CONST_h72b6a473_0[6U];
    __Vtask_tb_behavioral__DOT__check_eq6__568__label[7U] 
        = Vtb_behavioral__ConstPool__CONST_h72b6a473_0[7U];
    if (VL_UNLIKELY(((IData)(__Vtask_tb_behavioral__DOT__check_eq6__568__got) 
                     != (IData)(__Vtask_tb_behavioral__DOT__check_eq6__568__exp)))) {
        VL_WRITEF("FAIL %0s time=%0t got=%0# exp=%0#\n[%0t] %%Fatal: tb_behavioral.v:115: Assertion failed in %Ntb_behavioral.check_eq6\n",
                  256,__Vtask_tb_behavioral__DOT__check_eq6__568__label.data(),
                  64,VL_TIME_UNITED_Q(1000),-9,6,(IData)(__Vtask_tb_behavioral__DOT__check_eq6__568__got),
                  6,__Vtask_tb_behavioral__DOT__check_eq6__568__exp,
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("behavioral/tb_behavioral.v", 115, "");
    }
    __Vtask_tb_behavioral__DOT__check_eq1__569__exp 
        = __Vtask_tb_behavioral__DOT__check_outputs__567__exp_p1;
    __Vtask_tb_behavioral__DOT__check_eq1__569__got 
        = vlSelf->tb_behavioral__DOT__prodotto1;
    __Vtask_tb_behavioral__DOT__check_eq1__569__label[0U] 
        = Vtb_behavioral__ConstPool__CONST_hf846785c_0[0U];
    __Vtask_tb_behavioral__DOT__check_eq1__569__label[1U] 
        = Vtb_behavioral__ConstPool__CONST_hf846785c_0[1U];
    __Vtask_tb_behavioral__DOT__check_eq1__569__label[2U] 
        = Vtb_behavioral__ConstPool__CONST_hf846785c_0[2U];
    __Vtask_tb_behavioral__DOT__check_eq1__569__label[3U] 
        = Vtb_behavioral__ConstPool__CONST_hf846785c_0[3U];
    __Vtask_tb_behavioral__DOT__check_eq1__569__label[4U] 
        = Vtb_behavioral__ConstPool__CONST_hf846785c_0[4U];
    __Vtask_tb_behavioral__DOT__check_eq1__569__label[5U] 
        = Vtb_behavioral__ConstPool__CONST_hf846785c_0[5U];
    __Vtask_tb_behavioral__DOT__check_eq1__569__label[6U] 
        = Vtb_behavioral__ConstPool__CONST_hf846785c_0[6U];
    __Vtask_tb_behavioral__DOT__check_eq1__569__label[7U] 
        = Vtb_behavioral__ConstPool__CONST_hf846785c_0[7U];
    if (VL_UNLIKELY(((IData)(__Vtask_tb_behavioral__DOT__check_eq1__569__got) 
                     != (IData)(__Vtask_tb_behavioral__DOT__check_eq1__569__exp)))) {
        VL_WRITEF("FAIL %0s time=%0t got=%0# exp=%0#\n[%0t] %%Fatal: tb_behavioral.v:91: Assertion failed in %Ntb_behavioral.check_eq1\n",
                  256,__Vtask_tb_behavioral__DOT__check_eq1__569__label.data(),
                  64,VL_TIME_UNITED_Q(1000),-9,1,(IData)(__Vtask_tb_behavioral__DOT__check_eq1__569__got),
                  1,__Vtask_tb_behavioral__DOT__check_eq1__569__exp,
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("behavioral/tb_behavioral.v", 91, "");
    }
    __Vtask_tb_behavioral__DOT__check_eq1__570__exp 
        = __Vtask_tb_behavioral__DOT__check_outputs__567__exp_p2;
    __Vtask_tb_behavioral__DOT__check_eq1__570__got 
        = vlSelf->tb_behavioral__DOT__prodotto2;
    __Vtask_tb_behavioral__DOT__check_eq1__570__label[0U] 
        = Vtb_behavioral__ConstPool__CONST_h670e2312_0[0U];
    __Vtask_tb_behavioral__DOT__check_eq1__570__label[1U] 
        = Vtb_behavioral__ConstPool__CONST_h670e2312_0[1U];
    __Vtask_tb_behavioral__DOT__check_eq1__570__label[2U] 
        = Vtb_behavioral__ConstPool__CONST_h670e2312_0[2U];
    __Vtask_tb_behavioral__DOT__check_eq1__570__label[3U] 
        = Vtb_behavioral__ConstPool__CONST_h670e2312_0[3U];
    __Vtask_tb_behavioral__DOT__check_eq1__570__label[4U] 
        = Vtb_behavioral__ConstPool__CONST_h670e2312_0[4U];
    __Vtask_tb_behavioral__DOT__check_eq1__570__label[5U] 
        = Vtb_behavioral__ConstPool__CONST_h670e2312_0[5U];
    __Vtask_tb_behavioral__DOT__check_eq1__570__label[6U] 
        = Vtb_behavioral__ConstPool__CONST_h670e2312_0[6U];
    __Vtask_tb_behavioral__DOT__check_eq1__570__label[7U] 
        = Vtb_behavioral__ConstPool__CONST_h670e2312_0[7U];
    if (VL_UNLIKELY(((IData)(__Vtask_tb_behavioral__DOT__check_eq1__570__got) 
                     != (IData)(__Vtask_tb_behavioral__DOT__check_eq1__570__exp)))) {
        VL_WRITEF("FAIL %0s time=%0t got=%0# exp=%0#\n[%0t] %%Fatal: tb_behavioral.v:91: Assertion failed in %Ntb_behavioral.check_eq1\n",
                  256,__Vtask_tb_behavioral__DOT__check_eq1__570__label.data(),
                  64,VL_TIME_UNITED_Q(1000),-9,1,(IData)(__Vtask_tb_behavioral__DOT__check_eq1__570__got),
                  1,__Vtask_tb_behavioral__DOT__check_eq1__570__exp,
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("behavioral/tb_behavioral.v", 91, "");
    }
    __Vtask_tb_behavioral__DOT__check_eq1__571__exp 
        = __Vtask_tb_behavioral__DOT__check_outputs__567__exp_p3;
    __Vtask_tb_behavioral__DOT__check_eq1__571__got 
        = vlSelf->tb_behavioral__DOT__prodotto3;
    __Vtask_tb_behavioral__DOT__check_eq1__571__label[0U] 
        = Vtb_behavioral__ConstPool__CONST_h9ed4c3f5_0[0U];
    __Vtask_tb_behavioral__DOT__check_eq1__571__label[1U] 
        = Vtb_behavioral__ConstPool__CONST_h9ed4c3f5_0[1U];
    __Vtask_tb_behavioral__DOT__check_eq1__571__label[2U] 
        = Vtb_behavioral__ConstPool__CONST_h9ed4c3f5_0[2U];
    __Vtask_tb_behavioral__DOT__check_eq1__571__label[3U] 
        = Vtb_behavioral__ConstPool__CONST_h9ed4c3f5_0[3U];
    __Vtask_tb_behavioral__DOT__check_eq1__571__label[4U] 
        = Vtb_behavioral__ConstPool__CONST_h9ed4c3f5_0[4U];
    __Vtask_tb_behavioral__DOT__check_eq1__571__label[5U] 
        = Vtb_behavioral__ConstPool__CONST_h9ed4c3f5_0[5U];
    __Vtask_tb_behavioral__DOT__check_eq1__571__label[6U] 
        = Vtb_behavioral__ConstPool__CONST_h9ed4c3f5_0[6U];
    __Vtask_tb_behavioral__DOT__check_eq1__571__label[7U] 
        = Vtb_behavioral__ConstPool__CONST_h9ed4c3f5_0[7U];
    if (VL_UNLIKELY(((IData)(__Vtask_tb_behavioral__DOT__check_eq1__571__got) 
                     != (IData)(__Vtask_tb_behavioral__DOT__check_eq1__571__exp)))) {
        VL_WRITEF("FAIL %0s time=%0t got=%0# exp=%0#\n[%0t] %%Fatal: tb_behavioral.v:91: Assertion failed in %Ntb_behavioral.check_eq1\n",
                  256,__Vtask_tb_behavioral__DOT__check_eq1__571__label.data(),
                  64,VL_TIME_UNITED_Q(1000),-9,1,(IData)(__Vtask_tb_behavioral__DOT__check_eq1__571__got),
                  1,__Vtask_tb_behavioral__DOT__check_eq1__571__exp,
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("behavioral/tb_behavioral.v", 91, "");
    }
    __Vtask_tb_behavioral__DOT__check_eq1__572__exp 
        = __Vtask_tb_behavioral__DOT__check_outputs__567__exp_p4;
    __Vtask_tb_behavioral__DOT__check_eq1__572__got 
        = vlSelf->tb_behavioral__DOT__prodotto4;
    __Vtask_tb_behavioral__DOT__check_eq1__572__label[0U] 
        = Vtb_behavioral__ConstPool__CONST_h0c5996b4_0[0U];
    __Vtask_tb_behavioral__DOT__check_eq1__572__label[1U] 
        = Vtb_behavioral__ConstPool__CONST_h0c5996b4_0[1U];
    __Vtask_tb_behavioral__DOT__check_eq1__572__label[2U] 
        = Vtb_behavioral__ConstPool__CONST_h0c5996b4_0[2U];
    __Vtask_tb_behavioral__DOT__check_eq1__572__label[3U] 
        = Vtb_behavioral__ConstPool__CONST_h0c5996b4_0[3U];
    __Vtask_tb_behavioral__DOT__check_eq1__572__label[4U] 
        = Vtb_behavioral__ConstPool__CONST_h0c5996b4_0[4U];
    __Vtask_tb_behavioral__DOT__check_eq1__572__label[5U] 
        = Vtb_behavioral__ConstPool__CONST_h0c5996b4_0[5U];
    __Vtask_tb_behavioral__DOT__check_eq1__572__label[6U] 
        = Vtb_behavioral__ConstPool__CONST_h0c5996b4_0[6U];
    __Vtask_tb_behavioral__DOT__check_eq1__572__label[7U] 
        = Vtb_behavioral__ConstPool__CONST_h0c5996b4_0[7U];
    if (VL_UNLIKELY(((IData)(__Vtask_tb_behavioral__DOT__check_eq1__572__got) 
                     != (IData)(__Vtask_tb_behavioral__DOT__check_eq1__572__exp)))) {
        VL_WRITEF("FAIL %0s time=%0t got=%0# exp=%0#\n[%0t] %%Fatal: tb_behavioral.v:91: Assertion failed in %Ntb_behavioral.check_eq1\n",
                  256,__Vtask_tb_behavioral__DOT__check_eq1__572__label.data(),
                  64,VL_TIME_UNITED_Q(1000),-9,1,(IData)(__Vtask_tb_behavioral__DOT__check_eq1__572__got),
                  1,__Vtask_tb_behavioral__DOT__check_eq1__572__exp,
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("behavioral/tb_behavioral.v", 91, "");
    }
    __Vtask_tb_behavioral__DOT__check_eq2__573__exp 
        = __Vtask_tb_behavioral__DOT__check_outputs__567__exp_errore;
    __Vtask_tb_behavioral__DOT__check_eq2__573__got 
        = vlSelf->tb_behavioral__DOT__errore;
    __Vtask_tb_behavioral__DOT__check_eq2__573__label[0U] 
        = Vtb_behavioral__ConstPool__CONST_hc23eaddf_0[0U];
    __Vtask_tb_behavioral__DOT__check_eq2__573__label[1U] 
        = Vtb_behavioral__ConstPool__CONST_hc23eaddf_0[1U];
    __Vtask_tb_behavioral__DOT__check_eq2__573__label[2U] 
        = Vtb_behavioral__ConstPool__CONST_hc23eaddf_0[2U];
    __Vtask_tb_behavioral__DOT__check_eq2__573__label[3U] 
        = Vtb_behavioral__ConstPool__CONST_hc23eaddf_0[3U];
    __Vtask_tb_behavioral__DOT__check_eq2__573__label[4U] 
        = Vtb_behavioral__ConstPool__CONST_hc23eaddf_0[4U];
    __Vtask_tb_behavioral__DOT__check_eq2__573__label[5U] 
        = Vtb_behavioral__ConstPool__CONST_hc23eaddf_0[5U];
    __Vtask_tb_behavioral__DOT__check_eq2__573__label[6U] 
        = Vtb_behavioral__ConstPool__CONST_hc23eaddf_0[6U];
    __Vtask_tb_behavioral__DOT__check_eq2__573__label[7U] 
        = Vtb_behavioral__ConstPool__CONST_hc23eaddf_0[7U];
    if (VL_UNLIKELY(((IData)(__Vtask_tb_behavioral__DOT__check_eq2__573__got) 
                     != (IData)(__Vtask_tb_behavioral__DOT__check_eq2__573__exp)))) {
        VL_WRITEF("FAIL %0s time=%0t got=%0# exp=%0#\n[%0t] %%Fatal: tb_behavioral.v:103: Assertion failed in %Ntb_behavioral.check_eq2\n",
                  256,__Vtask_tb_behavioral__DOT__check_eq2__573__label.data(),
                  64,VL_TIME_UNITED_Q(1000),-9,2,(IData)(__Vtask_tb_behavioral__DOT__check_eq2__573__got),
                  2,__Vtask_tb_behavioral__DOT__check_eq2__573__exp,
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("behavioral/tb_behavioral.v", 103, "");
    }
    __Vtask_tb_behavioral__DOT__check_eq6__574__exp 
        = __Vtask_tb_behavioral__DOT__check_outputs__567__exp_resto;
    __Vtask_tb_behavioral__DOT__check_eq6__574__got 
        = vlSelf->tb_behavioral__DOT__resto;
    __Vtask_tb_behavioral__DOT__check_eq6__574__label[0U] 
        = Vtb_behavioral__ConstPool__CONST_hf0db003b_0[0U];
    __Vtask_tb_behavioral__DOT__check_eq6__574__label[1U] 
        = Vtb_behavioral__ConstPool__CONST_hf0db003b_0[1U];
    __Vtask_tb_behavioral__DOT__check_eq6__574__label[2U] 
        = Vtb_behavioral__ConstPool__CONST_hf0db003b_0[2U];
    __Vtask_tb_behavioral__DOT__check_eq6__574__label[3U] 
        = Vtb_behavioral__ConstPool__CONST_hf0db003b_0[3U];
    __Vtask_tb_behavioral__DOT__check_eq6__574__label[4U] 
        = Vtb_behavioral__ConstPool__CONST_hf0db003b_0[4U];
    __Vtask_tb_behavioral__DOT__check_eq6__574__label[5U] 
        = Vtb_behavioral__ConstPool__CONST_hf0db003b_0[5U];
    __Vtask_tb_behavioral__DOT__check_eq6__574__label[6U] 
        = Vtb_behavioral__ConstPool__CONST_hf0db003b_0[6U];
    __Vtask_tb_behavioral__DOT__check_eq6__574__label[7U] 
        = Vtb_behavioral__ConstPool__CONST_hf0db003b_0[7U];
    if (VL_UNLIKELY(((IData)(__Vtask_tb_behavioral__DOT__check_eq6__574__got) 
                     != (IData)(__Vtask_tb_behavioral__DOT__check_eq6__574__exp)))) {
        VL_WRITEF("FAIL %0s time=%0t got=%0# exp=%0#\n[%0t] %%Fatal: tb_behavioral.v:115: Assertion failed in %Ntb_behavioral.check_eq6\n",
                  256,__Vtask_tb_behavioral__DOT__check_eq6__574__label.data(),
                  64,VL_TIME_UNITED_Q(1000),-9,6,(IData)(__Vtask_tb_behavioral__DOT__check_eq6__574__got),
                  6,__Vtask_tb_behavioral__DOT__check_eq6__574__exp,
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("behavioral/tb_behavioral.v", 115, "");
    }
    __Vtask_tb_behavioral__DOT__check_eq10__575__exp 
        = __Vtask_tb_behavioral__DOT__check_outputs__567__exp_disp;
    __Vtask_tb_behavioral__DOT__check_eq10__575__got 
        = vlSelf->tb_behavioral__DOT__disponibile;
    __Vtask_tb_behavioral__DOT__check_eq10__575__label[0U] 
        = Vtb_behavioral__ConstPool__CONST_h9e307437_0[0U];
    __Vtask_tb_behavioral__DOT__check_eq10__575__label[1U] 
        = Vtb_behavioral__ConstPool__CONST_h9e307437_0[1U];
    __Vtask_tb_behavioral__DOT__check_eq10__575__label[2U] 
        = Vtb_behavioral__ConstPool__CONST_h9e307437_0[2U];
    __Vtask_tb_behavioral__DOT__check_eq10__575__label[3U] 
        = Vtb_behavioral__ConstPool__CONST_h9e307437_0[3U];
    __Vtask_tb_behavioral__DOT__check_eq10__575__label[4U] 
        = Vtb_behavioral__ConstPool__CONST_h9e307437_0[4U];
    __Vtask_tb_behavioral__DOT__check_eq10__575__label[5U] 
        = Vtb_behavioral__ConstPool__CONST_h9e307437_0[5U];
    __Vtask_tb_behavioral__DOT__check_eq10__575__label[6U] 
        = Vtb_behavioral__ConstPool__CONST_h9e307437_0[6U];
    __Vtask_tb_behavioral__DOT__check_eq10__575__label[7U] 
        = Vtb_behavioral__ConstPool__CONST_h9e307437_0[7U];
    if (VL_UNLIKELY(((IData)(__Vtask_tb_behavioral__DOT__check_eq10__575__got) 
                     != (IData)(__Vtask_tb_behavioral__DOT__check_eq10__575__exp)))) {
        VL_WRITEF("FAIL %0s time=%0t got=%0# exp=%0#\n[%0t] %%Fatal: tb_behavioral.v:127: Assertion failed in %Ntb_behavioral.check_eq10\n",
                  256,__Vtask_tb_behavioral__DOT__check_eq10__575__label.data(),
                  64,VL_TIME_UNITED_Q(1000),-9,10,(IData)(__Vtask_tb_behavioral__DOT__check_eq10__575__got),
                  10,__Vtask_tb_behavioral__DOT__check_eq10__575__exp,
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("behavioral/tb_behavioral.v", 127, "");
    }
    __Vtask_tb_behavioral__DOT__check_eq6__576__exp 
        = __Vtask_tb_behavioral__DOT__check_outputs__567__exp_c01;
    __Vtask_tb_behavioral__DOT__check_eq6__576__got 
        = vlSelf->tb_behavioral__DOT__coin_01;
    __Vtask_tb_behavioral__DOT__check_eq6__576__label[0U] 
        = Vtb_behavioral__ConstPool__CONST_h8a69c039_0[0U];
    __Vtask_tb_behavioral__DOT__check_eq6__576__label[1U] 
        = Vtb_behavioral__ConstPool__CONST_h8a69c039_0[1U];
    __Vtask_tb_behavioral__DOT__check_eq6__576__label[2U] 
        = Vtb_behavioral__ConstPool__CONST_h8a69c039_0[2U];
    __Vtask_tb_behavioral__DOT__check_eq6__576__label[3U] 
        = Vtb_behavioral__ConstPool__CONST_h8a69c039_0[3U];
    __Vtask_tb_behavioral__DOT__check_eq6__576__label[4U] 
        = Vtb_behavioral__ConstPool__CONST_h8a69c039_0[4U];
    __Vtask_tb_behavioral__DOT__check_eq6__576__label[5U] 
        = Vtb_behavioral__ConstPool__CONST_h8a69c039_0[5U];
    __Vtask_tb_behavioral__DOT__check_eq6__576__label[6U] 
        = Vtb_behavioral__ConstPool__CONST_h8a69c039_0[6U];
    __Vtask_tb_behavioral__DOT__check_eq6__576__label[7U] 
        = Vtb_behavioral__ConstPool__CONST_h8a69c039_0[7U];
    if (VL_UNLIKELY(((IData)(__Vtask_tb_behavioral__DOT__check_eq6__576__got) 
                     != (IData)(__Vtask_tb_behavioral__DOT__check_eq6__576__exp)))) {
        VL_WRITEF("FAIL %0s time=%0t got=%0# exp=%0#\n[%0t] %%Fatal: tb_behavioral.v:115: Assertion failed in %Ntb_behavioral.check_eq6\n",
                  256,__Vtask_tb_behavioral__DOT__check_eq6__576__label.data(),
                  64,VL_TIME_UNITED_Q(1000),-9,6,(IData)(__Vtask_tb_behavioral__DOT__check_eq6__576__got),
                  6,__Vtask_tb_behavioral__DOT__check_eq6__576__exp,
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("behavioral/tb_behavioral.v", 115, "");
    }
    __Vtask_tb_behavioral__DOT__check_eq6__577__exp 
        = __Vtask_tb_behavioral__DOT__check_outputs__567__exp_c02;
    __Vtask_tb_behavioral__DOT__check_eq6__577__got 
        = vlSelf->tb_behavioral__DOT__coin_02;
    __Vtask_tb_behavioral__DOT__check_eq6__577__label[0U] 
        = Vtb_behavioral__ConstPool__CONST_hf10bdf90_0[0U];
    __Vtask_tb_behavioral__DOT__check_eq6__577__label[1U] 
        = Vtb_behavioral__ConstPool__CONST_hf10bdf90_0[1U];
    __Vtask_tb_behavioral__DOT__check_eq6__577__label[2U] 
        = Vtb_behavioral__ConstPool__CONST_hf10bdf90_0[2U];
    __Vtask_tb_behavioral__DOT__check_eq6__577__label[3U] 
        = Vtb_behavioral__ConstPool__CONST_hf10bdf90_0[3U];
    __Vtask_tb_behavioral__DOT__check_eq6__577__label[4U] 
        = Vtb_behavioral__ConstPool__CONST_hf10bdf90_0[4U];
    __Vtask_tb_behavioral__DOT__check_eq6__577__label[5U] 
        = Vtb_behavioral__ConstPool__CONST_hf10bdf90_0[5U];
    __Vtask_tb_behavioral__DOT__check_eq6__577__label[6U] 
        = Vtb_behavioral__ConstPool__CONST_hf10bdf90_0[6U];
    __Vtask_tb_behavioral__DOT__check_eq6__577__label[7U] 
        = Vtb_behavioral__ConstPool__CONST_hf10bdf90_0[7U];
    if (VL_UNLIKELY(((IData)(__Vtask_tb_behavioral__DOT__check_eq6__577__got) 
                     != (IData)(__Vtask_tb_behavioral__DOT__check_eq6__577__exp)))) {
        VL_WRITEF("FAIL %0s time=%0t got=%0# exp=%0#\n[%0t] %%Fatal: tb_behavioral.v:115: Assertion failed in %Ntb_behavioral.check_eq6\n",
                  256,__Vtask_tb_behavioral__DOT__check_eq6__577__label.data(),
                  64,VL_TIME_UNITED_Q(1000),-9,6,(IData)(__Vtask_tb_behavioral__DOT__check_eq6__577__got),
                  6,__Vtask_tb_behavioral__DOT__check_eq6__577__exp,
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("behavioral/tb_behavioral.v", 115, "");
    }
    __Vtask_tb_behavioral__DOT__check_eq6__578__exp 
        = __Vtask_tb_behavioral__DOT__check_outputs__567__exp_c05;
    __Vtask_tb_behavioral__DOT__check_eq6__578__got 
        = vlSelf->tb_behavioral__DOT__coin_05;
    __Vtask_tb_behavioral__DOT__check_eq6__578__label[0U] 
        = Vtb_behavioral__ConstPool__CONST_h11897a12_0[0U];
    __Vtask_tb_behavioral__DOT__check_eq6__578__label[1U] 
        = Vtb_behavioral__ConstPool__CONST_h11897a12_0[1U];
    __Vtask_tb_behavioral__DOT__check_eq6__578__label[2U] 
        = Vtb_behavioral__ConstPool__CONST_h11897a12_0[2U];
    __Vtask_tb_behavioral__DOT__check_eq6__578__label[3U] 
        = Vtb_behavioral__ConstPool__CONST_h11897a12_0[3U];
    __Vtask_tb_behavioral__DOT__check_eq6__578__label[4U] 
        = Vtb_behavioral__ConstPool__CONST_h11897a12_0[4U];
    __Vtask_tb_behavioral__DOT__check_eq6__578__label[5U] 
        = Vtb_behavioral__ConstPool__CONST_h11897a12_0[5U];
    __Vtask_tb_behavioral__DOT__check_eq6__578__label[6U] 
        = Vtb_behavioral__ConstPool__CONST_h11897a12_0[6U];
    __Vtask_tb_behavioral__DOT__check_eq6__578__label[7U] 
        = Vtb_behavioral__ConstPool__CONST_h11897a12_0[7U];
    if (VL_UNLIKELY(((IData)(__Vtask_tb_behavioral__DOT__check_eq6__578__got) 
                     != (IData)(__Vtask_tb_behavioral__DOT__check_eq6__578__exp)))) {
        VL_WRITEF("FAIL %0s time=%0t got=%0# exp=%0#\n[%0t] %%Fatal: tb_behavioral.v:115: Assertion failed in %Ntb_behavioral.check_eq6\n",
                  256,__Vtask_tb_behavioral__DOT__check_eq6__578__label.data(),
                  64,VL_TIME_UNITED_Q(1000),-9,6,(IData)(__Vtask_tb_behavioral__DOT__check_eq6__578__got),
                  6,__Vtask_tb_behavioral__DOT__check_eq6__578__exp,
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("behavioral/tb_behavioral.v", 115, "");
    }
    __Vtask_tb_behavioral__DOT__check_eq6__579__exp 
        = __Vtask_tb_behavioral__DOT__check_outputs__567__exp_c10;
    __Vtask_tb_behavioral__DOT__check_eq6__579__got 
        = vlSelf->tb_behavioral__DOT__coin_10;
    __Vtask_tb_behavioral__DOT__check_eq6__579__label[0U] 
        = Vtb_behavioral__ConstPool__CONST_h23467a71_0[0U];
    __Vtask_tb_behavioral__DOT__check_eq6__579__label[1U] 
        = Vtb_behavioral__ConstPool__CONST_h23467a71_0[1U];
    __Vtask_tb_behavioral__DOT__check_eq6__579__label[2U] 
        = Vtb_behavioral__ConstPool__CONST_h23467a71_0[2U];
    __Vtask_tb_behavioral__DOT__check_eq6__579__label[3U] 
        = Vtb_behavioral__ConstPool__CONST_h23467a71_0[3U];
    __Vtask_tb_behavioral__DOT__check_eq6__579__label[4U] 
        = Vtb_behavioral__ConstPool__CONST_h23467a71_0[4U];
    __Vtask_tb_behavioral__DOT__check_eq6__579__label[5U] 
        = Vtb_behavioral__ConstPool__CONST_h23467a71_0[5U];
    __Vtask_tb_behavioral__DOT__check_eq6__579__label[6U] 
        = Vtb_behavioral__ConstPool__CONST_h23467a71_0[6U];
    __Vtask_tb_behavioral__DOT__check_eq6__579__label[7U] 
        = Vtb_behavioral__ConstPool__CONST_h23467a71_0[7U];
    if (VL_UNLIKELY(((IData)(__Vtask_tb_behavioral__DOT__check_eq6__579__got) 
                     != (IData)(__Vtask_tb_behavioral__DOT__check_eq6__579__exp)))) {
        VL_WRITEF("FAIL %0s time=%0t got=%0# exp=%0#\n[%0t] %%Fatal: tb_behavioral.v:115: Assertion failed in %Ntb_behavioral.check_eq6\n",
                  256,__Vtask_tb_behavioral__DOT__check_eq6__579__label.data(),
                  64,VL_TIME_UNITED_Q(1000),-9,6,(IData)(__Vtask_tb_behavioral__DOT__check_eq6__579__got),
                  6,__Vtask_tb_behavioral__DOT__check_eq6__579__exp,
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("behavioral/tb_behavioral.v", 115, "");
    }
    __Vtask_tb_behavioral__DOT__print_case_report__580__exp_c10 
        = __Vtask_tb_behavioral__DOT__check_outputs__567__exp_c10;
    __Vtask_tb_behavioral__DOT__print_case_report__580__exp_c05 
        = __Vtask_tb_behavioral__DOT__check_outputs__567__exp_c05;
    __Vtask_tb_behavioral__DOT__print_case_report__580__exp_c02 
        = __Vtask_tb_behavioral__DOT__check_outputs__567__exp_c02;
    __Vtask_tb_behavioral__DOT__print_case_report__580__exp_c01 
        = __Vtask_tb_behavioral__DOT__check_outputs__567__exp_c01;
    __Vtask_tb_behavioral__DOT__print_case_report__580__exp_disp 
        = __Vtask_tb_behavioral__DOT__check_outputs__567__exp_disp;
    __Vtask_tb_behavioral__DOT__print_case_report__580__exp_resto 
        = __Vtask_tb_behavioral__DOT__check_outputs__567__exp_resto;
    __Vtask_tb_behavioral__DOT__print_case_report__580__exp_errore 
        = __Vtask_tb_behavioral__DOT__check_outputs__567__exp_errore;
    __Vtask_tb_behavioral__DOT__print_case_report__580__exp_p4 
        = __Vtask_tb_behavioral__DOT__check_outputs__567__exp_p4;
    __Vtask_tb_behavioral__DOT__print_case_report__580__exp_p3 
        = __Vtask_tb_behavioral__DOT__check_outputs__567__exp_p3;
    __Vtask_tb_behavioral__DOT__print_case_report__580__exp_p2 
        = __Vtask_tb_behavioral__DOT__check_outputs__567__exp_p2;
    __Vtask_tb_behavioral__DOT__print_case_report__580__exp_p1 
        = __Vtask_tb_behavioral__DOT__check_outputs__567__exp_p1;
    __Vtask_tb_behavioral__DOT__print_case_report__580__exp_credito 
        = __Vtask_tb_behavioral__DOT__check_outputs__567__exp_credito;
    VL_WRITEF("IN : coin=%03b selezione=%03b conferma=%0# annulla=%0#\nOUT: credito=%0# prodotto=%b errore=%02b resto=%0# disponibile=%0# coin_01=%0# coin_02=%0# coin_05=%0# coin_10=%0#\nEXP: credito=%0# prodotto=%b errore=%02b resto=%0# disponibile=%0# coin_01=%0# coin_02=%0# coin_05=%0# coin_10=%0#\n[PASS] %0s\n\n",
              3,vlSelf->tb_behavioral__DOT__last_coin,
              3,(IData)(vlSelf->tb_behavioral__DOT__last_selezione),
              1,vlSelf->tb_behavioral__DOT__last_conferma,
              1,(IData)(vlSelf->tb_behavioral__DOT__last_annulla),
              6,vlSelf->tb_behavioral__DOT__credito,
              4,(((IData)(vlSelf->tb_behavioral__DOT__prodotto1) 
                  << 3U) | (((IData)(vlSelf->tb_behavioral__DOT__prodotto2) 
                             << 2U) | (((IData)(vlSelf->tb_behavioral__DOT__prodotto3) 
                                        << 1U) | (IData)(vlSelf->tb_behavioral__DOT__prodotto4)))),
              2,(IData)(vlSelf->tb_behavioral__DOT__errore),
              6,vlSelf->tb_behavioral__DOT__resto,10,
              (IData)(vlSelf->tb_behavioral__DOT__disponibile),
              6,vlSelf->tb_behavioral__DOT__coin_01,
              6,(IData)(vlSelf->tb_behavioral__DOT__coin_02),
              6,vlSelf->tb_behavioral__DOT__coin_05,
              6,(IData)(vlSelf->tb_behavioral__DOT__coin_10),
              6,__Vtask_tb_behavioral__DOT__print_case_report__580__exp_credito,
              4,(((IData)(__Vtask_tb_behavioral__DOT__print_case_report__580__exp_p1) 
                  << 3U) | (((IData)(__Vtask_tb_behavioral__DOT__print_case_report__580__exp_p2) 
                             << 2U) | (((IData)(__Vtask_tb_behavioral__DOT__print_case_report__580__exp_p3) 
                                        << 1U) | (IData)(__Vtask_tb_behavioral__DOT__print_case_report__580__exp_p4)))),
              2,(IData)(__Vtask_tb_behavioral__DOT__print_case_report__580__exp_errore),
              6,__Vtask_tb_behavioral__DOT__print_case_report__580__exp_resto,
              10,(IData)(__Vtask_tb_behavioral__DOT__print_case_report__580__exp_disp),
              6,__Vtask_tb_behavioral__DOT__print_case_report__580__exp_c01,
              6,(IData)(__Vtask_tb_behavioral__DOT__print_case_report__580__exp_c02),
              6,__Vtask_tb_behavioral__DOT__print_case_report__580__exp_c05,
              6,(IData)(__Vtask_tb_behavioral__DOT__print_case_report__580__exp_c10),
              1024,vlSelf->tb_behavioral__DOT__current_test_name.data());
    if (VL_UNLIKELY((0U != vlSelf->tb_behavioral__DOT__report_fd))) {
        VL_FWRITEF(vlSelf->tb_behavioral__DOT__report_fd,"IN : coin=%03b selezione=%03b conferma=%0# annulla=%0#\nOUT: credito=%0# prodotto=%b errore=%02b resto=%0# disponibile=%0# coin_01=%0# coin_02=%0# coin_05=%0# coin_10=%0#\nEXP: credito=%0# prodotto=%b errore=%02b resto=%0# disponibile=%0# coin_01=%0# coin_02=%0# coin_05=%0# coin_10=%0#\n[PASS] %0s\n\n",
                   3,vlSelf->tb_behavioral__DOT__last_coin,
                   3,(IData)(vlSelf->tb_behavioral__DOT__last_selezione),
                   1,vlSelf->tb_behavioral__DOT__last_conferma,
                   1,(IData)(vlSelf->tb_behavioral__DOT__last_annulla),
                   6,vlSelf->tb_behavioral__DOT__credito,
                   4,(((IData)(vlSelf->tb_behavioral__DOT__prodotto1) 
                       << 3U) | (((IData)(vlSelf->tb_behavioral__DOT__prodotto2) 
                                  << 2U) | (((IData)(vlSelf->tb_behavioral__DOT__prodotto3) 
                                             << 1U) 
                                            | (IData)(vlSelf->tb_behavioral__DOT__prodotto4)))),
                   2,(IData)(vlSelf->tb_behavioral__DOT__errore),
                   6,vlSelf->tb_behavioral__DOT__resto,
                   10,(IData)(vlSelf->tb_behavioral__DOT__disponibile),
                   6,vlSelf->tb_behavioral__DOT__coin_01,
                   6,(IData)(vlSelf->tb_behavioral__DOT__coin_02),
                   6,vlSelf->tb_behavioral__DOT__coin_05,
                   6,(IData)(vlSelf->tb_behavioral__DOT__coin_10),
                   6,__Vtask_tb_behavioral__DOT__print_case_report__580__exp_credito,
                   4,(((IData)(__Vtask_tb_behavioral__DOT__print_case_report__580__exp_p1) 
                       << 3U) | (((IData)(__Vtask_tb_behavioral__DOT__print_case_report__580__exp_p2) 
                                  << 2U) | (((IData)(__Vtask_tb_behavioral__DOT__print_case_report__580__exp_p3) 
                                             << 1U) 
                                            | (IData)(__Vtask_tb_behavioral__DOT__print_case_report__580__exp_p4)))),
                   2,(IData)(__Vtask_tb_behavioral__DOT__print_case_report__580__exp_errore),
                   6,__Vtask_tb_behavioral__DOT__print_case_report__580__exp_resto,
                   10,(IData)(__Vtask_tb_behavioral__DOT__print_case_report__580__exp_disp),
                   6,__Vtask_tb_behavioral__DOT__print_case_report__580__exp_c01,
                   6,(IData)(__Vtask_tb_behavioral__DOT__print_case_report__580__exp_c02),
                   6,__Vtask_tb_behavioral__DOT__print_case_report__580__exp_c05,
                   6,(IData)(__Vtask_tb_behavioral__DOT__print_case_report__580__exp_c10),
                   1024,vlSelf->tb_behavioral__DOT__current_test_name.data());
    }
    vlSelf->tb_behavioral__DOT__rst = 1U;
    __Vtask_tb_behavioral__DOT__announce_test__582__name[0U] 
        = Vtb_behavioral__ConstPool__CONST_hdf4033ca_0[0U];
    __Vtask_tb_behavioral__DOT__announce_test__582__name[1U] 
        = Vtb_behavioral__ConstPool__CONST_hdf4033ca_0[1U];
    __Vtask_tb_behavioral__DOT__announce_test__582__name[2U] 
        = Vtb_behavioral__ConstPool__CONST_hdf4033ca_0[2U];
    __Vtask_tb_behavioral__DOT__announce_test__582__name[3U] 
        = Vtb_behavioral__ConstPool__CONST_hdf4033ca_0[3U];
    __Vtask_tb_behavioral__DOT__announce_test__582__name[4U] 
        = Vtb_behavioral__ConstPool__CONST_hdf4033ca_0[4U];
    __Vtask_tb_behavioral__DOT__announce_test__582__name[5U] 
        = Vtb_behavioral__ConstPool__CONST_hdf4033ca_0[5U];
    __Vtask_tb_behavioral__DOT__announce_test__582__name[6U] 
        = Vtb_behavioral__ConstPool__CONST_hdf4033ca_0[6U];
    __Vtask_tb_behavioral__DOT__announce_test__582__name[7U] 
        = Vtb_behavioral__ConstPool__CONST_hdf4033ca_0[7U];
    __Vtask_tb_behavioral__DOT__announce_test__582__name[8U] 
        = Vtb_behavioral__ConstPool__CONST_hdf4033ca_0[8U];
    __Vtask_tb_behavioral__DOT__announce_test__582__name[9U] 
        = Vtb_behavioral__ConstPool__CONST_hdf4033ca_0[9U];
    __Vtask_tb_behavioral__DOT__announce_test__582__name[0xaU] 
        = Vtb_behavioral__ConstPool__CONST_hdf4033ca_0[0xaU];
    __Vtask_tb_behavioral__DOT__announce_test__582__name[0xbU] 
        = Vtb_behavioral__ConstPool__CONST_hdf4033ca_0[0xbU];
    __Vtask_tb_behavioral__DOT__announce_test__582__name[0xcU] 
        = Vtb_behavioral__ConstPool__CONST_hdf4033ca_0[0xcU];
    __Vtask_tb_behavioral__DOT__announce_test__582__name[0xdU] 
        = Vtb_behavioral__ConstPool__CONST_hdf4033ca_0[0xdU];
    __Vtask_tb_behavioral__DOT__announce_test__582__name[0xeU] 
        = Vtb_behavioral__ConstPool__CONST_hdf4033ca_0[0xeU];
    __Vtask_tb_behavioral__DOT__announce_test__582__name[0xfU] 
        = Vtb_behavioral__ConstPool__CONST_hdf4033ca_0[0xfU];
    __Vtask_tb_behavioral__DOT__announce_test__582__name[0x10U] 
        = Vtb_behavioral__ConstPool__CONST_hdf4033ca_0[0x10U];
    __Vtask_tb_behavioral__DOT__announce_test__582__name[0x11U] 
        = Vtb_behavioral__ConstPool__CONST_hdf4033ca_0[0x11U];
    __Vtask_tb_behavioral__DOT__announce_test__582__name[0x12U] 
        = Vtb_behavioral__ConstPool__CONST_hdf4033ca_0[0x12U];
    __Vtask_tb_behavioral__DOT__announce_test__582__name[0x13U] 
        = Vtb_behavioral__ConstPool__CONST_hdf4033ca_0[0x13U];
    __Vtask_tb_behavioral__DOT__announce_test__582__name[0x14U] 
        = Vtb_behavioral__ConstPool__CONST_hdf4033ca_0[0x14U];
    __Vtask_tb_behavioral__DOT__announce_test__582__name[0x15U] 
        = Vtb_behavioral__ConstPool__CONST_hdf4033ca_0[0x15U];
    __Vtask_tb_behavioral__DOT__announce_test__582__name[0x16U] 
        = Vtb_behavioral__ConstPool__CONST_hdf4033ca_0[0x16U];
    __Vtask_tb_behavioral__DOT__announce_test__582__name[0x17U] 
        = Vtb_behavioral__ConstPool__CONST_hdf4033ca_0[0x17U];
    __Vtask_tb_behavioral__DOT__announce_test__582__name[0x18U] 
        = Vtb_behavioral__ConstPool__CONST_hdf4033ca_0[0x18U];
    __Vtask_tb_behavioral__DOT__announce_test__582__name[0x19U] 
        = Vtb_behavioral__ConstPool__CONST_hdf4033ca_0[0x19U];
    __Vtask_tb_behavioral__DOT__announce_test__582__name[0x1aU] 
        = Vtb_behavioral__ConstPool__CONST_hdf4033ca_0[0x1aU];
    __Vtask_tb_behavioral__DOT__announce_test__582__name[0x1bU] 
        = Vtb_behavioral__ConstPool__CONST_hdf4033ca_0[0x1bU];
    __Vtask_tb_behavioral__DOT__announce_test__582__name[0x1cU] 
        = Vtb_behavioral__ConstPool__CONST_hdf4033ca_0[0x1cU];
    __Vtask_tb_behavioral__DOT__announce_test__582__name[0x1dU] 
        = Vtb_behavioral__ConstPool__CONST_hdf4033ca_0[0x1dU];
    __Vtask_tb_behavioral__DOT__announce_test__582__name[0x1eU] 
        = Vtb_behavioral__ConstPool__CONST_hdf4033ca_0[0x1eU];
    __Vtask_tb_behavioral__DOT__announce_test__582__name[0x1fU] 
        = Vtb_behavioral__ConstPool__CONST_hdf4033ca_0[0x1fU];
    vlSelf->tb_behavioral__DOT__current_test_name[0U] 
        = __Vtask_tb_behavioral__DOT__announce_test__582__name[0U];
    vlSelf->tb_behavioral__DOT__current_test_name[1U] 
        = __Vtask_tb_behavioral__DOT__announce_test__582__name[1U];
    vlSelf->tb_behavioral__DOT__current_test_name[2U] 
        = __Vtask_tb_behavioral__DOT__announce_test__582__name[2U];
    vlSelf->tb_behavioral__DOT__current_test_name[3U] 
        = __Vtask_tb_behavioral__DOT__announce_test__582__name[3U];
    vlSelf->tb_behavioral__DOT__current_test_name[4U] 
        = __Vtask_tb_behavioral__DOT__announce_test__582__name[4U];
    vlSelf->tb_behavioral__DOT__current_test_name[5U] 
        = __Vtask_tb_behavioral__DOT__announce_test__582__name[5U];
    vlSelf->tb_behavioral__DOT__current_test_name[6U] 
        = __Vtask_tb_behavioral__DOT__announce_test__582__name[6U];
    vlSelf->tb_behavioral__DOT__current_test_name[7U] 
        = __Vtask_tb_behavioral__DOT__announce_test__582__name[7U];
    vlSelf->tb_behavioral__DOT__current_test_name[8U] 
        = __Vtask_tb_behavioral__DOT__announce_test__582__name[8U];
    vlSelf->tb_behavioral__DOT__current_test_name[9U] 
        = __Vtask_tb_behavioral__DOT__announce_test__582__name[9U];
    vlSelf->tb_behavioral__DOT__current_test_name[0xaU] 
        = __Vtask_tb_behavioral__DOT__announce_test__582__name[0xaU];
    vlSelf->tb_behavioral__DOT__current_test_name[0xbU] 
        = __Vtask_tb_behavioral__DOT__announce_test__582__name[0xbU];
    vlSelf->tb_behavioral__DOT__current_test_name[0xcU] 
        = __Vtask_tb_behavioral__DOT__announce_test__582__name[0xcU];
    vlSelf->tb_behavioral__DOT__current_test_name[0xdU] 
        = __Vtask_tb_behavioral__DOT__announce_test__582__name[0xdU];
    vlSelf->tb_behavioral__DOT__current_test_name[0xeU] 
        = __Vtask_tb_behavioral__DOT__announce_test__582__name[0xeU];
    vlSelf->tb_behavioral__DOT__current_test_name[0xfU] 
        = __Vtask_tb_behavioral__DOT__announce_test__582__name[0xfU];
    vlSelf->tb_behavioral__DOT__current_test_name[0x10U] 
        = __Vtask_tb_behavioral__DOT__announce_test__582__name[0x10U];
    vlSelf->tb_behavioral__DOT__current_test_name[0x11U] 
        = __Vtask_tb_behavioral__DOT__announce_test__582__name[0x11U];
    vlSelf->tb_behavioral__DOT__current_test_name[0x12U] 
        = __Vtask_tb_behavioral__DOT__announce_test__582__name[0x12U];
    vlSelf->tb_behavioral__DOT__current_test_name[0x13U] 
        = __Vtask_tb_behavioral__DOT__announce_test__582__name[0x13U];
    vlSelf->tb_behavioral__DOT__current_test_name[0x14U] 
        = __Vtask_tb_behavioral__DOT__announce_test__582__name[0x14U];
    vlSelf->tb_behavioral__DOT__current_test_name[0x15U] 
        = __Vtask_tb_behavioral__DOT__announce_test__582__name[0x15U];
    vlSelf->tb_behavioral__DOT__current_test_name[0x16U] 
        = __Vtask_tb_behavioral__DOT__announce_test__582__name[0x16U];
    vlSelf->tb_behavioral__DOT__current_test_name[0x17U] 
        = __Vtask_tb_behavioral__DOT__announce_test__582__name[0x17U];
    vlSelf->tb_behavioral__DOT__current_test_name[0x18U] 
        = __Vtask_tb_behavioral__DOT__announce_test__582__name[0x18U];
    vlSelf->tb_behavioral__DOT__current_test_name[0x19U] 
        = __Vtask_tb_behavioral__DOT__announce_test__582__name[0x19U];
    vlSelf->tb_behavioral__DOT__current_test_name[0x1aU] 
        = __Vtask_tb_behavioral__DOT__announce_test__582__name[0x1aU];
    vlSelf->tb_behavioral__DOT__current_test_name[0x1bU] 
        = __Vtask_tb_behavioral__DOT__announce_test__582__name[0x1bU];
    vlSelf->tb_behavioral__DOT__current_test_name[0x1cU] 
        = __Vtask_tb_behavioral__DOT__announce_test__582__name[0x1cU];
    vlSelf->tb_behavioral__DOT__current_test_name[0x1dU] 
        = __Vtask_tb_behavioral__DOT__announce_test__582__name[0x1dU];
    vlSelf->tb_behavioral__DOT__current_test_name[0x1eU] 
        = __Vtask_tb_behavioral__DOT__announce_test__582__name[0x1eU];
    vlSelf->tb_behavioral__DOT__current_test_name[0x1fU] 
        = __Vtask_tb_behavioral__DOT__announce_test__582__name[0x1fU];
    VL_WRITEF("%0s\n",1024,__Vtask_tb_behavioral__DOT__announce_test__582__name.data());
    if (VL_UNLIKELY((0U != vlSelf->tb_behavioral__DOT__report_fd))) {
        VL_FWRITEF(vlSelf->tb_behavioral__DOT__report_fd,"%0s\n",
                   1024,__Vtask_tb_behavioral__DOT__announce_test__582__name.data());
    }
    __Vtask_tb_behavioral__DOT__init_word__584__cfg_value = 5U;
    __Vtask_tb_behavioral__DOT__step__585__annulla_i = 0U;
    __Vtask_tb_behavioral__DOT__step__585__conferma_i = 0U;
    __Vtask_tb_behavioral__DOT__step__585__selezione_i 
        = (7U & (IData)(__Vtask_tb_behavioral__DOT__init_word__584__cfg_value));
    __Vtask_tb_behavioral__DOT__step__585__coin_i = 
        (7U & ((IData)(__Vtask_tb_behavioral__DOT__init_word__584__cfg_value) 
               >> 3U));
    vlSelf->tb_behavioral__DOT__coin = __Vtask_tb_behavioral__DOT__step__585__coin_i;
    vlSelf->tb_behavioral__DOT__selezione = __Vtask_tb_behavioral__DOT__step__585__selezione_i;
    vlSelf->tb_behavioral__DOT__conferma = __Vtask_tb_behavioral__DOT__step__585__conferma_i;
    vlSelf->tb_behavioral__DOT__annulla = __Vtask_tb_behavioral__DOT__step__585__annulla_i;
    vlSelf->tb_behavioral__DOT__last_coin = __Vtask_tb_behavioral__DOT__step__585__coin_i;
    vlSelf->tb_behavioral__DOT__last_selezione = __Vtask_tb_behavioral__DOT__step__585__selezione_i;
    vlSelf->tb_behavioral__DOT__last_conferma = __Vtask_tb_behavioral__DOT__step__585__conferma_i;
    vlSelf->tb_behavioral__DOT__last_annulla = __Vtask_tb_behavioral__DOT__step__585__annulla_i;
    co_await vlSelf->__VtrigSched_h2394f4a5__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_behavioral.clk)", 
                                                       "behavioral/tb_behavioral.v", 
                                                       79);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "behavioral/tb_behavioral.v", 
                                       80);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_behavioral__DOT__init_word__586__cfg_value = 3U;
    __Vtask_tb_behavioral__DOT__step__587__annulla_i = 0U;
    __Vtask_tb_behavioral__DOT__step__587__conferma_i = 0U;
    __Vtask_tb_behavioral__DOT__step__587__selezione_i 
        = (7U & (IData)(__Vtask_tb_behavioral__DOT__init_word__586__cfg_value));
    __Vtask_tb_behavioral__DOT__step__587__coin_i = 
        (7U & ((IData)(__Vtask_tb_behavioral__DOT__init_word__586__cfg_value) 
               >> 3U));
    vlSelf->tb_behavioral__DOT__coin = __Vtask_tb_behavioral__DOT__step__587__coin_i;
    vlSelf->tb_behavioral__DOT__selezione = __Vtask_tb_behavioral__DOT__step__587__selezione_i;
    vlSelf->tb_behavioral__DOT__conferma = __Vtask_tb_behavioral__DOT__step__587__conferma_i;
    vlSelf->tb_behavioral__DOT__annulla = __Vtask_tb_behavioral__DOT__step__587__annulla_i;
    vlSelf->tb_behavioral__DOT__last_coin = __Vtask_tb_behavioral__DOT__step__587__coin_i;
    vlSelf->tb_behavioral__DOT__last_selezione = __Vtask_tb_behavioral__DOT__step__587__selezione_i;
    vlSelf->tb_behavioral__DOT__last_conferma = __Vtask_tb_behavioral__DOT__step__587__conferma_i;
    vlSelf->tb_behavioral__DOT__last_annulla = __Vtask_tb_behavioral__DOT__step__587__annulla_i;
    co_await vlSelf->__VtrigSched_h2394f4a5__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_behavioral.clk)", 
                                                       "behavioral/tb_behavioral.v", 
                                                       79);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "behavioral/tb_behavioral.v", 
                                       80);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_behavioral__DOT__init_word__588__cfg_value = 5U;
    __Vtask_tb_behavioral__DOT__step__589__annulla_i = 0U;
    __Vtask_tb_behavioral__DOT__step__589__conferma_i = 0U;
    __Vtask_tb_behavioral__DOT__step__589__selezione_i 
        = (7U & (IData)(__Vtask_tb_behavioral__DOT__init_word__588__cfg_value));
    __Vtask_tb_behavioral__DOT__step__589__coin_i = 
        (7U & ((IData)(__Vtask_tb_behavioral__DOT__init_word__588__cfg_value) 
               >> 3U));
    vlSelf->tb_behavioral__DOT__coin = __Vtask_tb_behavioral__DOT__step__589__coin_i;
    vlSelf->tb_behavioral__DOT__selezione = __Vtask_tb_behavioral__DOT__step__589__selezione_i;
    vlSelf->tb_behavioral__DOT__conferma = __Vtask_tb_behavioral__DOT__step__589__conferma_i;
    vlSelf->tb_behavioral__DOT__annulla = __Vtask_tb_behavioral__DOT__step__589__annulla_i;
    vlSelf->tb_behavioral__DOT__last_coin = __Vtask_tb_behavioral__DOT__step__589__coin_i;
    vlSelf->tb_behavioral__DOT__last_selezione = __Vtask_tb_behavioral__DOT__step__589__selezione_i;
    vlSelf->tb_behavioral__DOT__last_conferma = __Vtask_tb_behavioral__DOT__step__589__conferma_i;
    vlSelf->tb_behavioral__DOT__last_annulla = __Vtask_tb_behavioral__DOT__step__589__annulla_i;
    co_await vlSelf->__VtrigSched_h2394f4a5__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_behavioral.clk)", 
                                                       "behavioral/tb_behavioral.v", 
                                                       79);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "behavioral/tb_behavioral.v", 
                                       80);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_behavioral__DOT__init_word__590__cfg_value = 5U;
    __Vtask_tb_behavioral__DOT__step__591__annulla_i = 0U;
    __Vtask_tb_behavioral__DOT__step__591__conferma_i = 0U;
    __Vtask_tb_behavioral__DOT__step__591__selezione_i 
        = (7U & (IData)(__Vtask_tb_behavioral__DOT__init_word__590__cfg_value));
    __Vtask_tb_behavioral__DOT__step__591__coin_i = 
        (7U & ((IData)(__Vtask_tb_behavioral__DOT__init_word__590__cfg_value) 
               >> 3U));
    vlSelf->tb_behavioral__DOT__coin = __Vtask_tb_behavioral__DOT__step__591__coin_i;
    vlSelf->tb_behavioral__DOT__selezione = __Vtask_tb_behavioral__DOT__step__591__selezione_i;
    vlSelf->tb_behavioral__DOT__conferma = __Vtask_tb_behavioral__DOT__step__591__conferma_i;
    vlSelf->tb_behavioral__DOT__annulla = __Vtask_tb_behavioral__DOT__step__591__annulla_i;
    vlSelf->tb_behavioral__DOT__last_coin = __Vtask_tb_behavioral__DOT__step__591__coin_i;
    vlSelf->tb_behavioral__DOT__last_selezione = __Vtask_tb_behavioral__DOT__step__591__selezione_i;
    vlSelf->tb_behavioral__DOT__last_conferma = __Vtask_tb_behavioral__DOT__step__591__conferma_i;
    vlSelf->tb_behavioral__DOT__last_annulla = __Vtask_tb_behavioral__DOT__step__591__annulla_i;
    co_await vlSelf->__VtrigSched_h2394f4a5__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_behavioral.clk)", 
                                                       "behavioral/tb_behavioral.v", 
                                                       79);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "behavioral/tb_behavioral.v", 
                                       80);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_behavioral__DOT__init_word__592__cfg_value = 5U;
    __Vtask_tb_behavioral__DOT__step__593__annulla_i = 0U;
    __Vtask_tb_behavioral__DOT__step__593__conferma_i = 0U;
    __Vtask_tb_behavioral__DOT__step__593__selezione_i 
        = (7U & (IData)(__Vtask_tb_behavioral__DOT__init_word__592__cfg_value));
    __Vtask_tb_behavioral__DOT__step__593__coin_i = 
        (7U & ((IData)(__Vtask_tb_behavioral__DOT__init_word__592__cfg_value) 
               >> 3U));
    vlSelf->tb_behavioral__DOT__coin = __Vtask_tb_behavioral__DOT__step__593__coin_i;
    vlSelf->tb_behavioral__DOT__selezione = __Vtask_tb_behavioral__DOT__step__593__selezione_i;
    vlSelf->tb_behavioral__DOT__conferma = __Vtask_tb_behavioral__DOT__step__593__conferma_i;
    vlSelf->tb_behavioral__DOT__annulla = __Vtask_tb_behavioral__DOT__step__593__annulla_i;
    vlSelf->tb_behavioral__DOT__last_coin = __Vtask_tb_behavioral__DOT__step__593__coin_i;
    vlSelf->tb_behavioral__DOT__last_selezione = __Vtask_tb_behavioral__DOT__step__593__selezione_i;
    vlSelf->tb_behavioral__DOT__last_conferma = __Vtask_tb_behavioral__DOT__step__593__conferma_i;
    vlSelf->tb_behavioral__DOT__last_annulla = __Vtask_tb_behavioral__DOT__step__593__annulla_i;
    co_await vlSelf->__VtrigSched_h2394f4a5__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_behavioral.clk)", 
                                                       "behavioral/tb_behavioral.v", 
                                                       79);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "behavioral/tb_behavioral.v", 
                                       80);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_behavioral__DOT__init_word__594__cfg_value = 8U;
    __Vtask_tb_behavioral__DOT__step__595__annulla_i = 0U;
    __Vtask_tb_behavioral__DOT__step__595__conferma_i = 0U;
    __Vtask_tb_behavioral__DOT__step__595__selezione_i 
        = (7U & (IData)(__Vtask_tb_behavioral__DOT__init_word__594__cfg_value));
    __Vtask_tb_behavioral__DOT__step__595__coin_i = 
        (7U & ((IData)(__Vtask_tb_behavioral__DOT__init_word__594__cfg_value) 
               >> 3U));
    vlSelf->tb_behavioral__DOT__coin = __Vtask_tb_behavioral__DOT__step__595__coin_i;
    vlSelf->tb_behavioral__DOT__selezione = __Vtask_tb_behavioral__DOT__step__595__selezione_i;
    vlSelf->tb_behavioral__DOT__conferma = __Vtask_tb_behavioral__DOT__step__595__conferma_i;
    vlSelf->tb_behavioral__DOT__annulla = __Vtask_tb_behavioral__DOT__step__595__annulla_i;
    vlSelf->tb_behavioral__DOT__last_coin = __Vtask_tb_behavioral__DOT__step__595__coin_i;
    vlSelf->tb_behavioral__DOT__last_selezione = __Vtask_tb_behavioral__DOT__step__595__selezione_i;
    vlSelf->tb_behavioral__DOT__last_conferma = __Vtask_tb_behavioral__DOT__step__595__conferma_i;
    vlSelf->tb_behavioral__DOT__last_annulla = __Vtask_tb_behavioral__DOT__step__595__annulla_i;
    co_await vlSelf->__VtrigSched_h2394f4a5__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_behavioral.clk)", 
                                                       "behavioral/tb_behavioral.v", 
                                                       79);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "behavioral/tb_behavioral.v", 
                                       80);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_behavioral__DOT__init_word__596__cfg_value = 2U;
    __Vtask_tb_behavioral__DOT__step__597__annulla_i = 0U;
    __Vtask_tb_behavioral__DOT__step__597__conferma_i = 0U;
    __Vtask_tb_behavioral__DOT__step__597__selezione_i 
        = (7U & (IData)(__Vtask_tb_behavioral__DOT__init_word__596__cfg_value));
    __Vtask_tb_behavioral__DOT__step__597__coin_i = 
        (7U & ((IData)(__Vtask_tb_behavioral__DOT__init_word__596__cfg_value) 
               >> 3U));
    vlSelf->tb_behavioral__DOT__coin = __Vtask_tb_behavioral__DOT__step__597__coin_i;
    vlSelf->tb_behavioral__DOT__selezione = __Vtask_tb_behavioral__DOT__step__597__selezione_i;
    vlSelf->tb_behavioral__DOT__conferma = __Vtask_tb_behavioral__DOT__step__597__conferma_i;
    vlSelf->tb_behavioral__DOT__annulla = __Vtask_tb_behavioral__DOT__step__597__annulla_i;
    vlSelf->tb_behavioral__DOT__last_coin = __Vtask_tb_behavioral__DOT__step__597__coin_i;
    vlSelf->tb_behavioral__DOT__last_selezione = __Vtask_tb_behavioral__DOT__step__597__selezione_i;
    vlSelf->tb_behavioral__DOT__last_conferma = __Vtask_tb_behavioral__DOT__step__597__conferma_i;
    vlSelf->tb_behavioral__DOT__last_annulla = __Vtask_tb_behavioral__DOT__step__597__annulla_i;
    co_await vlSelf->__VtrigSched_h2394f4a5__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_behavioral.clk)", 
                                                       "behavioral/tb_behavioral.v", 
                                                       79);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "behavioral/tb_behavioral.v", 
                                       80);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_behavioral__DOT__init_word__598__cfg_value = 0xcU;
    __Vtask_tb_behavioral__DOT__step__599__annulla_i = 0U;
    __Vtask_tb_behavioral__DOT__step__599__conferma_i = 0U;
    __Vtask_tb_behavioral__DOT__step__599__selezione_i 
        = (7U & (IData)(__Vtask_tb_behavioral__DOT__init_word__598__cfg_value));
    __Vtask_tb_behavioral__DOT__step__599__coin_i = 
        (7U & ((IData)(__Vtask_tb_behavioral__DOT__init_word__598__cfg_value) 
               >> 3U));
    vlSelf->tb_behavioral__DOT__coin = __Vtask_tb_behavioral__DOT__step__599__coin_i;
    vlSelf->tb_behavioral__DOT__selezione = __Vtask_tb_behavioral__DOT__step__599__selezione_i;
    vlSelf->tb_behavioral__DOT__conferma = __Vtask_tb_behavioral__DOT__step__599__conferma_i;
    vlSelf->tb_behavioral__DOT__annulla = __Vtask_tb_behavioral__DOT__step__599__annulla_i;
    vlSelf->tb_behavioral__DOT__last_coin = __Vtask_tb_behavioral__DOT__step__599__coin_i;
    vlSelf->tb_behavioral__DOT__last_selezione = __Vtask_tb_behavioral__DOT__step__599__selezione_i;
    vlSelf->tb_behavioral__DOT__last_conferma = __Vtask_tb_behavioral__DOT__step__599__conferma_i;
    vlSelf->tb_behavioral__DOT__last_annulla = __Vtask_tb_behavioral__DOT__step__599__annulla_i;
    co_await vlSelf->__VtrigSched_h2394f4a5__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_behavioral.clk)", 
                                                       "behavioral/tb_behavioral.v", 
                                                       79);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "behavioral/tb_behavioral.v", 
                                       80);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_behavioral__DOT__init_word__600__cfg_value = 0xaU;
    __Vtask_tb_behavioral__DOT__step__601__annulla_i = 0U;
    __Vtask_tb_behavioral__DOT__step__601__conferma_i = 0U;
    __Vtask_tb_behavioral__DOT__step__601__selezione_i 
        = (7U & (IData)(__Vtask_tb_behavioral__DOT__init_word__600__cfg_value));
    __Vtask_tb_behavioral__DOT__step__601__coin_i = 
        (7U & ((IData)(__Vtask_tb_behavioral__DOT__init_word__600__cfg_value) 
               >> 3U));
    vlSelf->tb_behavioral__DOT__coin = __Vtask_tb_behavioral__DOT__step__601__coin_i;
    vlSelf->tb_behavioral__DOT__selezione = __Vtask_tb_behavioral__DOT__step__601__selezione_i;
    vlSelf->tb_behavioral__DOT__conferma = __Vtask_tb_behavioral__DOT__step__601__conferma_i;
    vlSelf->tb_behavioral__DOT__annulla = __Vtask_tb_behavioral__DOT__step__601__annulla_i;
    vlSelf->tb_behavioral__DOT__last_coin = __Vtask_tb_behavioral__DOT__step__601__coin_i;
    vlSelf->tb_behavioral__DOT__last_selezione = __Vtask_tb_behavioral__DOT__step__601__selezione_i;
    vlSelf->tb_behavioral__DOT__last_conferma = __Vtask_tb_behavioral__DOT__step__601__conferma_i;
    vlSelf->tb_behavioral__DOT__last_annulla = __Vtask_tb_behavioral__DOT__step__601__annulla_i;
    co_await vlSelf->__VtrigSched_h2394f4a5__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_behavioral.clk)", 
                                                       "behavioral/tb_behavioral.v", 
                                                       79);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "behavioral/tb_behavioral.v", 
                                       80);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_behavioral__DOT__init_word__602__cfg_value = 0xaU;
    __Vtask_tb_behavioral__DOT__step__603__annulla_i = 0U;
    __Vtask_tb_behavioral__DOT__step__603__conferma_i = 0U;
    __Vtask_tb_behavioral__DOT__step__603__selezione_i 
        = (7U & (IData)(__Vtask_tb_behavioral__DOT__init_word__602__cfg_value));
    __Vtask_tb_behavioral__DOT__step__603__coin_i = 
        (7U & ((IData)(__Vtask_tb_behavioral__DOT__init_word__602__cfg_value) 
               >> 3U));
    vlSelf->tb_behavioral__DOT__coin = __Vtask_tb_behavioral__DOT__step__603__coin_i;
    vlSelf->tb_behavioral__DOT__selezione = __Vtask_tb_behavioral__DOT__step__603__selezione_i;
    vlSelf->tb_behavioral__DOT__conferma = __Vtask_tb_behavioral__DOT__step__603__conferma_i;
    vlSelf->tb_behavioral__DOT__annulla = __Vtask_tb_behavioral__DOT__step__603__annulla_i;
    vlSelf->tb_behavioral__DOT__last_coin = __Vtask_tb_behavioral__DOT__step__603__coin_i;
    vlSelf->tb_behavioral__DOT__last_selezione = __Vtask_tb_behavioral__DOT__step__603__selezione_i;
    vlSelf->tb_behavioral__DOT__last_conferma = __Vtask_tb_behavioral__DOT__step__603__conferma_i;
    vlSelf->tb_behavioral__DOT__last_annulla = __Vtask_tb_behavioral__DOT__step__603__annulla_i;
    co_await vlSelf->__VtrigSched_h2394f4a5__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_behavioral.clk)", 
                                                       "behavioral/tb_behavioral.v", 
                                                       79);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "behavioral/tb_behavioral.v", 
                                       80);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_behavioral__DOT__init_word__604__cfg_value = 0xaU;
    __Vtask_tb_behavioral__DOT__step__605__annulla_i = 0U;
    __Vtask_tb_behavioral__DOT__step__605__conferma_i = 0U;
    __Vtask_tb_behavioral__DOT__step__605__selezione_i 
        = (7U & (IData)(__Vtask_tb_behavioral__DOT__init_word__604__cfg_value));
    __Vtask_tb_behavioral__DOT__step__605__coin_i = 
        (7U & ((IData)(__Vtask_tb_behavioral__DOT__init_word__604__cfg_value) 
               >> 3U));
    vlSelf->tb_behavioral__DOT__coin = __Vtask_tb_behavioral__DOT__step__605__coin_i;
    vlSelf->tb_behavioral__DOT__selezione = __Vtask_tb_behavioral__DOT__step__605__selezione_i;
    vlSelf->tb_behavioral__DOT__conferma = __Vtask_tb_behavioral__DOT__step__605__conferma_i;
    vlSelf->tb_behavioral__DOT__annulla = __Vtask_tb_behavioral__DOT__step__605__annulla_i;
    vlSelf->tb_behavioral__DOT__last_coin = __Vtask_tb_behavioral__DOT__step__605__coin_i;
    vlSelf->tb_behavioral__DOT__last_selezione = __Vtask_tb_behavioral__DOT__step__605__selezione_i;
    vlSelf->tb_behavioral__DOT__last_conferma = __Vtask_tb_behavioral__DOT__step__605__conferma_i;
    vlSelf->tb_behavioral__DOT__last_annulla = __Vtask_tb_behavioral__DOT__step__605__annulla_i;
    co_await vlSelf->__VtrigSched_h2394f4a5__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_behavioral.clk)", 
                                                       "behavioral/tb_behavioral.v", 
                                                       79);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "behavioral/tb_behavioral.v", 
                                       80);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_behavioral__DOT__init_word__606__cfg_value = 2U;
    __Vtask_tb_behavioral__DOT__step__607__annulla_i = 0U;
    __Vtask_tb_behavioral__DOT__step__607__conferma_i = 0U;
    __Vtask_tb_behavioral__DOT__step__607__selezione_i 
        = (7U & (IData)(__Vtask_tb_behavioral__DOT__init_word__606__cfg_value));
    __Vtask_tb_behavioral__DOT__step__607__coin_i = 
        (7U & ((IData)(__Vtask_tb_behavioral__DOT__init_word__606__cfg_value) 
               >> 3U));
    vlSelf->tb_behavioral__DOT__coin = __Vtask_tb_behavioral__DOT__step__607__coin_i;
    vlSelf->tb_behavioral__DOT__selezione = __Vtask_tb_behavioral__DOT__step__607__selezione_i;
    vlSelf->tb_behavioral__DOT__conferma = __Vtask_tb_behavioral__DOT__step__607__conferma_i;
    vlSelf->tb_behavioral__DOT__annulla = __Vtask_tb_behavioral__DOT__step__607__annulla_i;
    vlSelf->tb_behavioral__DOT__last_coin = __Vtask_tb_behavioral__DOT__step__607__coin_i;
    vlSelf->tb_behavioral__DOT__last_selezione = __Vtask_tb_behavioral__DOT__step__607__selezione_i;
    vlSelf->tb_behavioral__DOT__last_conferma = __Vtask_tb_behavioral__DOT__step__607__conferma_i;
    vlSelf->tb_behavioral__DOT__last_annulla = __Vtask_tb_behavioral__DOT__step__607__annulla_i;
    co_await vlSelf->__VtrigSched_h2394f4a5__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_behavioral.clk)", 
                                                       "behavioral/tb_behavioral.v", 
                                                       79);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "behavioral/tb_behavioral.v", 
                                       80);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_behavioral__DOT__step__608__annulla_i = 0U;
    __Vtask_tb_behavioral__DOT__step__608__conferma_i = 0U;
    __Vtask_tb_behavioral__DOT__step__608__selezione_i = 0U;
    __Vtask_tb_behavioral__DOT__step__608__coin_i = 0U;
    vlSelf->tb_behavioral__DOT__coin = __Vtask_tb_behavioral__DOT__step__608__coin_i;
    vlSelf->tb_behavioral__DOT__selezione = __Vtask_tb_behavioral__DOT__step__608__selezione_i;
    vlSelf->tb_behavioral__DOT__conferma = __Vtask_tb_behavioral__DOT__step__608__conferma_i;
    vlSelf->tb_behavioral__DOT__annulla = __Vtask_tb_behavioral__DOT__step__608__annulla_i;
    vlSelf->tb_behavioral__DOT__last_coin = __Vtask_tb_behavioral__DOT__step__608__coin_i;
    vlSelf->tb_behavioral__DOT__last_selezione = __Vtask_tb_behavioral__DOT__step__608__selezione_i;
    vlSelf->tb_behavioral__DOT__last_conferma = __Vtask_tb_behavioral__DOT__step__608__conferma_i;
    vlSelf->tb_behavioral__DOT__last_annulla = __Vtask_tb_behavioral__DOT__step__608__annulla_i;
    co_await vlSelf->__VtrigSched_h2394f4a5__0.trigger(0U, 
                                                       nullptr, 
                                                       "@(posedge tb_behavioral.clk)", 
                                                       "behavioral/tb_behavioral.v", 
                                                       79);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8ULL, nullptr, 
                                       "behavioral/tb_behavioral.v", 
                                       80);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_behavioral__DOT__check_outputs__609__exp_c10 = 0U;
    __Vtask_tb_behavioral__DOT__check_outputs__609__exp_c05 = 0U;
    __Vtask_tb_behavioral__DOT__check_outputs__609__exp_c02 = 0U;
    __Vtask_tb_behavioral__DOT__check_outputs__609__exp_c01 = 0U;
    __Vtask_tb_behavioral__DOT__check_outputs__609__exp_disp = 0x64U;
    __Vtask_tb_behavioral__DOT__check_outputs__609__exp_resto = 0U;
    __Vtask_tb_behavioral__DOT__check_outputs__609__exp_errore = 0U;
    __Vtask_tb_behavioral__DOT__check_outputs__609__exp_p4 = 0U;
    __Vtask_tb_behavioral__DOT__check_outputs__609__exp_p3 = 0U;
    __Vtask_tb_behavioral__DOT__check_outputs__609__exp_p2 = 0U;
    __Vtask_tb_behavioral__DOT__check_outputs__609__exp_p1 = 0U;
    __Vtask_tb_behavioral__DOT__check_outputs__609__exp_credito = 0U;
    __Vtask_tb_behavioral__DOT__check_eq6__610__exp 
        = __Vtask_tb_behavioral__DOT__check_outputs__609__exp_credito;
    __Vtask_tb_behavioral__DOT__check_eq6__610__got 
        = vlSelf->tb_behavioral__DOT__credito;
    __Vtask_tb_behavioral__DOT__check_eq6__610__label[0U] 
        = Vtb_behavioral__ConstPool__CONST_h72b6a473_0[0U];
    __Vtask_tb_behavioral__DOT__check_eq6__610__label[1U] 
        = Vtb_behavioral__ConstPool__CONST_h72b6a473_0[1U];
    __Vtask_tb_behavioral__DOT__check_eq6__610__label[2U] 
        = Vtb_behavioral__ConstPool__CONST_h72b6a473_0[2U];
    __Vtask_tb_behavioral__DOT__check_eq6__610__label[3U] 
        = Vtb_behavioral__ConstPool__CONST_h72b6a473_0[3U];
    __Vtask_tb_behavioral__DOT__check_eq6__610__label[4U] 
        = Vtb_behavioral__ConstPool__CONST_h72b6a473_0[4U];
    __Vtask_tb_behavioral__DOT__check_eq6__610__label[5U] 
        = Vtb_behavioral__ConstPool__CONST_h72b6a473_0[5U];
    __Vtask_tb_behavioral__DOT__check_eq6__610__label[6U] 
        = Vtb_behavioral__ConstPool__CONST_h72b6a473_0[6U];
    __Vtask_tb_behavioral__DOT__check_eq6__610__label[7U] 
        = Vtb_behavioral__ConstPool__CONST_h72b6a473_0[7U];
    if (VL_UNLIKELY(((IData)(__Vtask_tb_behavioral__DOT__check_eq6__610__got) 
                     != (IData)(__Vtask_tb_behavioral__DOT__check_eq6__610__exp)))) {
        VL_WRITEF("FAIL %0s time=%0t got=%0# exp=%0#\n[%0t] %%Fatal: tb_behavioral.v:115: Assertion failed in %Ntb_behavioral.check_eq6\n",
                  256,__Vtask_tb_behavioral__DOT__check_eq6__610__label.data(),
                  64,VL_TIME_UNITED_Q(1000),-9,6,(IData)(__Vtask_tb_behavioral__DOT__check_eq6__610__got),
                  6,__Vtask_tb_behavioral__DOT__check_eq6__610__exp,
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("behavioral/tb_behavioral.v", 115, "");
    }
    __Vtask_tb_behavioral__DOT__check_eq1__611__exp 
        = __Vtask_tb_behavioral__DOT__check_outputs__609__exp_p1;
    __Vtask_tb_behavioral__DOT__check_eq1__611__got 
        = vlSelf->tb_behavioral__DOT__prodotto1;
    __Vtask_tb_behavioral__DOT__check_eq1__611__label[0U] 
        = Vtb_behavioral__ConstPool__CONST_hf846785c_0[0U];
    __Vtask_tb_behavioral__DOT__check_eq1__611__label[1U] 
        = Vtb_behavioral__ConstPool__CONST_hf846785c_0[1U];
    __Vtask_tb_behavioral__DOT__check_eq1__611__label[2U] 
        = Vtb_behavioral__ConstPool__CONST_hf846785c_0[2U];
    __Vtask_tb_behavioral__DOT__check_eq1__611__label[3U] 
        = Vtb_behavioral__ConstPool__CONST_hf846785c_0[3U];
    __Vtask_tb_behavioral__DOT__check_eq1__611__label[4U] 
        = Vtb_behavioral__ConstPool__CONST_hf846785c_0[4U];
    __Vtask_tb_behavioral__DOT__check_eq1__611__label[5U] 
        = Vtb_behavioral__ConstPool__CONST_hf846785c_0[5U];
    __Vtask_tb_behavioral__DOT__check_eq1__611__label[6U] 
        = Vtb_behavioral__ConstPool__CONST_hf846785c_0[6U];
    __Vtask_tb_behavioral__DOT__check_eq1__611__label[7U] 
        = Vtb_behavioral__ConstPool__CONST_hf846785c_0[7U];
    if (VL_UNLIKELY(((IData)(__Vtask_tb_behavioral__DOT__check_eq1__611__got) 
                     != (IData)(__Vtask_tb_behavioral__DOT__check_eq1__611__exp)))) {
        VL_WRITEF("FAIL %0s time=%0t got=%0# exp=%0#\n[%0t] %%Fatal: tb_behavioral.v:91: Assertion failed in %Ntb_behavioral.check_eq1\n",
                  256,__Vtask_tb_behavioral__DOT__check_eq1__611__label.data(),
                  64,VL_TIME_UNITED_Q(1000),-9,1,(IData)(__Vtask_tb_behavioral__DOT__check_eq1__611__got),
                  1,__Vtask_tb_behavioral__DOT__check_eq1__611__exp,
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("behavioral/tb_behavioral.v", 91, "");
    }
    __Vtask_tb_behavioral__DOT__check_eq1__612__exp 
        = __Vtask_tb_behavioral__DOT__check_outputs__609__exp_p2;
    __Vtask_tb_behavioral__DOT__check_eq1__612__got 
        = vlSelf->tb_behavioral__DOT__prodotto2;
    __Vtask_tb_behavioral__DOT__check_eq1__612__label[0U] 
        = Vtb_behavioral__ConstPool__CONST_h670e2312_0[0U];
    __Vtask_tb_behavioral__DOT__check_eq1__612__label[1U] 
        = Vtb_behavioral__ConstPool__CONST_h670e2312_0[1U];
    __Vtask_tb_behavioral__DOT__check_eq1__612__label[2U] 
        = Vtb_behavioral__ConstPool__CONST_h670e2312_0[2U];
    __Vtask_tb_behavioral__DOT__check_eq1__612__label[3U] 
        = Vtb_behavioral__ConstPool__CONST_h670e2312_0[3U];
    __Vtask_tb_behavioral__DOT__check_eq1__612__label[4U] 
        = Vtb_behavioral__ConstPool__CONST_h670e2312_0[4U];
    __Vtask_tb_behavioral__DOT__check_eq1__612__label[5U] 
        = Vtb_behavioral__ConstPool__CONST_h670e2312_0[5U];
    __Vtask_tb_behavioral__DOT__check_eq1__612__label[6U] 
        = Vtb_behavioral__ConstPool__CONST_h670e2312_0[6U];
    __Vtask_tb_behavioral__DOT__check_eq1__612__label[7U] 
        = Vtb_behavioral__ConstPool__CONST_h670e2312_0[7U];
    if (VL_UNLIKELY(((IData)(__Vtask_tb_behavioral__DOT__check_eq1__612__got) 
                     != (IData)(__Vtask_tb_behavioral__DOT__check_eq1__612__exp)))) {
        VL_WRITEF("FAIL %0s time=%0t got=%0# exp=%0#\n[%0t] %%Fatal: tb_behavioral.v:91: Assertion failed in %Ntb_behavioral.check_eq1\n",
                  256,__Vtask_tb_behavioral__DOT__check_eq1__612__label.data(),
                  64,VL_TIME_UNITED_Q(1000),-9,1,(IData)(__Vtask_tb_behavioral__DOT__check_eq1__612__got),
                  1,__Vtask_tb_behavioral__DOT__check_eq1__612__exp,
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("behavioral/tb_behavioral.v", 91, "");
    }
    __Vtask_tb_behavioral__DOT__check_eq1__613__exp 
        = __Vtask_tb_behavioral__DOT__check_outputs__609__exp_p3;
    __Vtask_tb_behavioral__DOT__check_eq1__613__got 
        = vlSelf->tb_behavioral__DOT__prodotto3;
    __Vtask_tb_behavioral__DOT__check_eq1__613__label[0U] 
        = Vtb_behavioral__ConstPool__CONST_h9ed4c3f5_0[0U];
    __Vtask_tb_behavioral__DOT__check_eq1__613__label[1U] 
        = Vtb_behavioral__ConstPool__CONST_h9ed4c3f5_0[1U];
    __Vtask_tb_behavioral__DOT__check_eq1__613__label[2U] 
        = Vtb_behavioral__ConstPool__CONST_h9ed4c3f5_0[2U];
    __Vtask_tb_behavioral__DOT__check_eq1__613__label[3U] 
        = Vtb_behavioral__ConstPool__CONST_h9ed4c3f5_0[3U];
    __Vtask_tb_behavioral__DOT__check_eq1__613__label[4U] 
        = Vtb_behavioral__ConstPool__CONST_h9ed4c3f5_0[4U];
    __Vtask_tb_behavioral__DOT__check_eq1__613__label[5U] 
        = Vtb_behavioral__ConstPool__CONST_h9ed4c3f5_0[5U];
    __Vtask_tb_behavioral__DOT__check_eq1__613__label[6U] 
        = Vtb_behavioral__ConstPool__CONST_h9ed4c3f5_0[6U];
    __Vtask_tb_behavioral__DOT__check_eq1__613__label[7U] 
        = Vtb_behavioral__ConstPool__CONST_h9ed4c3f5_0[7U];
    if (VL_UNLIKELY(((IData)(__Vtask_tb_behavioral__DOT__check_eq1__613__got) 
                     != (IData)(__Vtask_tb_behavioral__DOT__check_eq1__613__exp)))) {
        VL_WRITEF("FAIL %0s time=%0t got=%0# exp=%0#\n[%0t] %%Fatal: tb_behavioral.v:91: Assertion failed in %Ntb_behavioral.check_eq1\n",
                  256,__Vtask_tb_behavioral__DOT__check_eq1__613__label.data(),
                  64,VL_TIME_UNITED_Q(1000),-9,1,(IData)(__Vtask_tb_behavioral__DOT__check_eq1__613__got),
                  1,__Vtask_tb_behavioral__DOT__check_eq1__613__exp,
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("behavioral/tb_behavioral.v", 91, "");
    }
    __Vtask_tb_behavioral__DOT__check_eq1__614__exp 
        = __Vtask_tb_behavioral__DOT__check_outputs__609__exp_p4;
    __Vtask_tb_behavioral__DOT__check_eq1__614__got 
        = vlSelf->tb_behavioral__DOT__prodotto4;
    __Vtask_tb_behavioral__DOT__check_eq1__614__label[0U] 
        = Vtb_behavioral__ConstPool__CONST_h0c5996b4_0[0U];
    __Vtask_tb_behavioral__DOT__check_eq1__614__label[1U] 
        = Vtb_behavioral__ConstPool__CONST_h0c5996b4_0[1U];
    __Vtask_tb_behavioral__DOT__check_eq1__614__label[2U] 
        = Vtb_behavioral__ConstPool__CONST_h0c5996b4_0[2U];
    __Vtask_tb_behavioral__DOT__check_eq1__614__label[3U] 
        = Vtb_behavioral__ConstPool__CONST_h0c5996b4_0[3U];
    __Vtask_tb_behavioral__DOT__check_eq1__614__label[4U] 
        = Vtb_behavioral__ConstPool__CONST_h0c5996b4_0[4U];
    __Vtask_tb_behavioral__DOT__check_eq1__614__label[5U] 
        = Vtb_behavioral__ConstPool__CONST_h0c5996b4_0[5U];
    __Vtask_tb_behavioral__DOT__check_eq1__614__label[6U] 
        = Vtb_behavioral__ConstPool__CONST_h0c5996b4_0[6U];
    __Vtask_tb_behavioral__DOT__check_eq1__614__label[7U] 
        = Vtb_behavioral__ConstPool__CONST_h0c5996b4_0[7U];
    if (VL_UNLIKELY(((IData)(__Vtask_tb_behavioral__DOT__check_eq1__614__got) 
                     != (IData)(__Vtask_tb_behavioral__DOT__check_eq1__614__exp)))) {
        VL_WRITEF("FAIL %0s time=%0t got=%0# exp=%0#\n[%0t] %%Fatal: tb_behavioral.v:91: Assertion failed in %Ntb_behavioral.check_eq1\n",
                  256,__Vtask_tb_behavioral__DOT__check_eq1__614__label.data(),
                  64,VL_TIME_UNITED_Q(1000),-9,1,(IData)(__Vtask_tb_behavioral__DOT__check_eq1__614__got),
                  1,__Vtask_tb_behavioral__DOT__check_eq1__614__exp,
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("behavioral/tb_behavioral.v", 91, "");
    }
    __Vtask_tb_behavioral__DOT__check_eq2__615__exp 
        = __Vtask_tb_behavioral__DOT__check_outputs__609__exp_errore;
    __Vtask_tb_behavioral__DOT__check_eq2__615__got 
        = vlSelf->tb_behavioral__DOT__errore;
    __Vtask_tb_behavioral__DOT__check_eq2__615__label[0U] 
        = Vtb_behavioral__ConstPool__CONST_hc23eaddf_0[0U];
    __Vtask_tb_behavioral__DOT__check_eq2__615__label[1U] 
        = Vtb_behavioral__ConstPool__CONST_hc23eaddf_0[1U];
    __Vtask_tb_behavioral__DOT__check_eq2__615__label[2U] 
        = Vtb_behavioral__ConstPool__CONST_hc23eaddf_0[2U];
    __Vtask_tb_behavioral__DOT__check_eq2__615__label[3U] 
        = Vtb_behavioral__ConstPool__CONST_hc23eaddf_0[3U];
    __Vtask_tb_behavioral__DOT__check_eq2__615__label[4U] 
        = Vtb_behavioral__ConstPool__CONST_hc23eaddf_0[4U];
    __Vtask_tb_behavioral__DOT__check_eq2__615__label[5U] 
        = Vtb_behavioral__ConstPool__CONST_hc23eaddf_0[5U];
    __Vtask_tb_behavioral__DOT__check_eq2__615__label[6U] 
        = Vtb_behavioral__ConstPool__CONST_hc23eaddf_0[6U];
    __Vtask_tb_behavioral__DOT__check_eq2__615__label[7U] 
        = Vtb_behavioral__ConstPool__CONST_hc23eaddf_0[7U];
    if (VL_UNLIKELY(((IData)(__Vtask_tb_behavioral__DOT__check_eq2__615__got) 
                     != (IData)(__Vtask_tb_behavioral__DOT__check_eq2__615__exp)))) {
        VL_WRITEF("FAIL %0s time=%0t got=%0# exp=%0#\n[%0t] %%Fatal: tb_behavioral.v:103: Assertion failed in %Ntb_behavioral.check_eq2\n",
                  256,__Vtask_tb_behavioral__DOT__check_eq2__615__label.data(),
                  64,VL_TIME_UNITED_Q(1000),-9,2,(IData)(__Vtask_tb_behavioral__DOT__check_eq2__615__got),
                  2,__Vtask_tb_behavioral__DOT__check_eq2__615__exp,
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("behavioral/tb_behavioral.v", 103, "");
    }
    __Vtask_tb_behavioral__DOT__check_eq6__616__exp 
        = __Vtask_tb_behavioral__DOT__check_outputs__609__exp_resto;
    __Vtask_tb_behavioral__DOT__check_eq6__616__got 
        = vlSelf->tb_behavioral__DOT__resto;
    __Vtask_tb_behavioral__DOT__check_eq6__616__label[0U] 
        = Vtb_behavioral__ConstPool__CONST_hf0db003b_0[0U];
    __Vtask_tb_behavioral__DOT__check_eq6__616__label[1U] 
        = Vtb_behavioral__ConstPool__CONST_hf0db003b_0[1U];
    __Vtask_tb_behavioral__DOT__check_eq6__616__label[2U] 
        = Vtb_behavioral__ConstPool__CONST_hf0db003b_0[2U];
    __Vtask_tb_behavioral__DOT__check_eq6__616__label[3U] 
        = Vtb_behavioral__ConstPool__CONST_hf0db003b_0[3U];
    __Vtask_tb_behavioral__DOT__check_eq6__616__label[4U] 
        = Vtb_behavioral__ConstPool__CONST_hf0db003b_0[4U];
    __Vtask_tb_behavioral__DOT__check_eq6__616__label[5U] 
        = Vtb_behavioral__ConstPool__CONST_hf0db003b_0[5U];
    __Vtask_tb_behavioral__DOT__check_eq6__616__label[6U] 
        = Vtb_behavioral__ConstPool__CONST_hf0db003b_0[6U];
    __Vtask_tb_behavioral__DOT__check_eq6__616__label[7U] 
        = Vtb_behavioral__ConstPool__CONST_hf0db003b_0[7U];
    if (VL_UNLIKELY(((IData)(__Vtask_tb_behavioral__DOT__check_eq6__616__got) 
                     != (IData)(__Vtask_tb_behavioral__DOT__check_eq6__616__exp)))) {
        VL_WRITEF("FAIL %0s time=%0t got=%0# exp=%0#\n[%0t] %%Fatal: tb_behavioral.v:115: Assertion failed in %Ntb_behavioral.check_eq6\n",
                  256,__Vtask_tb_behavioral__DOT__check_eq6__616__label.data(),
                  64,VL_TIME_UNITED_Q(1000),-9,6,(IData)(__Vtask_tb_behavioral__DOT__check_eq6__616__got),
                  6,__Vtask_tb_behavioral__DOT__check_eq6__616__exp,
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("behavioral/tb_behavioral.v", 115, "");
    }
    __Vtask_tb_behavioral__DOT__check_eq10__617__exp 
        = __Vtask_tb_behavioral__DOT__check_outputs__609__exp_disp;
    __Vtask_tb_behavioral__DOT__check_eq10__617__got 
        = vlSelf->tb_behavioral__DOT__disponibile;
    __Vtask_tb_behavioral__DOT__check_eq10__617__label[0U] 
        = Vtb_behavioral__ConstPool__CONST_h9e307437_0[0U];
    __Vtask_tb_behavioral__DOT__check_eq10__617__label[1U] 
        = Vtb_behavioral__ConstPool__CONST_h9e307437_0[1U];
    __Vtask_tb_behavioral__DOT__check_eq10__617__label[2U] 
        = Vtb_behavioral__ConstPool__CONST_h9e307437_0[2U];
    __Vtask_tb_behavioral__DOT__check_eq10__617__label[3U] 
        = Vtb_behavioral__ConstPool__CONST_h9e307437_0[3U];
    __Vtask_tb_behavioral__DOT__check_eq10__617__label[4U] 
        = Vtb_behavioral__ConstPool__CONST_h9e307437_0[4U];
    __Vtask_tb_behavioral__DOT__check_eq10__617__label[5U] 
        = Vtb_behavioral__ConstPool__CONST_h9e307437_0[5U];
    __Vtask_tb_behavioral__DOT__check_eq10__617__label[6U] 
        = Vtb_behavioral__ConstPool__CONST_h9e307437_0[6U];
    __Vtask_tb_behavioral__DOT__check_eq10__617__label[7U] 
        = Vtb_behavioral__ConstPool__CONST_h9e307437_0[7U];
    if (VL_UNLIKELY(((IData)(__Vtask_tb_behavioral__DOT__check_eq10__617__got) 
                     != (IData)(__Vtask_tb_behavioral__DOT__check_eq10__617__exp)))) {
        VL_WRITEF("FAIL %0s time=%0t got=%0# exp=%0#\n[%0t] %%Fatal: tb_behavioral.v:127: Assertion failed in %Ntb_behavioral.check_eq10\n",
                  256,__Vtask_tb_behavioral__DOT__check_eq10__617__label.data(),
                  64,VL_TIME_UNITED_Q(1000),-9,10,(IData)(__Vtask_tb_behavioral__DOT__check_eq10__617__got),
                  10,__Vtask_tb_behavioral__DOT__check_eq10__617__exp,
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("behavioral/tb_behavioral.v", 127, "");
    }
    __Vtask_tb_behavioral__DOT__check_eq6__618__exp 
        = __Vtask_tb_behavioral__DOT__check_outputs__609__exp_c01;
    __Vtask_tb_behavioral__DOT__check_eq6__618__got 
        = vlSelf->tb_behavioral__DOT__coin_01;
    __Vtask_tb_behavioral__DOT__check_eq6__618__label[0U] 
        = Vtb_behavioral__ConstPool__CONST_h8a69c039_0[0U];
    __Vtask_tb_behavioral__DOT__check_eq6__618__label[1U] 
        = Vtb_behavioral__ConstPool__CONST_h8a69c039_0[1U];
    __Vtask_tb_behavioral__DOT__check_eq6__618__label[2U] 
        = Vtb_behavioral__ConstPool__CONST_h8a69c039_0[2U];
    __Vtask_tb_behavioral__DOT__check_eq6__618__label[3U] 
        = Vtb_behavioral__ConstPool__CONST_h8a69c039_0[3U];
    __Vtask_tb_behavioral__DOT__check_eq6__618__label[4U] 
        = Vtb_behavioral__ConstPool__CONST_h8a69c039_0[4U];
    __Vtask_tb_behavioral__DOT__check_eq6__618__label[5U] 
        = Vtb_behavioral__ConstPool__CONST_h8a69c039_0[5U];
    __Vtask_tb_behavioral__DOT__check_eq6__618__label[6U] 
        = Vtb_behavioral__ConstPool__CONST_h8a69c039_0[6U];
    __Vtask_tb_behavioral__DOT__check_eq6__618__label[7U] 
        = Vtb_behavioral__ConstPool__CONST_h8a69c039_0[7U];
    if (VL_UNLIKELY(((IData)(__Vtask_tb_behavioral__DOT__check_eq6__618__got) 
                     != (IData)(__Vtask_tb_behavioral__DOT__check_eq6__618__exp)))) {
        VL_WRITEF("FAIL %0s time=%0t got=%0# exp=%0#\n[%0t] %%Fatal: tb_behavioral.v:115: Assertion failed in %Ntb_behavioral.check_eq6\n",
                  256,__Vtask_tb_behavioral__DOT__check_eq6__618__label.data(),
                  64,VL_TIME_UNITED_Q(1000),-9,6,(IData)(__Vtask_tb_behavioral__DOT__check_eq6__618__got),
                  6,__Vtask_tb_behavioral__DOT__check_eq6__618__exp,
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("behavioral/tb_behavioral.v", 115, "");
    }
    __Vtask_tb_behavioral__DOT__check_eq6__619__exp 
        = __Vtask_tb_behavioral__DOT__check_outputs__609__exp_c02;
    __Vtask_tb_behavioral__DOT__check_eq6__619__got 
        = vlSelf->tb_behavioral__DOT__coin_02;
    __Vtask_tb_behavioral__DOT__check_eq6__619__label[0U] 
        = Vtb_behavioral__ConstPool__CONST_hf10bdf90_0[0U];
    __Vtask_tb_behavioral__DOT__check_eq6__619__label[1U] 
        = Vtb_behavioral__ConstPool__CONST_hf10bdf90_0[1U];
    __Vtask_tb_behavioral__DOT__check_eq6__619__label[2U] 
        = Vtb_behavioral__ConstPool__CONST_hf10bdf90_0[2U];
    __Vtask_tb_behavioral__DOT__check_eq6__619__label[3U] 
        = Vtb_behavioral__ConstPool__CONST_hf10bdf90_0[3U];
    __Vtask_tb_behavioral__DOT__check_eq6__619__label[4U] 
        = Vtb_behavioral__ConstPool__CONST_hf10bdf90_0[4U];
    __Vtask_tb_behavioral__DOT__check_eq6__619__label[5U] 
        = Vtb_behavioral__ConstPool__CONST_hf10bdf90_0[5U];
    __Vtask_tb_behavioral__DOT__check_eq6__619__label[6U] 
        = Vtb_behavioral__ConstPool__CONST_hf10bdf90_0[6U];
    __Vtask_tb_behavioral__DOT__check_eq6__619__label[7U] 
        = Vtb_behavioral__ConstPool__CONST_hf10bdf90_0[7U];
    if (VL_UNLIKELY(((IData)(__Vtask_tb_behavioral__DOT__check_eq6__619__got) 
                     != (IData)(__Vtask_tb_behavioral__DOT__check_eq6__619__exp)))) {
        VL_WRITEF("FAIL %0s time=%0t got=%0# exp=%0#\n[%0t] %%Fatal: tb_behavioral.v:115: Assertion failed in %Ntb_behavioral.check_eq6\n",
                  256,__Vtask_tb_behavioral__DOT__check_eq6__619__label.data(),
                  64,VL_TIME_UNITED_Q(1000),-9,6,(IData)(__Vtask_tb_behavioral__DOT__check_eq6__619__got),
                  6,__Vtask_tb_behavioral__DOT__check_eq6__619__exp,
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("behavioral/tb_behavioral.v", 115, "");
    }
    __Vtask_tb_behavioral__DOT__check_eq6__620__exp 
        = __Vtask_tb_behavioral__DOT__check_outputs__609__exp_c05;
    __Vtask_tb_behavioral__DOT__check_eq6__620__got 
        = vlSelf->tb_behavioral__DOT__coin_05;
    __Vtask_tb_behavioral__DOT__check_eq6__620__label[0U] 
        = Vtb_behavioral__ConstPool__CONST_h11897a12_0[0U];
    __Vtask_tb_behavioral__DOT__check_eq6__620__label[1U] 
        = Vtb_behavioral__ConstPool__CONST_h11897a12_0[1U];
    __Vtask_tb_behavioral__DOT__check_eq6__620__label[2U] 
        = Vtb_behavioral__ConstPool__CONST_h11897a12_0[2U];
    __Vtask_tb_behavioral__DOT__check_eq6__620__label[3U] 
        = Vtb_behavioral__ConstPool__CONST_h11897a12_0[3U];
    __Vtask_tb_behavioral__DOT__check_eq6__620__label[4U] 
        = Vtb_behavioral__ConstPool__CONST_h11897a12_0[4U];
    __Vtask_tb_behavioral__DOT__check_eq6__620__label[5U] 
        = Vtb_behavioral__ConstPool__CONST_h11897a12_0[5U];
    __Vtask_tb_behavioral__DOT__check_eq6__620__label[6U] 
        = Vtb_behavioral__ConstPool__CONST_h11897a12_0[6U];
    __Vtask_tb_behavioral__DOT__check_eq6__620__label[7U] 
        = Vtb_behavioral__ConstPool__CONST_h11897a12_0[7U];
    if (VL_UNLIKELY(((IData)(__Vtask_tb_behavioral__DOT__check_eq6__620__got) 
                     != (IData)(__Vtask_tb_behavioral__DOT__check_eq6__620__exp)))) {
        VL_WRITEF("FAIL %0s time=%0t got=%0# exp=%0#\n[%0t] %%Fatal: tb_behavioral.v:115: Assertion failed in %Ntb_behavioral.check_eq6\n",
                  256,__Vtask_tb_behavioral__DOT__check_eq6__620__label.data(),
                  64,VL_TIME_UNITED_Q(1000),-9,6,(IData)(__Vtask_tb_behavioral__DOT__check_eq6__620__got),
                  6,__Vtask_tb_behavioral__DOT__check_eq6__620__exp,
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("behavioral/tb_behavioral.v", 115, "");
    }
    __Vtask_tb_behavioral__DOT__check_eq6__621__exp 
        = __Vtask_tb_behavioral__DOT__check_outputs__609__exp_c10;
    __Vtask_tb_behavioral__DOT__check_eq6__621__got 
        = vlSelf->tb_behavioral__DOT__coin_10;
    __Vtask_tb_behavioral__DOT__check_eq6__621__label[0U] 
        = Vtb_behavioral__ConstPool__CONST_h23467a71_0[0U];
    __Vtask_tb_behavioral__DOT__check_eq6__621__label[1U] 
        = Vtb_behavioral__ConstPool__CONST_h23467a71_0[1U];
    __Vtask_tb_behavioral__DOT__check_eq6__621__label[2U] 
        = Vtb_behavioral__ConstPool__CONST_h23467a71_0[2U];
    __Vtask_tb_behavioral__DOT__check_eq6__621__label[3U] 
        = Vtb_behavioral__ConstPool__CONST_h23467a71_0[3U];
    __Vtask_tb_behavioral__DOT__check_eq6__621__label[4U] 
        = Vtb_behavioral__ConstPool__CONST_h23467a71_0[4U];
    __Vtask_tb_behavioral__DOT__check_eq6__621__label[5U] 
        = Vtb_behavioral__ConstPool__CONST_h23467a71_0[5U];
    __Vtask_tb_behavioral__DOT__check_eq6__621__label[6U] 
        = Vtb_behavioral__ConstPool__CONST_h23467a71_0[6U];
    __Vtask_tb_behavioral__DOT__check_eq6__621__label[7U] 
        = Vtb_behavioral__ConstPool__CONST_h23467a71_0[7U];
    if (VL_UNLIKELY(((IData)(__Vtask_tb_behavioral__DOT__check_eq6__621__got) 
                     != (IData)(__Vtask_tb_behavioral__DOT__check_eq6__621__exp)))) {
        VL_WRITEF("FAIL %0s time=%0t got=%0# exp=%0#\n[%0t] %%Fatal: tb_behavioral.v:115: Assertion failed in %Ntb_behavioral.check_eq6\n",
                  256,__Vtask_tb_behavioral__DOT__check_eq6__621__label.data(),
                  64,VL_TIME_UNITED_Q(1000),-9,6,(IData)(__Vtask_tb_behavioral__DOT__check_eq6__621__got),
                  6,__Vtask_tb_behavioral__DOT__check_eq6__621__exp,
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("behavioral/tb_behavioral.v", 115, "");
    }
    __Vtask_tb_behavioral__DOT__print_case_report__622__exp_c10 
        = __Vtask_tb_behavioral__DOT__check_outputs__609__exp_c10;
    __Vtask_tb_behavioral__DOT__print_case_report__622__exp_c05 
        = __Vtask_tb_behavioral__DOT__check_outputs__609__exp_c05;
    __Vtask_tb_behavioral__DOT__print_case_report__622__exp_c02 
        = __Vtask_tb_behavioral__DOT__check_outputs__609__exp_c02;
    __Vtask_tb_behavioral__DOT__print_case_report__622__exp_c01 
        = __Vtask_tb_behavioral__DOT__check_outputs__609__exp_c01;
    __Vtask_tb_behavioral__DOT__print_case_report__622__exp_disp 
        = __Vtask_tb_behavioral__DOT__check_outputs__609__exp_disp;
    __Vtask_tb_behavioral__DOT__print_case_report__622__exp_resto 
        = __Vtask_tb_behavioral__DOT__check_outputs__609__exp_resto;
    __Vtask_tb_behavioral__DOT__print_case_report__622__exp_errore 
        = __Vtask_tb_behavioral__DOT__check_outputs__609__exp_errore;
    __Vtask_tb_behavioral__DOT__print_case_report__622__exp_p4 
        = __Vtask_tb_behavioral__DOT__check_outputs__609__exp_p4;
    __Vtask_tb_behavioral__DOT__print_case_report__622__exp_p3 
        = __Vtask_tb_behavioral__DOT__check_outputs__609__exp_p3;
    __Vtask_tb_behavioral__DOT__print_case_report__622__exp_p2 
        = __Vtask_tb_behavioral__DOT__check_outputs__609__exp_p2;
    __Vtask_tb_behavioral__DOT__print_case_report__622__exp_p1 
        = __Vtask_tb_behavioral__DOT__check_outputs__609__exp_p1;
    __Vtask_tb_behavioral__DOT__print_case_report__622__exp_credito 
        = __Vtask_tb_behavioral__DOT__check_outputs__609__exp_credito;
    VL_WRITEF("IN : coin=%03b selezione=%03b conferma=%0# annulla=%0#\nOUT: credito=%0# prodotto=%b errore=%02b resto=%0# disponibile=%0# coin_01=%0# coin_02=%0# coin_05=%0# coin_10=%0#\nEXP: credito=%0# prodotto=%b errore=%02b resto=%0# disponibile=%0# coin_01=%0# coin_02=%0# coin_05=%0# coin_10=%0#\n[PASS] %0s\n\n",
              3,vlSelf->tb_behavioral__DOT__last_coin,
              3,(IData)(vlSelf->tb_behavioral__DOT__last_selezione),
              1,vlSelf->tb_behavioral__DOT__last_conferma,
              1,(IData)(vlSelf->tb_behavioral__DOT__last_annulla),
              6,vlSelf->tb_behavioral__DOT__credito,
              4,(((IData)(vlSelf->tb_behavioral__DOT__prodotto1) 
                  << 3U) | (((IData)(vlSelf->tb_behavioral__DOT__prodotto2) 
                             << 2U) | (((IData)(vlSelf->tb_behavioral__DOT__prodotto3) 
                                        << 1U) | (IData)(vlSelf->tb_behavioral__DOT__prodotto4)))),
              2,(IData)(vlSelf->tb_behavioral__DOT__errore),
              6,vlSelf->tb_behavioral__DOT__resto,10,
              (IData)(vlSelf->tb_behavioral__DOT__disponibile),
              6,vlSelf->tb_behavioral__DOT__coin_01,
              6,(IData)(vlSelf->tb_behavioral__DOT__coin_02),
              6,vlSelf->tb_behavioral__DOT__coin_05,
              6,(IData)(vlSelf->tb_behavioral__DOT__coin_10),
              6,__Vtask_tb_behavioral__DOT__print_case_report__622__exp_credito,
              4,(((IData)(__Vtask_tb_behavioral__DOT__print_case_report__622__exp_p1) 
                  << 3U) | (((IData)(__Vtask_tb_behavioral__DOT__print_case_report__622__exp_p2) 
                             << 2U) | (((IData)(__Vtask_tb_behavioral__DOT__print_case_report__622__exp_p3) 
                                        << 1U) | (IData)(__Vtask_tb_behavioral__DOT__print_case_report__622__exp_p4)))),
              2,(IData)(__Vtask_tb_behavioral__DOT__print_case_report__622__exp_errore),
              6,__Vtask_tb_behavioral__DOT__print_case_report__622__exp_resto,
              10,(IData)(__Vtask_tb_behavioral__DOT__print_case_report__622__exp_disp),
              6,__Vtask_tb_behavioral__DOT__print_case_report__622__exp_c01,
              6,(IData)(__Vtask_tb_behavioral__DOT__print_case_report__622__exp_c02),
              6,__Vtask_tb_behavioral__DOT__print_case_report__622__exp_c05,
              6,(IData)(__Vtask_tb_behavioral__DOT__print_case_report__622__exp_c10),
              1024,vlSelf->tb_behavioral__DOT__current_test_name.data());
    if (VL_UNLIKELY((0U != vlSelf->tb_behavioral__DOT__report_fd))) {
        VL_FWRITEF(vlSelf->tb_behavioral__DOT__report_fd,"IN : coin=%03b selezione=%03b conferma=%0# annulla=%0#\nOUT: credito=%0# prodotto=%b errore=%02b resto=%0# disponibile=%0# coin_01=%0# coin_02=%0# coin_05=%0# coin_10=%0#\nEXP: credito=%0# prodotto=%b errore=%02b resto=%0# disponibile=%0# coin_01=%0# coin_02=%0# coin_05=%0# coin_10=%0#\n[PASS] %0s\n\n",
                   3,vlSelf->tb_behavioral__DOT__last_coin,
                   3,(IData)(vlSelf->tb_behavioral__DOT__last_selezione),
                   1,vlSelf->tb_behavioral__DOT__last_conferma,
                   1,(IData)(vlSelf->tb_behavioral__DOT__last_annulla),
                   6,vlSelf->tb_behavioral__DOT__credito,
                   4,(((IData)(vlSelf->tb_behavioral__DOT__prodotto1) 
                       << 3U) | (((IData)(vlSelf->tb_behavioral__DOT__prodotto2) 
                                  << 2U) | (((IData)(vlSelf->tb_behavioral__DOT__prodotto3) 
                                             << 1U) 
                                            | (IData)(vlSelf->tb_behavioral__DOT__prodotto4)))),
                   2,(IData)(vlSelf->tb_behavioral__DOT__errore),
                   6,vlSelf->tb_behavioral__DOT__resto,
                   10,(IData)(vlSelf->tb_behavioral__DOT__disponibile),
                   6,vlSelf->tb_behavioral__DOT__coin_01,
                   6,(IData)(vlSelf->tb_behavioral__DOT__coin_02),
                   6,vlSelf->tb_behavioral__DOT__coin_05,
                   6,(IData)(vlSelf->tb_behavioral__DOT__coin_10),
                   6,__Vtask_tb_behavioral__DOT__print_case_report__622__exp_credito,
                   4,(((IData)(__Vtask_tb_behavioral__DOT__print_case_report__622__exp_p1) 
                       << 3U) | (((IData)(__Vtask_tb_behavioral__DOT__print_case_report__622__exp_p2) 
                                  << 2U) | (((IData)(__Vtask_tb_behavioral__DOT__print_case_report__622__exp_p3) 
                                             << 1U) 
                                            | (IData)(__Vtask_tb_behavioral__DOT__print_case_report__622__exp_p4)))),
                   2,(IData)(__Vtask_tb_behavioral__DOT__print_case_report__622__exp_errore),
                   6,__Vtask_tb_behavioral__DOT__print_case_report__622__exp_resto,
                   10,(IData)(__Vtask_tb_behavioral__DOT__print_case_report__622__exp_disp),
                   6,__Vtask_tb_behavioral__DOT__print_case_report__622__exp_c01,
                   6,(IData)(__Vtask_tb_behavioral__DOT__print_case_report__622__exp_c02),
                   6,__Vtask_tb_behavioral__DOT__print_case_report__622__exp_c05,
                   6,(IData)(__Vtask_tb_behavioral__DOT__print_case_report__622__exp_c10),
                   1024,vlSelf->tb_behavioral__DOT__current_test_name.data());
    }
    VL_WRITEF("ALL TESTS PASSED\n");
    if (VL_UNLIKELY((0U != vlSelf->tb_behavioral__DOT__report_fd))) {
        VL_FWRITEF(vlSelf->tb_behavioral__DOT__report_fd,"ALL TESTS PASSED\n");
    }
    if (VL_UNLIKELY((0U != vlSelf->tb_behavioral__DOT__report_fd))) {
        VL_FCLOSE_I(vlSelf->tb_behavioral__DOT__report_fd); }
    VL_FINISH_MT("behavioral/tb_behavioral.v", 446, "");
    vlSelf->__Vm_traceActivity[2U] = 1U;
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_behavioral___024root___dump_triggers__act(Vtb_behavioral___024root* vlSelf);
#endif  // VL_DEBUG

void Vtb_behavioral___024root___eval_triggers__act(Vtb_behavioral___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_behavioral__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_behavioral___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.set(0U, (((IData)(vlSelf->tb_behavioral__DOT__clk) 
                                      & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__tb_behavioral__DOT__clk__0))) 
                                     | ((~ (IData)(vlSelf->tb_behavioral__DOT__rst)) 
                                        & (IData)(vlSelf->__Vtrigprevexpr___TOP__tb_behavioral__DOT__rst__0))));
    vlSelf->__VactTriggered.set(1U, vlSelf->__VdlySched.awaitingCurrentTime());
    vlSelf->__VactTriggered.set(2U, ((IData)(vlSelf->tb_behavioral__DOT__clk) 
                                     & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__tb_behavioral__DOT__clk__0))));
    vlSelf->__Vtrigprevexpr___TOP__tb_behavioral__DOT__clk__0 
        = vlSelf->tb_behavioral__DOT__clk;
    vlSelf->__Vtrigprevexpr___TOP__tb_behavioral__DOT__rst__0 
        = vlSelf->tb_behavioral__DOT__rst;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_behavioral___024root___dump_triggers__act(vlSelf);
    }
#endif
}
