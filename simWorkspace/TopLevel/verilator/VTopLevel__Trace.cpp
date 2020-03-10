// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VTopLevel__Syms.h"


//======================

void VTopLevel::traceChg(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    VTopLevel* t = (VTopLevel*)userthis;
    VTopLevel__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    if (vlSymsp->getClearActivity()) {
        t->traceChgThis(vlSymsp, vcdp, code);
    }
}

//======================


void VTopLevel::traceChgThis(VTopLevel__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTopLevel* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        if (VL_UNLIKELY((2U & vlTOPp->__Vm_traceActivity))) {
            vlTOPp->traceChgThis__2(vlSymsp, vcdp, code);
        }
        vlTOPp->traceChgThis__3(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void VTopLevel::traceChgThis__2(VTopLevel__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTopLevel* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+1,(vlTOPp->TopLevel__DOT__add_c));
    }
}

void VTopLevel::traceChgThis__3(VTopLevel__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTopLevel* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+2,(vlTOPp->io_a));
        vcdp->chgBit(c+3,(vlTOPp->io_c));
        vcdp->chgBit(c+4,(vlTOPp->reset));
        vcdp->chgBit(c+5,(vlTOPp->clk));
    }
}
