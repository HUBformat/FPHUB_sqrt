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
            tracep->chgIData(oldp+2,(vlTOPp->FPHUB_sqrt__DOT__F1[0]),29);
            tracep->chgIData(oldp+3,(vlTOPp->FPHUB_sqrt__DOT__F1[1]),29);
            tracep->chgIData(oldp+4,(vlTOPp->FPHUB_sqrt__DOT__F1[2]),29);
            tracep->chgIData(oldp+5,(vlTOPp->FPHUB_sqrt__DOT__F1[3]),29);
            tracep->chgIData(oldp+6,(vlTOPp->FPHUB_sqrt__DOT__F1[4]),29);
            tracep->chgIData(oldp+7,(vlTOPp->FPHUB_sqrt__DOT__F1[5]),29);
            tracep->chgIData(oldp+8,(vlTOPp->FPHUB_sqrt__DOT__F1[6]),29);
            tracep->chgIData(oldp+9,(vlTOPp->FPHUB_sqrt__DOT__F1[7]),29);
            tracep->chgIData(oldp+10,(vlTOPp->FPHUB_sqrt__DOT__F1[8]),29);
            tracep->chgIData(oldp+11,(vlTOPp->FPHUB_sqrt__DOT__F1[9]),29);
            tracep->chgIData(oldp+12,(vlTOPp->FPHUB_sqrt__DOT__F1[10]),29);
            tracep->chgIData(oldp+13,(vlTOPp->FPHUB_sqrt__DOT__F1[11]),29);
            tracep->chgIData(oldp+14,(vlTOPp->FPHUB_sqrt__DOT__F1[12]),29);
            tracep->chgIData(oldp+15,(vlTOPp->FPHUB_sqrt__DOT__F1[13]),29);
            tracep->chgIData(oldp+16,(vlTOPp->FPHUB_sqrt__DOT__F1[14]),29);
            tracep->chgIData(oldp+17,(vlTOPp->FPHUB_sqrt__DOT__F1[15]),29);
            tracep->chgIData(oldp+18,(vlTOPp->FPHUB_sqrt__DOT__F1[16]),29);
            tracep->chgIData(oldp+19,(vlTOPp->FPHUB_sqrt__DOT__F1[17]),29);
            tracep->chgIData(oldp+20,(vlTOPp->FPHUB_sqrt__DOT__F1[18]),29);
            tracep->chgIData(oldp+21,(vlTOPp->FPHUB_sqrt__DOT__F1[19]),29);
            tracep->chgIData(oldp+22,(vlTOPp->FPHUB_sqrt__DOT__F1[20]),29);
            tracep->chgIData(oldp+23,(vlTOPp->FPHUB_sqrt__DOT__F1[21]),29);
            tracep->chgIData(oldp+24,(vlTOPp->FPHUB_sqrt__DOT__F1[22]),29);
            tracep->chgIData(oldp+25,(vlTOPp->FPHUB_sqrt__DOT__F1[23]),29);
            tracep->chgIData(oldp+26,(vlTOPp->FPHUB_sqrt__DOT__F1[24]),29);
            tracep->chgIData(oldp+27,(vlTOPp->FPHUB_sqrt__DOT__F1[25]),29);
            tracep->chgIData(oldp+28,(vlTOPp->FPHUB_sqrt__DOT__F1[26]),29);
            tracep->chgIData(oldp+29,(vlTOPp->FPHUB_sqrt__DOT__F1[27]),29);
            tracep->chgIData(oldp+30,(vlTOPp->FPHUB_sqrt__DOT__F1[28]),29);
            tracep->chgIData(oldp+31,(vlTOPp->FPHUB_sqrt__DOT__F1[29]),29);
            tracep->chgIData(oldp+32,(vlTOPp->FPHUB_sqrt__DOT__F1[30]),29);
            tracep->chgIData(oldp+33,(vlTOPp->FPHUB_sqrt__DOT__F_1[0]),29);
            tracep->chgIData(oldp+34,(vlTOPp->FPHUB_sqrt__DOT__F_1[1]),29);
            tracep->chgIData(oldp+35,(vlTOPp->FPHUB_sqrt__DOT__F_1[2]),29);
            tracep->chgIData(oldp+36,(vlTOPp->FPHUB_sqrt__DOT__F_1[3]),29);
            tracep->chgIData(oldp+37,(vlTOPp->FPHUB_sqrt__DOT__F_1[4]),29);
            tracep->chgIData(oldp+38,(vlTOPp->FPHUB_sqrt__DOT__F_1[5]),29);
            tracep->chgIData(oldp+39,(vlTOPp->FPHUB_sqrt__DOT__F_1[6]),29);
            tracep->chgIData(oldp+40,(vlTOPp->FPHUB_sqrt__DOT__F_1[7]),29);
            tracep->chgIData(oldp+41,(vlTOPp->FPHUB_sqrt__DOT__F_1[8]),29);
            tracep->chgIData(oldp+42,(vlTOPp->FPHUB_sqrt__DOT__F_1[9]),29);
            tracep->chgIData(oldp+43,(vlTOPp->FPHUB_sqrt__DOT__F_1[10]),29);
            tracep->chgIData(oldp+44,(vlTOPp->FPHUB_sqrt__DOT__F_1[11]),29);
            tracep->chgIData(oldp+45,(vlTOPp->FPHUB_sqrt__DOT__F_1[12]),29);
            tracep->chgIData(oldp+46,(vlTOPp->FPHUB_sqrt__DOT__F_1[13]),29);
            tracep->chgIData(oldp+47,(vlTOPp->FPHUB_sqrt__DOT__F_1[14]),29);
            tracep->chgIData(oldp+48,(vlTOPp->FPHUB_sqrt__DOT__F_1[15]),29);
            tracep->chgIData(oldp+49,(vlTOPp->FPHUB_sqrt__DOT__F_1[16]),29);
            tracep->chgIData(oldp+50,(vlTOPp->FPHUB_sqrt__DOT__F_1[17]),29);
            tracep->chgIData(oldp+51,(vlTOPp->FPHUB_sqrt__DOT__F_1[18]),29);
            tracep->chgIData(oldp+52,(vlTOPp->FPHUB_sqrt__DOT__F_1[19]),29);
            tracep->chgIData(oldp+53,(vlTOPp->FPHUB_sqrt__DOT__F_1[20]),29);
            tracep->chgIData(oldp+54,(vlTOPp->FPHUB_sqrt__DOT__F_1[21]),29);
            tracep->chgIData(oldp+55,(vlTOPp->FPHUB_sqrt__DOT__F_1[22]),29);
            tracep->chgIData(oldp+56,(vlTOPp->FPHUB_sqrt__DOT__F_1[23]),29);
            tracep->chgIData(oldp+57,(vlTOPp->FPHUB_sqrt__DOT__F_1[24]),29);
            tracep->chgIData(oldp+58,(vlTOPp->FPHUB_sqrt__DOT__F_1[25]),29);
            tracep->chgIData(oldp+59,(vlTOPp->FPHUB_sqrt__DOT__F_1[26]),29);
            tracep->chgIData(oldp+60,(vlTOPp->FPHUB_sqrt__DOT__F_1[27]),29);
            tracep->chgIData(oldp+61,(vlTOPp->FPHUB_sqrt__DOT__F_1[28]),29);
            tracep->chgIData(oldp+62,(vlTOPp->FPHUB_sqrt__DOT__F_1[29]),29);
            tracep->chgIData(oldp+63,(vlTOPp->FPHUB_sqrt__DOT__F_1[30]),29);
            tracep->chgIData(oldp+64,(vlTOPp->FPHUB_sqrt__DOT__W[0]),29);
            tracep->chgIData(oldp+65,(vlTOPp->FPHUB_sqrt__DOT__W[1]),29);
            tracep->chgIData(oldp+66,(vlTOPp->FPHUB_sqrt__DOT__W[2]),29);
            tracep->chgIData(oldp+67,(vlTOPp->FPHUB_sqrt__DOT__W[3]),29);
            tracep->chgIData(oldp+68,(vlTOPp->FPHUB_sqrt__DOT__W[4]),29);
            tracep->chgIData(oldp+69,(vlTOPp->FPHUB_sqrt__DOT__W[5]),29);
            tracep->chgIData(oldp+70,(vlTOPp->FPHUB_sqrt__DOT__W[6]),29);
            tracep->chgIData(oldp+71,(vlTOPp->FPHUB_sqrt__DOT__W[7]),29);
            tracep->chgIData(oldp+72,(vlTOPp->FPHUB_sqrt__DOT__W[8]),29);
            tracep->chgIData(oldp+73,(vlTOPp->FPHUB_sqrt__DOT__W[9]),29);
            tracep->chgIData(oldp+74,(vlTOPp->FPHUB_sqrt__DOT__W[10]),29);
            tracep->chgIData(oldp+75,(vlTOPp->FPHUB_sqrt__DOT__W[11]),29);
            tracep->chgIData(oldp+76,(vlTOPp->FPHUB_sqrt__DOT__W[12]),29);
            tracep->chgIData(oldp+77,(vlTOPp->FPHUB_sqrt__DOT__W[13]),29);
            tracep->chgIData(oldp+78,(vlTOPp->FPHUB_sqrt__DOT__W[14]),29);
            tracep->chgIData(oldp+79,(vlTOPp->FPHUB_sqrt__DOT__W[15]),29);
            tracep->chgIData(oldp+80,(vlTOPp->FPHUB_sqrt__DOT__W[16]),29);
            tracep->chgIData(oldp+81,(vlTOPp->FPHUB_sqrt__DOT__W[17]),29);
            tracep->chgIData(oldp+82,(vlTOPp->FPHUB_sqrt__DOT__W[18]),29);
            tracep->chgIData(oldp+83,(vlTOPp->FPHUB_sqrt__DOT__W[19]),29);
            tracep->chgIData(oldp+84,(vlTOPp->FPHUB_sqrt__DOT__W[20]),29);
            tracep->chgIData(oldp+85,(vlTOPp->FPHUB_sqrt__DOT__W[21]),29);
            tracep->chgIData(oldp+86,(vlTOPp->FPHUB_sqrt__DOT__W[22]),29);
            tracep->chgIData(oldp+87,(vlTOPp->FPHUB_sqrt__DOT__W[23]),29);
            tracep->chgIData(oldp+88,(vlTOPp->FPHUB_sqrt__DOT__W[24]),29);
            tracep->chgIData(oldp+89,(vlTOPp->FPHUB_sqrt__DOT__W[25]),29);
            tracep->chgIData(oldp+90,(vlTOPp->FPHUB_sqrt__DOT__W[26]),29);
            tracep->chgIData(oldp+91,(vlTOPp->FPHUB_sqrt__DOT__W[27]),29);
            tracep->chgIData(oldp+92,(vlTOPp->FPHUB_sqrt__DOT__W[28]),29);
            tracep->chgIData(oldp+93,(vlTOPp->FPHUB_sqrt__DOT__W[29]),29);
            tracep->chgIData(oldp+94,(vlTOPp->FPHUB_sqrt__DOT__W[30]),29);
            tracep->chgIData(oldp+95,(vlTOPp->FPHUB_sqrt__DOT__W2[0]),29);
            tracep->chgIData(oldp+96,(vlTOPp->FPHUB_sqrt__DOT__W2[1]),29);
            tracep->chgIData(oldp+97,(vlTOPp->FPHUB_sqrt__DOT__W2[2]),29);
            tracep->chgIData(oldp+98,(vlTOPp->FPHUB_sqrt__DOT__W2[3]),29);
            tracep->chgIData(oldp+99,(vlTOPp->FPHUB_sqrt__DOT__W2[4]),29);
            tracep->chgIData(oldp+100,(vlTOPp->FPHUB_sqrt__DOT__W2[5]),29);
            tracep->chgIData(oldp+101,(vlTOPp->FPHUB_sqrt__DOT__W2[6]),29);
            tracep->chgIData(oldp+102,(vlTOPp->FPHUB_sqrt__DOT__W2[7]),29);
            tracep->chgIData(oldp+103,(vlTOPp->FPHUB_sqrt__DOT__W2[8]),29);
            tracep->chgIData(oldp+104,(vlTOPp->FPHUB_sqrt__DOT__W2[9]),29);
            tracep->chgIData(oldp+105,(vlTOPp->FPHUB_sqrt__DOT__W2[10]),29);
            tracep->chgIData(oldp+106,(vlTOPp->FPHUB_sqrt__DOT__W2[11]),29);
            tracep->chgIData(oldp+107,(vlTOPp->FPHUB_sqrt__DOT__W2[12]),29);
            tracep->chgIData(oldp+108,(vlTOPp->FPHUB_sqrt__DOT__W2[13]),29);
            tracep->chgIData(oldp+109,(vlTOPp->FPHUB_sqrt__DOT__W2[14]),29);
            tracep->chgIData(oldp+110,(vlTOPp->FPHUB_sqrt__DOT__W2[15]),29);
            tracep->chgIData(oldp+111,(vlTOPp->FPHUB_sqrt__DOT__W2[16]),29);
            tracep->chgIData(oldp+112,(vlTOPp->FPHUB_sqrt__DOT__W2[17]),29);
            tracep->chgIData(oldp+113,(vlTOPp->FPHUB_sqrt__DOT__W2[18]),29);
            tracep->chgIData(oldp+114,(vlTOPp->FPHUB_sqrt__DOT__W2[19]),29);
            tracep->chgIData(oldp+115,(vlTOPp->FPHUB_sqrt__DOT__W2[20]),29);
            tracep->chgIData(oldp+116,(vlTOPp->FPHUB_sqrt__DOT__W2[21]),29);
            tracep->chgIData(oldp+117,(vlTOPp->FPHUB_sqrt__DOT__W2[22]),29);
            tracep->chgIData(oldp+118,(vlTOPp->FPHUB_sqrt__DOT__W2[23]),29);
            tracep->chgIData(oldp+119,(vlTOPp->FPHUB_sqrt__DOT__W2[24]),29);
            tracep->chgIData(oldp+120,(vlTOPp->FPHUB_sqrt__DOT__W2[25]),29);
            tracep->chgIData(oldp+121,(vlTOPp->FPHUB_sqrt__DOT__W2[26]),29);
            tracep->chgIData(oldp+122,(vlTOPp->FPHUB_sqrt__DOT__W2[27]),29);
            tracep->chgIData(oldp+123,(vlTOPp->FPHUB_sqrt__DOT__W2[28]),29);
            tracep->chgIData(oldp+124,(vlTOPp->FPHUB_sqrt__DOT__W2[29]),29);
            tracep->chgIData(oldp+125,(vlTOPp->FPHUB_sqrt__DOT__W2[30]),29);
            tracep->chgIData(oldp+126,(vlTOPp->FPHUB_sqrt__DOT__WC[0]),29);
            tracep->chgIData(oldp+127,(vlTOPp->FPHUB_sqrt__DOT__WC[1]),29);
            tracep->chgIData(oldp+128,(vlTOPp->FPHUB_sqrt__DOT__WC[2]),29);
            tracep->chgIData(oldp+129,(vlTOPp->FPHUB_sqrt__DOT__WC[3]),29);
            tracep->chgIData(oldp+130,(vlTOPp->FPHUB_sqrt__DOT__WC[4]),29);
            tracep->chgIData(oldp+131,(vlTOPp->FPHUB_sqrt__DOT__WC[5]),29);
            tracep->chgIData(oldp+132,(vlTOPp->FPHUB_sqrt__DOT__WC[6]),29);
            tracep->chgIData(oldp+133,(vlTOPp->FPHUB_sqrt__DOT__WC[7]),29);
            tracep->chgIData(oldp+134,(vlTOPp->FPHUB_sqrt__DOT__WC[8]),29);
            tracep->chgIData(oldp+135,(vlTOPp->FPHUB_sqrt__DOT__WC[9]),29);
            tracep->chgIData(oldp+136,(vlTOPp->FPHUB_sqrt__DOT__WC[10]),29);
            tracep->chgIData(oldp+137,(vlTOPp->FPHUB_sqrt__DOT__WC[11]),29);
            tracep->chgIData(oldp+138,(vlTOPp->FPHUB_sqrt__DOT__WC[12]),29);
            tracep->chgIData(oldp+139,(vlTOPp->FPHUB_sqrt__DOT__WC[13]),29);
            tracep->chgIData(oldp+140,(vlTOPp->FPHUB_sqrt__DOT__WC[14]),29);
            tracep->chgIData(oldp+141,(vlTOPp->FPHUB_sqrt__DOT__WC[15]),29);
            tracep->chgIData(oldp+142,(vlTOPp->FPHUB_sqrt__DOT__WC[16]),29);
            tracep->chgIData(oldp+143,(vlTOPp->FPHUB_sqrt__DOT__WC[17]),29);
            tracep->chgIData(oldp+144,(vlTOPp->FPHUB_sqrt__DOT__WC[18]),29);
            tracep->chgIData(oldp+145,(vlTOPp->FPHUB_sqrt__DOT__WC[19]),29);
            tracep->chgIData(oldp+146,(vlTOPp->FPHUB_sqrt__DOT__WC[20]),29);
            tracep->chgIData(oldp+147,(vlTOPp->FPHUB_sqrt__DOT__WC[21]),29);
            tracep->chgIData(oldp+148,(vlTOPp->FPHUB_sqrt__DOT__WC[22]),29);
            tracep->chgIData(oldp+149,(vlTOPp->FPHUB_sqrt__DOT__WC[23]),29);
            tracep->chgIData(oldp+150,(vlTOPp->FPHUB_sqrt__DOT__WC[24]),29);
            tracep->chgIData(oldp+151,(vlTOPp->FPHUB_sqrt__DOT__WC[25]),29);
            tracep->chgIData(oldp+152,(vlTOPp->FPHUB_sqrt__DOT__WC[26]),29);
            tracep->chgIData(oldp+153,(vlTOPp->FPHUB_sqrt__DOT__WC[27]),29);
            tracep->chgIData(oldp+154,(vlTOPp->FPHUB_sqrt__DOT__WC[28]),29);
            tracep->chgIData(oldp+155,(vlTOPp->FPHUB_sqrt__DOT__WC[29]),29);
            tracep->chgIData(oldp+156,(vlTOPp->FPHUB_sqrt__DOT__WC[30]),29);
            tracep->chgCData(oldp+157,(vlTOPp->FPHUB_sqrt__DOT__res_exponent),8);
            tracep->chgIData(oldp+158,(vlTOPp->FPHUB_sqrt__DOT__j),32);
            tracep->chgCData(oldp+159,((0xfU & (((0x1eU 
                                                  >= 
                                                  (0x1fU 
                                                   & vlTOPp->FPHUB_sqrt__DOT__j))
                                                  ? 
                                                 vlTOPp->FPHUB_sqrt__DOT__W2
                                                 [(0x1fU 
                                                   & vlTOPp->FPHUB_sqrt__DOT__j)]
                                                  : 0U) 
                                                >> 0x19U))),4);
            tracep->chgWData(oldp+160,(vlTOPp->FPHUB_sqrt__DOT__q),65);
            tracep->chgIData(oldp+163,(vlTOPp->FPHUB_sqrt__DOT__posiv),32);
            tracep->chgIData(oldp+164,(vlTOPp->FPHUB_sqrt__DOT__neg),32);
            tracep->chgIData(oldp+165,(vlTOPp->FPHUB_sqrt__DOT__root),32);
            tracep->chgCData(oldp+166,(vlTOPp->FPHUB_sqrt__DOT__y_test[0]),4);
            tracep->chgCData(oldp+167,(vlTOPp->FPHUB_sqrt__DOT__y_test[1]),4);
            tracep->chgCData(oldp+168,(vlTOPp->FPHUB_sqrt__DOT__y_test[2]),4);
            tracep->chgCData(oldp+169,(vlTOPp->FPHUB_sqrt__DOT__y_test[3]),4);
            tracep->chgCData(oldp+170,(vlTOPp->FPHUB_sqrt__DOT__y_test[4]),4);
            tracep->chgCData(oldp+171,(vlTOPp->FPHUB_sqrt__DOT__y_test[5]),4);
            tracep->chgCData(oldp+172,(vlTOPp->FPHUB_sqrt__DOT__y_test[6]),4);
            tracep->chgCData(oldp+173,(vlTOPp->FPHUB_sqrt__DOT__y_test[7]),4);
            tracep->chgCData(oldp+174,(vlTOPp->FPHUB_sqrt__DOT__y_test[8]),4);
            tracep->chgCData(oldp+175,(vlTOPp->FPHUB_sqrt__DOT__y_test[9]),4);
            tracep->chgCData(oldp+176,(vlTOPp->FPHUB_sqrt__DOT__y_test[10]),4);
            tracep->chgCData(oldp+177,(vlTOPp->FPHUB_sqrt__DOT__y_test[11]),4);
            tracep->chgCData(oldp+178,(vlTOPp->FPHUB_sqrt__DOT__y_test[12]),4);
            tracep->chgCData(oldp+179,(vlTOPp->FPHUB_sqrt__DOT__y_test[13]),4);
            tracep->chgCData(oldp+180,(vlTOPp->FPHUB_sqrt__DOT__y_test[14]),4);
            tracep->chgCData(oldp+181,(vlTOPp->FPHUB_sqrt__DOT__y_test[15]),4);
            tracep->chgCData(oldp+182,(vlTOPp->FPHUB_sqrt__DOT__y_test[16]),4);
            tracep->chgCData(oldp+183,(vlTOPp->FPHUB_sqrt__DOT__y_test[17]),4);
            tracep->chgCData(oldp+184,(vlTOPp->FPHUB_sqrt__DOT__y_test[18]),4);
            tracep->chgCData(oldp+185,(vlTOPp->FPHUB_sqrt__DOT__y_test[19]),4);
            tracep->chgCData(oldp+186,(vlTOPp->FPHUB_sqrt__DOT__y_test[20]),4);
            tracep->chgCData(oldp+187,(vlTOPp->FPHUB_sqrt__DOT__y_test[21]),4);
            tracep->chgCData(oldp+188,(vlTOPp->FPHUB_sqrt__DOT__y_test[22]),4);
            tracep->chgCData(oldp+189,(vlTOPp->FPHUB_sqrt__DOT__y_test[23]),4);
            tracep->chgCData(oldp+190,(vlTOPp->FPHUB_sqrt__DOT__y_test[24]),4);
            tracep->chgCData(oldp+191,(vlTOPp->FPHUB_sqrt__DOT__y_test[25]),4);
            tracep->chgCData(oldp+192,(vlTOPp->FPHUB_sqrt__DOT__y_test[26]),4);
            tracep->chgCData(oldp+193,(vlTOPp->FPHUB_sqrt__DOT__y_test[27]),4);
            tracep->chgCData(oldp+194,(vlTOPp->FPHUB_sqrt__DOT__y_test[28]),4);
            tracep->chgCData(oldp+195,(vlTOPp->FPHUB_sqrt__DOT__y_test[29]),4);
            tracep->chgCData(oldp+196,(vlTOPp->FPHUB_sqrt__DOT__y_test[30]),4);
            tracep->chgBit(oldp+197,(vlTOPp->FPHUB_sqrt__DOT__chivato));
            tracep->chgIData(oldp+198,(vlTOPp->FPHUB_sqrt__DOT__unnamedblk1__DOT__k),32);
            tracep->chgIData(oldp+199,(vlTOPp->FPHUB_sqrt__DOT__unnamedblk2__DOT__k),32);
            tracep->chgIData(oldp+200,(vlTOPp->FPHUB_sqrt__DOT__unnamedblk3__DOT__k),32);
            tracep->chgIData(oldp+201,(vlTOPp->FPHUB_sqrt__DOT__unnamedblk4__DOT__k),32);
            tracep->chgIData(oldp+202,(vlTOPp->FPHUB_sqrt__DOT__unnamedblk5__DOT__k),32);
            tracep->chgIData(oldp+203,(vlTOPp->FPHUB_sqrt__DOT__unnamedblk6__DOT__k),32);
            tracep->chgIData(oldp+204,(vlTOPp->FPHUB_sqrt__DOT__unnamedblk7__DOT__i),32);
        }
        tracep->chgBit(oldp+205,(vlTOPp->clk));
        tracep->chgBit(oldp+206,(vlTOPp->rst_l));
        tracep->chgBit(oldp+207,(vlTOPp->start));
        tracep->chgIData(oldp+208,(vlTOPp->x),32);
        tracep->chgIData(oldp+209,(vlTOPp->res),32);
        tracep->chgBit(oldp+210,(vlTOPp->finish));
        tracep->chgBit(oldp+211,(vlTOPp->computing));
        tracep->chgCData(oldp+212,((0xffU & (vlTOPp->x 
                                             >> 0x17U))),8);
        tracep->chgIData(oldp+213,((0x7fffffU & vlTOPp->x)),23);
        tracep->chgIData(oldp+214,((0x1000001U | (0xfffffeU 
                                                  & (vlTOPp->x 
                                                     << 1U)))),29);
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
