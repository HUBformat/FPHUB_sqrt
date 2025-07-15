// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VFPHUB_sqrt__Syms.h"


void VFPHUB_sqrt::traceChgTop0(void* userp, VerilatedVcd* tracep) {
    VFPHUB_sqrt__Syms* __restrict vlSymsp = static_cast<VFPHUB_sqrt__Syms*>(userp);
    VFPHUB_sqrt* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    {
        vlTOPp->traceChgSub0(userp, tracep);
    }
}

void VFPHUB_sqrt::traceChgSub0(void* userp, VerilatedVcd* tracep) {
    VFPHUB_sqrt__Syms* __restrict vlSymsp = static_cast<VFPHUB_sqrt__Syms*>(userp);
    VFPHUB_sqrt* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[1U])) {
            tracep->chgQData(oldp+0,(vlTOPp->FPHUB_sqrt__DOT__S),63);
            tracep->chgIData(oldp+2,(vlTOPp->FPHUB_sqrt__DOT__F1[0]),26);
            tracep->chgIData(oldp+3,(vlTOPp->FPHUB_sqrt__DOT__F1[1]),26);
            tracep->chgIData(oldp+4,(vlTOPp->FPHUB_sqrt__DOT__F1[2]),26);
            tracep->chgIData(oldp+5,(vlTOPp->FPHUB_sqrt__DOT__F1[3]),26);
            tracep->chgIData(oldp+6,(vlTOPp->FPHUB_sqrt__DOT__F1[4]),26);
            tracep->chgIData(oldp+7,(vlTOPp->FPHUB_sqrt__DOT__F1[5]),26);
            tracep->chgIData(oldp+8,(vlTOPp->FPHUB_sqrt__DOT__F1[6]),26);
            tracep->chgIData(oldp+9,(vlTOPp->FPHUB_sqrt__DOT__F1[7]),26);
            tracep->chgIData(oldp+10,(vlTOPp->FPHUB_sqrt__DOT__F1[8]),26);
            tracep->chgIData(oldp+11,(vlTOPp->FPHUB_sqrt__DOT__F1[9]),26);
            tracep->chgIData(oldp+12,(vlTOPp->FPHUB_sqrt__DOT__F1[10]),26);
            tracep->chgIData(oldp+13,(vlTOPp->FPHUB_sqrt__DOT__F1[11]),26);
            tracep->chgIData(oldp+14,(vlTOPp->FPHUB_sqrt__DOT__F1[12]),26);
            tracep->chgIData(oldp+15,(vlTOPp->FPHUB_sqrt__DOT__F1[13]),26);
            tracep->chgIData(oldp+16,(vlTOPp->FPHUB_sqrt__DOT__F1[14]),26);
            tracep->chgIData(oldp+17,(vlTOPp->FPHUB_sqrt__DOT__F1[15]),26);
            tracep->chgIData(oldp+18,(vlTOPp->FPHUB_sqrt__DOT__F1[16]),26);
            tracep->chgIData(oldp+19,(vlTOPp->FPHUB_sqrt__DOT__F1[17]),26);
            tracep->chgIData(oldp+20,(vlTOPp->FPHUB_sqrt__DOT__F1[18]),26);
            tracep->chgIData(oldp+21,(vlTOPp->FPHUB_sqrt__DOT__F1[19]),26);
            tracep->chgIData(oldp+22,(vlTOPp->FPHUB_sqrt__DOT__F1[20]),26);
            tracep->chgIData(oldp+23,(vlTOPp->FPHUB_sqrt__DOT__F1[21]),26);
            tracep->chgIData(oldp+24,(vlTOPp->FPHUB_sqrt__DOT__F1[22]),26);
            tracep->chgIData(oldp+25,(vlTOPp->FPHUB_sqrt__DOT__F1[23]),26);
            tracep->chgIData(oldp+26,(vlTOPp->FPHUB_sqrt__DOT__F1[24]),26);
            tracep->chgIData(oldp+27,(vlTOPp->FPHUB_sqrt__DOT__F1[25]),26);
            tracep->chgIData(oldp+28,(vlTOPp->FPHUB_sqrt__DOT__F1[26]),26);
            tracep->chgIData(oldp+29,(vlTOPp->FPHUB_sqrt__DOT__F1[27]),26);
            tracep->chgIData(oldp+30,(vlTOPp->FPHUB_sqrt__DOT__F1[28]),26);
            tracep->chgIData(oldp+31,(vlTOPp->FPHUB_sqrt__DOT__F1[29]),26);
            tracep->chgIData(oldp+32,(vlTOPp->FPHUB_sqrt__DOT__F1[30]),26);
            tracep->chgIData(oldp+33,(vlTOPp->FPHUB_sqrt__DOT__F_1[0]),26);
            tracep->chgIData(oldp+34,(vlTOPp->FPHUB_sqrt__DOT__F_1[1]),26);
            tracep->chgIData(oldp+35,(vlTOPp->FPHUB_sqrt__DOT__F_1[2]),26);
            tracep->chgIData(oldp+36,(vlTOPp->FPHUB_sqrt__DOT__F_1[3]),26);
            tracep->chgIData(oldp+37,(vlTOPp->FPHUB_sqrt__DOT__F_1[4]),26);
            tracep->chgIData(oldp+38,(vlTOPp->FPHUB_sqrt__DOT__F_1[5]),26);
            tracep->chgIData(oldp+39,(vlTOPp->FPHUB_sqrt__DOT__F_1[6]),26);
            tracep->chgIData(oldp+40,(vlTOPp->FPHUB_sqrt__DOT__F_1[7]),26);
            tracep->chgIData(oldp+41,(vlTOPp->FPHUB_sqrt__DOT__F_1[8]),26);
            tracep->chgIData(oldp+42,(vlTOPp->FPHUB_sqrt__DOT__F_1[9]),26);
            tracep->chgIData(oldp+43,(vlTOPp->FPHUB_sqrt__DOT__F_1[10]),26);
            tracep->chgIData(oldp+44,(vlTOPp->FPHUB_sqrt__DOT__F_1[11]),26);
            tracep->chgIData(oldp+45,(vlTOPp->FPHUB_sqrt__DOT__F_1[12]),26);
            tracep->chgIData(oldp+46,(vlTOPp->FPHUB_sqrt__DOT__F_1[13]),26);
            tracep->chgIData(oldp+47,(vlTOPp->FPHUB_sqrt__DOT__F_1[14]),26);
            tracep->chgIData(oldp+48,(vlTOPp->FPHUB_sqrt__DOT__F_1[15]),26);
            tracep->chgIData(oldp+49,(vlTOPp->FPHUB_sqrt__DOT__F_1[16]),26);
            tracep->chgIData(oldp+50,(vlTOPp->FPHUB_sqrt__DOT__F_1[17]),26);
            tracep->chgIData(oldp+51,(vlTOPp->FPHUB_sqrt__DOT__F_1[18]),26);
            tracep->chgIData(oldp+52,(vlTOPp->FPHUB_sqrt__DOT__F_1[19]),26);
            tracep->chgIData(oldp+53,(vlTOPp->FPHUB_sqrt__DOT__F_1[20]),26);
            tracep->chgIData(oldp+54,(vlTOPp->FPHUB_sqrt__DOT__F_1[21]),26);
            tracep->chgIData(oldp+55,(vlTOPp->FPHUB_sqrt__DOT__F_1[22]),26);
            tracep->chgIData(oldp+56,(vlTOPp->FPHUB_sqrt__DOT__F_1[23]),26);
            tracep->chgIData(oldp+57,(vlTOPp->FPHUB_sqrt__DOT__F_1[24]),26);
            tracep->chgIData(oldp+58,(vlTOPp->FPHUB_sqrt__DOT__F_1[25]),26);
            tracep->chgIData(oldp+59,(vlTOPp->FPHUB_sqrt__DOT__F_1[26]),26);
            tracep->chgIData(oldp+60,(vlTOPp->FPHUB_sqrt__DOT__F_1[27]),26);
            tracep->chgIData(oldp+61,(vlTOPp->FPHUB_sqrt__DOT__F_1[28]),26);
            tracep->chgIData(oldp+62,(vlTOPp->FPHUB_sqrt__DOT__F_1[29]),26);
            tracep->chgIData(oldp+63,(vlTOPp->FPHUB_sqrt__DOT__F_1[30]),26);
            tracep->chgIData(oldp+64,(vlTOPp->FPHUB_sqrt__DOT__W[0]),25);
            tracep->chgIData(oldp+65,(vlTOPp->FPHUB_sqrt__DOT__W[1]),25);
            tracep->chgIData(oldp+66,(vlTOPp->FPHUB_sqrt__DOT__W[2]),25);
            tracep->chgIData(oldp+67,(vlTOPp->FPHUB_sqrt__DOT__W[3]),25);
            tracep->chgIData(oldp+68,(vlTOPp->FPHUB_sqrt__DOT__W[4]),25);
            tracep->chgIData(oldp+69,(vlTOPp->FPHUB_sqrt__DOT__W[5]),25);
            tracep->chgIData(oldp+70,(vlTOPp->FPHUB_sqrt__DOT__W[6]),25);
            tracep->chgIData(oldp+71,(vlTOPp->FPHUB_sqrt__DOT__W[7]),25);
            tracep->chgIData(oldp+72,(vlTOPp->FPHUB_sqrt__DOT__W[8]),25);
            tracep->chgIData(oldp+73,(vlTOPp->FPHUB_sqrt__DOT__W[9]),25);
            tracep->chgIData(oldp+74,(vlTOPp->FPHUB_sqrt__DOT__W[10]),25);
            tracep->chgIData(oldp+75,(vlTOPp->FPHUB_sqrt__DOT__W[11]),25);
            tracep->chgIData(oldp+76,(vlTOPp->FPHUB_sqrt__DOT__W[12]),25);
            tracep->chgIData(oldp+77,(vlTOPp->FPHUB_sqrt__DOT__W[13]),25);
            tracep->chgIData(oldp+78,(vlTOPp->FPHUB_sqrt__DOT__W[14]),25);
            tracep->chgIData(oldp+79,(vlTOPp->FPHUB_sqrt__DOT__W[15]),25);
            tracep->chgIData(oldp+80,(vlTOPp->FPHUB_sqrt__DOT__W[16]),25);
            tracep->chgIData(oldp+81,(vlTOPp->FPHUB_sqrt__DOT__W[17]),25);
            tracep->chgIData(oldp+82,(vlTOPp->FPHUB_sqrt__DOT__W[18]),25);
            tracep->chgIData(oldp+83,(vlTOPp->FPHUB_sqrt__DOT__W[19]),25);
            tracep->chgIData(oldp+84,(vlTOPp->FPHUB_sqrt__DOT__W[20]),25);
            tracep->chgIData(oldp+85,(vlTOPp->FPHUB_sqrt__DOT__W[21]),25);
            tracep->chgIData(oldp+86,(vlTOPp->FPHUB_sqrt__DOT__W[22]),25);
            tracep->chgIData(oldp+87,(vlTOPp->FPHUB_sqrt__DOT__W[23]),25);
            tracep->chgIData(oldp+88,(vlTOPp->FPHUB_sqrt__DOT__W[24]),25);
            tracep->chgIData(oldp+89,(vlTOPp->FPHUB_sqrt__DOT__W[25]),25);
            tracep->chgIData(oldp+90,(vlTOPp->FPHUB_sqrt__DOT__W[26]),25);
            tracep->chgIData(oldp+91,(vlTOPp->FPHUB_sqrt__DOT__W[27]),25);
            tracep->chgIData(oldp+92,(vlTOPp->FPHUB_sqrt__DOT__W[28]),25);
            tracep->chgIData(oldp+93,(vlTOPp->FPHUB_sqrt__DOT__W[29]),25);
            tracep->chgIData(oldp+94,(vlTOPp->FPHUB_sqrt__DOT__W[30]),25);
            tracep->chgIData(oldp+95,((0x1ffffffU & 
                                       (((0x1eU >= 
                                          (0x1fU & vlTOPp->FPHUB_sqrt__DOT__j))
                                          ? vlTOPp->FPHUB_sqrt__DOT__W
                                         [(0x1fU & vlTOPp->FPHUB_sqrt__DOT__j)]
                                          : 0U) << 1U))),25);
            tracep->chgCData(oldp+96,(vlTOPp->FPHUB_sqrt__DOT__res_exponent),8);
            tracep->chgIData(oldp+97,(vlTOPp->FPHUB_sqrt__DOT__j),32);
            tracep->chgCData(oldp+98,((0xfU & (((0x1eU 
                                                 >= 
                                                 (0x1fU 
                                                  & vlTOPp->FPHUB_sqrt__DOT__j))
                                                 ? 
                                                vlTOPp->FPHUB_sqrt__DOT__W
                                                [(0x1fU 
                                                  & vlTOPp->FPHUB_sqrt__DOT__j)]
                                                 : 0U) 
                                               >> 0x14U))),4);
            tracep->chgWData(oldp+99,(vlTOPp->FPHUB_sqrt__DOT__q),65);
            tracep->chgIData(oldp+102,(vlTOPp->FPHUB_sqrt__DOT__posiv),32);
            tracep->chgIData(oldp+103,(vlTOPp->FPHUB_sqrt__DOT__neg),32);
            tracep->chgIData(oldp+104,(vlTOPp->FPHUB_sqrt__DOT__root),32);
            tracep->chgCData(oldp+105,(vlTOPp->FPHUB_sqrt__DOT__state),2);
            tracep->chgIData(oldp+106,(vlTOPp->FPHUB_sqrt__DOT__unnamedblk1__DOT__k),32);
            tracep->chgIData(oldp+107,(vlTOPp->FPHUB_sqrt__DOT__unnamedblk2__DOT__k),32);
            tracep->chgIData(oldp+108,(vlTOPp->FPHUB_sqrt__DOT__unnamedblk3__DOT__k),32);
            tracep->chgIData(oldp+109,(vlTOPp->FPHUB_sqrt__DOT__unnamedblk4__DOT__k),32);
            tracep->chgIData(oldp+110,(vlTOPp->FPHUB_sqrt__DOT__unnamedblk5__DOT__k),32);
            tracep->chgIData(oldp+111,(vlTOPp->FPHUB_sqrt__DOT__unnamedblk6__DOT__k),32);
            tracep->chgIData(oldp+112,(vlTOPp->FPHUB_sqrt__DOT__unnamedblk7__DOT__i),32);
        }
        tracep->chgBit(oldp+113,(vlTOPp->clk));
        tracep->chgBit(oldp+114,(vlTOPp->rst_l));
        tracep->chgBit(oldp+115,(vlTOPp->start));
        tracep->chgIData(oldp+116,(vlTOPp->x),32);
        tracep->chgIData(oldp+117,(vlTOPp->res),32);
        tracep->chgBit(oldp+118,(vlTOPp->finish));
        tracep->chgBit(oldp+119,(vlTOPp->computing));
        tracep->chgCData(oldp+120,((0xffU & (vlTOPp->x 
                                             >> 0x17U))),8);
        tracep->chgIData(oldp+121,((0x7fffffU & vlTOPp->x)),23);
        tracep->chgIData(oldp+122,((0x1000001U | (0xfffffeU 
                                                  & (vlTOPp->x 
                                                     << 1U)))),25);
    }
}

void VFPHUB_sqrt::traceCleanup(void* userp, VerilatedVcd* /*unused*/) {
    VFPHUB_sqrt__Syms* __restrict vlSymsp = static_cast<VFPHUB_sqrt__Syms*>(userp);
    VFPHUB_sqrt* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlSymsp->__Vm_activity = false;
        vlTOPp->__Vm_traceActivity[0U] = 0U;
        vlTOPp->__Vm_traceActivity[1U] = 0U;
    }
}
