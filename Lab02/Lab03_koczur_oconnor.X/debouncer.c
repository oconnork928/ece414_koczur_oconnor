#include "porta_in.h"
#include "pongfsm.h"


unsigned int but_r_down;
unsigned int but_l_down;

static enum debounce_l_states {NOPUSHL, MAYBEPUSHL, PUSHL, MAYBENOPUSHL}
l_state;
static enum debounce_r_states {NOPUSHR, MAYBEPUSHR, PUSHR, MAYBENOPUSHR}
r_state;


void debounce_init(){
    l_state = NOPUSHL;
    porta_in_init();
    r_state = NOPUSHR;
}

void debounce_l_tick(){
    uint16_t portval;
    uint16_t but_l;
    portval = porta_in_read();
    but_l = (~portval & 0x1);
    
    switch (l_state) {
        case NOPUSHL:
            if(but_l) l_state = MAYBEPUSHL;
            else l_state = NOPUSHL;
            break;
        case MAYBEPUSHL:
            if(but_l) l_state = PUSHL;
            else l_state = NOPUSHL;
            break;
        case PUSHL:
            if(but_l) l_state = PUSHL;
            else l_state = MAYBENOPUSHL;
            break;
        case MAYBENOPUSHL:
            if(but_l) l_state = PUSHL;
            else l_state = NOPUSHL;
            break;
        default:
            l_state = NOPUSHL;
            break;
    }
    
    switch (l_state) {
        case NOPUSHL:
            but_l = 0;
            break;
        case MAYBEPUSHL:
            but_l = 0;
            break;
        case PUSHL:
            but_l = 1;
            but_l_down = 1;
            break;
        case MAYBENOPUSHL:
            but_l = 0;
            break;
        default:
            but_l = 0;
            break;
    }
    
    
}
    
void debounce_r_tick(){
    uint16_t portval;
    uint16_t but_r;
    portval = porta_in_read();
    but_r = (~portval & 0x2);
    
    switch (r_state) {
        case NOPUSHR:
            if(but_r) r_state = MAYBEPUSHR;
            else r_state = NOPUSHR;
            break;
        case MAYBEPUSHR:
            if(but_r) r_state = PUSHR;
            else r_state = NOPUSHR;
            break;
        case PUSHR:
            if(but_r) r_state = PUSHR;
            else r_state = MAYBENOPUSHR;
            break;
        case MAYBENOPUSHR:
            if(but_r) r_state = PUSHR;
            else r_state = NOPUSHR;
            break;
        default:
            r_state = NOPUSHR;
            break;
    }
    
    switch (r_state) {
        case NOPUSHR:
            but_r = 0;
            break;
        case MAYBEPUSHR:
            but_r = 0;
            break;
        case PUSHR:
            but_r = 1;
            but_r_down = 1;
            break;
        case MAYBENOPUSHR:
            but_r = 0;
            break;
        default:
            but_r = 0;
            break;
    }
}
