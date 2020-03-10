// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTopLevel.h for the primary calling header

#include "VTopLevel.h"
#include "VTopLevel__Syms.h"


//--------------------
// STATIC VARIABLES


//--------------------

VL_CTOR_IMP(VTopLevel) {
    VTopLevel__Syms* __restrict vlSymsp = __VlSymsp = new VTopLevel__Syms(this, name());
    VTopLevel* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void VTopLevel::__Vconfigure(VTopLevel__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

VTopLevel::~VTopLevel() {
    delete __VlSymsp; __VlSymsp=NULL;
}

//--------------------
// Internal Methods

void VTopLevel::_settle__TOP__2(VTopLevel__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTopLevel::_settle__TOP__2\n"); );
    VTopLevel* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->io_c = vlTOPp->TopLevel__DOT__add_c;
}

void VTopLevel::_eval_initial(VTopLevel__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTopLevel::_eval_initial\n"); );
    VTopLevel* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vclklast__TOP__clk = vlTOPp->clk;
}

void VTopLevel::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTopLevel::final\n"); );
    // Variables
    VTopLevel__Syms* __restrict vlSymsp = this->__VlSymsp;
    VTopLevel* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VTopLevel::_eval_settle(VTopLevel__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTopLevel::_eval_settle\n"); );
    VTopLevel* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_settle__TOP__2(vlSymsp);
}

void VTopLevel::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTopLevel::_ctor_var_reset\n"); );
    // Body
    io_a = VL_RAND_RESET_I(1);
    io_c = VL_RAND_RESET_I(1);
    reset = VL_RAND_RESET_I(1);
    clk = VL_RAND_RESET_I(1);
    TopLevel__DOT__add_c = VL_RAND_RESET_I(1);
    __Vm_traceActivity = 0;
}
