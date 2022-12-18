#include<inttypes.h>
#include<xc.h>
#include <stdio.h>
#include <plib.h>

#include "adc_intf.h"
#include "TouchScreen.h"
#include "tft_master.h"
#include "tft_gfx.h"

uint16_t but_down;
char c;

static enum debounce_num_states {NOPUSHL, MAYBEPUSHL, PUSHL, MAYBENOPUSHL}
num_state;

void debounce_init(){
    num_state = NOPUSHL;
}

void debounce_tick(){
    struct TSPoint p;
    p.x = 0;
    p.y = 0;
    p.z = 0;
    getPoint(&p);
    uint16_t but = 0;
    if(p.z > 50) but = 1;
    else but = 0;
    
    switch (num_state) {
        case NOPUSHL:
            if(but) num_state = MAYBEPUSHL;
            else num_state = NOPUSHL;
            break;
        case MAYBEPUSHL:
            if(but) num_state = PUSHL;
            else num_state = NOPUSHL;
            break;
        case PUSHL:
            if(but) num_state = PUSHL;
            else num_state = MAYBENOPUSHL;
            break;
        case MAYBENOPUSHL:
            if(but) num_state = PUSHL;
            else num_state = NOPUSHL;
            break;
        default:
            num_state = NOPUSHL;
            break;
    }
    
    switch (num_state) {
        case NOPUSHL:
            but = 0;
            break;
        case MAYBEPUSHL:
            but = 0;
            break;
        case PUSHL:
            but = 1;
            but_down = 1;
            if(p.x >= 710 && p.y <= 230 ) c = 'c';
            if(p.x >= 710 && (p.y <= 390 && p.y > 230) ) c = '1';
            if(p.x >= 710 && (p.y <= 550 && p.y > 390) ) c = '4';
            if(p.x >= 710 && (p.y <= 700 && p.y > 550) ) c = '7';
            if((p.x < 710 && p.x >= 510) && p.y <= 230 ) c = '0';
            if((p.x < 710 && p.x >= 510) && (p.y <= 390 && p.y > 230) ) c = '2';
            if((p.x < 710 && p.x >= 510) && (p.y <= 550 && p.y > 390) ) c = '5';
            if((p.x < 710 && p.x >= 510) && (p.y <= 700 && p.y > 550) ) c = '8';
            if((p.x < 510 && p.x >= 310) && p.y <= 230 ) c = '=';
            if((p.x < 510 && p.x >= 310) && (p.y <= 390 && p.y > 230) ) c = '3';
            if((p.x < 510 && p.x >= 310) && (p.y <= 550 && p.y > 390) ) c = '6';
            if((p.x < 510 && p.x >= 310) && (p.y <= 700 && p.y > 550) ) c = '9';
            if(p.x < 310 && p.y <= 230 ) c = '+';
            if(p.x < 310 && (p.y <= 390 && p.y > 230) ) c = '-';
            if(p.x < 310 && (p.y <= 550 && p.y > 390) ) c = '*';
            if(p.x < 310 && (p.y <= 700 && p.y > 550) ) c = '/';
            break;
        case MAYBENOPUSHL:
            but = 0;
            break;
        default:
            but = 0;
            break;
    }
    
    
}

