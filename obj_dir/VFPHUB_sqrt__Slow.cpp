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

void VFPHUB_sqrt::_settle__TOP__2(VFPHUB_sqrt__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFPHUB_sqrt::_settle__TOP__2\n"); );
    VFPHUB_sqrt* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->FPHUB_sqrt__DOT__posiv = 0U;
    vlTOPp->FPHUB_sqrt__DOT__neg = 0U;
    if (((IData)(vlTOPp->computing) & (0x18U == vlTOPp->FPHUB_sqrt__DOT__j))) {
        vlTOPp->FPHUB_sqrt__DOT__f1_fly = (0xfffffffU 
                                           & ((~ vlTOPp->FPHUB_sqrt__DOT__F1) 
                                              >> 1U));
        if (((0x1eU >= (0x1fU & vlTOPp->FPHUB_sqrt__DOT__j))
              ? (0x10000000U & vlTOPp->FPHUB_sqrt__DOT__W
                 [(0x1fU & vlTOPp->FPHUB_sqrt__DOT__j)])
              : 0U)) {
            vlTOPp->FPHUB_sqrt__DOT__leading_zeros = 0U;
            vlTOPp->FPHUB_sqrt__DOT__unnamedblk7__DOT__i = 0x1cU;
            {
                while (VL_LTES_III(1,32,32, 0U, vlTOPp->FPHUB_sqrt__DOT__unnamedblk7__DOT__i)) {
                    if (((0x1cU >= (0x1fU & vlTOPp->FPHUB_sqrt__DOT__unnamedblk7__DOT__i)) 
                         & (vlTOPp->FPHUB_sqrt__DOT__F_1 
                            >> (0x1fU & vlTOPp->FPHUB_sqrt__DOT__unnamedblk7__DOT__i)))) {
                        goto __Vlabel1;
                    }
                    vlTOPp->FPHUB_sqrt__DOT__leading_zeros 
                        = ((IData)(1U) + vlTOPp->FPHUB_sqrt__DOT__leading_zeros);
                    vlTOPp->FPHUB_sqrt__DOT__unnamedblk7__DOT__i 
                        = (vlTOPp->FPHUB_sqrt__DOT__unnamedblk7__DOT__i 
                           - (IData)(1U));
                }
                __Vlabel1: ;
            }
            vlTOPp->FPHUB_sqrt__DOT__normalized = (
                                                   (0x1cU 
                                                    >= vlTOPp->FPHUB_sqrt__DOT__leading_zeros)
                                                    ? 
                                                   (0x1fffffffU 
                                                    & (vlTOPp->FPHUB_sqrt__DOT__F_1 
                                                       << vlTOPp->FPHUB_sqrt__DOT__leading_zeros))
                                                    : 0U);
            vlTOPp->FPHUB_sqrt__DOT__res_mantissa = 
                (0x7fffffU & (vlTOPp->FPHUB_sqrt__DOT__normalized 
                              >> 5U));
        } else {
            vlTOPp->FPHUB_sqrt__DOT__SN2 = (0x1fffffffU 
                                            & (~ vlTOPp->FPHUB_sqrt__DOT__F1));
            vlTOPp->FPHUB_sqrt__DOT__leading_zeros = 0U;
            vlTOPp->FPHUB_sqrt__DOT__unnamedblk8__DOT__i = 0x1cU;
            {
                while (VL_LTES_III(1,32,32, 0U, vlTOPp->FPHUB_sqrt__DOT__unnamedblk8__DOT__i)) {
                    if (((0x1cU >= (0x1fU & vlTOPp->FPHUB_sqrt__DOT__unnamedblk8__DOT__i)) 
                         & (vlTOPp->FPHUB_sqrt__DOT__f1_fly 
                            >> (0x1fU & vlTOPp->FPHUB_sqrt__DOT__unnamedblk8__DOT__i)))) {
                        goto __Vlabel2;
                    }
                    vlTOPp->FPHUB_sqrt__DOT__leading_zeros 
                        = ((IData)(1U) + vlTOPp->FPHUB_sqrt__DOT__leading_zeros);
                    vlTOPp->FPHUB_sqrt__DOT__unnamedblk8__DOT__i 
                        = (vlTOPp->FPHUB_sqrt__DOT__unnamedblk8__DOT__i 
                           - (IData)(1U));
                }
                __Vlabel2: ;
            }
            vlTOPp->FPHUB_sqrt__DOT__normalized = (
                                                   (0x1cU 
                                                    >= vlTOPp->FPHUB_sqrt__DOT__leading_zeros)
                                                    ? 
                                                   (0x1fffffffU 
                                                    & (vlTOPp->FPHUB_sqrt__DOT__f1_fly 
                                                       << vlTOPp->FPHUB_sqrt__DOT__leading_zeros))
                                                    : 0U);
            vlTOPp->FPHUB_sqrt__DOT__res_mantissa = 
                (0x7fffffU & (vlTOPp->FPHUB_sqrt__DOT__normalized 
                              >> 5U));
        }
    }
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
    // Body
    vlTOPp->_settle__TOP__2(vlSymsp);
    vlTOPp->__Vm_traceActivity[1U] = 1U;
    vlTOPp->__Vm_traceActivity[0U] = 1U;
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
    for (int __Vi0=0; __Vi0<25; ++__Vi0) {
        FPHUB_sqrt__DOT__S[__Vi0] = VL_RAND_RESET_I(2);
    }
    FPHUB_sqrt__DOT__F1 = VL_RAND_RESET_I(29);
    FPHUB_sqrt__DOT__F_1 = VL_RAND_RESET_I(29);
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
    FPHUB_sqrt__DOT__posiv = VL_RAND_RESET_I(25);
    FPHUB_sqrt__DOT__neg = VL_RAND_RESET_I(25);
    FPHUB_sqrt__DOT__root = VL_RAND_RESET_I(32);
    for (int __Vi0=0; __Vi0<31; ++__Vi0) {
        FPHUB_sqrt__DOT__y_test[__Vi0] = VL_RAND_RESET_I(4);
    }
    FPHUB_sqrt__DOT__chivato = VL_RAND_RESET_I(1);
    FPHUB_sqrt__DOT__f1_test = VL_RAND_RESET_I(3);
    FPHUB_sqrt__DOT__negative = VL_RAND_RESET_I(1);
    FPHUB_sqrt__DOT__quotient = VL_RAND_RESET_I(32);
    FPHUB_sqrt__DOT__restored_quotient = VL_RAND_RESET_I(32);
    FPHUB_sqrt__DOT__normalized = VL_RAND_RESET_I(29);
    FPHUB_sqrt__DOT__leading_zeros = 0;
    FPHUB_sqrt__DOT__res_mantissa = VL_RAND_RESET_I(23);
    FPHUB_sqrt__DOT__f1_fly = VL_RAND_RESET_I(29);
    FPHUB_sqrt__DOT__SN2 = VL_RAND_RESET_I(29);
    FPHUB_sqrt__DOT__unnamedblk1__DOT__k = 0;
    FPHUB_sqrt__DOT__unnamedblk2__DOT__k = 0;
    FPHUB_sqrt__DOT__unnamedblk3__DOT__k = 0;
    FPHUB_sqrt__DOT__unnamedblk4__DOT__k = 0;
    FPHUB_sqrt__DOT__unnamedblk5__DOT__k = 0;
    FPHUB_sqrt__DOT__unnamedblk6__DOT__k = 0;
    FPHUB_sqrt__DOT__unnamedblk7__DOT__i = 0;
    FPHUB_sqrt__DOT__unnamedblk8__DOT__i = 0;
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
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        __Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
