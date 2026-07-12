// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmini_soc_tb.h for the primary calling header

#include "verilated.h"

#include "Vmini_soc_tb__Syms.h"
#include "Vmini_soc_tb__Syms.h"
#include "Vmini_soc_tb___024root.h"

VL_INLINE_OPT VlCoroutine Vmini_soc_tb___024root___eval_initial__TOP__0(Vmini_soc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmini_soc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmini_soc_tb___024root___eval_initial__TOP__0\n"); );
    // Body
    vlSymsp->_vm_contextp__->dumpfile(std::string{"dump.vcd"});
    vlSymsp->_traceDumpOpen();
    co_await vlSelf->__VdlySched.delay(0xaULL, nullptr, 
                                       "mini_soc_tb.v", 
                                       18);
    vlSelf->mini_soc_tb__DOT__rst = 0U;
    co_await vlSelf->__VdlySched.delay(0x14ULL, nullptr, 
                                       "mini_soc_tb.v", 
                                       19);
    vlSelf->mini_soc_tb__DOT__alu_sel = 1U;
    co_await vlSelf->__VdlySched.delay(0x1eULL, nullptr, 
                                       "mini_soc_tb.v", 
                                       20);
    vlSelf->mini_soc_tb__DOT__alu_sel = 0U;
    co_await vlSelf->__VdlySched.delay(0x14ULL, nullptr, 
                                       "mini_soc_tb.v", 
                                       21);
    vlSelf->mini_soc_tb__DOT__mux_sel = 0U;
    co_await vlSelf->__VdlySched.delay(0x1eULL, nullptr, 
                                       "mini_soc_tb.v", 
                                       22);
    vlSelf->mini_soc_tb__DOT__mux_sel = 1U;
    co_await vlSelf->__VdlySched.delay(0x32ULL, nullptr, 
                                       "mini_soc_tb.v", 
                                       23);
    VL_FINISH_MT("mini_soc_tb.v", 23, "");
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vmini_soc_tb___024root___dump_triggers__act(Vmini_soc_tb___024root* vlSelf);
#endif  // VL_DEBUG

void Vmini_soc_tb___024root___eval_triggers__act(Vmini_soc_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmini_soc_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmini_soc_tb___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.set(0U, ((IData)(vlSelf->mini_soc_tb__DOT__clk) 
                                     & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__mini_soc_tb__DOT__clk__0))));
    vlSelf->__VactTriggered.set(1U, vlSelf->__VdlySched.awaitingCurrentTime());
    vlSelf->__Vtrigprevexpr___TOP__mini_soc_tb__DOT__clk__0 
        = vlSelf->mini_soc_tb__DOT__clk;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vmini_soc_tb___024root___dump_triggers__act(vlSelf);
    }
#endif
}
