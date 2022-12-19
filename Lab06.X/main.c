


#include <xc.h>
#include <plib.h>
#include <inttypes.h>
#include <stdio.h>

#include "config_clk.h"
#include "ztimer2.h"
#include "uart1.h"
#include "ic1.h"
#include "oc1_plib.h"

// Number of iterations for testing. You may need to play with this
// number. If it is too short, you may not get a very accurate measure
// of performance. Too long and you will have to wait forever.
#define NUM_ITERATIONS 100000
// This is the number of times you repeat the operation within the
// loop. You want to repeat enough times that the loop overhead is
// small for the simplest operations.
#define NUM_REPS 10

void main(){
    uint16_t period, lastperiod;
    uint8_t buffer [20];
    zTimerOn();
    zTimerSet(1000);
    uart1_init(9600);
    uart1_txwrite_str("Beginning IC1 test\n\r");
    ic1_init();
    uint16_t duty = 0xffff;
    oc1_init_plib(duty);
    INTEnableSystemMultiVectoredInt();
    PIDfsm_init();
    while(1){
        oc1_setduty_plib(duty);
        if (zTimerReadFlag()) {
            //period = ic1_getperiod();
            //printf("period: %6d   rpm: %6d\r\n", period, ic1_getrpm());
            //if (period != lastperiod) {
            //    lastperiod = period;
            //}
            PIDfsm_tick();
            period = ic1_getperiod();
            printf("period: %6d  rpm: %6d\r\n", period, ic1_ticks2rpm(period));
        }
        
   }       
}
