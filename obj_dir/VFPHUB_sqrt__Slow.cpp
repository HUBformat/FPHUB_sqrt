// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VFPHUB_sqrt.h for the primary calling header

#include "VFPHUB_sqrt.h"
#include "VFPHUB_sqrt__Syms.h"

//==========

VL_CTOR_IMP(VFPHUB_sqrt) {
    VFPHUB_sqrt__Syms* __restrict vlSymsp = __VlSymsp = new VFPHUB_sqrt__Syms(this, name());
    VFPHUB_sqrt* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void VFPHUB_sqrt::__Vconfigure(VFPHUB_sqrt__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
    Verilated::timeunit(-12);
    Verilated::timeprecision(-12);
}

VFPHUB_sqrt::~VFPHUB_sqrt() {
    VL_DO_CLEAR(delete __VlSymsp, __VlSymsp = nullptr);
}

void VFPHUB_sqrt::_eval_initial(VFPHUB_sqrt__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFPHUB_sqrt::_eval_initial\n"); );
    VFPHUB_sqrt* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vclklast__TOP__clk = vlTOPp->clk;
    vlTOPp->__Vclklast__TOP__rst_l = vlTOPp->rst_l;
}

void VFPHUB_sqrt::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFPHUB_sqrt::final\n"); );
    // Variables
    VFPHUB_sqrt__Syms* __restrict vlSymsp = this->__VlSymsp;
    VFPHUB_sqrt* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VFPHUB_sqrt::_eval_settle(VFPHUB_sqrt__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFPHUB_sqrt::_eval_settle\n"); );
    VFPHUB_sqrt* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VFPHUB_sqrt::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFPHUB_sqrt::_ctor_var_reset\n"); );
    // Body
    clk = VL_RAND_RESET_I(1);
    rst_l = VL_RAND_RESET_I(1);
    start = VL_RAND_RESET_I(1);
    x = VL_RAND_RESET_I(32);
    res = VL_RAND_RESET_I(32);
    finish = VL_RAND_RESET_I(1);
    computing = VL_RAND_RESET_I(1);
    FPHUB_sqrt__DOT__S = VL_RAND_RESET_Q(63);
    for (int __Vi0=0; __Vi0<31; ++__Vi0) {
        FPHUB_sqrt__DOT__F1[__Vi0] = VL_RAND_RESET_I(29);
    }
    for (int __Vi0=0; __Vi0<31; ++__Vi0) {
        FPHUB_sqrt__DOT__F_1[__Vi0] = VL_RAND_RESET_I(29);
    }
    for (int __Vi0=0; __Vi0<31; ++__Vi0) {
        FPHUB_sqrt__DOT__W[__Vi0] = VL_RAND_RESET_I(29);
    }
    for (int __Vi0=0; __Vi0<31; ++__Vi0) {
        FPHUB_sqrt__DOT__W2[__Vi0] = VL_RAND_RESET_I(29);
    }
    for (int __Vi0=0; __Vi0<31; ++__Vi0) {
        FPHUB_sqrt__DOT__WC[__Vi0] = VL_RAND_RESET_I(29);
    }
    FPHUB_sqrt__DOT__x_sign = VL_RAND_RESET_I(1);
    FPHUB_sqrt__DOT__res_exponent = VL_RAND_RESET_I(8);
    FPHUB_sqrt__DOT__j = 0;
    VL_RAND_RESET_W(65, FPHUB_sqrt__DOT__q);
    FPHUB_sqrt__DOT__posiv = VL_RAND_RESET_I(32);
    FPHUB_sqrt__DOT__neg = VL_RAND_RESET_I(32);
    FPHUB_sqrt__DOT__root = VL_RAND_RESET_I(32);
    for (int __Vi0=0; __Vi0<31; ++__Vi0) {
        FPHUB_sqrt__DOT__y_test[__Vi0] = VL_RAND_RESET_I(4);
    }
    FPHUB_sqrt__DOT__chivato = VL_RAND_RESET_I(1);
    FPHUB_sqrt__DOT__unnamedblk1__DOT__k = 0;
    FPHUB_sqrt__DOT__unnamedblk2__DOT__k = 0;
    FPHUB_sqrt__DOT__unnamedblk3__DOT__k = 0;
    FPHUB_sqrt__DOT__unnamedblk4__DOT__k = 0;
    FPHUB_sqrt__DOT__unnamedblk5__DOT__k = 0;
    FPHUB_sqrt__DOT__unnamedblk6__DOT__k = 0;
    FPHUB_sqrt__DOT__unnamedblk7__DOT__i = 0;
    FPHUB_sqrt__DOT____Vlvbound1 = VL_RAND_RESET_I(4);
    FPHUB_sqrt__DOT____Vlvbound2 = VL_RAND_RESET_I(2);
    FPHUB_sqrt__DOT____Vlvbound3 = VL_RAND_RESET_I(29);
    FPHUB_sqrt__DOT____Vlvbound4 = VL_RAND_RESET_I(29);
    FPHUB_sqrt__DOT____Vlvbound5 = VL_RAND_RESET_I(29);
    FPHUB_sqrt__DOT____Vlvbound6 = VL_RAND_RESET_I(1);
    FPHUB_sqrt__DOT____Vlvbound7 = VL_RAND_RESET_I(1);
    FPHUB_sqrt__DOT____Vlvbound8 = VL_RAND_RESET_I(3);
    FPHUB_sqrt__DOT____Vlvbound9 = VL_RAND_RESET_I(3);
    FPHUB_sqrt__DOT____Vlvbound10 = VL_RAND_RESET_I(1);
    FPHUB_sqrt__DOT____Vlvbound11 = VL_RAND_RESET_I(1);
    FPHUB_sqrt__DOT____Vlvbound12 = VL_RAND_RESET_I(2);
    FPHUB_sqrt__DOT____Vlvbound13 = VL_RAND_RESET_I(29);
    FPHUB_sqrt__DOT____Vlvbound14 = VL_RAND_RESET_I(29);
    FPHUB_sqrt__DOT____Vlvbound15 = VL_RAND_RESET_I(29);
    FPHUB_sqrt__DOT____Vlvbound16 = VL_RAND_RESET_I(1);
    FPHUB_sqrt__DOT____Vlvbound17 = VL_RAND_RESET_I(1);
    FPHUB_sqrt__DOT____Vlvbound18 = VL_RAND_RESET_I(3);
    FPHUB_sqrt__DOT____Vlvbound19 = VL_RAND_RESET_I(3);
    FPHUB_sqrt__DOT____Vlvbound20 = VL_RAND_RESET_I(1);
    FPHUB_sqrt__DOT____Vlvbound21 = VL_RAND_RESET_I(1);
    FPHUB_sqrt__DOT____Vlvbound22 = VL_RAND_RESET_I(2);
    FPHUB_sqrt__DOT____Vlvbound23 = VL_RAND_RESET_I(29);
    FPHUB_sqrt__DOT____Vlvbound24 = VL_RAND_RESET_I(29);
    FPHUB_sqrt__DOT____Vlvbound25 = VL_RAND_RESET_I(29);
    FPHUB_sqrt__DOT____Vlvbound26 = VL_RAND_RESET_I(1);
    FPHUB_sqrt__DOT____Vlvbound27 = VL_RAND_RESET_I(1);
    FPHUB_sqrt__DOT____Vlvbound28 = VL_RAND_RESET_I(3);
    FPHUB_sqrt__DOT____Vlvbound29 = VL_RAND_RESET_I(3);
    FPHUB_sqrt__DOT____Vlvbound30 = VL_RAND_RESET_I(1);
    FPHUB_sqrt__DOT____Vlvbound31 = VL_RAND_RESET_I(1);
    FPHUB_sqrt__DOT____Vlvbound32 = VL_RAND_RESET_I(1);
    FPHUB_sqrt__DOT____Vlvbound33 = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        __Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
