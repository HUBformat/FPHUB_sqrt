// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary design header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef _VFPHUB_SQRT_H_
#define _VFPHUB_SQRT_H_  // guard

#include "verilated.h"

//==========

class VFPHUB_sqrt__Syms;
class VFPHUB_sqrt_VerilatedVcd;


//----------

VL_MODULE(VFPHUB_sqrt) {
  public:
    
    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(clk,0,0);
    VL_IN8(rst_l,0,0);
    VL_IN8(start,0,0);
    VL_OUT8(finish,0,0);
    VL_OUT8(computing,0,0);
    VL_IN(x,31,0);
    VL_OUT(res,31,0);
    
    // LOCAL SIGNALS
    // Internals; generally not touched by application code
    CData/*0:0*/ FPHUB_sqrt__DOT__x_sign;
    CData/*7:0*/ FPHUB_sqrt__DOT__res_exponent;
    CData/*0:0*/ FPHUB_sqrt__DOT__chivato;
    CData/*2:0*/ FPHUB_sqrt__DOT__f1_test;
    CData/*0:0*/ FPHUB_sqrt__DOT__negative;
    IData/*28:0*/ FPHUB_sqrt__DOT__F1;
    IData/*28:0*/ FPHUB_sqrt__DOT__F_1;
    IData/*31:0*/ FPHUB_sqrt__DOT__j;
    WData/*64:0*/ FPHUB_sqrt__DOT__q[3];
    IData/*24:0*/ FPHUB_sqrt__DOT__posiv;
    IData/*24:0*/ FPHUB_sqrt__DOT__neg;
    IData/*31:0*/ FPHUB_sqrt__DOT__root;
    IData/*31:0*/ FPHUB_sqrt__DOT__quotient;
    IData/*31:0*/ FPHUB_sqrt__DOT__restored_quotient;
    IData/*28:0*/ FPHUB_sqrt__DOT__normalized;
    IData/*31:0*/ FPHUB_sqrt__DOT__leading_zeros;
    IData/*22:0*/ FPHUB_sqrt__DOT__res_mantissa;
    IData/*28:0*/ FPHUB_sqrt__DOT__f1_fly;
    IData/*28:0*/ FPHUB_sqrt__DOT__SN2;
    IData/*31:0*/ FPHUB_sqrt__DOT__unnamedblk1__DOT__k;
    IData/*31:0*/ FPHUB_sqrt__DOT__unnamedblk2__DOT__k;
    IData/*31:0*/ FPHUB_sqrt__DOT__unnamedblk3__DOT__k;
    IData/*31:0*/ FPHUB_sqrt__DOT__unnamedblk4__DOT__k;
    IData/*31:0*/ FPHUB_sqrt__DOT__unnamedblk5__DOT__k;
    IData/*31:0*/ FPHUB_sqrt__DOT__unnamedblk6__DOT__k;
    IData/*31:0*/ FPHUB_sqrt__DOT__unnamedblk7__DOT__i;
    IData/*31:0*/ FPHUB_sqrt__DOT__unnamedblk8__DOT__i;
    CData/*1:0*/ FPHUB_sqrt__DOT__S[25];
    IData/*28:0*/ FPHUB_sqrt__DOT__W[31];
    IData/*28:0*/ FPHUB_sqrt__DOT__W2[31];
    IData/*28:0*/ FPHUB_sqrt__DOT__WC[31];
    CData/*3:0*/ FPHUB_sqrt__DOT__y_test[31];
    
    // LOCAL VARIABLES
    // Internals; generally not touched by application code
    CData/*3:0*/ FPHUB_sqrt__DOT____Vlvbound1;
    CData/*1:0*/ FPHUB_sqrt__DOT____Vlvbound2;
    CData/*0:0*/ FPHUB_sqrt__DOT____Vlvbound6;
    CData/*0:0*/ FPHUB_sqrt__DOT____Vlvbound7;
    CData/*2:0*/ FPHUB_sqrt__DOT____Vlvbound8;
    CData/*2:0*/ FPHUB_sqrt__DOT____Vlvbound9;
    CData/*0:0*/ FPHUB_sqrt__DOT____Vlvbound10;
    CData/*0:0*/ FPHUB_sqrt__DOT____Vlvbound11;
    CData/*1:0*/ FPHUB_sqrt__DOT____Vlvbound12;
    CData/*0:0*/ FPHUB_sqrt__DOT____Vlvbound16;
    CData/*0:0*/ FPHUB_sqrt__DOT____Vlvbound17;
    CData/*2:0*/ FPHUB_sqrt__DOT____Vlvbound18;
    CData/*2:0*/ FPHUB_sqrt__DOT____Vlvbound19;
    CData/*0:0*/ FPHUB_sqrt__DOT____Vlvbound20;
    CData/*0:0*/ FPHUB_sqrt__DOT____Vlvbound21;
    CData/*1:0*/ FPHUB_sqrt__DOT____Vlvbound22;
    CData/*0:0*/ FPHUB_sqrt__DOT____Vlvbound26;
    CData/*0:0*/ FPHUB_sqrt__DOT____Vlvbound27;
    CData/*2:0*/ FPHUB_sqrt__DOT____Vlvbound28;
    CData/*2:0*/ FPHUB_sqrt__DOT____Vlvbound29;
    CData/*0:0*/ FPHUB_sqrt__DOT____Vlvbound30;
    CData/*0:0*/ FPHUB_sqrt__DOT____Vlvbound31;
    CData/*0:0*/ __Vclklast__TOP__clk;
    CData/*0:0*/ __Vclklast__TOP__rst_l;
    IData/*28:0*/ FPHUB_sqrt__DOT____Vlvbound3;
    IData/*28:0*/ FPHUB_sqrt__DOT____Vlvbound4;
    IData/*28:0*/ FPHUB_sqrt__DOT____Vlvbound5;
    IData/*28:0*/ FPHUB_sqrt__DOT____Vlvbound13;
    IData/*28:0*/ FPHUB_sqrt__DOT____Vlvbound14;
    IData/*28:0*/ FPHUB_sqrt__DOT____Vlvbound15;
    IData/*28:0*/ FPHUB_sqrt__DOT____Vlvbound23;
    IData/*28:0*/ FPHUB_sqrt__DOT____Vlvbound24;
    IData/*28:0*/ FPHUB_sqrt__DOT____Vlvbound25;
    CData/*0:0*/ __Vm_traceActivity[2];
    
    // INTERNAL VARIABLES
    // Internals; generally not touched by application code
    VFPHUB_sqrt__Syms* __VlSymsp;  // Symbol table
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(VFPHUB_sqrt);  ///< Copying not allowed
  public:
    /// Construct the model; called by application code
    /// The special name  may be used to make a wrapper with a
    /// single model invisible with respect to DPI scope names.
    VFPHUB_sqrt(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    ~VFPHUB_sqrt();
    /// Trace signals in the model; called by application code
    void trace(VerilatedVcdC* tfp, int levels, int options = 0);
    
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval() { eval_step(); }
    /// Evaluate when calling multiple units/models per time step.
    void eval_step();
    /// Evaluate at end of a timestep for tracing, when using eval_step().
    /// Application must call after all eval() and before time changes.
    void eval_end_step() {}
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    
    // INTERNAL METHODS
    static void _eval_initial_loop(VFPHUB_sqrt__Syms* __restrict vlSymsp);
    void __Vconfigure(VFPHUB_sqrt__Syms* symsp, bool first);
  private:
    static QData _change_request(VFPHUB_sqrt__Syms* __restrict vlSymsp);
    static QData _change_request_1(VFPHUB_sqrt__Syms* __restrict vlSymsp);
    void _ctor_var_reset() VL_ATTR_COLD;
  public:
    static void _eval(VFPHUB_sqrt__Syms* __restrict vlSymsp);
  private:
#ifdef VL_DEBUG
    void _eval_debug_assertions();
#endif  // VL_DEBUG
  public:
    static void _eval_initial(VFPHUB_sqrt__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _eval_settle(VFPHUB_sqrt__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _sequent__TOP__1(VFPHUB_sqrt__Syms* __restrict vlSymsp);
    static void _settle__TOP__2(VFPHUB_sqrt__Syms* __restrict vlSymsp) VL_ATTR_COLD;
  private:
    static void traceChgSub0(void* userp, VerilatedVcd* tracep);
    static void traceChgTop0(void* userp, VerilatedVcd* tracep);
    static void traceCleanup(void* userp, VerilatedVcd* /*unused*/);
    static void traceFullSub0(void* userp, VerilatedVcd* tracep) VL_ATTR_COLD;
    static void traceFullTop0(void* userp, VerilatedVcd* tracep) VL_ATTR_COLD;
    static void traceInitSub0(void* userp, VerilatedVcd* tracep) VL_ATTR_COLD;
    static void traceInitTop(void* userp, VerilatedVcd* tracep) VL_ATTR_COLD;
    void traceRegister(VerilatedVcd* tracep) VL_ATTR_COLD;
    static void traceInit(void* userp, VerilatedVcd* tracep, uint32_t code) VL_ATTR_COLD;
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
