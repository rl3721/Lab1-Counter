// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcounter.h for the primary calling header

#include "verilated.h"

#include "Vcounter___024root.h"

VL_INLINE_OPT void Vcounter___024root___sequent__TOP__2(Vcounter___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcounter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcounter___024root___sequent__TOP__2\n"); );
    // Body
    vlSelf->__Vdly__count = vlSelf->count;
}

VL_INLINE_OPT void Vcounter___024root___sequent__TOP__3(Vcounter___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcounter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcounter___024root___sequent__TOP__3\n"); );
    // Body
    vlSelf->__Vdly__count = vlSelf->vbdValue;
}

VL_INLINE_OPT void Vcounter___024root___sequent__TOP__4(Vcounter___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcounter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcounter___024root___sequent__TOP__4\n"); );
    // Body
    vlSelf->__Vdly__count = ((IData)(vlSelf->rst) ? 0U
                              : (0xffU & ((IData)(vlSelf->count) 
                                          + (IData)(vlSelf->en))));
}

VL_INLINE_OPT void Vcounter___024root___sequent__TOP__5(Vcounter___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcounter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcounter___024root___sequent__TOP__5\n"); );
    // Body
    vlSelf->count = vlSelf->__Vdly__count;
}

void Vcounter___024root___eval(Vcounter___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcounter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcounter___024root___eval\n"); );
    // Body
    if ((((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk))) 
         | ((IData)(vlSelf->vbdFlag) & (~ (IData)(vlSelf->__Vclklast__TOP__vbdFlag))))) {
        Vcounter___024root___sequent__TOP__2(vlSelf);
    }
    if (((IData)(vlSelf->vbdFlag) & (~ (IData)(vlSelf->__Vclklast__TOP__vbdFlag)))) {
        Vcounter___024root___sequent__TOP__3(vlSelf);
    }
    if (((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk)))) {
        Vcounter___024root___sequent__TOP__4(vlSelf);
    }
    if ((((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk))) 
         | ((IData)(vlSelf->vbdFlag) & (~ (IData)(vlSelf->__Vclklast__TOP__vbdFlag))))) {
        Vcounter___024root___sequent__TOP__5(vlSelf);
    }
    // Final
    vlSelf->__Vclklast__TOP__vbdFlag = vlSelf->vbdFlag;
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
}

#ifdef VL_DEBUG
void Vcounter___024root___eval_debug_assertions(Vcounter___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcounter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcounter___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->rst & 0xfeU))) {
        Verilated::overWidthError("rst");}
    if (VL_UNLIKELY((vlSelf->en & 0xfeU))) {
        Verilated::overWidthError("en");}
    if (VL_UNLIKELY((vlSelf->vbdFlag & 0xfeU))) {
        Verilated::overWidthError("vbdFlag");}
}
#endif  // VL_DEBUG
