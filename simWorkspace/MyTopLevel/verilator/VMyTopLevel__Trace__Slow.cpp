// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VMyTopLevel__Syms.h"


//======================

void VMyTopLevel::trace(VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addCallback(&VMyTopLevel::traceInit, &VMyTopLevel::traceFull, &VMyTopLevel::traceChg, this);
}
void VMyTopLevel::traceInit(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->open()
    VMyTopLevel* t = (VMyTopLevel*)userthis;
    VMyTopLevel__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    if (!Verilated::calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
                        "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vcdp->scopeEscape(' ');
    t->traceInitThis(vlSymsp, vcdp, code);
    vcdp->scopeEscape('.');
}
void VMyTopLevel::traceFull(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    VMyTopLevel* t = (VMyTopLevel*)userthis;
    VMyTopLevel__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    t->traceFullThis(vlSymsp, vcdp, code);
}

//======================


void VMyTopLevel::traceInitThis(VMyTopLevel__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VMyTopLevel* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    vcdp->module(vlSymsp->name());  // Setup signal names
    // Body
    {
        vlTOPp->traceInitThis__1(vlSymsp, vcdp, code);
    }
}

void VMyTopLevel::traceFullThis(VMyTopLevel__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VMyTopLevel* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vlTOPp->traceFullThis__1(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void VMyTopLevel::traceInitThis__1(VMyTopLevel__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VMyTopLevel* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->declBit(c+2,"io_cond0",-1);
        vcdp->declBit(c+3,"io_cond1",-1);
        vcdp->declBit(c+4,"io_flag",-1);
        vcdp->declBus(c+5,"io_state",-1,7,0);
        vcdp->declBit(c+6,"clk",-1);
        vcdp->declBit(c+7,"reset",-1);
        vcdp->declBit(c+2,"MyTopLevel io_cond0",-1);
        vcdp->declBit(c+3,"MyTopLevel io_cond1",-1);
        vcdp->declBit(c+4,"MyTopLevel io_flag",-1);
        vcdp->declBus(c+5,"MyTopLevel io_state",-1,7,0);
        vcdp->declBit(c+6,"MyTopLevel clk",-1);
        vcdp->declBit(c+7,"MyTopLevel reset",-1);
        vcdp->declBus(c+1,"MyTopLevel counter",-1,7,0);
    }
}

void VMyTopLevel::traceFullThis__1(VMyTopLevel__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VMyTopLevel* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->fullBus(c+1,(vlTOPp->MyTopLevel__DOT__counter),8);
        vcdp->fullBit(c+2,(vlTOPp->io_cond0));
        vcdp->fullBit(c+3,(vlTOPp->io_cond1));
        vcdp->fullBit(c+4,(vlTOPp->io_flag));
        vcdp->fullBus(c+5,(vlTOPp->io_state),8);
        vcdp->fullBit(c+6,(vlTOPp->clk));
        vcdp->fullBit(c+7,(vlTOPp->reset));
    }
}
