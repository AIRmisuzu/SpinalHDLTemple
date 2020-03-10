// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VTopLevel__Syms.h"


//======================

void VTopLevel::trace(VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addCallback(&VTopLevel::traceInit, &VTopLevel::traceFull, &VTopLevel::traceChg, this);
}
void VTopLevel::traceInit(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->open()
    VTopLevel* t = (VTopLevel*)userthis;
    VTopLevel__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    if (!Verilated::calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
                        "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vcdp->scopeEscape(' ');
    t->traceInitThis(vlSymsp, vcdp, code);
    vcdp->scopeEscape('.');
}
void VTopLevel::traceFull(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    VTopLevel* t = (VTopLevel*)userthis;
    VTopLevel__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    t->traceFullThis(vlSymsp, vcdp, code);
}

//======================


void VTopLevel::traceInitThis(VTopLevel__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTopLevel* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    vcdp->module(vlSymsp->name());  // Setup signal names
    // Body
    {
        vlTOPp->traceInitThis__1(vlSymsp, vcdp, code);
    }
}

void VTopLevel::traceFullThis(VTopLevel__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTopLevel* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vlTOPp->traceFullThis__1(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void VTopLevel::traceInitThis__1(VTopLevel__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTopLevel* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->declBit(c+2,"io_a",-1);
        vcdp->declBit(c+3,"io_c",-1);
        vcdp->declBit(c+4,"reset",-1);
        vcdp->declBit(c+5,"clk",-1);
        vcdp->declBit(c+2,"TopLevel io_a",-1);
        vcdp->declBit(c+3,"TopLevel io_c",-1);
        vcdp->declBit(c+4,"TopLevel reset",-1);
        vcdp->declBit(c+5,"TopLevel clk",-1);
        vcdp->declBit(c+1,"TopLevel add_c",-1);
        vcdp->declBit(c+2,"TopLevel add a",-1);
        vcdp->declBit(c+1,"TopLevel add c",-1);
        vcdp->declBit(c+5,"TopLevel add clk",-1);
        vcdp->declBit(c+4,"TopLevel add reset",-1);
    }
}

void VTopLevel::traceFullThis__1(VTopLevel__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTopLevel* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->fullBit(c+1,(vlTOPp->TopLevel__DOT__add_c));
        vcdp->fullBit(c+2,(vlTOPp->io_a));
        vcdp->fullBit(c+3,(vlTOPp->io_c));
        vcdp->fullBit(c+4,(vlTOPp->reset));
        vcdp->fullBit(c+5,(vlTOPp->clk));
    }
}
