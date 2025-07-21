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
    // Variables
    WData/*95:0*/ __Vtemp10[3];
    // Body
    if (((IData)(vlTOPp->computing) & (0x1fU == vlTOPp->FPHUB_sqrt__DOT__j))) {
        VL_EXTEND_WQ(65,63, __Vtemp10, vlTOPp->FPHUB_sqrt__DOT__S);
        vlTOPp->FPHUB_sqrt__DOT__q[0U] = __Vtemp10[0U];
        vlTOPp->FPHUB_sqrt__DOT__q[1U] = __Vtemp10[1U];
        vlTOPp->FPHUB_sqrt__DOT__q[2U] = __Vtemp10[2U];
        if ((3U == (3U & vlTOPp->FPHUB_sqrt__DOT__q[0U]))) {
            vlTOPp->FPHUB_sqrt__DOT__neg = (1U | vlTOPp->FPHUB_sqrt__DOT__neg);
        } else {
            if ((1U == (3U & vlTOPp->FPHUB_sqrt__DOT__q[0U]))) {
                vlTOPp->FPHUB_sqrt__DOT__posiv = (1U 
                                                  | vlTOPp->FPHUB_sqrt__DOT__posiv);
            }
        }
        if ((3U == (3U & ((vlTOPp->FPHUB_sqrt__DOT__q[1U] 
                           << 0x1eU) | (vlTOPp->FPHUB_sqrt__DOT__q[0U] 
                                        >> 2U))))) {
            vlTOPp->FPHUB_sqrt__DOT__neg = (2U | vlTOPp->FPHUB_sqrt__DOT__neg);
        } else {
            if ((1U == (3U & ((vlTOPp->FPHUB_sqrt__DOT__q[1U] 
                               << 0x1eU) | (vlTOPp->FPHUB_sqrt__DOT__q[0U] 
                                            >> 2U))))) {
                vlTOPp->FPHUB_sqrt__DOT__posiv = (2U 
                                                  | vlTOPp->FPHUB_sqrt__DOT__posiv);
            }
        }
        if ((3U == (3U & ((vlTOPp->FPHUB_sqrt__DOT__q[1U] 
                           << 0x1cU) | (vlTOPp->FPHUB_sqrt__DOT__q[0U] 
                                        >> 4U))))) {
            vlTOPp->FPHUB_sqrt__DOT__neg = (4U | vlTOPp->FPHUB_sqrt__DOT__neg);
        } else {
            if ((1U == (3U & ((vlTOPp->FPHUB_sqrt__DOT__q[1U] 
                               << 0x1cU) | (vlTOPp->FPHUB_sqrt__DOT__q[0U] 
                                            >> 4U))))) {
                vlTOPp->FPHUB_sqrt__DOT__posiv = (4U 
                                                  | vlTOPp->FPHUB_sqrt__DOT__posiv);
            }
        }
        if ((3U == (3U & ((vlTOPp->FPHUB_sqrt__DOT__q[1U] 
                           << 0x1aU) | (vlTOPp->FPHUB_sqrt__DOT__q[0U] 
                                        >> 6U))))) {
            vlTOPp->FPHUB_sqrt__DOT__neg = (8U | vlTOPp->FPHUB_sqrt__DOT__neg);
        } else {
            if ((1U == (3U & ((vlTOPp->FPHUB_sqrt__DOT__q[1U] 
                               << 0x1aU) | (vlTOPp->FPHUB_sqrt__DOT__q[0U] 
                                            >> 6U))))) {
                vlTOPp->FPHUB_sqrt__DOT__posiv = (8U 
                                                  | vlTOPp->FPHUB_sqrt__DOT__posiv);
            }
        }
        if ((3U == (3U & ((vlTOPp->FPHUB_sqrt__DOT__q[1U] 
                           << 0x18U) | (vlTOPp->FPHUB_sqrt__DOT__q[0U] 
                                        >> 8U))))) {
            vlTOPp->FPHUB_sqrt__DOT__neg = (0x10U | vlTOPp->FPHUB_sqrt__DOT__neg);
        } else {
            if ((1U == (3U & ((vlTOPp->FPHUB_sqrt__DOT__q[1U] 
                               << 0x18U) | (vlTOPp->FPHUB_sqrt__DOT__q[0U] 
                                            >> 8U))))) {
                vlTOPp->FPHUB_sqrt__DOT__posiv = (0x10U 
                                                  | vlTOPp->FPHUB_sqrt__DOT__posiv);
            }
        }
        if ((3U == (3U & ((vlTOPp->FPHUB_sqrt__DOT__q[1U] 
                           << 0x16U) | (vlTOPp->FPHUB_sqrt__DOT__q[0U] 
                                        >> 0xaU))))) {
            vlTOPp->FPHUB_sqrt__DOT__neg = (0x20U | vlTOPp->FPHUB_sqrt__DOT__neg);
        } else {
            if ((1U == (3U & ((vlTOPp->FPHUB_sqrt__DOT__q[1U] 
                               << 0x16U) | (vlTOPp->FPHUB_sqrt__DOT__q[0U] 
                                            >> 0xaU))))) {
                vlTOPp->FPHUB_sqrt__DOT__posiv = (0x20U 
                                                  | vlTOPp->FPHUB_sqrt__DOT__posiv);
            }
        }
        if ((3U == (3U & ((vlTOPp->FPHUB_sqrt__DOT__q[1U] 
                           << 0x14U) | (vlTOPp->FPHUB_sqrt__DOT__q[0U] 
                                        >> 0xcU))))) {
            vlTOPp->FPHUB_sqrt__DOT__neg = (0x40U | vlTOPp->FPHUB_sqrt__DOT__neg);
        } else {
            if ((1U == (3U & ((vlTOPp->FPHUB_sqrt__DOT__q[1U] 
                               << 0x14U) | (vlTOPp->FPHUB_sqrt__DOT__q[0U] 
                                            >> 0xcU))))) {
                vlTOPp->FPHUB_sqrt__DOT__posiv = (0x40U 
                                                  | vlTOPp->FPHUB_sqrt__DOT__posiv);
            }
        }
        if ((3U == (3U & ((vlTOPp->FPHUB_sqrt__DOT__q[1U] 
                           << 0x12U) | (vlTOPp->FPHUB_sqrt__DOT__q[0U] 
                                        >> 0xeU))))) {
            vlTOPp->FPHUB_sqrt__DOT__neg = (0x80U | vlTOPp->FPHUB_sqrt__DOT__neg);
        } else {
            if ((1U == (3U & ((vlTOPp->FPHUB_sqrt__DOT__q[1U] 
                               << 0x12U) | (vlTOPp->FPHUB_sqrt__DOT__q[0U] 
                                            >> 0xeU))))) {
                vlTOPp->FPHUB_sqrt__DOT__posiv = (0x80U 
                                                  | vlTOPp->FPHUB_sqrt__DOT__posiv);
            }
        }
        if ((3U == (3U & ((vlTOPp->FPHUB_sqrt__DOT__q[1U] 
                           << 0x10U) | (vlTOPp->FPHUB_sqrt__DOT__q[0U] 
                                        >> 0x10U))))) {
            vlTOPp->FPHUB_sqrt__DOT__neg = (0x100U 
                                            | vlTOPp->FPHUB_sqrt__DOT__neg);
        } else {
            if ((1U == (3U & ((vlTOPp->FPHUB_sqrt__DOT__q[1U] 
                               << 0x10U) | (vlTOPp->FPHUB_sqrt__DOT__q[0U] 
                                            >> 0x10U))))) {
                vlTOPp->FPHUB_sqrt__DOT__posiv = (0x100U 
                                                  | vlTOPp->FPHUB_sqrt__DOT__posiv);
            }
        }
        if ((3U == (3U & ((vlTOPp->FPHUB_sqrt__DOT__q[1U] 
                           << 0xeU) | (vlTOPp->FPHUB_sqrt__DOT__q[0U] 
                                       >> 0x12U))))) {
            vlTOPp->FPHUB_sqrt__DOT__neg = (0x200U 
                                            | vlTOPp->FPHUB_sqrt__DOT__neg);
        } else {
            if ((1U == (3U & ((vlTOPp->FPHUB_sqrt__DOT__q[1U] 
                               << 0xeU) | (vlTOPp->FPHUB_sqrt__DOT__q[0U] 
                                           >> 0x12U))))) {
                vlTOPp->FPHUB_sqrt__DOT__posiv = (0x200U 
                                                  | vlTOPp->FPHUB_sqrt__DOT__posiv);
            }
        }
        if ((3U == (3U & ((vlTOPp->FPHUB_sqrt__DOT__q[1U] 
                           << 0xcU) | (vlTOPp->FPHUB_sqrt__DOT__q[0U] 
                                       >> 0x14U))))) {
            vlTOPp->FPHUB_sqrt__DOT__neg = (0x400U 
                                            | vlTOPp->FPHUB_sqrt__DOT__neg);
        } else {
            if ((1U == (3U & ((vlTOPp->FPHUB_sqrt__DOT__q[1U] 
                               << 0xcU) | (vlTOPp->FPHUB_sqrt__DOT__q[0U] 
                                           >> 0x14U))))) {
                vlTOPp->FPHUB_sqrt__DOT__posiv = (0x400U 
                                                  | vlTOPp->FPHUB_sqrt__DOT__posiv);
            }
        }
        if ((3U == (3U & ((vlTOPp->FPHUB_sqrt__DOT__q[1U] 
                           << 0xaU) | (vlTOPp->FPHUB_sqrt__DOT__q[0U] 
                                       >> 0x16U))))) {
            vlTOPp->FPHUB_sqrt__DOT__neg = (0x800U 
                                            | vlTOPp->FPHUB_sqrt__DOT__neg);
        } else {
            if ((1U == (3U & ((vlTOPp->FPHUB_sqrt__DOT__q[1U] 
                               << 0xaU) | (vlTOPp->FPHUB_sqrt__DOT__q[0U] 
                                           >> 0x16U))))) {
                vlTOPp->FPHUB_sqrt__DOT__posiv = (0x800U 
                                                  | vlTOPp->FPHUB_sqrt__DOT__posiv);
            }
        }
        if ((3U == (3U & ((vlTOPp->FPHUB_sqrt__DOT__q[1U] 
                           << 8U) | (vlTOPp->FPHUB_sqrt__DOT__q[0U] 
                                     >> 0x18U))))) {
            vlTOPp->FPHUB_sqrt__DOT__neg = (0x1000U 
                                            | vlTOPp->FPHUB_sqrt__DOT__neg);
        } else {
            if ((1U == (3U & ((vlTOPp->FPHUB_sqrt__DOT__q[1U] 
                               << 8U) | (vlTOPp->FPHUB_sqrt__DOT__q[0U] 
                                         >> 0x18U))))) {
                vlTOPp->FPHUB_sqrt__DOT__posiv = (0x1000U 
                                                  | vlTOPp->FPHUB_sqrt__DOT__posiv);
            }
        }
        if ((3U == (3U & ((vlTOPp->FPHUB_sqrt__DOT__q[1U] 
                           << 6U) | (vlTOPp->FPHUB_sqrt__DOT__q[0U] 
                                     >> 0x1aU))))) {
            vlTOPp->FPHUB_sqrt__DOT__neg = (0x2000U 
                                            | vlTOPp->FPHUB_sqrt__DOT__neg);
        } else {
            if ((1U == (3U & ((vlTOPp->FPHUB_sqrt__DOT__q[1U] 
                               << 6U) | (vlTOPp->FPHUB_sqrt__DOT__q[0U] 
                                         >> 0x1aU))))) {
                vlTOPp->FPHUB_sqrt__DOT__posiv = (0x2000U 
                                                  | vlTOPp->FPHUB_sqrt__DOT__posiv);
            }
        }
        if ((3U == (3U & ((vlTOPp->FPHUB_sqrt__DOT__q[1U] 
                           << 4U) | (vlTOPp->FPHUB_sqrt__DOT__q[0U] 
                                     >> 0x1cU))))) {
            vlTOPp->FPHUB_sqrt__DOT__neg = (0x4000U 
                                            | vlTOPp->FPHUB_sqrt__DOT__neg);
        } else {
            if ((1U == (3U & ((vlTOPp->FPHUB_sqrt__DOT__q[1U] 
                               << 4U) | (vlTOPp->FPHUB_sqrt__DOT__q[0U] 
                                         >> 0x1cU))))) {
                vlTOPp->FPHUB_sqrt__DOT__posiv = (0x4000U 
                                                  | vlTOPp->FPHUB_sqrt__DOT__posiv);
            }
        }
        if ((3U == (3U & ((vlTOPp->FPHUB_sqrt__DOT__q[1U] 
                           << 2U) | (vlTOPp->FPHUB_sqrt__DOT__q[0U] 
                                     >> 0x1eU))))) {
            vlTOPp->FPHUB_sqrt__DOT__neg = (0x8000U 
                                            | vlTOPp->FPHUB_sqrt__DOT__neg);
        } else {
            if ((1U == (3U & ((vlTOPp->FPHUB_sqrt__DOT__q[1U] 
                               << 2U) | (vlTOPp->FPHUB_sqrt__DOT__q[0U] 
                                         >> 0x1eU))))) {
                vlTOPp->FPHUB_sqrt__DOT__posiv = (0x8000U 
                                                  | vlTOPp->FPHUB_sqrt__DOT__posiv);
            }
        }
        if ((3U == (3U & vlTOPp->FPHUB_sqrt__DOT__q[1U]))) {
            vlTOPp->FPHUB_sqrt__DOT__neg = (0x10000U 
                                            | vlTOPp->FPHUB_sqrt__DOT__neg);
        } else {
            if ((1U == (3U & vlTOPp->FPHUB_sqrt__DOT__q[1U]))) {
                vlTOPp->FPHUB_sqrt__DOT__posiv = (0x10000U 
                                                  | vlTOPp->FPHUB_sqrt__DOT__posiv);
            }
        }
        if ((3U == (3U & ((vlTOPp->FPHUB_sqrt__DOT__q[2U] 
                           << 0x1eU) | (vlTOPp->FPHUB_sqrt__DOT__q[1U] 
                                        >> 2U))))) {
            vlTOPp->FPHUB_sqrt__DOT__neg = (0x20000U 
                                            | vlTOPp->FPHUB_sqrt__DOT__neg);
        } else {
            if ((1U == (3U & ((vlTOPp->FPHUB_sqrt__DOT__q[2U] 
                               << 0x1eU) | (vlTOPp->FPHUB_sqrt__DOT__q[1U] 
                                            >> 2U))))) {
                vlTOPp->FPHUB_sqrt__DOT__posiv = (0x20000U 
                                                  | vlTOPp->FPHUB_sqrt__DOT__posiv);
            }
        }
        if ((3U == (3U & ((vlTOPp->FPHUB_sqrt__DOT__q[2U] 
                           << 0x1cU) | (vlTOPp->FPHUB_sqrt__DOT__q[1U] 
                                        >> 4U))))) {
            vlTOPp->FPHUB_sqrt__DOT__neg = (0x40000U 
                                            | vlTOPp->FPHUB_sqrt__DOT__neg);
        } else {
            if ((1U == (3U & ((vlTOPp->FPHUB_sqrt__DOT__q[2U] 
                               << 0x1cU) | (vlTOPp->FPHUB_sqrt__DOT__q[1U] 
                                            >> 4U))))) {
                vlTOPp->FPHUB_sqrt__DOT__posiv = (0x40000U 
                                                  | vlTOPp->FPHUB_sqrt__DOT__posiv);
            }
        }
        if ((3U == (3U & ((vlTOPp->FPHUB_sqrt__DOT__q[2U] 
                           << 0x1aU) | (vlTOPp->FPHUB_sqrt__DOT__q[1U] 
                                        >> 6U))))) {
            vlTOPp->FPHUB_sqrt__DOT__neg = (0x80000U 
                                            | vlTOPp->FPHUB_sqrt__DOT__neg);
        } else {
            if ((1U == (3U & ((vlTOPp->FPHUB_sqrt__DOT__q[2U] 
                               << 0x1aU) | (vlTOPp->FPHUB_sqrt__DOT__q[1U] 
                                            >> 6U))))) {
                vlTOPp->FPHUB_sqrt__DOT__posiv = (0x80000U 
                                                  | vlTOPp->FPHUB_sqrt__DOT__posiv);
            }
        }
        if ((3U == (3U & ((vlTOPp->FPHUB_sqrt__DOT__q[2U] 
                           << 0x18U) | (vlTOPp->FPHUB_sqrt__DOT__q[1U] 
                                        >> 8U))))) {
            vlTOPp->FPHUB_sqrt__DOT__neg = (0x100000U 
                                            | vlTOPp->FPHUB_sqrt__DOT__neg);
        } else {
            if ((1U == (3U & ((vlTOPp->FPHUB_sqrt__DOT__q[2U] 
                               << 0x18U) | (vlTOPp->FPHUB_sqrt__DOT__q[1U] 
                                            >> 8U))))) {
                vlTOPp->FPHUB_sqrt__DOT__posiv = (0x100000U 
                                                  | vlTOPp->FPHUB_sqrt__DOT__posiv);
            }
        }
        if ((3U == (3U & ((vlTOPp->FPHUB_sqrt__DOT__q[2U] 
                           << 0x16U) | (vlTOPp->FPHUB_sqrt__DOT__q[1U] 
                                        >> 0xaU))))) {
            vlTOPp->FPHUB_sqrt__DOT__neg = (0x200000U 
                                            | vlTOPp->FPHUB_sqrt__DOT__neg);
        } else {
            if ((1U == (3U & ((vlTOPp->FPHUB_sqrt__DOT__q[2U] 
                               << 0x16U) | (vlTOPp->FPHUB_sqrt__DOT__q[1U] 
                                            >> 0xaU))))) {
                vlTOPp->FPHUB_sqrt__DOT__posiv = (0x200000U 
                                                  | vlTOPp->FPHUB_sqrt__DOT__posiv);
            }
        }
        if ((3U == (3U & ((vlTOPp->FPHUB_sqrt__DOT__q[2U] 
                           << 0x14U) | (vlTOPp->FPHUB_sqrt__DOT__q[1U] 
                                        >> 0xcU))))) {
            vlTOPp->FPHUB_sqrt__DOT__neg = (0x400000U 
                                            | vlTOPp->FPHUB_sqrt__DOT__neg);
        } else {
            if ((1U == (3U & ((vlTOPp->FPHUB_sqrt__DOT__q[2U] 
                               << 0x14U) | (vlTOPp->FPHUB_sqrt__DOT__q[1U] 
                                            >> 0xcU))))) {
                vlTOPp->FPHUB_sqrt__DOT__posiv = (0x400000U 
                                                  | vlTOPp->FPHUB_sqrt__DOT__posiv);
            }
        }
        if ((3U == (3U & ((vlTOPp->FPHUB_sqrt__DOT__q[2U] 
                           << 0x12U) | (vlTOPp->FPHUB_sqrt__DOT__q[1U] 
                                        >> 0xeU))))) {
            vlTOPp->FPHUB_sqrt__DOT__neg = (0x800000U 
                                            | vlTOPp->FPHUB_sqrt__DOT__neg);
        } else {
            if ((1U == (3U & ((vlTOPp->FPHUB_sqrt__DOT__q[2U] 
                               << 0x12U) | (vlTOPp->FPHUB_sqrt__DOT__q[1U] 
                                            >> 0xeU))))) {
                vlTOPp->FPHUB_sqrt__DOT__posiv = (0x800000U 
                                                  | vlTOPp->FPHUB_sqrt__DOT__posiv);
            }
        }
        if ((3U == (3U & ((vlTOPp->FPHUB_sqrt__DOT__q[2U] 
                           << 0x10U) | (vlTOPp->FPHUB_sqrt__DOT__q[1U] 
                                        >> 0x10U))))) {
            vlTOPp->FPHUB_sqrt__DOT__neg = (0x1000000U 
                                            | vlTOPp->FPHUB_sqrt__DOT__neg);
        } else {
            if ((1U == (3U & ((vlTOPp->FPHUB_sqrt__DOT__q[2U] 
                               << 0x10U) | (vlTOPp->FPHUB_sqrt__DOT__q[1U] 
                                            >> 0x10U))))) {
                vlTOPp->FPHUB_sqrt__DOT__posiv = (0x1000000U 
                                                  | vlTOPp->FPHUB_sqrt__DOT__posiv);
            }
        }
        if ((3U == (3U & ((vlTOPp->FPHUB_sqrt__DOT__q[2U] 
                           << 0xeU) | (vlTOPp->FPHUB_sqrt__DOT__q[1U] 
                                       >> 0x12U))))) {
            vlTOPp->FPHUB_sqrt__DOT__neg = (0x2000000U 
                                            | vlTOPp->FPHUB_sqrt__DOT__neg);
        } else {
            if ((1U == (3U & ((vlTOPp->FPHUB_sqrt__DOT__q[2U] 
                               << 0xeU) | (vlTOPp->FPHUB_sqrt__DOT__q[1U] 
                                           >> 0x12U))))) {
                vlTOPp->FPHUB_sqrt__DOT__posiv = (0x2000000U 
                                                  | vlTOPp->FPHUB_sqrt__DOT__posiv);
            }
        }
        if ((3U == (3U & ((vlTOPp->FPHUB_sqrt__DOT__q[2U] 
                           << 0xcU) | (vlTOPp->FPHUB_sqrt__DOT__q[1U] 
                                       >> 0x14U))))) {
            vlTOPp->FPHUB_sqrt__DOT__neg = (0x4000000U 
                                            | vlTOPp->FPHUB_sqrt__DOT__neg);
        } else {
            if ((1U == (3U & ((vlTOPp->FPHUB_sqrt__DOT__q[2U] 
                               << 0xcU) | (vlTOPp->FPHUB_sqrt__DOT__q[1U] 
                                           >> 0x14U))))) {
                vlTOPp->FPHUB_sqrt__DOT__posiv = (0x4000000U 
                                                  | vlTOPp->FPHUB_sqrt__DOT__posiv);
            }
        }
        if ((3U == (3U & ((vlTOPp->FPHUB_sqrt__DOT__q[2U] 
                           << 0xaU) | (vlTOPp->FPHUB_sqrt__DOT__q[1U] 
                                       >> 0x16U))))) {
            vlTOPp->FPHUB_sqrt__DOT__neg = (0x8000000U 
                                            | vlTOPp->FPHUB_sqrt__DOT__neg);
        } else {
            if ((1U == (3U & ((vlTOPp->FPHUB_sqrt__DOT__q[2U] 
                               << 0xaU) | (vlTOPp->FPHUB_sqrt__DOT__q[1U] 
                                           >> 0x16U))))) {
                vlTOPp->FPHUB_sqrt__DOT__posiv = (0x8000000U 
                                                  | vlTOPp->FPHUB_sqrt__DOT__posiv);
            }
        }
        if ((3U == (3U & ((vlTOPp->FPHUB_sqrt__DOT__q[2U] 
                           << 8U) | (vlTOPp->FPHUB_sqrt__DOT__q[1U] 
                                     >> 0x18U))))) {
            vlTOPp->FPHUB_sqrt__DOT__neg = (0x10000000U 
                                            | vlTOPp->FPHUB_sqrt__DOT__neg);
        } else {
            if ((1U == (3U & ((vlTOPp->FPHUB_sqrt__DOT__q[2U] 
                               << 8U) | (vlTOPp->FPHUB_sqrt__DOT__q[1U] 
                                         >> 0x18U))))) {
                vlTOPp->FPHUB_sqrt__DOT__posiv = (0x10000000U 
                                                  | vlTOPp->FPHUB_sqrt__DOT__posiv);
            }
        }
        if ((3U == (3U & ((vlTOPp->FPHUB_sqrt__DOT__q[2U] 
                           << 6U) | (vlTOPp->FPHUB_sqrt__DOT__q[1U] 
                                     >> 0x1aU))))) {
            vlTOPp->FPHUB_sqrt__DOT__neg = (0x20000000U 
                                            | vlTOPp->FPHUB_sqrt__DOT__neg);
        } else {
            if ((1U == (3U & ((vlTOPp->FPHUB_sqrt__DOT__q[2U] 
                               << 6U) | (vlTOPp->FPHUB_sqrt__DOT__q[1U] 
                                         >> 0x1aU))))) {
                vlTOPp->FPHUB_sqrt__DOT__posiv = (0x20000000U 
                                                  | vlTOPp->FPHUB_sqrt__DOT__posiv);
            }
        }
        if ((3U == (3U & ((vlTOPp->FPHUB_sqrt__DOT__q[2U] 
                           << 4U) | (vlTOPp->FPHUB_sqrt__DOT__q[1U] 
                                     >> 0x1cU))))) {
            vlTOPp->FPHUB_sqrt__DOT__neg = (0x40000000U 
                                            | vlTOPp->FPHUB_sqrt__DOT__neg);
        } else {
            if ((1U == (3U & ((vlTOPp->FPHUB_sqrt__DOT__q[2U] 
                               << 4U) | (vlTOPp->FPHUB_sqrt__DOT__q[1U] 
                                         >> 0x1cU))))) {
                vlTOPp->FPHUB_sqrt__DOT__posiv = (0x40000000U 
                                                  | vlTOPp->FPHUB_sqrt__DOT__posiv);
            }
        }
        if ((3U == (3U & ((vlTOPp->FPHUB_sqrt__DOT__q[2U] 
                           << 2U) | (vlTOPp->FPHUB_sqrt__DOT__q[1U] 
                                     >> 0x1eU))))) {
            vlTOPp->FPHUB_sqrt__DOT__neg = (0x80000000U 
                                            | vlTOPp->FPHUB_sqrt__DOT__neg);
        } else {
            if ((1U == (3U & ((vlTOPp->FPHUB_sqrt__DOT__q[2U] 
                               << 2U) | (vlTOPp->FPHUB_sqrt__DOT__q[1U] 
                                         >> 0x1eU))))) {
                vlTOPp->FPHUB_sqrt__DOT__posiv = (0x80000000U 
                                                  | vlTOPp->FPHUB_sqrt__DOT__posiv);
            }
        }
        if ((3U == (3U & vlTOPp->FPHUB_sqrt__DOT__q[2U]))) {
            vlTOPp->FPHUB_sqrt__DOT__neg = (1U | vlTOPp->FPHUB_sqrt__DOT__neg);
        } else {
            if ((1U == (3U & vlTOPp->FPHUB_sqrt__DOT__q[2U]))) {
                vlTOPp->FPHUB_sqrt__DOT__posiv = (1U 
                                                  | vlTOPp->FPHUB_sqrt__DOT__posiv);
            }
        }
        vlTOPp->FPHUB_sqrt__DOT__unnamedblk7__DOT__i = 0x21U;
        vlTOPp->FPHUB_sqrt__DOT__quotient = (((0x1eU 
                                               >= (0x1fU 
                                                   & vlTOPp->FPHUB_sqrt__DOT__j))
                                               ? (0x10000000U 
                                                  & vlTOPp->FPHUB_sqrt__DOT__W
                                                  [
                                                  (0x1fU 
                                                   & vlTOPp->FPHUB_sqrt__DOT__j)])
                                               : 0U)
                                              ? ((vlTOPp->FPHUB_sqrt__DOT__posiv 
                                                  - vlTOPp->FPHUB_sqrt__DOT__neg) 
                                                 - (IData)(1U))
                                              : (vlTOPp->FPHUB_sqrt__DOT__posiv 
                                                 - vlTOPp->FPHUB_sqrt__DOT__neg));
        vlTOPp->FPHUB_sqrt__DOT__restored_quotient 
            = (vlTOPp->FPHUB_sqrt__DOT__quotient << 1U);
        vlTOPp->FPHUB_sqrt__DOT__leading_zeros = 0U;
        vlTOPp->FPHUB_sqrt__DOT__unnamedblk8__DOT__i = 0x1fU;
        {
            while (VL_LTES_III(1,32,32, 0U, vlTOPp->FPHUB_sqrt__DOT__unnamedblk8__DOT__i)) {
                if ((1U & (vlTOPp->FPHUB_sqrt__DOT__restored_quotient 
                           >> (0x1fU & vlTOPp->FPHUB_sqrt__DOT__unnamedblk8__DOT__i)))) {
                    goto __Vlabel1;
                }
                vlTOPp->FPHUB_sqrt__DOT__leading_zeros 
                    = ((IData)(1U) + vlTOPp->FPHUB_sqrt__DOT__leading_zeros);
                vlTOPp->FPHUB_sqrt__DOT__unnamedblk8__DOT__i 
                    = (vlTOPp->FPHUB_sqrt__DOT__unnamedblk8__DOT__i 
                       - (IData)(1U));
            }
            __Vlabel1: ;
        }
        vlTOPp->FPHUB_sqrt__DOT__normalized = ((0x1fU 
                                                >= vlTOPp->FPHUB_sqrt__DOT__leading_zeros)
                                                ? (vlTOPp->FPHUB_sqrt__DOT__restored_quotient 
                                                   << vlTOPp->FPHUB_sqrt__DOT__leading_zeros)
                                                : 0U);
        vlTOPp->FPHUB_sqrt__DOT__res_mantissa = (0x7fffffU 
                                                 & (vlTOPp->FPHUB_sqrt__DOT__normalized 
                                                    >> 8U));
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
    FPHUB_sqrt__DOT__quotient = VL_RAND_RESET_I(32);
    FPHUB_sqrt__DOT__restored_quotient = VL_RAND_RESET_I(32);
    FPHUB_sqrt__DOT__normalized = VL_RAND_RESET_I(32);
    FPHUB_sqrt__DOT__leading_zeros = 0;
    FPHUB_sqrt__DOT__res_mantissa = VL_RAND_RESET_I(23);
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
    FPHUB_sqrt__DOT____Vlvbound32 = VL_RAND_RESET_I(1);
    FPHUB_sqrt__DOT____Vlvbound33 = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        __Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
