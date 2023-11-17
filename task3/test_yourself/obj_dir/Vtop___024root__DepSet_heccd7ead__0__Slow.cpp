// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"

#include "Vtop___024root.h"

VL_ATTR_COLD void Vtop___024root___settle__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___settle__TOP__0\n"); );
    // Body
    vlSelf->out = (((((((((0U == vlSelf->top__DOT__topf1_fsm__DOT__current_state) 
                          | (1U == vlSelf->top__DOT__topf1_fsm__DOT__current_state)) 
                         | (2U == vlSelf->top__DOT__topf1_fsm__DOT__current_state)) 
                        | (3U == vlSelf->top__DOT__topf1_fsm__DOT__current_state)) 
                       | (4U == vlSelf->top__DOT__topf1_fsm__DOT__current_state)) 
                      | (5U == vlSelf->top__DOT__topf1_fsm__DOT__current_state)) 
                     | (6U == vlSelf->top__DOT__topf1_fsm__DOT__current_state)) 
                    | (7U == vlSelf->top__DOT__topf1_fsm__DOT__current_state))
                    ? ((0U == vlSelf->top__DOT__topf1_fsm__DOT__current_state)
                        ? 0U : ((1U == vlSelf->top__DOT__topf1_fsm__DOT__current_state)
                                 ? 1U : ((2U == vlSelf->top__DOT__topf1_fsm__DOT__current_state)
                                          ? 3U : ((3U 
                                                   == vlSelf->top__DOT__topf1_fsm__DOT__current_state)
                                                   ? 7U
                                                   : 
                                                  ((4U 
                                                    == vlSelf->top__DOT__topf1_fsm__DOT__current_state)
                                                    ? 0xfU
                                                    : 
                                                   ((5U 
                                                     == vlSelf->top__DOT__topf1_fsm__DOT__current_state)
                                                     ? 0x1fU
                                                     : 
                                                    ((6U 
                                                      == vlSelf->top__DOT__topf1_fsm__DOT__current_state)
                                                      ? 0x3fU
                                                      : 0x7fU)))))))
                    : ((8U == vlSelf->top__DOT__topf1_fsm__DOT__current_state)
                        ? 0xffU : 0U));
    vlSelf->top__DOT__topf1_fsm__DOT__next_state = 
        ((IData)(vlSelf->top__DOT__address) ? (((((
                                                   ((((0U 
                                                       == vlSelf->top__DOT__topf1_fsm__DOT__current_state) 
                                                      | (1U 
                                                         == vlSelf->top__DOT__topf1_fsm__DOT__current_state)) 
                                                     | (2U 
                                                        == vlSelf->top__DOT__topf1_fsm__DOT__current_state)) 
                                                    | (3U 
                                                       == vlSelf->top__DOT__topf1_fsm__DOT__current_state)) 
                                                   | (4U 
                                                      == vlSelf->top__DOT__topf1_fsm__DOT__current_state)) 
                                                  | (5U 
                                                     == vlSelf->top__DOT__topf1_fsm__DOT__current_state)) 
                                                 | (6U 
                                                    == vlSelf->top__DOT__topf1_fsm__DOT__current_state)) 
                                                | (7U 
                                                   == vlSelf->top__DOT__topf1_fsm__DOT__current_state))
                                                ? (
                                                   (0U 
                                                    == vlSelf->top__DOT__topf1_fsm__DOT__current_state)
                                                    ? 1U
                                                    : 
                                                   ((1U 
                                                     == vlSelf->top__DOT__topf1_fsm__DOT__current_state)
                                                     ? 2U
                                                     : 
                                                    ((2U 
                                                      == vlSelf->top__DOT__topf1_fsm__DOT__current_state)
                                                      ? 3U
                                                      : 
                                                     ((3U 
                                                       == vlSelf->top__DOT__topf1_fsm__DOT__current_state)
                                                       ? 4U
                                                       : 
                                                      ((4U 
                                                        == vlSelf->top__DOT__topf1_fsm__DOT__current_state)
                                                        ? 5U
                                                        : 
                                                       ((5U 
                                                         == vlSelf->top__DOT__topf1_fsm__DOT__current_state)
                                                         ? 6U
                                                         : 
                                                        ((6U 
                                                          == vlSelf->top__DOT__topf1_fsm__DOT__current_state)
                                                          ? 7U
                                                          : 8U)))))))
                                                : 0U)
          : vlSelf->top__DOT__topf1_fsm__DOT__current_state);
}

VL_ATTR_COLD void Vtop___024root___eval_initial(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
}

VL_ATTR_COLD void Vtop___024root___eval_settle(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_settle\n"); );
    // Body
    Vtop___024root___settle__TOP__0(vlSelf);
}

VL_ATTR_COLD void Vtop___024root___final(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___final\n"); );
}

VL_ATTR_COLD void Vtop___024root___ctor_var_reset(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->rst = VL_RAND_RESET_I(1);
    vlSelf->en = VL_RAND_RESET_I(1);
    vlSelf->N = VL_RAND_RESET_I(16);
    vlSelf->out = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__address = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__topclktick__DOT__count = VL_RAND_RESET_I(16);
    vlSelf->top__DOT__topf1_fsm__DOT__current_state = 0;
    vlSelf->top__DOT__topf1_fsm__DOT__next_state = 0;
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
