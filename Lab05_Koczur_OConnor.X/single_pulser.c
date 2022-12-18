#include<inttypes.h>
#include<xc.h>
#include <stdio.h>
#include <plib.h>

#include "adc_intf.h"
#include "TouchScreen.h"
#include "tft_master.h"
#include "tft_gfx.h"
#include "debouncer.h"

uint16_t pulse = 0;

uint16_t d1, d2 = 0;
void single_pulse(){
    debounce_tick();
   
    d2 = !d1;
    d1 = but_down;
    pulse = d1 & d2;
    but_down = 0;
}

