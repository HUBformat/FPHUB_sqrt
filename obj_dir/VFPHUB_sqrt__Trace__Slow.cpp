// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VFPHUB_sqrt__Syms.h"


//======================

void VFPHUB_sqrt::trace(VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addInitCb(&traceInit, __VlSymsp);
    traceRegister(tfp->spTrace());
}

void VFPHUB_sqrt::traceInit(void* userp, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VFPHUB_sqrt__Syms* __restrict vlSymsp = static_cast<VFPHUB_sqrt__Syms*>(userp);
    if (!Verilated::calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
                        "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->module(vlSymsp->name());
    tracep->scopeEscape(' ');
    VFPHUB_sqrt::traceInitTop(vlSymsp, tracep);
    tracep->scopeEscape('.');
}

//======================


void VFPHUB_sqrt::traceInitTop(void* userp, VerilatedVcd* tracep) {
    VFPHUB_sqrt__Syms* __restrict vlSymsp = static_cast<VFPHUB_sqrt__Syms*>(userp);
    VFPHUB_sqrt* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceInitSub0(userp, tracep);
    }
}

void VFPHUB_sqrt::traceInitSub0(void* userp, VerilatedVcd* tracep) {
    VFPHUB_sqrt__Syms* __restrict vlSymsp = static_cast<VFPHUB_sqrt__Syms*>(userp);
    VFPHUB_sqrt* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
        tracep->declBit(c+234,"clk", false,-1);
        tracep->declBit(c+235,"rst_l", false,-1);
        tracep->declBit(c+236,"start", false,-1);
        tracep->declBus(c+237,"x", false,-1, 31,0);
        tracep->declBus(c+238,"res", false,-1, 31,0);
        tracep->declBit(c+239,"finish", false,-1);
        tracep->declBit(c+240,"computing", false,-1);
        tracep->declBus(c+247,"FPHUB_sqrt M", false,-1, 31,0);
        tracep->declBus(c+248,"FPHUB_sqrt E", false,-1, 31,0);
        tracep->declBus(c+249,"FPHUB_sqrt N", false,-1, 31,0);
        tracep->declBus(c+249,"FPHUB_sqrt T", false,-1, 31,0);
        tracep->declBus(c+250,"FPHUB_sqrt EXP_BIAS", false,-1, 31,0);
        tracep->declBus(c+251,"FPHUB_sqrt EXP_BIAS_LOW", false,-1, 31,0);
        tracep->declBus(c+252,"FPHUB_sqrt special_case", false,-1, 31,0);
        tracep->declBus(c+253,"FPHUB_sqrt sign_mantissa_bit", false,-1, 31,0);
        tracep->declBus(c+253,"FPHUB_sqrt one_implicit_bit", false,-1, 31,0);
        tracep->declBus(c+253,"FPHUB_sqrt ilsb_bit", false,-1, 31,0);
        tracep->declBus(c+253,"FPHUB_sqrt extra_int_bit", false,-1, 31,0);
        tracep->declBus(c+253,"FPHUB_sqrt extra_bit_x_gt_d", false,-1, 31,0);
        tracep->declBus(c+254,"FPHUB_sqrt extra_bits_mantissa", false,-1, 31,0);
        tracep->declBit(c+234,"FPHUB_sqrt clk", false,-1);
        tracep->declBit(c+235,"FPHUB_sqrt rst_l", false,-1);
        tracep->declBit(c+236,"FPHUB_sqrt start", false,-1);
        tracep->declBus(c+237,"FPHUB_sqrt x", false,-1, 31,0);
        tracep->declBus(c+238,"FPHUB_sqrt res", false,-1, 31,0);
        tracep->declBit(c+239,"FPHUB_sqrt finish", false,-1);
        tracep->declBit(c+240,"FPHUB_sqrt computing", false,-1);
        {int i; for (i=0; i<25; i++) {
                tracep->declBus(c+1+i*1,"FPHUB_sqrt S", true,(i+0), 1,0);}}
        {int i; for (i=0; i<31; i++) {
                tracep->declBus(c+26+i*1,"FPHUB_sqrt F1", true,(i+0), 28,0);}}
        {int i; for (i=0; i<31; i++) {
                tracep->declBus(c+57+i*1,"FPHUB_sqrt F_1", true,(i+0), 28,0);}}
        {int i; for (i=0; i<31; i++) {
                tracep->declBus(c+88+i*1,"FPHUB_sqrt W", true,(i+0), 28,0);}}
        {int i; for (i=0; i<31; i++) {
                tracep->declBus(c+119+i*1,"FPHUB_sqrt W2", true,(i+0), 28,0);}}
        {int i; for (i=0; i<31; i++) {
                tracep->declBus(c+150+i*1,"FPHUB_sqrt WC", true,(i+0), 28,0);}}
        tracep->declBit(c+255,"FPHUB_sqrt x_sign", false,-1);
        tracep->declBus(c+241,"FPHUB_sqrt x_exponent", false,-1, 7,0);
        tracep->declBus(c+242,"FPHUB_sqrt scaled_exponent", false,-1, 7,0);
        tracep->declBus(c+181,"FPHUB_sqrt res_exponent", false,-1, 7,0);
        tracep->declBus(c+243,"FPHUB_sqrt x_mantissa", false,-1, 22,0);
        tracep->declBus(c+244,"FPHUB_sqrt intermidiate", false,-1, 24,0);
        tracep->declBus(c+245,"FPHUB_sqrt x_scaled", false,-1, 24,0);
        tracep->declBus(c+246,"FPHUB_sqrt x_HUB", false,-1, 28,0);
        tracep->declBus(c+182,"FPHUB_sqrt j", false,-1, 31,0);
        tracep->declBus(c+183,"FPHUB_sqrt W_MSB", false,-1, 3,0);
        tracep->declArray(c+256,"FPHUB_sqrt q", false,-1, 64,0);
        tracep->declBus(c+184,"FPHUB_sqrt posiv", false,-1, 24,0);
        tracep->declBus(c+185,"FPHUB_sqrt neg", false,-1, 24,0);
        tracep->declBus(c+186,"FPHUB_sqrt root", false,-1, 31,0);
        {int i; for (i=0; i<31; i++) {
                tracep->declBus(c+187+i*1,"FPHUB_sqrt y_test", true,(i+0), 3,0);}}
        tracep->declBit(c+218,"FPHUB_sqrt chivato", false,-1);
        tracep->declBus(c+219,"FPHUB_sqrt select_test", false,-1, 3,0);
        tracep->declBus(c+220,"FPHUB_sqrt f1_test", false,-1, 2,0);
        tracep->declBus(c+221,"FPHUB_sqrt quotient", false,-1, 31,0);
        tracep->declBus(c+222,"FPHUB_sqrt restored_quotient", false,-1, 31,0);
        tracep->declBus(c+223,"FPHUB_sqrt normalized", false,-1, 31,0);
        tracep->declBus(c+224,"FPHUB_sqrt leading_zeros", false,-1, 31,0);
        tracep->declBus(c+225,"FPHUB_sqrt res_mantissa", false,-1, 22,0);
        tracep->declBus(c+226,"FPHUB_sqrt unnamedblk1 k", false,-1, 31,0);
        tracep->declBus(c+227,"FPHUB_sqrt unnamedblk2 k", false,-1, 31,0);
        tracep->declBus(c+228,"FPHUB_sqrt unnamedblk3 k", false,-1, 31,0);
        tracep->declBus(c+229,"FPHUB_sqrt unnamedblk4 k", false,-1, 31,0);
        tracep->declBus(c+230,"FPHUB_sqrt unnamedblk5 k", false,-1, 31,0);
        tracep->declBus(c+231,"FPHUB_sqrt unnamedblk6 k", false,-1, 31,0);
        tracep->declBus(c+232,"FPHUB_sqrt unnamedblk7 i", false,-1, 31,0);
        tracep->declBus(c+233,"FPHUB_sqrt unnamedblk8 i", false,-1, 31,0);
    }
}

void VFPHUB_sqrt::traceRegister(VerilatedVcd* tracep) {
    // Body
    {
        tracep->addFullCb(&traceFullTop0, __VlSymsp);
        tracep->addChgCb(&traceChgTop0, __VlSymsp);
        tracep->addCleanupCb(&traceCleanup, __VlSymsp);
    }
}

void VFPHUB_sqrt::traceFullTop0(void* userp, VerilatedVcd* tracep) {
    VFPHUB_sqrt__Syms* __restrict vlSymsp = static_cast<VFPHUB_sqrt__Syms*>(userp);
    VFPHUB_sqrt* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceFullSub0(userp, tracep);
    }
}

void VFPHUB_sqrt::traceFullSub0(void* userp, VerilatedVcd* tracep) {
    VFPHUB_sqrt__Syms* __restrict vlSymsp = static_cast<VFPHUB_sqrt__Syms*>(userp);
    VFPHUB_sqrt* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullCData(oldp+1,(vlTOPp->FPHUB_sqrt__DOT__S[0]),2);
        tracep->fullCData(oldp+2,(vlTOPp->FPHUB_sqrt__DOT__S[1]),2);
        tracep->fullCData(oldp+3,(vlTOPp->FPHUB_sqrt__DOT__S[2]),2);
        tracep->fullCData(oldp+4,(vlTOPp->FPHUB_sqrt__DOT__S[3]),2);
        tracep->fullCData(oldp+5,(vlTOPp->FPHUB_sqrt__DOT__S[4]),2);
        tracep->fullCData(oldp+6,(vlTOPp->FPHUB_sqrt__DOT__S[5]),2);
        tracep->fullCData(oldp+7,(vlTOPp->FPHUB_sqrt__DOT__S[6]),2);
        tracep->fullCData(oldp+8,(vlTOPp->FPHUB_sqrt__DOT__S[7]),2);
        tracep->fullCData(oldp+9,(vlTOPp->FPHUB_sqrt__DOT__S[8]),2);
        tracep->fullCData(oldp+10,(vlTOPp->FPHUB_sqrt__DOT__S[9]),2);
        tracep->fullCData(oldp+11,(vlTOPp->FPHUB_sqrt__DOT__S[10]),2);
        tracep->fullCData(oldp+12,(vlTOPp->FPHUB_sqrt__DOT__S[11]),2);
        tracep->fullCData(oldp+13,(vlTOPp->FPHUB_sqrt__DOT__S[12]),2);
        tracep->fullCData(oldp+14,(vlTOPp->FPHUB_sqrt__DOT__S[13]),2);
        tracep->fullCData(oldp+15,(vlTOPp->FPHUB_sqrt__DOT__S[14]),2);
        tracep->fullCData(oldp+16,(vlTOPp->FPHUB_sqrt__DOT__S[15]),2);
        tracep->fullCData(oldp+17,(vlTOPp->FPHUB_sqrt__DOT__S[16]),2);
        tracep->fullCData(oldp+18,(vlTOPp->FPHUB_sqrt__DOT__S[17]),2);
        tracep->fullCData(oldp+19,(vlTOPp->FPHUB_sqrt__DOT__S[18]),2);
        tracep->fullCData(oldp+20,(vlTOPp->FPHUB_sqrt__DOT__S[19]),2);
        tracep->fullCData(oldp+21,(vlTOPp->FPHUB_sqrt__DOT__S[20]),2);
        tracep->fullCData(oldp+22,(vlTOPp->FPHUB_sqrt__DOT__S[21]),2);
        tracep->fullCData(oldp+23,(vlTOPp->FPHUB_sqrt__DOT__S[22]),2);
        tracep->fullCData(oldp+24,(vlTOPp->FPHUB_sqrt__DOT__S[23]),2);
        tracep->fullCData(oldp+25,(vlTOPp->FPHUB_sqrt__DOT__S[24]),2);
        tracep->fullIData(oldp+26,(vlTOPp->FPHUB_sqrt__DOT__F1[0]),29);
        tracep->fullIData(oldp+27,(vlTOPp->FPHUB_sqrt__DOT__F1[1]),29);
        tracep->fullIData(oldp+28,(vlTOPp->FPHUB_sqrt__DOT__F1[2]),29);
        tracep->fullIData(oldp+29,(vlTOPp->FPHUB_sqrt__DOT__F1[3]),29);
        tracep->fullIData(oldp+30,(vlTOPp->FPHUB_sqrt__DOT__F1[4]),29);
        tracep->fullIData(oldp+31,(vlTOPp->FPHUB_sqrt__DOT__F1[5]),29);
        tracep->fullIData(oldp+32,(vlTOPp->FPHUB_sqrt__DOT__F1[6]),29);
        tracep->fullIData(oldp+33,(vlTOPp->FPHUB_sqrt__DOT__F1[7]),29);
        tracep->fullIData(oldp+34,(vlTOPp->FPHUB_sqrt__DOT__F1[8]),29);
        tracep->fullIData(oldp+35,(vlTOPp->FPHUB_sqrt__DOT__F1[9]),29);
        tracep->fullIData(oldp+36,(vlTOPp->FPHUB_sqrt__DOT__F1[10]),29);
        tracep->fullIData(oldp+37,(vlTOPp->FPHUB_sqrt__DOT__F1[11]),29);
        tracep->fullIData(oldp+38,(vlTOPp->FPHUB_sqrt__DOT__F1[12]),29);
        tracep->fullIData(oldp+39,(vlTOPp->FPHUB_sqrt__DOT__F1[13]),29);
        tracep->fullIData(oldp+40,(vlTOPp->FPHUB_sqrt__DOT__F1[14]),29);
        tracep->fullIData(oldp+41,(vlTOPp->FPHUB_sqrt__DOT__F1[15]),29);
        tracep->fullIData(oldp+42,(vlTOPp->FPHUB_sqrt__DOT__F1[16]),29);
        tracep->fullIData(oldp+43,(vlTOPp->FPHUB_sqrt__DOT__F1[17]),29);
        tracep->fullIData(oldp+44,(vlTOPp->FPHUB_sqrt__DOT__F1[18]),29);
        tracep->fullIData(oldp+45,(vlTOPp->FPHUB_sqrt__DOT__F1[19]),29);
        tracep->fullIData(oldp+46,(vlTOPp->FPHUB_sqrt__DOT__F1[20]),29);
        tracep->fullIData(oldp+47,(vlTOPp->FPHUB_sqrt__DOT__F1[21]),29);
        tracep->fullIData(oldp+48,(vlTOPp->FPHUB_sqrt__DOT__F1[22]),29);
        tracep->fullIData(oldp+49,(vlTOPp->FPHUB_sqrt__DOT__F1[23]),29);
        tracep->fullIData(oldp+50,(vlTOPp->FPHUB_sqrt__DOT__F1[24]),29);
        tracep->fullIData(oldp+51,(vlTOPp->FPHUB_sqrt__DOT__F1[25]),29);
        tracep->fullIData(oldp+52,(vlTOPp->FPHUB_sqrt__DOT__F1[26]),29);
        tracep->fullIData(oldp+53,(vlTOPp->FPHUB_sqrt__DOT__F1[27]),29);
        tracep->fullIData(oldp+54,(vlTOPp->FPHUB_sqrt__DOT__F1[28]),29);
        tracep->fullIData(oldp+55,(vlTOPp->FPHUB_sqrt__DOT__F1[29]),29);
        tracep->fullIData(oldp+56,(vlTOPp->FPHUB_sqrt__DOT__F1[30]),29);
        tracep->fullIData(oldp+57,(vlTOPp->FPHUB_sqrt__DOT__F_1[0]),29);
        tracep->fullIData(oldp+58,(vlTOPp->FPHUB_sqrt__DOT__F_1[1]),29);
        tracep->fullIData(oldp+59,(vlTOPp->FPHUB_sqrt__DOT__F_1[2]),29);
        tracep->fullIData(oldp+60,(vlTOPp->FPHUB_sqrt__DOT__F_1[3]),29);
        tracep->fullIData(oldp+61,(vlTOPp->FPHUB_sqrt__DOT__F_1[4]),29);
        tracep->fullIData(oldp+62,(vlTOPp->FPHUB_sqrt__DOT__F_1[5]),29);
        tracep->fullIData(oldp+63,(vlTOPp->FPHUB_sqrt__DOT__F_1[6]),29);
        tracep->fullIData(oldp+64,(vlTOPp->FPHUB_sqrt__DOT__F_1[7]),29);
        tracep->fullIData(oldp+65,(vlTOPp->FPHUB_sqrt__DOT__F_1[8]),29);
        tracep->fullIData(oldp+66,(vlTOPp->FPHUB_sqrt__DOT__F_1[9]),29);
        tracep->fullIData(oldp+67,(vlTOPp->FPHUB_sqrt__DOT__F_1[10]),29);
        tracep->fullIData(oldp+68,(vlTOPp->FPHUB_sqrt__DOT__F_1[11]),29);
        tracep->fullIData(oldp+69,(vlTOPp->FPHUB_sqrt__DOT__F_1[12]),29);
        tracep->fullIData(oldp+70,(vlTOPp->FPHUB_sqrt__DOT__F_1[13]),29);
        tracep->fullIData(oldp+71,(vlTOPp->FPHUB_sqrt__DOT__F_1[14]),29);
        tracep->fullIData(oldp+72,(vlTOPp->FPHUB_sqrt__DOT__F_1[15]),29);
        tracep->fullIData(oldp+73,(vlTOPp->FPHUB_sqrt__DOT__F_1[16]),29);
        tracep->fullIData(oldp+74,(vlTOPp->FPHUB_sqrt__DOT__F_1[17]),29);
        tracep->fullIData(oldp+75,(vlTOPp->FPHUB_sqrt__DOT__F_1[18]),29);
        tracep->fullIData(oldp+76,(vlTOPp->FPHUB_sqrt__DOT__F_1[19]),29);
        tracep->fullIData(oldp+77,(vlTOPp->FPHUB_sqrt__DOT__F_1[20]),29);
        tracep->fullIData(oldp+78,(vlTOPp->FPHUB_sqrt__DOT__F_1[21]),29);
        tracep->fullIData(oldp+79,(vlTOPp->FPHUB_sqrt__DOT__F_1[22]),29);
        tracep->fullIData(oldp+80,(vlTOPp->FPHUB_sqrt__DOT__F_1[23]),29);
        tracep->fullIData(oldp+81,(vlTOPp->FPHUB_sqrt__DOT__F_1[24]),29);
        tracep->fullIData(oldp+82,(vlTOPp->FPHUB_sqrt__DOT__F_1[25]),29);
        tracep->fullIData(oldp+83,(vlTOPp->FPHUB_sqrt__DOT__F_1[26]),29);
        tracep->fullIData(oldp+84,(vlTOPp->FPHUB_sqrt__DOT__F_1[27]),29);
        tracep->fullIData(oldp+85,(vlTOPp->FPHUB_sqrt__DOT__F_1[28]),29);
        tracep->fullIData(oldp+86,(vlTOPp->FPHUB_sqrt__DOT__F_1[29]),29);
        tracep->fullIData(oldp+87,(vlTOPp->FPHUB_sqrt__DOT__F_1[30]),29);
        tracep->fullIData(oldp+88,(vlTOPp->FPHUB_sqrt__DOT__W[0]),29);
        tracep->fullIData(oldp+89,(vlTOPp->FPHUB_sqrt__DOT__W[1]),29);
        tracep->fullIData(oldp+90,(vlTOPp->FPHUB_sqrt__DOT__W[2]),29);
        tracep->fullIData(oldp+91,(vlTOPp->FPHUB_sqrt__DOT__W[3]),29);
        tracep->fullIData(oldp+92,(vlTOPp->FPHUB_sqrt__DOT__W[4]),29);
        tracep->fullIData(oldp+93,(vlTOPp->FPHUB_sqrt__DOT__W[5]),29);
        tracep->fullIData(oldp+94,(vlTOPp->FPHUB_sqrt__DOT__W[6]),29);
        tracep->fullIData(oldp+95,(vlTOPp->FPHUB_sqrt__DOT__W[7]),29);
        tracep->fullIData(oldp+96,(vlTOPp->FPHUB_sqrt__DOT__W[8]),29);
        tracep->fullIData(oldp+97,(vlTOPp->FPHUB_sqrt__DOT__W[9]),29);
        tracep->fullIData(oldp+98,(vlTOPp->FPHUB_sqrt__DOT__W[10]),29);
        tracep->fullIData(oldp+99,(vlTOPp->FPHUB_sqrt__DOT__W[11]),29);
        tracep->fullIData(oldp+100,(vlTOPp->FPHUB_sqrt__DOT__W[12]),29);
        tracep->fullIData(oldp+101,(vlTOPp->FPHUB_sqrt__DOT__W[13]),29);
        tracep->fullIData(oldp+102,(vlTOPp->FPHUB_sqrt__DOT__W[14]),29);
        tracep->fullIData(oldp+103,(vlTOPp->FPHUB_sqrt__DOT__W[15]),29);
        tracep->fullIData(oldp+104,(vlTOPp->FPHUB_sqrt__DOT__W[16]),29);
        tracep->fullIData(oldp+105,(vlTOPp->FPHUB_sqrt__DOT__W[17]),29);
        tracep->fullIData(oldp+106,(vlTOPp->FPHUB_sqrt__DOT__W[18]),29);
        tracep->fullIData(oldp+107,(vlTOPp->FPHUB_sqrt__DOT__W[19]),29);
        tracep->fullIData(oldp+108,(vlTOPp->FPHUB_sqrt__DOT__W[20]),29);
        tracep->fullIData(oldp+109,(vlTOPp->FPHUB_sqrt__DOT__W[21]),29);
        tracep->fullIData(oldp+110,(vlTOPp->FPHUB_sqrt__DOT__W[22]),29);
        tracep->fullIData(oldp+111,(vlTOPp->FPHUB_sqrt__DOT__W[23]),29);
        tracep->fullIData(oldp+112,(vlTOPp->FPHUB_sqrt__DOT__W[24]),29);
        tracep->fullIData(oldp+113,(vlTOPp->FPHUB_sqrt__DOT__W[25]),29);
        tracep->fullIData(oldp+114,(vlTOPp->FPHUB_sqrt__DOT__W[26]),29);
        tracep->fullIData(oldp+115,(vlTOPp->FPHUB_sqrt__DOT__W[27]),29);
        tracep->fullIData(oldp+116,(vlTOPp->FPHUB_sqrt__DOT__W[28]),29);
        tracep->fullIData(oldp+117,(vlTOPp->FPHUB_sqrt__DOT__W[29]),29);
        tracep->fullIData(oldp+118,(vlTOPp->FPHUB_sqrt__DOT__W[30]),29);
        tracep->fullIData(oldp+119,(vlTOPp->FPHUB_sqrt__DOT__W2[0]),29);
        tracep->fullIData(oldp+120,(vlTOPp->FPHUB_sqrt__DOT__W2[1]),29);
        tracep->fullIData(oldp+121,(vlTOPp->FPHUB_sqrt__DOT__W2[2]),29);
        tracep->fullIData(oldp+122,(vlTOPp->FPHUB_sqrt__DOT__W2[3]),29);
        tracep->fullIData(oldp+123,(vlTOPp->FPHUB_sqrt__DOT__W2[4]),29);
        tracep->fullIData(oldp+124,(vlTOPp->FPHUB_sqrt__DOT__W2[5]),29);
        tracep->fullIData(oldp+125,(vlTOPp->FPHUB_sqrt__DOT__W2[6]),29);
        tracep->fullIData(oldp+126,(vlTOPp->FPHUB_sqrt__DOT__W2[7]),29);
        tracep->fullIData(oldp+127,(vlTOPp->FPHUB_sqrt__DOT__W2[8]),29);
        tracep->fullIData(oldp+128,(vlTOPp->FPHUB_sqrt__DOT__W2[9]),29);
        tracep->fullIData(oldp+129,(vlTOPp->FPHUB_sqrt__DOT__W2[10]),29);
        tracep->fullIData(oldp+130,(vlTOPp->FPHUB_sqrt__DOT__W2[11]),29);
        tracep->fullIData(oldp+131,(vlTOPp->FPHUB_sqrt__DOT__W2[12]),29);
        tracep->fullIData(oldp+132,(vlTOPp->FPHUB_sqrt__DOT__W2[13]),29);
        tracep->fullIData(oldp+133,(vlTOPp->FPHUB_sqrt__DOT__W2[14]),29);
        tracep->fullIData(oldp+134,(vlTOPp->FPHUB_sqrt__DOT__W2[15]),29);
        tracep->fullIData(oldp+135,(vlTOPp->FPHUB_sqrt__DOT__W2[16]),29);
        tracep->fullIData(oldp+136,(vlTOPp->FPHUB_sqrt__DOT__W2[17]),29);
        tracep->fullIData(oldp+137,(vlTOPp->FPHUB_sqrt__DOT__W2[18]),29);
        tracep->fullIData(oldp+138,(vlTOPp->FPHUB_sqrt__DOT__W2[19]),29);
        tracep->fullIData(oldp+139,(vlTOPp->FPHUB_sqrt__DOT__W2[20]),29);
        tracep->fullIData(oldp+140,(vlTOPp->FPHUB_sqrt__DOT__W2[21]),29);
        tracep->fullIData(oldp+141,(vlTOPp->FPHUB_sqrt__DOT__W2[22]),29);
        tracep->fullIData(oldp+142,(vlTOPp->FPHUB_sqrt__DOT__W2[23]),29);
        tracep->fullIData(oldp+143,(vlTOPp->FPHUB_sqrt__DOT__W2[24]),29);
        tracep->fullIData(oldp+144,(vlTOPp->FPHUB_sqrt__DOT__W2[25]),29);
        tracep->fullIData(oldp+145,(vlTOPp->FPHUB_sqrt__DOT__W2[26]),29);
        tracep->fullIData(oldp+146,(vlTOPp->FPHUB_sqrt__DOT__W2[27]),29);
        tracep->fullIData(oldp+147,(vlTOPp->FPHUB_sqrt__DOT__W2[28]),29);
        tracep->fullIData(oldp+148,(vlTOPp->FPHUB_sqrt__DOT__W2[29]),29);
        tracep->fullIData(oldp+149,(vlTOPp->FPHUB_sqrt__DOT__W2[30]),29);
        tracep->fullIData(oldp+150,(vlTOPp->FPHUB_sqrt__DOT__WC[0]),29);
        tracep->fullIData(oldp+151,(vlTOPp->FPHUB_sqrt__DOT__WC[1]),29);
        tracep->fullIData(oldp+152,(vlTOPp->FPHUB_sqrt__DOT__WC[2]),29);
        tracep->fullIData(oldp+153,(vlTOPp->FPHUB_sqrt__DOT__WC[3]),29);
        tracep->fullIData(oldp+154,(vlTOPp->FPHUB_sqrt__DOT__WC[4]),29);
        tracep->fullIData(oldp+155,(vlTOPp->FPHUB_sqrt__DOT__WC[5]),29);
        tracep->fullIData(oldp+156,(vlTOPp->FPHUB_sqrt__DOT__WC[6]),29);
        tracep->fullIData(oldp+157,(vlTOPp->FPHUB_sqrt__DOT__WC[7]),29);
        tracep->fullIData(oldp+158,(vlTOPp->FPHUB_sqrt__DOT__WC[8]),29);
        tracep->fullIData(oldp+159,(vlTOPp->FPHUB_sqrt__DOT__WC[9]),29);
        tracep->fullIData(oldp+160,(vlTOPp->FPHUB_sqrt__DOT__WC[10]),29);
        tracep->fullIData(oldp+161,(vlTOPp->FPHUB_sqrt__DOT__WC[11]),29);
        tracep->fullIData(oldp+162,(vlTOPp->FPHUB_sqrt__DOT__WC[12]),29);
        tracep->fullIData(oldp+163,(vlTOPp->FPHUB_sqrt__DOT__WC[13]),29);
        tracep->fullIData(oldp+164,(vlTOPp->FPHUB_sqrt__DOT__WC[14]),29);
        tracep->fullIData(oldp+165,(vlTOPp->FPHUB_sqrt__DOT__WC[15]),29);
        tracep->fullIData(oldp+166,(vlTOPp->FPHUB_sqrt__DOT__WC[16]),29);
        tracep->fullIData(oldp+167,(vlTOPp->FPHUB_sqrt__DOT__WC[17]),29);
        tracep->fullIData(oldp+168,(vlTOPp->FPHUB_sqrt__DOT__WC[18]),29);
        tracep->fullIData(oldp+169,(vlTOPp->FPHUB_sqrt__DOT__WC[19]),29);
        tracep->fullIData(oldp+170,(vlTOPp->FPHUB_sqrt__DOT__WC[20]),29);
        tracep->fullIData(oldp+171,(vlTOPp->FPHUB_sqrt__DOT__WC[21]),29);
        tracep->fullIData(oldp+172,(vlTOPp->FPHUB_sqrt__DOT__WC[22]),29);
        tracep->fullIData(oldp+173,(vlTOPp->FPHUB_sqrt__DOT__WC[23]),29);
        tracep->fullIData(oldp+174,(vlTOPp->FPHUB_sqrt__DOT__WC[24]),29);
        tracep->fullIData(oldp+175,(vlTOPp->FPHUB_sqrt__DOT__WC[25]),29);
        tracep->fullIData(oldp+176,(vlTOPp->FPHUB_sqrt__DOT__WC[26]),29);
        tracep->fullIData(oldp+177,(vlTOPp->FPHUB_sqrt__DOT__WC[27]),29);
        tracep->fullIData(oldp+178,(vlTOPp->FPHUB_sqrt__DOT__WC[28]),29);
        tracep->fullIData(oldp+179,(vlTOPp->FPHUB_sqrt__DOT__WC[29]),29);
        tracep->fullIData(oldp+180,(vlTOPp->FPHUB_sqrt__DOT__WC[30]),29);
        tracep->fullCData(oldp+181,(vlTOPp->FPHUB_sqrt__DOT__res_exponent),8);
        tracep->fullIData(oldp+182,(vlTOPp->FPHUB_sqrt__DOT__j),32);
        tracep->fullCData(oldp+183,((0xfU & (((0x1eU 
                                               >= (0x1fU 
                                                   & vlTOPp->FPHUB_sqrt__DOT__j))
                                               ? vlTOPp->FPHUB_sqrt__DOT__W2
                                              [(0x1fU 
                                                & vlTOPp->FPHUB_sqrt__DOT__j)]
                                               : 0U) 
                                             >> 0x19U))),4);
        tracep->fullIData(oldp+184,(vlTOPp->FPHUB_sqrt__DOT__posiv),25);
        tracep->fullIData(oldp+185,(vlTOPp->FPHUB_sqrt__DOT__neg),25);
        tracep->fullIData(oldp+186,(vlTOPp->FPHUB_sqrt__DOT__root),32);
        tracep->fullCData(oldp+187,(vlTOPp->FPHUB_sqrt__DOT__y_test[0]),4);
        tracep->fullCData(oldp+188,(vlTOPp->FPHUB_sqrt__DOT__y_test[1]),4);
        tracep->fullCData(oldp+189,(vlTOPp->FPHUB_sqrt__DOT__y_test[2]),4);
        tracep->fullCData(oldp+190,(vlTOPp->FPHUB_sqrt__DOT__y_test[3]),4);
        tracep->fullCData(oldp+191,(vlTOPp->FPHUB_sqrt__DOT__y_test[4]),4);
        tracep->fullCData(oldp+192,(vlTOPp->FPHUB_sqrt__DOT__y_test[5]),4);
        tracep->fullCData(oldp+193,(vlTOPp->FPHUB_sqrt__DOT__y_test[6]),4);
        tracep->fullCData(oldp+194,(vlTOPp->FPHUB_sqrt__DOT__y_test[7]),4);
        tracep->fullCData(oldp+195,(vlTOPp->FPHUB_sqrt__DOT__y_test[8]),4);
        tracep->fullCData(oldp+196,(vlTOPp->FPHUB_sqrt__DOT__y_test[9]),4);
        tracep->fullCData(oldp+197,(vlTOPp->FPHUB_sqrt__DOT__y_test[10]),4);
        tracep->fullCData(oldp+198,(vlTOPp->FPHUB_sqrt__DOT__y_test[11]),4);
        tracep->fullCData(oldp+199,(vlTOPp->FPHUB_sqrt__DOT__y_test[12]),4);
        tracep->fullCData(oldp+200,(vlTOPp->FPHUB_sqrt__DOT__y_test[13]),4);
        tracep->fullCData(oldp+201,(vlTOPp->FPHUB_sqrt__DOT__y_test[14]),4);
        tracep->fullCData(oldp+202,(vlTOPp->FPHUB_sqrt__DOT__y_test[15]),4);
        tracep->fullCData(oldp+203,(vlTOPp->FPHUB_sqrt__DOT__y_test[16]),4);
        tracep->fullCData(oldp+204,(vlTOPp->FPHUB_sqrt__DOT__y_test[17]),4);
        tracep->fullCData(oldp+205,(vlTOPp->FPHUB_sqrt__DOT__y_test[18]),4);
        tracep->fullCData(oldp+206,(vlTOPp->FPHUB_sqrt__DOT__y_test[19]),4);
        tracep->fullCData(oldp+207,(vlTOPp->FPHUB_sqrt__DOT__y_test[20]),4);
        tracep->fullCData(oldp+208,(vlTOPp->FPHUB_sqrt__DOT__y_test[21]),4);
        tracep->fullCData(oldp+209,(vlTOPp->FPHUB_sqrt__DOT__y_test[22]),4);
        tracep->fullCData(oldp+210,(vlTOPp->FPHUB_sqrt__DOT__y_test[23]),4);
        tracep->fullCData(oldp+211,(vlTOPp->FPHUB_sqrt__DOT__y_test[24]),4);
        tracep->fullCData(oldp+212,(vlTOPp->FPHUB_sqrt__DOT__y_test[25]),4);
        tracep->fullCData(oldp+213,(vlTOPp->FPHUB_sqrt__DOT__y_test[26]),4);
        tracep->fullCData(oldp+214,(vlTOPp->FPHUB_sqrt__DOT__y_test[27]),4);
        tracep->fullCData(oldp+215,(vlTOPp->FPHUB_sqrt__DOT__y_test[28]),4);
        tracep->fullCData(oldp+216,(vlTOPp->FPHUB_sqrt__DOT__y_test[29]),4);
        tracep->fullCData(oldp+217,(vlTOPp->FPHUB_sqrt__DOT__y_test[30]),4);
        tracep->fullBit(oldp+218,(vlTOPp->FPHUB_sqrt__DOT__chivato));
        tracep->fullCData(oldp+219,((0xfU & ((((0x1eU 
                                                >= 
                                                (0x1fU 
                                                 & vlTOPp->FPHUB_sqrt__DOT__j))
                                                ? vlTOPp->FPHUB_sqrt__DOT__W2
                                               [(0x1fU 
                                                 & vlTOPp->FPHUB_sqrt__DOT__j)]
                                                : 0U) 
                                              >> 0x19U) 
                                             + (((0x1eU 
                                                  >= 
                                                  (0x1fU 
                                                   & vlTOPp->FPHUB_sqrt__DOT__j))
                                                  ? 
                                                 vlTOPp->FPHUB_sqrt__DOT__WC
                                                 [(0x1fU 
                                                   & vlTOPp->FPHUB_sqrt__DOT__j)]
                                                  : 0U) 
                                                >> 0x19U)))),4);
        tracep->fullCData(oldp+220,(vlTOPp->FPHUB_sqrt__DOT__f1_test),3);
        tracep->fullIData(oldp+221,(vlTOPp->FPHUB_sqrt__DOT__quotient),32);
        tracep->fullIData(oldp+222,(vlTOPp->FPHUB_sqrt__DOT__restored_quotient),32);
        tracep->fullIData(oldp+223,(vlTOPp->FPHUB_sqrt__DOT__normalized),32);
        tracep->fullIData(oldp+224,(vlTOPp->FPHUB_sqrt__DOT__leading_zeros),32);
        tracep->fullIData(oldp+225,(vlTOPp->FPHUB_sqrt__DOT__res_mantissa),23);
        tracep->fullIData(oldp+226,(vlTOPp->FPHUB_sqrt__DOT__unnamedblk1__DOT__k),32);
        tracep->fullIData(oldp+227,(vlTOPp->FPHUB_sqrt__DOT__unnamedblk2__DOT__k),32);
        tracep->fullIData(oldp+228,(vlTOPp->FPHUB_sqrt__DOT__unnamedblk3__DOT__k),32);
        tracep->fullIData(oldp+229,(vlTOPp->FPHUB_sqrt__DOT__unnamedblk4__DOT__k),32);
        tracep->fullIData(oldp+230,(vlTOPp->FPHUB_sqrt__DOT__unnamedblk5__DOT__k),32);
        tracep->fullIData(oldp+231,(vlTOPp->FPHUB_sqrt__DOT__unnamedblk6__DOT__k),32);
        tracep->fullIData(oldp+232,(vlTOPp->FPHUB_sqrt__DOT__unnamedblk7__DOT__i),32);
        tracep->fullIData(oldp+233,(vlTOPp->FPHUB_sqrt__DOT__unnamedblk8__DOT__i),32);
        tracep->fullBit(oldp+234,(vlTOPp->clk));
        tracep->fullBit(oldp+235,(vlTOPp->rst_l));
        tracep->fullBit(oldp+236,(vlTOPp->start));
        tracep->fullIData(oldp+237,(vlTOPp->x),32);
        tracep->fullIData(oldp+238,(vlTOPp->res),32);
        tracep->fullBit(oldp+239,(vlTOPp->finish));
        tracep->fullBit(oldp+240,(vlTOPp->computing));
        tracep->fullCData(oldp+241,((0xffU & (vlTOPp->x 
                                              >> 0x17U))),8);
        tracep->fullCData(oldp+242,((0xffU & ((0x800000U 
                                               & vlTOPp->x)
                                               ? ((0xffU 
                                                   & (vlTOPp->x 
                                                      >> 0x17U)) 
                                                  - (IData)(1U))
                                               : (0xffU 
                                                  & (vlTOPp->x 
                                                     >> 0x17U))))),8);
        tracep->fullIData(oldp+243,((0x7fffffU & vlTOPp->x)),23);
        tracep->fullIData(oldp+244,((0x1000001U | (0xfffffeU 
                                                   & (vlTOPp->x 
                                                      << 1U)))),25);
        tracep->fullIData(oldp+245,((0x1ffffffU & (
                                                   (0x800000U 
                                                    & vlTOPp->x)
                                                    ? 
                                                   (0x800000U 
                                                    | (0x7fffffU 
                                                       & vlTOPp->x))
                                                    : 
                                                   (0x400000U 
                                                    | (0x3fffffU 
                                                       & (vlTOPp->x 
                                                          >> 1U)))))),25);
        tracep->fullIData(oldp+246,(((0x800000U & vlTOPp->x)
                                      ? (0x2000002U 
                                         | (0x1fffffcU 
                                            & (vlTOPp->x 
                                               << 2U)))
                                      : (0x1000001U 
                                         | (0xfffffeU 
                                            & (vlTOPp->x 
                                               << 1U))))),29);
        tracep->fullIData(oldp+247,(0x17U),32);
        tracep->fullIData(oldp+248,(8U),32);
        tracep->fullIData(oldp+249,(0x1fU),32);
        tracep->fullIData(oldp+250,(0x80U),32);
        tracep->fullIData(oldp+251,(0x7fU),32);
        tracep->fullIData(oldp+252,(7U),32);
        tracep->fullIData(oldp+253,(1U),32);
        tracep->fullIData(oldp+254,(5U),32);
        tracep->fullBit(oldp+255,(vlTOPp->FPHUB_sqrt__DOT__x_sign));
        tracep->fullWData(oldp+256,(vlTOPp->FPHUB_sqrt__DOT__q),65);
    }
}
