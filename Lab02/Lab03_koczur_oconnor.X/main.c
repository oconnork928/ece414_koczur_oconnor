#pragma config FNOSC = FRCPLL, POSCMOD = OFF
#pragma config FPLLIDIV = DIV_2, FPLLMUL = MUL_20
#pragma config FPBDIV = DIV_1, FPLLODIV = DIV_2
#pragma config FWDTEN = OFF, JTAGEN = OFF, FSOSCEN = OFF
#include <inttypes.h> 
#include "porta_in.h"
#define SHAMT 21

#include <xc.h>
#include <inttypes.h>
#include "timer.h"
#include "pongfsm.h"
#include "debouncer.h"



int main(){
    uint16_t ta1, ta2, ta1f, ta2f;
    const uint16_t DBPERIOD =50;
    timer1_init();
    pong_init();
    debounce_init();
    ta1 = ta1f = timer1_read();
    while(1) {
        ta2 = ta2f = timer1_read();
        if(timer1_ms_elapsed(ta1,ta2)>= DBPERIOD ) {
            ta1 = ta2;
            debounce_l_tick();
            debounce_r_tick();
        }
        if(timer1_ms_elapsed(ta1f,ta2f)>= period ) {
            pong_tick();
            ta1f = ta2f;
        }
        
        
    }
}