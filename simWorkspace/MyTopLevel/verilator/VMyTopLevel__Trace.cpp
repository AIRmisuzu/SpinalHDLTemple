// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VMyTopLevel__Syms.h"


//======================

void VMyTopLevel::traceChg(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    VMyTopLevel* t = (VMyTopLevel*)userthis;
    VMyTopLevel__Syms* __restrict vlSymsp = t->__VlSymsp;  // Setup global symbol table
    if (vlSymsp->getClearActivity()) {
        t->traceChgThis(vlSymsp, vcdp, code);
    }
}

//======================


void VMyTopLevel::traceChgThis(VMyTopLevel__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VMyTopLevel* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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

void VMyTopLevel::traceChgThis__2(VMyTopLevel__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VMyTopLevel* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBus(c+1,(vlTOPp->MyTopLevel__DOT__counter),8);
    }
}

void VMyTopLevel::traceChgThis__3(VMyTopLevel__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VMyTopLevel* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c = code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(c+2,(vlTOPp->io_cond0));
        vcdp->chgBit(c+3,(vlTOPp->io_cond1));
        vcdp->chgBit(c+4,(vlTOPp->io_flag));
        vcdp->chgBus(c+5,(vlTOPp->io_state),8);
        vcdp->chgBit(c+6,(vlTOPp->clk));
        vcdp->chgBit(c+7,(vlTOPp->reset));
    }
}
