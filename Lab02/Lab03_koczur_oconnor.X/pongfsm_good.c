#include <xc.h>
#include <inttypes.h>
#include "portb_out.h"
#include "debouncer.h"

static enum pong_states {START, LEFT, RIGHT, FAIL}
pong_state;

void pong_init(){
    pong_state = START;
    portb_out_init();
}

void pong_tick(){
    uint8_t r;
    uint8_t i;
    uint16_t xout;
    
    switch (pong_state){
        case START:
            r = rand() % 2;
            if( r < .5){
                xout = 0x0001;
                portb_out_write(xout);
            } else {
                xout = 0x0080;
                portb_out_write(xout);
            }
            break;
        case LEFT:
            portb_out_write(xout);
            xout = xout << 1;
            break;
        case RIGHT:
            portb_out_write(xout);
            xout = xout >> 1;
            break;
        case FAIL:
            i++;
            if(i % 2 == 0) portb_out_write(0x0000);
            else portb_out_write(0x00FF);
            break;
        default:
            portb_out_write(0x0000);
            break;
    }
    
    switch (pong_state){
        case START:
            if(r < .5){
                if(but_l_down){
                    pong_state = RIGHT;
                    but_l_down = 0;
                }   
            }
            else{
                if(but_r_down){
                    pong_state = LEFT;
                    but_r_down = 0;
                }
            }
            break;
        case LEFT:
            if(xout = 0x0001){
                if(but_l_down){
                    pong_state = RIGHT;
                    but_l_down = 0;
                }
                else pong_state = FAIL;
            } else {
                if(but_l_down){
                    pong_state = FAIL;
                    but_l_down = 0;
                } 
                if(but_r_down){
                    pong_state = FAIL;
                    but_r_down = 0;
                }
            }
            break;
        case RIGHT:
            if(xout = 0x0080){
                if(but_r_down){
                    pong_state = LEFT;
                    but_r_down = 0;
                }
                else pong_state = FAIL;
            } else {
                if(but_l_down){
                    pong_state = FAIL;
                    but_l_down = 0;
                } 
                if(but_r_down){
                    pong_state = FAIL;
                    but_r_down = 0;
                }
            }
            break;
        case FAIL:
            if(i < 6) pong_state = FAIL;
            else pong_state = START;
            break;
        default:
            pong_state = START;
            break;
            
    }
    
    
}