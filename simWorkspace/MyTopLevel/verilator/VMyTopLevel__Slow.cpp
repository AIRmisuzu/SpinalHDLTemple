// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VMyTopLevel.h for the primary calling header

#include "VMyTopLevel.h"
#include "VMyTopLevel__Syms.h"


//--------------------
// STATIC VARIABLES


//--------------------

VL_CTOR_IMP(VMyTopLevel) {
    VMyTopLevel__Syms* __restrict vlSymsp = __VlSymsp = new VMyTopLevel__Syms(this, name());
    VMyTopLevel* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void VMyTopLevel::__Vconfigure(VMyTopLevel__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

VMyTopLevel::~VMyTopLevel() {
    delete __VlSymsp; __VlSymsp=NULL;
}

//--------------------
// Internal Methods

void VMyTopLevel::_settle__TOP__2(VMyTopLevel__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMyTopLevel::_settle__TOP__2\n"); );
    VMyTopLevel* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->io_state = vlTOPp->MyTopLevel__DOT__counter;
    vlTOPp->io_flag = ((0U == (IData)(vlTOPp->MyTopLevel__DOT__counter)) 
                       | (IData)(vlTOPp->io_cond1));
}

void VMyTopLevel::_eval_initial(VMyTopLevel__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMyTopLevel::_eval_initial\n"); );
    VMyTopLevel* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vclklast__TOP__clk = vlTOPp->clk;
    vlTOPp->__Vclklast__TOP__reset = vlTOPp->reset;
}

void VMyTopLevel::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMyTopLevel::final\n"); );
    // Variables
    VMyTopLevel__Syms* __restrict vlSymsp = this->__VlSymsp;
    VMyTopLevel* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VMyTopLevel::_eval_settle(VMyTopLevel__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMyTopLevel::_eval_settle\n"); );
    VMyTopLevel* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_settle__TOP__2(vlSymsp);
}

void VMyTopLevel::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VMyTopLevel::_ctor_var_reset\n"); );
    // Body
    io_cond0 = VL_RAND_RESET_I(1);
    io_cond1 = VL_RAND_RESET_I(1);
    io_flag = VL_RAND_RESET_I(1);
    io_state = VL_RAND_RESET_I(8);
    clk = VL_RAND_RESET_I(1);
    reset = VL_RAND_RESET_I(1);
    MyTopLevel__DOT__counter = VL_RAND_RESET_I(8);
    __Vm_traceActivity = 0;
}
