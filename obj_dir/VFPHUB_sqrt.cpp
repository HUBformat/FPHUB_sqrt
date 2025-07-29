// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VFPHUB_sqrt.h for the primary calling header

#include "VFPHUB_sqrt.h"
#include "VFPHUB_sqrt__Syms.h"

//==========

void VFPHUB_sqrt::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VFPHUB_sqrt::eval\n"); );
    VFPHUB_sqrt__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    VFPHUB_sqrt* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
#ifdef VL_DEBUG
    // Debug assertions
    _eval_debug_assertions();
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        vlSymsp->__Vm_activity = true;
        _eval(vlSymsp);
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = _change_request(vlSymsp);
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("FPHUB_sqrt.sv", 1, "",
                "Verilated model didn't converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

void VFPHUB_sqrt::_eval_initial_loop(VFPHUB_sqrt__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    _eval_initial(vlSymsp);
    vlSymsp->__Vm_activity = true;
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        _eval_settle(vlSymsp);
        _eval(vlSymsp);
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = _change_request(vlSymsp);
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("FPHUB_sqrt.sv", 1, "",
                "Verilated model didn't DC converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

VL_INLINE_OPT void VFPHUB_sqrt::_sequent__TOP__1(VFPHUB_sqrt__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFPHUB_sqrt::_sequent__TOP__1\n"); );
    VFPHUB_sqrt* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*0:0*/ __Vdly__FPHUB_sqrt__DOT__negative;
    CData/*0:0*/ __Vdly__computing;
    CData/*7:0*/ __Vdly__FPHUB_sqrt__DOT__res_exponent;
    CData/*0:0*/ __Vdlyvset__FPHUB_sqrt__DOT__S__v0;
    CData/*0:0*/ __Vdlyvset__FPHUB_sqrt__DOT__W2__v0;
    CData/*0:0*/ __Vdlyvset__FPHUB_sqrt__DOT__S__v1;
    CData/*4:0*/ __Vdlyvdim0__FPHUB_sqrt__DOT__y_test__v0;
    CData/*3:0*/ __Vdlyvval__FPHUB_sqrt__DOT__y_test__v0;
    CData/*0:0*/ __Vdlyvset__FPHUB_sqrt__DOT__y_test__v0;
    CData/*4:0*/ __Vdlyvdim0__FPHUB_sqrt__DOT__S__v2;
    CData/*1:0*/ __Vdlyvval__FPHUB_sqrt__DOT__S__v2;
    CData/*0:0*/ __Vdlyvset__FPHUB_sqrt__DOT__S__v2;
    CData/*4:0*/ __Vdlyvdim0__FPHUB_sqrt__DOT__W__v2;
    CData/*0:0*/ __Vdlyvset__FPHUB_sqrt__DOT__W__v2;
    CData/*4:0*/ __Vdlyvdim0__FPHUB_sqrt__DOT__WC__v2;
    CData/*0:0*/ __Vdlyvset__FPHUB_sqrt__DOT__WC__v2;
    CData/*4:0*/ __Vdlyvdim0__FPHUB_sqrt__DOT__W2__v2;
    CData/*0:0*/ __Vdlyvset__FPHUB_sqrt__DOT__W2__v2;
    CData/*4:0*/ __Vdlyvdim0__FPHUB_sqrt__DOT__S__v3;
    CData/*1:0*/ __Vdlyvval__FPHUB_sqrt__DOT__S__v3;
    CData/*0:0*/ __Vdlyvset__FPHUB_sqrt__DOT__S__v3;
    CData/*4:0*/ __Vdlyvdim0__FPHUB_sqrt__DOT__W__v3;
    CData/*0:0*/ __Vdlyvset__FPHUB_sqrt__DOT__W__v3;
    CData/*4:0*/ __Vdlyvdim0__FPHUB_sqrt__DOT__WC__v3;
    CData/*0:0*/ __Vdlyvset__FPHUB_sqrt__DOT__WC__v3;
    CData/*4:0*/ __Vdlyvdim0__FPHUB_sqrt__DOT__W2__v3;
    CData/*0:0*/ __Vdlyvset__FPHUB_sqrt__DOT__W2__v3;
    CData/*4:0*/ __Vdlyvdim0__FPHUB_sqrt__DOT__S__v4;
    CData/*1:0*/ __Vdlyvval__FPHUB_sqrt__DOT__S__v4;
    CData/*0:0*/ __Vdlyvset__FPHUB_sqrt__DOT__S__v4;
    CData/*4:0*/ __Vdlyvdim0__FPHUB_sqrt__DOT__W__v4;
    CData/*0:0*/ __Vdlyvset__FPHUB_sqrt__DOT__W__v4;
    CData/*4:0*/ __Vdlyvdim0__FPHUB_sqrt__DOT__WC__v4;
    CData/*0:0*/ __Vdlyvset__FPHUB_sqrt__DOT__WC__v4;
    CData/*4:0*/ __Vdlyvdim0__FPHUB_sqrt__DOT__W2__v4;
    CData/*0:0*/ __Vdlyvset__FPHUB_sqrt__DOT__W2__v4;
    IData/*28:0*/ __Vdlyvval__FPHUB_sqrt__DOT__W__v0;
    IData/*28:0*/ __Vdly__FPHUB_sqrt__DOT__F1;
    IData/*28:0*/ __Vdly__FPHUB_sqrt__DOT__F_1;
    IData/*28:0*/ __Vdlyvval__FPHUB_sqrt__DOT__W2__v0;
    IData/*31:0*/ __Vdly__FPHUB_sqrt__DOT__j;
    IData/*28:0*/ __Vdlyvval__FPHUB_sqrt__DOT__W__v1;
    IData/*28:0*/ __Vdlyvval__FPHUB_sqrt__DOT__WC__v1;
    IData/*28:0*/ __Vdlyvval__FPHUB_sqrt__DOT__W2__v1;
    IData/*28:0*/ __Vdlyvval__FPHUB_sqrt__DOT__W__v2;
    IData/*28:0*/ __Vdlyvval__FPHUB_sqrt__DOT__WC__v2;
    IData/*28:0*/ __Vdlyvval__FPHUB_sqrt__DOT__W2__v2;
    IData/*28:0*/ __Vdlyvval__FPHUB_sqrt__DOT__W__v3;
    IData/*28:0*/ __Vdlyvval__FPHUB_sqrt__DOT__WC__v3;
    IData/*28:0*/ __Vdlyvval__FPHUB_sqrt__DOT__W2__v3;
    IData/*28:0*/ __Vdlyvval__FPHUB_sqrt__DOT__W__v4;
    IData/*28:0*/ __Vdlyvval__FPHUB_sqrt__DOT__WC__v4;
    IData/*28:0*/ __Vdlyvval__FPHUB_sqrt__DOT__W2__v4;
    // Body
    __Vdly__FPHUB_sqrt__DOT__res_exponent = vlTOPp->FPHUB_sqrt__DOT__res_exponent;
    __Vdly__FPHUB_sqrt__DOT__negative = vlTOPp->FPHUB_sqrt__DOT__negative;
    __Vdlyvset__FPHUB_sqrt__DOT__y_test__v0 = 0U;
    __Vdly__FPHUB_sqrt__DOT__j = vlTOPp->FPHUB_sqrt__DOT__j;
    __Vdly__FPHUB_sqrt__DOT__F_1 = vlTOPp->FPHUB_sqrt__DOT__F_1;
    __Vdly__FPHUB_sqrt__DOT__F1 = vlTOPp->FPHUB_sqrt__DOT__F1;
    __Vdly__computing = vlTOPp->computing;
    __Vdlyvset__FPHUB_sqrt__DOT__WC__v2 = 0U;
    __Vdlyvset__FPHUB_sqrt__DOT__WC__v3 = 0U;
    __Vdlyvset__FPHUB_sqrt__DOT__WC__v4 = 0U;
    __Vdlyvset__FPHUB_sqrt__DOT__W__v2 = 0U;
    __Vdlyvset__FPHUB_sqrt__DOT__W__v3 = 0U;
    __Vdlyvset__FPHUB_sqrt__DOT__W__v4 = 0U;
    __Vdlyvset__FPHUB_sqrt__DOT__W2__v0 = 0U;
    __Vdlyvset__FPHUB_sqrt__DOT__W2__v2 = 0U;
    __Vdlyvset__FPHUB_sqrt__DOT__W2__v3 = 0U;
    __Vdlyvset__FPHUB_sqrt__DOT__W2__v4 = 0U;
    __Vdlyvset__FPHUB_sqrt__DOT__S__v2 = 0U;
    __Vdlyvset__FPHUB_sqrt__DOT__S__v3 = 0U;
    __Vdlyvset__FPHUB_sqrt__DOT__S__v4 = 0U;
    __Vdlyvset__FPHUB_sqrt__DOT__S__v0 = 0U;
    __Vdlyvset__FPHUB_sqrt__DOT__S__v1 = 0U;
    if (vlTOPp->rst_l) {
        if (vlTOPp->finish) {
            vlTOPp->finish = 0U;
            vlTOPp->res = 0U;
        } else {
            if (vlTOPp->FPHUB_sqrt__DOT__negative) {
                __Vdly__FPHUB_sqrt__DOT__negative = 0U;
                __Vdly__computing = 0U;
                vlTOPp->res = 0xffffffffU;
                vlTOPp->finish = 1U;
            }
        }
        if ((((~ (IData)(vlTOPp->FPHUB_sqrt__DOT__negative)) 
              & (IData)(vlTOPp->start)) & (~ (IData)(vlTOPp->computing)))) {
            if ((0x80000000U & vlTOPp->x)) {
                __Vdly__computing = 1U;
                __Vdly__FPHUB_sqrt__DOT__negative = 1U;
            } else {
                vlTOPp->FPHUB_sqrt__DOT__y_test[0U] = 0U;
                __Vdly__FPHUB_sqrt__DOT__res_exponent 
                    = (0xffU & ((0x7fU & (((0x800000U 
                                            & vlTOPp->x)
                                            ? ((0xffU 
                                                & (vlTOPp->x 
                                                   >> 0x17U)) 
                                               - (IData)(0x81U))
                                            : ((0xffU 
                                                & (vlTOPp->x 
                                                   >> 0x17U)) 
                                               - (IData)(0x80U))) 
                                          >> 1U)) | 
                                (0x80U & (vlTOPp->x 
                                          >> 0x17U))));
                __Vdlyvset__FPHUB_sqrt__DOT__S__v0 = 1U;
                __Vdlyvval__FPHUB_sqrt__DOT__W__v0 
                    = ((0x800000U & vlTOPp->x) ? (0x2000002U 
                                                  | (0x1fffffcU 
                                                     & (vlTOPp->x 
                                                        << 2U)))
                        : (0x1000001U | (0xfffffeU 
                                         & (vlTOPp->x 
                                            << 1U))));
                __Vdly__FPHUB_sqrt__DOT__F1 = 0x1b000000U;
                __Vdly__FPHUB_sqrt__DOT__F_1 = 0x3000000U;
                __Vdlyvval__FPHUB_sqrt__DOT__W2__v0 
                    = (0x1fffffffU & (((0x800000U & vlTOPp->x)
                                        ? (0x2000002U 
                                           | (0x1fffffcU 
                                              & (vlTOPp->x 
                                                 << 2U)))
                                        : (0x1000001U 
                                           | (0xfffffeU 
                                              & (vlTOPp->x 
                                                 << 1U)))) 
                                      << 1U));
                __Vdlyvset__FPHUB_sqrt__DOT__W2__v0 = 1U;
                vlTOPp->FPHUB_sqrt__DOT__y_test[1U] = 0U;
                __Vdly__FPHUB_sqrt__DOT__j = 1U;
                __Vdly__computing = 1U;
                __Vdlyvset__FPHUB_sqrt__DOT__S__v1 = 1U;
                if ((0x800000U & vlTOPp->x)) {
                    __Vdlyvval__FPHUB_sqrt__DOT__W__v1 
                        = (0x1fffffffU & (0x1e000000U 
                                          ^ (0x4000004U 
                                             | (0x3fffff8U 
                                                & (vlTOPp->x 
                                                   << 3U)))));
                    __Vdlyvval__FPHUB_sqrt__DOT__WC__v1 
                        = (0x1c000000U & (0x8000008U 
                                          | (0x7fffff0U 
                                             & (vlTOPp->x 
                                                << 4U))));
                    __Vdlyvval__FPHUB_sqrt__DOT__W2__v1 
                        = (0x1fffffffU & (0x1c000000U 
                                          ^ (0x8000008U 
                                             | (0x7fffff0U 
                                                & (vlTOPp->x 
                                                   << 4U)))));
                } else {
                    __Vdlyvval__FPHUB_sqrt__DOT__W__v1 
                        = (0x1fffffffU & (0x1e000000U 
                                          ^ (0x2000002U 
                                             | (0x1fffffcU 
                                                & (vlTOPp->x 
                                                   << 2U)))));
                    __Vdlyvval__FPHUB_sqrt__DOT__WC__v1 
                        = (0x1c000000U & (0x4000004U 
                                          | (0x3fffff8U 
                                             & (vlTOPp->x 
                                                << 3U))));
                    __Vdlyvval__FPHUB_sqrt__DOT__W2__v1 
                        = (0x1fffffffU & (0x1c000000U 
                                          ^ (0x4000004U 
                                             | (0x3fffff8U 
                                                & (vlTOPp->x 
                                                   << 3U)))));
                }
            }
        } else {
            if (((IData)(vlTOPp->computing) & VL_GTS_III(1,32,32, 0x18U, vlTOPp->FPHUB_sqrt__DOT__j))) {
                __Vdly__FPHUB_sqrt__DOT__j = ((IData)(1U) 
                                              + vlTOPp->FPHUB_sqrt__DOT__j);
                vlTOPp->FPHUB_sqrt__DOT____Vlvbound1 
                    = (0xfU & ((((0x1eU >= (0x1fU & vlTOPp->FPHUB_sqrt__DOT__j))
                                  ? vlTOPp->FPHUB_sqrt__DOT__W
                                 [(0x1fU & vlTOPp->FPHUB_sqrt__DOT__j)]
                                  : 0U) >> 0x19U) + 
                               (((0x1eU >= (0x1fU & vlTOPp->FPHUB_sqrt__DOT__j))
                                  ? vlTOPp->FPHUB_sqrt__DOT__WC
                                 [(0x1fU & vlTOPp->FPHUB_sqrt__DOT__j)]
                                  : 0U) >> 0x19U)));
                if ((0x1eU >= (0x1fU & ((IData)(1U) 
                                        + vlTOPp->FPHUB_sqrt__DOT__j)))) {
                    __Vdlyvval__FPHUB_sqrt__DOT__y_test__v0 
                        = vlTOPp->FPHUB_sqrt__DOT____Vlvbound1;
                    __Vdlyvset__FPHUB_sqrt__DOT__y_test__v0 = 1U;
                    __Vdlyvdim0__FPHUB_sqrt__DOT__y_test__v0 
                        = (0x1fU & ((IData)(1U) + vlTOPp->FPHUB_sqrt__DOT__j));
                }
                if ((0xfU == (0xfU & ((((0x1eU >= (0x1fU 
                                                   & vlTOPp->FPHUB_sqrt__DOT__j))
                                         ? vlTOPp->FPHUB_sqrt__DOT__W
                                        [(0x1fU & vlTOPp->FPHUB_sqrt__DOT__j)]
                                         : 0U) >> 0x19U) 
                                      + (((0x1eU >= 
                                           (0x1fU & vlTOPp->FPHUB_sqrt__DOT__j))
                                           ? vlTOPp->FPHUB_sqrt__DOT__WC
                                          [(0x1fU & vlTOPp->FPHUB_sqrt__DOT__j)]
                                           : 0U) >> 0x19U))))) {
                    vlTOPp->FPHUB_sqrt__DOT____Vlvbound2 = 0U;
                    if ((0x18U >= (0x1fU & ((IData)(1U) 
                                            + vlTOPp->FPHUB_sqrt__DOT__j)))) {
                        __Vdlyvval__FPHUB_sqrt__DOT__S__v2 
                            = vlTOPp->FPHUB_sqrt__DOT____Vlvbound2;
                        __Vdlyvset__FPHUB_sqrt__DOT__S__v2 = 1U;
                        __Vdlyvdim0__FPHUB_sqrt__DOT__S__v2 
                            = (0x1fU & ((IData)(1U) 
                                        + vlTOPp->FPHUB_sqrt__DOT__j));
                    }
                    vlTOPp->FPHUB_sqrt__DOT____Vlvbound3 
                        = (0x1fffffffU & (((0x1eU >= 
                                            (0x1fU 
                                             & vlTOPp->FPHUB_sqrt__DOT__j))
                                            ? vlTOPp->FPHUB_sqrt__DOT__W
                                           [(0x1fU 
                                             & vlTOPp->FPHUB_sqrt__DOT__j)]
                                            : 0U) << 1U));
                    if ((0x1eU >= (0x1fU & ((IData)(1U) 
                                            + vlTOPp->FPHUB_sqrt__DOT__j)))) {
                        __Vdlyvval__FPHUB_sqrt__DOT__W__v2 
                            = vlTOPp->FPHUB_sqrt__DOT____Vlvbound3;
                        __Vdlyvset__FPHUB_sqrt__DOT__W__v2 = 1U;
                        __Vdlyvdim0__FPHUB_sqrt__DOT__W__v2 
                            = (0x1fU & ((IData)(1U) 
                                        + vlTOPp->FPHUB_sqrt__DOT__j));
                    }
                    vlTOPp->FPHUB_sqrt__DOT____Vlvbound4 
                        = (0x1fffffffU & (((0x1eU >= 
                                            (0x1fU 
                                             & vlTOPp->FPHUB_sqrt__DOT__j))
                                            ? vlTOPp->FPHUB_sqrt__DOT__WC
                                           [(0x1fU 
                                             & vlTOPp->FPHUB_sqrt__DOT__j)]
                                            : 0U) << 1U));
                    if ((0x1eU >= (0x1fU & ((IData)(1U) 
                                            + vlTOPp->FPHUB_sqrt__DOT__j)))) {
                        __Vdlyvval__FPHUB_sqrt__DOT__WC__v2 
                            = vlTOPp->FPHUB_sqrt__DOT____Vlvbound4;
                        __Vdlyvset__FPHUB_sqrt__DOT__WC__v2 = 1U;
                        __Vdlyvdim0__FPHUB_sqrt__DOT__WC__v2 
                            = (0x1fU & ((IData)(1U) 
                                        + vlTOPp->FPHUB_sqrt__DOT__j));
                    }
                    vlTOPp->FPHUB_sqrt__DOT____Vlvbound5 
                        = (0x1fffffffU & (((0x1eU >= 
                                            (0x1fU 
                                             & vlTOPp->FPHUB_sqrt__DOT__j))
                                            ? vlTOPp->FPHUB_sqrt__DOT__W
                                           [(0x1fU 
                                             & vlTOPp->FPHUB_sqrt__DOT__j)]
                                            : 0U) << 2U));
                    if ((0x1eU >= (0x1fU & ((IData)(1U) 
                                            + vlTOPp->FPHUB_sqrt__DOT__j)))) {
                        __Vdlyvval__FPHUB_sqrt__DOT__W2__v2 
                            = vlTOPp->FPHUB_sqrt__DOT____Vlvbound5;
                        __Vdlyvset__FPHUB_sqrt__DOT__W2__v2 = 1U;
                        __Vdlyvdim0__FPHUB_sqrt__DOT__W2__v2 
                            = (0x1fU & ((IData)(1U) 
                                        + vlTOPp->FPHUB_sqrt__DOT__j));
                    }
                    vlTOPp->FPHUB_sqrt__DOT__unnamedblk1__DOT__k = 0U;
                    while (VL_LTES_III(1,32,32, vlTOPp->FPHUB_sqrt__DOT__unnamedblk1__DOT__k, 
                                       ((IData)(1U) 
                                        + vlTOPp->FPHUB_sqrt__DOT__j))) {
                        vlTOPp->FPHUB_sqrt__DOT____Vlvbound6 
                            = ((0x1cU >= (0x1fU & ((IData)(0x1cU) 
                                                   - vlTOPp->FPHUB_sqrt__DOT__unnamedblk1__DOT__k))) 
                               & (vlTOPp->FPHUB_sqrt__DOT__F1 
                                  >> (0x1fU & ((IData)(0x1cU) 
                                               - vlTOPp->FPHUB_sqrt__DOT__unnamedblk1__DOT__k))));
                        if (VL_LIKELY((0x1cU >= (0x1fU 
                                                 & ((IData)(0x1cU) 
                                                    - vlTOPp->FPHUB_sqrt__DOT__unnamedblk1__DOT__k))))) {
                            __Vdly__FPHUB_sqrt__DOT__F1 
                                = (((~ ((IData)(1U) 
                                        << (0x1fU & 
                                            ((IData)(0x1cU) 
                                             - vlTOPp->FPHUB_sqrt__DOT__unnamedblk1__DOT__k)))) 
                                    & __Vdly__FPHUB_sqrt__DOT__F1) 
                                   | ((IData)(vlTOPp->FPHUB_sqrt__DOT____Vlvbound6) 
                                      << (0x1fU & ((IData)(0x1cU) 
                                                   - vlTOPp->FPHUB_sqrt__DOT__unnamedblk1__DOT__k))));
                        }
                        vlTOPp->FPHUB_sqrt__DOT____Vlvbound7 
                            = ((0x1cU >= (0x1fU & ((IData)(0x1cU) 
                                                   - vlTOPp->FPHUB_sqrt__DOT__unnamedblk1__DOT__k))) 
                               & (vlTOPp->FPHUB_sqrt__DOT__F_1 
                                  >> (0x1fU & ((IData)(0x1cU) 
                                               - vlTOPp->FPHUB_sqrt__DOT__unnamedblk1__DOT__k))));
                        if (VL_LIKELY((0x1cU >= (0x1fU 
                                                 & ((IData)(0x1cU) 
                                                    - vlTOPp->FPHUB_sqrt__DOT__unnamedblk1__DOT__k))))) {
                            __Vdly__FPHUB_sqrt__DOT__F_1 
                                = (((~ ((IData)(1U) 
                                        << (0x1fU & 
                                            ((IData)(0x1cU) 
                                             - vlTOPp->FPHUB_sqrt__DOT__unnamedblk1__DOT__k)))) 
                                    & __Vdly__FPHUB_sqrt__DOT__F_1) 
                                   | ((IData)(vlTOPp->FPHUB_sqrt__DOT____Vlvbound7) 
                                      << (0x1fU & ((IData)(0x1cU) 
                                                   - vlTOPp->FPHUB_sqrt__DOT__unnamedblk1__DOT__k))));
                        }
                        vlTOPp->FPHUB_sqrt__DOT__unnamedblk1__DOT__k 
                            = ((IData)(1U) + vlTOPp->FPHUB_sqrt__DOT__unnamedblk1__DOT__k);
                    }
                    vlTOPp->FPHUB_sqrt__DOT____Vlvbound8 = 7U;
                    if ((0x1cU >= (0x1fU & (((IData)(0x1cU) 
                                             - vlTOPp->FPHUB_sqrt__DOT__j) 
                                            - (IData)(4U))))) {
                        __Vdly__FPHUB_sqrt__DOT__F1 
                            = (((~ ((IData)(7U) << 
                                    (0x1fU & (((IData)(0x1cU) 
                                               - vlTOPp->FPHUB_sqrt__DOT__j) 
                                              - (IData)(4U))))) 
                                & __Vdly__FPHUB_sqrt__DOT__F1) 
                               | ((IData)(vlTOPp->FPHUB_sqrt__DOT____Vlvbound8) 
                                  << (0x1fU & (((IData)(0x1cU) 
                                                - vlTOPp->FPHUB_sqrt__DOT__j) 
                                               - (IData)(4U)))));
                    }
                    vlTOPp->FPHUB_sqrt__DOT____Vlvbound9 = 7U;
                    if ((0x1cU >= (0x1fU & (((IData)(0x1cU) 
                                             - vlTOPp->FPHUB_sqrt__DOT__j) 
                                            - (IData)(4U))))) {
                        __Vdly__FPHUB_sqrt__DOT__F_1 
                            = (((~ ((IData)(7U) << 
                                    (0x1fU & (((IData)(0x1cU) 
                                               - vlTOPp->FPHUB_sqrt__DOT__j) 
                                              - (IData)(4U))))) 
                                & __Vdly__FPHUB_sqrt__DOT__F_1) 
                               | ((IData)(vlTOPp->FPHUB_sqrt__DOT____Vlvbound9) 
                                  << (0x1fU & (((IData)(0x1cU) 
                                                - vlTOPp->FPHUB_sqrt__DOT__j) 
                                               - (IData)(4U)))));
                    }
                    vlTOPp->FPHUB_sqrt__DOT__unnamedblk2__DOT__k = 0U;
                    while (VL_LTES_III(1,32,32, vlTOPp->FPHUB_sqrt__DOT__unnamedblk2__DOT__k, 
                                       (((IData)(0x1cU) 
                                         - vlTOPp->FPHUB_sqrt__DOT__j) 
                                        - (IData)(5U)))) {
                        vlTOPp->FPHUB_sqrt__DOT____Vlvbound10 = 0U;
                        if (VL_LIKELY((0x1cU >= (0x1fU 
                                                 & vlTOPp->FPHUB_sqrt__DOT__unnamedblk2__DOT__k)))) {
                            __Vdly__FPHUB_sqrt__DOT__F1 
                                = (((~ ((IData)(1U) 
                                        << (0x1fU & vlTOPp->FPHUB_sqrt__DOT__unnamedblk2__DOT__k))) 
                                    & __Vdly__FPHUB_sqrt__DOT__F1) 
                                   | ((IData)(vlTOPp->FPHUB_sqrt__DOT____Vlvbound10) 
                                      << (0x1fU & vlTOPp->FPHUB_sqrt__DOT__unnamedblk2__DOT__k)));
                        }
                        vlTOPp->FPHUB_sqrt__DOT____Vlvbound11 = 0U;
                        if (VL_LIKELY((0x1cU >= (0x1fU 
                                                 & vlTOPp->FPHUB_sqrt__DOT__unnamedblk2__DOT__k)))) {
                            __Vdly__FPHUB_sqrt__DOT__F_1 
                                = (((~ ((IData)(1U) 
                                        << (0x1fU & vlTOPp->FPHUB_sqrt__DOT__unnamedblk2__DOT__k))) 
                                    & __Vdly__FPHUB_sqrt__DOT__F_1) 
                                   | ((IData)(vlTOPp->FPHUB_sqrt__DOT____Vlvbound11) 
                                      << (0x1fU & vlTOPp->FPHUB_sqrt__DOT__unnamedblk2__DOT__k)));
                        }
                        vlTOPp->FPHUB_sqrt__DOT__unnamedblk2__DOT__k 
                            = ((IData)(1U) + vlTOPp->FPHUB_sqrt__DOT__unnamedblk2__DOT__k);
                    }
                } else {
                    if ((8U > (0xfU & ((((0x1eU >= 
                                          (0x1fU & vlTOPp->FPHUB_sqrt__DOT__j))
                                          ? vlTOPp->FPHUB_sqrt__DOT__W
                                         [(0x1fU & vlTOPp->FPHUB_sqrt__DOT__j)]
                                          : 0U) >> 0x19U) 
                                       + (((0x1eU >= 
                                            (0x1fU 
                                             & vlTOPp->FPHUB_sqrt__DOT__j))
                                            ? vlTOPp->FPHUB_sqrt__DOT__WC
                                           [(0x1fU 
                                             & vlTOPp->FPHUB_sqrt__DOT__j)]
                                            : 0U) >> 0x19U))))) {
                        vlTOPp->FPHUB_sqrt__DOT____Vlvbound12 = 1U;
                        vlTOPp->FPHUB_sqrt__DOT__chivato = 1U;
                        if ((0x18U >= (0x1fU & ((IData)(1U) 
                                                + vlTOPp->FPHUB_sqrt__DOT__j)))) {
                            __Vdlyvval__FPHUB_sqrt__DOT__S__v3 
                                = vlTOPp->FPHUB_sqrt__DOT____Vlvbound12;
                            __Vdlyvset__FPHUB_sqrt__DOT__S__v3 = 1U;
                            __Vdlyvdim0__FPHUB_sqrt__DOT__S__v3 
                                = (0x1fU & ((IData)(1U) 
                                            + vlTOPp->FPHUB_sqrt__DOT__j));
                        }
                        vlTOPp->FPHUB_sqrt__DOT____Vlvbound13 
                            = (0x1fffffffU & ((((0x1eU 
                                                 >= 
                                                 (0x1fU 
                                                  & vlTOPp->FPHUB_sqrt__DOT__j))
                                                 ? 
                                                vlTOPp->FPHUB_sqrt__DOT__W2
                                                [(0x1fU 
                                                  & vlTOPp->FPHUB_sqrt__DOT__j)]
                                                 : 0U) 
                                               ^ vlTOPp->FPHUB_sqrt__DOT__F1) 
                                              ^ (((0x1eU 
                                                   >= 
                                                   (0x1fU 
                                                    & vlTOPp->FPHUB_sqrt__DOT__j))
                                                   ? 
                                                  vlTOPp->FPHUB_sqrt__DOT__WC
                                                  [
                                                  (0x1fU 
                                                   & vlTOPp->FPHUB_sqrt__DOT__j)]
                                                   : 0U) 
                                                 << 1U)));
                        if ((0x1eU >= (0x1fU & ((IData)(1U) 
                                                + vlTOPp->FPHUB_sqrt__DOT__j)))) {
                            __Vdlyvval__FPHUB_sqrt__DOT__W__v3 
                                = vlTOPp->FPHUB_sqrt__DOT____Vlvbound13;
                            __Vdlyvset__FPHUB_sqrt__DOT__W__v3 = 1U;
                            __Vdlyvdim0__FPHUB_sqrt__DOT__W__v3 
                                = (0x1fU & ((IData)(1U) 
                                            + vlTOPp->FPHUB_sqrt__DOT__j));
                        }
                        vlTOPp->FPHUB_sqrt__DOT____Vlvbound14 
                            = (0x1fffffffU & ((((((0x1eU 
                                                   >= 
                                                   (0x1fU 
                                                    & vlTOPp->FPHUB_sqrt__DOT__j))
                                                   ? 
                                                  vlTOPp->FPHUB_sqrt__DOT__W2
                                                  [
                                                  (0x1fU 
                                                   & vlTOPp->FPHUB_sqrt__DOT__j)]
                                                   : 0U) 
                                                 & vlTOPp->FPHUB_sqrt__DOT__F1) 
                                                << 1U) 
                                               | ((((0x1eU 
                                                     >= 
                                                     (0x1fU 
                                                      & vlTOPp->FPHUB_sqrt__DOT__j))
                                                     ? 
                                                    vlTOPp->FPHUB_sqrt__DOT__W
                                                    [
                                                    (0x1fU 
                                                     & vlTOPp->FPHUB_sqrt__DOT__j)]
                                                     : 0U) 
                                                   & ((0x1eU 
                                                       >= 
                                                       (0x1fU 
                                                        & vlTOPp->FPHUB_sqrt__DOT__j))
                                                       ? 
                                                      vlTOPp->FPHUB_sqrt__DOT__WC
                                                      [
                                                      (0x1fU 
                                                       & vlTOPp->FPHUB_sqrt__DOT__j)]
                                                       : 0U)) 
                                                  << 2U)) 
                                              | ((vlTOPp->FPHUB_sqrt__DOT__F1 
                                                  << 1U) 
                                                 & (((0x1eU 
                                                      >= 
                                                      (0x1fU 
                                                       & vlTOPp->FPHUB_sqrt__DOT__j))
                                                      ? 
                                                     vlTOPp->FPHUB_sqrt__DOT__WC
                                                     [
                                                     (0x1fU 
                                                      & vlTOPp->FPHUB_sqrt__DOT__j)]
                                                      : 0U) 
                                                    << 2U))));
                        if ((0x1eU >= (0x1fU & ((IData)(1U) 
                                                + vlTOPp->FPHUB_sqrt__DOT__j)))) {
                            __Vdlyvval__FPHUB_sqrt__DOT__WC__v3 
                                = vlTOPp->FPHUB_sqrt__DOT____Vlvbound14;
                            __Vdlyvset__FPHUB_sqrt__DOT__WC__v3 = 1U;
                            __Vdlyvdim0__FPHUB_sqrt__DOT__WC__v3 
                                = (0x1fU & ((IData)(1U) 
                                            + vlTOPp->FPHUB_sqrt__DOT__j));
                        }
                        vlTOPp->FPHUB_sqrt__DOT____Vlvbound15 
                            = (0x1fffffffU & (((((0x1eU 
                                                  >= 
                                                  (0x1fU 
                                                   & vlTOPp->FPHUB_sqrt__DOT__j))
                                                  ? 
                                                 vlTOPp->FPHUB_sqrt__DOT__W2
                                                 [(0x1fU 
                                                   & vlTOPp->FPHUB_sqrt__DOT__j)]
                                                  : 0U) 
                                                ^ vlTOPp->FPHUB_sqrt__DOT__F1) 
                                               << 1U) 
                                              ^ (((0x1eU 
                                                   >= 
                                                   (0x1fU 
                                                    & vlTOPp->FPHUB_sqrt__DOT__j))
                                                   ? 
                                                  vlTOPp->FPHUB_sqrt__DOT__WC
                                                  [
                                                  (0x1fU 
                                                   & vlTOPp->FPHUB_sqrt__DOT__j)]
                                                   : 0U) 
                                                 << 2U)));
                        if ((0x1eU >= (0x1fU & ((IData)(1U) 
                                                + vlTOPp->FPHUB_sqrt__DOT__j)))) {
                            __Vdlyvval__FPHUB_sqrt__DOT__W2__v3 
                                = vlTOPp->FPHUB_sqrt__DOT____Vlvbound15;
                            __Vdlyvset__FPHUB_sqrt__DOT__W2__v3 = 1U;
                            __Vdlyvdim0__FPHUB_sqrt__DOT__W2__v3 
                                = (0x1fU & ((IData)(1U) 
                                            + vlTOPp->FPHUB_sqrt__DOT__j));
                        }
                        vlTOPp->FPHUB_sqrt__DOT__unnamedblk3__DOT__k = 0U;
                        while (VL_LTES_III(1,32,32, vlTOPp->FPHUB_sqrt__DOT__unnamedblk3__DOT__k, 
                                           ((IData)(1U) 
                                            + vlTOPp->FPHUB_sqrt__DOT__j))) {
                            vlTOPp->FPHUB_sqrt__DOT____Vlvbound16 
                                = ((0x1cU >= (0x1fU 
                                              & ((IData)(0x1cU) 
                                                 - vlTOPp->FPHUB_sqrt__DOT__unnamedblk3__DOT__k))) 
                                   & (vlTOPp->FPHUB_sqrt__DOT__F1 
                                      >> (0x1fU & ((IData)(0x1cU) 
                                                   - vlTOPp->FPHUB_sqrt__DOT__unnamedblk3__DOT__k))));
                            if (VL_LIKELY((0x1cU >= 
                                           (0x1fU & 
                                            ((IData)(0x1cU) 
                                             - vlTOPp->FPHUB_sqrt__DOT__unnamedblk3__DOT__k))))) {
                                __Vdly__FPHUB_sqrt__DOT__F1 
                                    = (((~ ((IData)(1U) 
                                            << (0x1fU 
                                                & ((IData)(0x1cU) 
                                                   - vlTOPp->FPHUB_sqrt__DOT__unnamedblk3__DOT__k)))) 
                                        & __Vdly__FPHUB_sqrt__DOT__F1) 
                                       | ((IData)(vlTOPp->FPHUB_sqrt__DOT____Vlvbound16) 
                                          << (0x1fU 
                                              & ((IData)(0x1cU) 
                                                 - vlTOPp->FPHUB_sqrt__DOT__unnamedblk3__DOT__k))));
                            }
                            vlTOPp->FPHUB_sqrt__DOT____Vlvbound17 
                                = (1U & (~ ((0x1cU 
                                             >= (0x1fU 
                                                 & ((IData)(0x1cU) 
                                                    - vlTOPp->FPHUB_sqrt__DOT__unnamedblk3__DOT__k))) 
                                            & (vlTOPp->FPHUB_sqrt__DOT__F1 
                                               >> (0x1fU 
                                                   & ((IData)(0x1cU) 
                                                      - vlTOPp->FPHUB_sqrt__DOT__unnamedblk3__DOT__k))))));
                            if (VL_LIKELY((0x1cU >= 
                                           (0x1fU & 
                                            ((IData)(0x1cU) 
                                             - vlTOPp->FPHUB_sqrt__DOT__unnamedblk3__DOT__k))))) {
                                __Vdly__FPHUB_sqrt__DOT__F_1 
                                    = (((~ ((IData)(1U) 
                                            << (0x1fU 
                                                & ((IData)(0x1cU) 
                                                   - vlTOPp->FPHUB_sqrt__DOT__unnamedblk3__DOT__k)))) 
                                        & __Vdly__FPHUB_sqrt__DOT__F_1) 
                                       | ((IData)(vlTOPp->FPHUB_sqrt__DOT____Vlvbound17) 
                                          << (0x1fU 
                                              & ((IData)(0x1cU) 
                                                 - vlTOPp->FPHUB_sqrt__DOT__unnamedblk3__DOT__k))));
                            }
                            vlTOPp->FPHUB_sqrt__DOT__unnamedblk3__DOT__k 
                                = ((IData)(1U) + vlTOPp->FPHUB_sqrt__DOT__unnamedblk3__DOT__k);
                        }
                        vlTOPp->FPHUB_sqrt__DOT____Vlvbound18 = 3U;
                        if ((0x1cU >= (0x1fU & (((IData)(0x1cU) 
                                                 - vlTOPp->FPHUB_sqrt__DOT__j) 
                                                - (IData)(4U))))) {
                            __Vdly__FPHUB_sqrt__DOT__F1 
                                = (((~ ((IData)(7U) 
                                        << (0x1fU & 
                                            (((IData)(0x1cU) 
                                              - vlTOPp->FPHUB_sqrt__DOT__j) 
                                             - (IData)(4U))))) 
                                    & __Vdly__FPHUB_sqrt__DOT__F1) 
                                   | ((IData)(vlTOPp->FPHUB_sqrt__DOT____Vlvbound18) 
                                      << (0x1fU & (
                                                   ((IData)(0x1cU) 
                                                    - vlTOPp->FPHUB_sqrt__DOT__j) 
                                                   - (IData)(4U)))));
                        }
                        vlTOPp->FPHUB_sqrt__DOT____Vlvbound19 = 3U;
                        if ((0x1cU >= (0x1fU & (((IData)(0x1cU) 
                                                 - vlTOPp->FPHUB_sqrt__DOT__j) 
                                                - (IData)(4U))))) {
                            __Vdly__FPHUB_sqrt__DOT__F_1 
                                = (((~ ((IData)(7U) 
                                        << (0x1fU & 
                                            (((IData)(0x1cU) 
                                              - vlTOPp->FPHUB_sqrt__DOT__j) 
                                             - (IData)(4U))))) 
                                    & __Vdly__FPHUB_sqrt__DOT__F_1) 
                                   | ((IData)(vlTOPp->FPHUB_sqrt__DOT____Vlvbound19) 
                                      << (0x1fU & (
                                                   ((IData)(0x1cU) 
                                                    - vlTOPp->FPHUB_sqrt__DOT__j) 
                                                   - (IData)(4U)))));
                        }
                        vlTOPp->FPHUB_sqrt__DOT__unnamedblk4__DOT__k = 0U;
                        while (VL_LTES_III(1,32,32, vlTOPp->FPHUB_sqrt__DOT__unnamedblk4__DOT__k, 
                                           (((IData)(0x1cU) 
                                             - vlTOPp->FPHUB_sqrt__DOT__j) 
                                            - (IData)(5U)))) {
                            vlTOPp->FPHUB_sqrt__DOT____Vlvbound20 = 0U;
                            if (VL_LIKELY((0x1cU >= 
                                           (0x1fU & vlTOPp->FPHUB_sqrt__DOT__unnamedblk4__DOT__k)))) {
                                __Vdly__FPHUB_sqrt__DOT__F1 
                                    = (((~ ((IData)(1U) 
                                            << (0x1fU 
                                                & vlTOPp->FPHUB_sqrt__DOT__unnamedblk4__DOT__k))) 
                                        & __Vdly__FPHUB_sqrt__DOT__F1) 
                                       | ((IData)(vlTOPp->FPHUB_sqrt__DOT____Vlvbound20) 
                                          << (0x1fU 
                                              & vlTOPp->FPHUB_sqrt__DOT__unnamedblk4__DOT__k)));
                            }
                            vlTOPp->FPHUB_sqrt__DOT____Vlvbound21 = 0U;
                            if (VL_LIKELY((0x1cU >= 
                                           (0x1fU & vlTOPp->FPHUB_sqrt__DOT__unnamedblk4__DOT__k)))) {
                                __Vdly__FPHUB_sqrt__DOT__F_1 
                                    = (((~ ((IData)(1U) 
                                            << (0x1fU 
                                                & vlTOPp->FPHUB_sqrt__DOT__unnamedblk4__DOT__k))) 
                                        & __Vdly__FPHUB_sqrt__DOT__F_1) 
                                       | ((IData)(vlTOPp->FPHUB_sqrt__DOT____Vlvbound21) 
                                          << (0x1fU 
                                              & vlTOPp->FPHUB_sqrt__DOT__unnamedblk4__DOT__k)));
                            }
                            vlTOPp->FPHUB_sqrt__DOT__unnamedblk4__DOT__k 
                                = ((IData)(1U) + vlTOPp->FPHUB_sqrt__DOT__unnamedblk4__DOT__k);
                        }
                    } else {
                        vlTOPp->FPHUB_sqrt__DOT____Vlvbound22 = 3U;
                        if ((0x18U >= (0x1fU & ((IData)(1U) 
                                                + vlTOPp->FPHUB_sqrt__DOT__j)))) {
                            __Vdlyvval__FPHUB_sqrt__DOT__S__v4 
                                = vlTOPp->FPHUB_sqrt__DOT____Vlvbound22;
                            __Vdlyvset__FPHUB_sqrt__DOT__S__v4 = 1U;
                            __Vdlyvdim0__FPHUB_sqrt__DOT__S__v4 
                                = (0x1fU & ((IData)(1U) 
                                            + vlTOPp->FPHUB_sqrt__DOT__j));
                        }
                        vlTOPp->FPHUB_sqrt__DOT____Vlvbound23 
                            = (0x1fffffffU & ((((0x1eU 
                                                 >= 
                                                 (0x1fU 
                                                  & vlTOPp->FPHUB_sqrt__DOT__j))
                                                 ? 
                                                vlTOPp->FPHUB_sqrt__DOT__W2
                                                [(0x1fU 
                                                  & vlTOPp->FPHUB_sqrt__DOT__j)]
                                                 : 0U) 
                                               ^ vlTOPp->FPHUB_sqrt__DOT__F_1) 
                                              ^ (((0x1eU 
                                                   >= 
                                                   (0x1fU 
                                                    & vlTOPp->FPHUB_sqrt__DOT__j))
                                                   ? 
                                                  vlTOPp->FPHUB_sqrt__DOT__WC
                                                  [
                                                  (0x1fU 
                                                   & vlTOPp->FPHUB_sqrt__DOT__j)]
                                                   : 0U) 
                                                 << 1U)));
                        if ((0x1eU >= (0x1fU & ((IData)(1U) 
                                                + vlTOPp->FPHUB_sqrt__DOT__j)))) {
                            __Vdlyvval__FPHUB_sqrt__DOT__W__v4 
                                = vlTOPp->FPHUB_sqrt__DOT____Vlvbound23;
                            __Vdlyvset__FPHUB_sqrt__DOT__W__v4 = 1U;
                            __Vdlyvdim0__FPHUB_sqrt__DOT__W__v4 
                                = (0x1fU & ((IData)(1U) 
                                            + vlTOPp->FPHUB_sqrt__DOT__j));
                        }
                        vlTOPp->FPHUB_sqrt__DOT____Vlvbound24 
                            = (0x1fffffffU & ((((((0x1eU 
                                                   >= 
                                                   (0x1fU 
                                                    & vlTOPp->FPHUB_sqrt__DOT__j))
                                                   ? 
                                                  vlTOPp->FPHUB_sqrt__DOT__W2
                                                  [
                                                  (0x1fU 
                                                   & vlTOPp->FPHUB_sqrt__DOT__j)]
                                                   : 0U) 
                                                 & vlTOPp->FPHUB_sqrt__DOT__F_1) 
                                                << 1U) 
                                               | ((((0x1eU 
                                                     >= 
                                                     (0x1fU 
                                                      & vlTOPp->FPHUB_sqrt__DOT__j))
                                                     ? 
                                                    vlTOPp->FPHUB_sqrt__DOT__W
                                                    [
                                                    (0x1fU 
                                                     & vlTOPp->FPHUB_sqrt__DOT__j)]
                                                     : 0U) 
                                                   & ((0x1eU 
                                                       >= 
                                                       (0x1fU 
                                                        & vlTOPp->FPHUB_sqrt__DOT__j))
                                                       ? 
                                                      vlTOPp->FPHUB_sqrt__DOT__WC
                                                      [
                                                      (0x1fU 
                                                       & vlTOPp->FPHUB_sqrt__DOT__j)]
                                                       : 0U)) 
                                                  << 2U)) 
                                              | ((vlTOPp->FPHUB_sqrt__DOT__F_1 
                                                  << 1U) 
                                                 & (((0x1eU 
                                                      >= 
                                                      (0x1fU 
                                                       & vlTOPp->FPHUB_sqrt__DOT__j))
                                                      ? 
                                                     vlTOPp->FPHUB_sqrt__DOT__WC
                                                     [
                                                     (0x1fU 
                                                      & vlTOPp->FPHUB_sqrt__DOT__j)]
                                                      : 0U) 
                                                    << 2U))));
                        if ((0x1eU >= (0x1fU & ((IData)(1U) 
                                                + vlTOPp->FPHUB_sqrt__DOT__j)))) {
                            __Vdlyvval__FPHUB_sqrt__DOT__WC__v4 
                                = vlTOPp->FPHUB_sqrt__DOT____Vlvbound24;
                            __Vdlyvset__FPHUB_sqrt__DOT__WC__v4 = 1U;
                            __Vdlyvdim0__FPHUB_sqrt__DOT__WC__v4 
                                = (0x1fU & ((IData)(1U) 
                                            + vlTOPp->FPHUB_sqrt__DOT__j));
                        }
                        vlTOPp->FPHUB_sqrt__DOT____Vlvbound25 
                            = (0x1fffffffU & (((((0x1eU 
                                                  >= 
                                                  (0x1fU 
                                                   & vlTOPp->FPHUB_sqrt__DOT__j))
                                                  ? 
                                                 vlTOPp->FPHUB_sqrt__DOT__W2
                                                 [(0x1fU 
                                                   & vlTOPp->FPHUB_sqrt__DOT__j)]
                                                  : 0U) 
                                                ^ vlTOPp->FPHUB_sqrt__DOT__F_1) 
                                               << 1U) 
                                              ^ (((0x1eU 
                                                   >= 
                                                   (0x1fU 
                                                    & vlTOPp->FPHUB_sqrt__DOT__j))
                                                   ? 
                                                  vlTOPp->FPHUB_sqrt__DOT__WC
                                                  [
                                                  (0x1fU 
                                                   & vlTOPp->FPHUB_sqrt__DOT__j)]
                                                   : 0U) 
                                                 << 2U)));
                        if ((0x1eU >= (0x1fU & ((IData)(1U) 
                                                + vlTOPp->FPHUB_sqrt__DOT__j)))) {
                            __Vdlyvval__FPHUB_sqrt__DOT__W2__v4 
                                = vlTOPp->FPHUB_sqrt__DOT____Vlvbound25;
                            __Vdlyvset__FPHUB_sqrt__DOT__W2__v4 = 1U;
                            __Vdlyvdim0__FPHUB_sqrt__DOT__W2__v4 
                                = (0x1fU & ((IData)(1U) 
                                            + vlTOPp->FPHUB_sqrt__DOT__j));
                        }
                        vlTOPp->FPHUB_sqrt__DOT__unnamedblk5__DOT__k = 0U;
                        while (VL_LTES_III(1,32,32, vlTOPp->FPHUB_sqrt__DOT__unnamedblk5__DOT__k, 
                                           ((IData)(1U) 
                                            + vlTOPp->FPHUB_sqrt__DOT__j))) {
                            vlTOPp->FPHUB_sqrt__DOT____Vlvbound26 
                                = (1U & (~ ((0x1cU 
                                             >= (0x1fU 
                                                 & ((IData)(0x1cU) 
                                                    - vlTOPp->FPHUB_sqrt__DOT__unnamedblk5__DOT__k))) 
                                            & (vlTOPp->FPHUB_sqrt__DOT__F_1 
                                               >> (0x1fU 
                                                   & ((IData)(0x1cU) 
                                                      - vlTOPp->FPHUB_sqrt__DOT__unnamedblk5__DOT__k))))));
                            if (VL_LIKELY((0x1cU >= 
                                           (0x1fU & 
                                            ((IData)(0x1cU) 
                                             - vlTOPp->FPHUB_sqrt__DOT__unnamedblk5__DOT__k))))) {
                                __Vdly__FPHUB_sqrt__DOT__F1 
                                    = (((~ ((IData)(1U) 
                                            << (0x1fU 
                                                & ((IData)(0x1cU) 
                                                   - vlTOPp->FPHUB_sqrt__DOT__unnamedblk5__DOT__k)))) 
                                        & __Vdly__FPHUB_sqrt__DOT__F1) 
                                       | ((IData)(vlTOPp->FPHUB_sqrt__DOT____Vlvbound26) 
                                          << (0x1fU 
                                              & ((IData)(0x1cU) 
                                                 - vlTOPp->FPHUB_sqrt__DOT__unnamedblk5__DOT__k))));
                            }
                            vlTOPp->FPHUB_sqrt__DOT____Vlvbound27 
                                = ((0x1cU >= (0x1fU 
                                              & ((IData)(0x1cU) 
                                                 - vlTOPp->FPHUB_sqrt__DOT__unnamedblk5__DOT__k))) 
                                   & (vlTOPp->FPHUB_sqrt__DOT__F_1 
                                      >> (0x1fU & ((IData)(0x1cU) 
                                                   - vlTOPp->FPHUB_sqrt__DOT__unnamedblk5__DOT__k))));
                            if (VL_LIKELY((0x1cU >= 
                                           (0x1fU & 
                                            ((IData)(0x1cU) 
                                             - vlTOPp->FPHUB_sqrt__DOT__unnamedblk5__DOT__k))))) {
                                __Vdly__FPHUB_sqrt__DOT__F_1 
                                    = (((~ ((IData)(1U) 
                                            << (0x1fU 
                                                & ((IData)(0x1cU) 
                                                   - vlTOPp->FPHUB_sqrt__DOT__unnamedblk5__DOT__k)))) 
                                        & __Vdly__FPHUB_sqrt__DOT__F_1) 
                                       | ((IData)(vlTOPp->FPHUB_sqrt__DOT____Vlvbound27) 
                                          << (0x1fU 
                                              & ((IData)(0x1cU) 
                                                 - vlTOPp->FPHUB_sqrt__DOT__unnamedblk5__DOT__k))));
                            }
                            vlTOPp->FPHUB_sqrt__DOT__unnamedblk5__DOT__k 
                                = ((IData)(1U) + vlTOPp->FPHUB_sqrt__DOT__unnamedblk5__DOT__k);
                        }
                        vlTOPp->FPHUB_sqrt__DOT____Vlvbound28 = 3U;
                        if ((0x1cU >= (0x1fU & (((IData)(0x1cU) 
                                                 - vlTOPp->FPHUB_sqrt__DOT__j) 
                                                - (IData)(4U))))) {
                            __Vdly__FPHUB_sqrt__DOT__F1 
                                = (((~ ((IData)(7U) 
                                        << (0x1fU & 
                                            (((IData)(0x1cU) 
                                              - vlTOPp->FPHUB_sqrt__DOT__j) 
                                             - (IData)(4U))))) 
                                    & __Vdly__FPHUB_sqrt__DOT__F1) 
                                   | ((IData)(vlTOPp->FPHUB_sqrt__DOT____Vlvbound28) 
                                      << (0x1fU & (
                                                   ((IData)(0x1cU) 
                                                    - vlTOPp->FPHUB_sqrt__DOT__j) 
                                                   - (IData)(4U)))));
                        }
                        vlTOPp->FPHUB_sqrt__DOT____Vlvbound29 = 3U;
                        if ((0x1cU >= (0x1fU & (((IData)(0x1cU) 
                                                 - vlTOPp->FPHUB_sqrt__DOT__j) 
                                                - (IData)(4U))))) {
                            __Vdly__FPHUB_sqrt__DOT__F_1 
                                = (((~ ((IData)(7U) 
                                        << (0x1fU & 
                                            (((IData)(0x1cU) 
                                              - vlTOPp->FPHUB_sqrt__DOT__j) 
                                             - (IData)(4U))))) 
                                    & __Vdly__FPHUB_sqrt__DOT__F_1) 
                                   | ((IData)(vlTOPp->FPHUB_sqrt__DOT____Vlvbound29) 
                                      << (0x1fU & (
                                                   ((IData)(0x1cU) 
                                                    - vlTOPp->FPHUB_sqrt__DOT__j) 
                                                   - (IData)(4U)))));
                        }
                        vlTOPp->FPHUB_sqrt__DOT__unnamedblk6__DOT__k = 0U;
                        while (VL_LTES_III(1,32,32, vlTOPp->FPHUB_sqrt__DOT__unnamedblk6__DOT__k, 
                                           (((IData)(0x1cU) 
                                             - vlTOPp->FPHUB_sqrt__DOT__j) 
                                            - (IData)(5U)))) {
                            vlTOPp->FPHUB_sqrt__DOT____Vlvbound30 = 0U;
                            if (VL_LIKELY((0x1cU >= 
                                           (0x1fU & vlTOPp->FPHUB_sqrt__DOT__unnamedblk6__DOT__k)))) {
                                __Vdly__FPHUB_sqrt__DOT__F1 
                                    = (((~ ((IData)(1U) 
                                            << (0x1fU 
                                                & vlTOPp->FPHUB_sqrt__DOT__unnamedblk6__DOT__k))) 
                                        & __Vdly__FPHUB_sqrt__DOT__F1) 
                                       | ((IData)(vlTOPp->FPHUB_sqrt__DOT____Vlvbound30) 
                                          << (0x1fU 
                                              & vlTOPp->FPHUB_sqrt__DOT__unnamedblk6__DOT__k)));
                            }
                            vlTOPp->FPHUB_sqrt__DOT____Vlvbound31 = 0U;
                            if (VL_LIKELY((0x1cU >= 
                                           (0x1fU & vlTOPp->FPHUB_sqrt__DOT__unnamedblk6__DOT__k)))) {
                                __Vdly__FPHUB_sqrt__DOT__F_1 
                                    = (((~ ((IData)(1U) 
                                            << (0x1fU 
                                                & vlTOPp->FPHUB_sqrt__DOT__unnamedblk6__DOT__k))) 
                                        & __Vdly__FPHUB_sqrt__DOT__F_1) 
                                       | ((IData)(vlTOPp->FPHUB_sqrt__DOT____Vlvbound31) 
                                          << (0x1fU 
                                              & vlTOPp->FPHUB_sqrt__DOT__unnamedblk6__DOT__k)));
                            }
                            vlTOPp->FPHUB_sqrt__DOT__unnamedblk6__DOT__k 
                                = ((IData)(1U) + vlTOPp->FPHUB_sqrt__DOT__unnamedblk6__DOT__k);
                        }
                    }
                }
            } else {
                if (((IData)(vlTOPp->computing) & (~ (IData)(vlTOPp->FPHUB_sqrt__DOT__negative)))) {
                    vlTOPp->finish = 1U;
                    __Vdly__computing = 0U;
                    vlTOPp->res = (((IData)(vlTOPp->FPHUB_sqrt__DOT__res_exponent) 
                                    << 0x17U) | vlTOPp->FPHUB_sqrt__DOT__res_mantissa);
                } else {
                    if ((1U & (~ (IData)(vlTOPp->FPHUB_sqrt__DOT__negative)))) {
                        vlTOPp->finish = 0U;
                        vlTOPp->res = 0U;
                    }
                }
            }
        }
    } else {
        __Vdly__computing = 0U;
        __Vdly__FPHUB_sqrt__DOT__j = 0U;
        vlTOPp->res = 0U;
        vlTOPp->finish = 0U;
        __Vdly__FPHUB_sqrt__DOT__res_exponent = 0U;
        vlTOPp->FPHUB_sqrt__DOT__chivato = 0U;
        __Vdly__FPHUB_sqrt__DOT__negative = 0U;
    }
    vlTOPp->FPHUB_sqrt__DOT__negative = __Vdly__FPHUB_sqrt__DOT__negative;
    vlTOPp->FPHUB_sqrt__DOT__res_exponent = __Vdly__FPHUB_sqrt__DOT__res_exponent;
    if (__Vdlyvset__FPHUB_sqrt__DOT__y_test__v0) {
        vlTOPp->FPHUB_sqrt__DOT__y_test[__Vdlyvdim0__FPHUB_sqrt__DOT__y_test__v0] 
            = __Vdlyvval__FPHUB_sqrt__DOT__y_test__v0;
    }
    vlTOPp->computing = __Vdly__computing;
    vlTOPp->FPHUB_sqrt__DOT__F1 = __Vdly__FPHUB_sqrt__DOT__F1;
    vlTOPp->FPHUB_sqrt__DOT__F_1 = __Vdly__FPHUB_sqrt__DOT__F_1;
    vlTOPp->FPHUB_sqrt__DOT__j = __Vdly__FPHUB_sqrt__DOT__j;
    if (__Vdlyvset__FPHUB_sqrt__DOT__S__v0) {
        vlTOPp->FPHUB_sqrt__DOT__S[0U] = 0U;
    }
    if (__Vdlyvset__FPHUB_sqrt__DOT__S__v1) {
        vlTOPp->FPHUB_sqrt__DOT__S[1U] = 1U;
    }
    if (__Vdlyvset__FPHUB_sqrt__DOT__S__v2) {
        vlTOPp->FPHUB_sqrt__DOT__S[__Vdlyvdim0__FPHUB_sqrt__DOT__S__v2] 
            = __Vdlyvval__FPHUB_sqrt__DOT__S__v2;
    }
    if (__Vdlyvset__FPHUB_sqrt__DOT__S__v3) {
        vlTOPp->FPHUB_sqrt__DOT__S[__Vdlyvdim0__FPHUB_sqrt__DOT__S__v3] 
            = __Vdlyvval__FPHUB_sqrt__DOT__S__v3;
    }
    if (__Vdlyvset__FPHUB_sqrt__DOT__S__v4) {
        vlTOPp->FPHUB_sqrt__DOT__S[__Vdlyvdim0__FPHUB_sqrt__DOT__S__v4] 
            = __Vdlyvval__FPHUB_sqrt__DOT__S__v4;
    }
    if (__Vdlyvset__FPHUB_sqrt__DOT__S__v0) {
        vlTOPp->FPHUB_sqrt__DOT__WC[0U] = 0U;
    }
    if (__Vdlyvset__FPHUB_sqrt__DOT__S__v1) {
        vlTOPp->FPHUB_sqrt__DOT__WC[1U] = __Vdlyvval__FPHUB_sqrt__DOT__WC__v1;
    }
    if (__Vdlyvset__FPHUB_sqrt__DOT__WC__v2) {
        vlTOPp->FPHUB_sqrt__DOT__WC[__Vdlyvdim0__FPHUB_sqrt__DOT__WC__v2] 
            = __Vdlyvval__FPHUB_sqrt__DOT__WC__v2;
    }
    if (__Vdlyvset__FPHUB_sqrt__DOT__WC__v3) {
        vlTOPp->FPHUB_sqrt__DOT__WC[__Vdlyvdim0__FPHUB_sqrt__DOT__WC__v3] 
            = __Vdlyvval__FPHUB_sqrt__DOT__WC__v3;
    }
    if (__Vdlyvset__FPHUB_sqrt__DOT__WC__v4) {
        vlTOPp->FPHUB_sqrt__DOT__WC[__Vdlyvdim0__FPHUB_sqrt__DOT__WC__v4] 
            = __Vdlyvval__FPHUB_sqrt__DOT__WC__v4;
    }
    if (__Vdlyvset__FPHUB_sqrt__DOT__W2__v0) {
        vlTOPp->FPHUB_sqrt__DOT__W2[0U] = __Vdlyvval__FPHUB_sqrt__DOT__W2__v0;
    }
    if (__Vdlyvset__FPHUB_sqrt__DOT__S__v1) {
        vlTOPp->FPHUB_sqrt__DOT__W2[1U] = __Vdlyvval__FPHUB_sqrt__DOT__W2__v1;
    }
    if (__Vdlyvset__FPHUB_sqrt__DOT__W2__v2) {
        vlTOPp->FPHUB_sqrt__DOT__W2[__Vdlyvdim0__FPHUB_sqrt__DOT__W2__v2] 
            = __Vdlyvval__FPHUB_sqrt__DOT__W2__v2;
    }
    if (__Vdlyvset__FPHUB_sqrt__DOT__W2__v3) {
        vlTOPp->FPHUB_sqrt__DOT__W2[__Vdlyvdim0__FPHUB_sqrt__DOT__W2__v3] 
            = __Vdlyvval__FPHUB_sqrt__DOT__W2__v3;
    }
    if (__Vdlyvset__FPHUB_sqrt__DOT__W2__v4) {
        vlTOPp->FPHUB_sqrt__DOT__W2[__Vdlyvdim0__FPHUB_sqrt__DOT__W2__v4] 
            = __Vdlyvval__FPHUB_sqrt__DOT__W2__v4;
    }
    if (__Vdlyvset__FPHUB_sqrt__DOT__S__v0) {
        vlTOPp->FPHUB_sqrt__DOT__W[0U] = __Vdlyvval__FPHUB_sqrt__DOT__W__v0;
    }
    if (__Vdlyvset__FPHUB_sqrt__DOT__S__v1) {
        vlTOPp->FPHUB_sqrt__DOT__W[1U] = __Vdlyvval__FPHUB_sqrt__DOT__W__v1;
    }
    if (__Vdlyvset__FPHUB_sqrt__DOT__W__v2) {
        vlTOPp->FPHUB_sqrt__DOT__W[__Vdlyvdim0__FPHUB_sqrt__DOT__W__v2] 
            = __Vdlyvval__FPHUB_sqrt__DOT__W__v2;
    }
    if (__Vdlyvset__FPHUB_sqrt__DOT__W__v3) {
        vlTOPp->FPHUB_sqrt__DOT__W[__Vdlyvdim0__FPHUB_sqrt__DOT__W__v3] 
            = __Vdlyvval__FPHUB_sqrt__DOT__W__v3;
    }
    if (__Vdlyvset__FPHUB_sqrt__DOT__W__v4) {
        vlTOPp->FPHUB_sqrt__DOT__W[__Vdlyvdim0__FPHUB_sqrt__DOT__W__v4] 
            = __Vdlyvval__FPHUB_sqrt__DOT__W__v4;
    }
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

void VFPHUB_sqrt::_eval(VFPHUB_sqrt__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFPHUB_sqrt::_eval\n"); );
    VFPHUB_sqrt* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if ((((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk))) 
         | ((~ (IData)(vlTOPp->rst_l)) & (IData)(vlTOPp->__Vclklast__TOP__rst_l)))) {
        vlTOPp->_sequent__TOP__1(vlSymsp);
        vlTOPp->__Vm_traceActivity[1U] = 1U;
    }
    // Final
    vlTOPp->__Vclklast__TOP__clk = vlTOPp->clk;
    vlTOPp->__Vclklast__TOP__rst_l = vlTOPp->rst_l;
}

VL_INLINE_OPT QData VFPHUB_sqrt::_change_request(VFPHUB_sqrt__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFPHUB_sqrt::_change_request\n"); );
    VFPHUB_sqrt* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    return (vlTOPp->_change_request_1(vlSymsp));
}

VL_INLINE_OPT QData VFPHUB_sqrt::_change_request_1(VFPHUB_sqrt__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFPHUB_sqrt::_change_request_1\n"); );
    VFPHUB_sqrt* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void VFPHUB_sqrt::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VFPHUB_sqrt::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((rst_l & 0xfeU))) {
        Verilated::overWidthError("rst_l");}
    if (VL_UNLIKELY((start & 0xfeU))) {
        Verilated::overWidthError("start");}
}
#endif  // VL_DEBUG
