#include <xc.h>
#include <inttypes.h>
#include "portb_out.h"
#include "debouncer.h"

uint16_t period;
uint8_t r;
uint8_t win;

static enum pong_states {START, LEFT0, LEFT1, LEFT2, LEFT3, LEFT4, LEFT5, LEFT6, LEFT7, 
   RIGHT0, RIGHT1, RIGHT2, RIGHT3, RIGHT4, RIGHT5, RIGHT6, RIGHT7, FAIL0, FAIL1, FAIL2, FAIL3, FAIL4, FAIL5}
pong_state;

void pong_init(){
    pong_state = START;
    portb_out_init();
    r = rand() % 2;
    win = 0;
}

void pong_tick(){
    switch (pong_state){
        case START:
            period = 400;
            if(r == 0){
                if(but_l_down){
                    pong_state = RIGHT0;
                    win = 1;
                    but_l_down = 0;
                }   
            }
            else if(r == 1){
                if(but_r_down){
                    pong_state = LEFT0;
                    win = 0;
                    but_r_down = 0;
                }
            }
            break;
        case LEFT0:
            if(but_r_down){
                pong_state = LEFT1;
                win = 0;
                but_r_down =0;
            }
            else if(but_l_down){
                pong_state = FAIL0;
                win = 1;
                but_l_down = 0;
            } else pong_state = LEFT1;
            break;
        case LEFT1:
            if(but_l_down){
                pong_state = FAIL0;
                but_l_down =0;
                win = 0;
            }
            else if(but_r_down){
                pong_state = FAIL0;
                but_r_down =0;
                win = 1;
            } else pong_state = LEFT2;
            break;
        case LEFT2:
            if(but_l_down){
                pong_state = FAIL0;
                but_l_down =0;
                win = 0;
            }
            else if(but_r_down){
                pong_state = FAIL0;
                but_r_down =0;
                win = 1;
            } else pong_state = LEFT3;
            break;
        case LEFT3:
            if(but_l_down){
                pong_state = FAIL0;
                but_l_down =0;
                win = 0;
            }
            else if(but_r_down){
                pong_state = FAIL0;
                but_r_down =0;
                win = 1;
            } else pong_state = LEFT4;
            break;
        case LEFT4:
            if(but_l_down){
                pong_state = FAIL0;
                but_l_down =0;
                win = 0;
            }
            else if(but_r_down){
                pong_state = FAIL0;
                but_r_down =0;
                win = 1;
            } else pong_state = LEFT5;
            break;
        case LEFT5:
            if(but_l_down){
                pong_state = FAIL0;
                but_l_down =0;
                win = 0;
            }
            else if(but_r_down){
                pong_state = FAIL0;
                but_r_down =0;
                win = 1;
            } else pong_state = LEFT6;
            break;
        case LEFT6:
            if(but_l_down){
                pong_state = FAIL0;
                but_l_down =0;
                win = 0;
            }
            else if(but_r_down){
                pong_state = FAIL0;
                but_r_down =0;
                win = 1;
            } else pong_state = LEFT7;
            break;
        case LEFT7:
            if(but_l_down){
                pong_state = RIGHT0;
                period = period - 25;
                win = 1;
                but_l_down = 0;
            } else {
                pong_state = FAIL0;
            }
            break;
        case RIGHT7:
            if(but_r_down){
                pong_state = LEFT0;
                period = period - 25;
                win = 0;
                but_r_down = 0;
            } else {
                pong_state = FAIL0;
            }
            break;
        case RIGHT6:
            if(but_l_down){
                pong_state = FAIL0;
                but_l_down =0;
                win = 0;
            }
            else if(but_r_down){
                pong_state = FAIL0;
                but_r_down =0;
                win = 1;
            } else pong_state = RIGHT7;
            break;
        case RIGHT5:
            if(but_l_down){
                pong_state = FAIL0;
                but_l_down =0;
                win = 0;
            }
            else if(but_r_down){
                pong_state = FAIL0;
                but_r_down =0;
                win = 1;
            } else pong_state = RIGHT6;
            break;
        case RIGHT4:
            if(but_l_down){
                pong_state = FAIL0;
                but_l_down =0;
                win = 0;
            }
            else if(but_r_down){
                pong_state = FAIL0;
                but_r_down =0;
                win = 1;
            } else pong_state = RIGHT5;
            break;
        case RIGHT3:
            if(but_l_down){
                pong_state = FAIL0;
                but_l_down =0;
                win = 0;
            }
            else if(but_r_down){
                pong_state = FAIL0;
                but_r_down =0;
                win = 1;
            } else pong_state = RIGHT4;
            break;
        case RIGHT2:
            if(but_l_down){
                pong_state = FAIL0;
                but_l_down =0;
                win = 0;
            }
            else if(but_r_down){
                pong_state = FAIL0;
                but_r_down =0;
                win = 1;
            } else pong_state = RIGHT3;
            break;
        case RIGHT1:
            if(but_l_down){
                pong_state = FAIL0;
                but_l_down =0;
                win = 0;
            }
            else if(but_r_down){
                pong_state = FAIL0;
                but_r_down =0;
                win = 1;
            } else pong_state = RIGHT2;
            break;
        case RIGHT0:
            if(but_l_down){
                pong_state = RIGHT1;
                but_l_down = 0;
                win = 1;
            }
            else if(but_r_down){
                pong_state = FAIL0;
                but_r_down =0;
                win = 1;
            } else pong_state = RIGHT1;
            break;
        case FAIL0:
            if(but_l_down) but_l_down = 0;
            if(but_r_down) but_r_down = 0;
            pong_state = FAIL1;
            break;
        case FAIL1:
            if(but_l_down) but_l_down = 0;
            if(but_r_down) but_r_down = 0;
            pong_state = FAIL2;
            break;
        case FAIL2:
            if(but_l_down) but_l_down = 0;
            if(but_r_down) but_r_down = 0;
            pong_state = FAIL3;
            break;
        case FAIL3:
            if(but_l_down) but_l_down = 0;
            if(but_r_down) but_r_down = 0;
            pong_state = FAIL4;
            break;
        case FAIL4:
            if(but_l_down) but_l_down = 0;
            if(but_r_down) but_r_down = 0;
            pong_state = FAIL5;
            break;
        case FAIL5:
            if(but_l_down) but_l_down = 0;
            if(but_r_down) but_r_down = 0;
            r = rand() % 2;
            pong_state = START;
            break;
        default:
            portb_out_write(0x0000);
            break;     
    }
    switch (pong_state){
        case START:
            if( r == 0){
                portb_out_write(0x0080);
            } else if (r == 1) {
                portb_out_write(0x0001);
            }
            break;
        case LEFT0:
            portb_out_write(0x0001);
            break;
        case LEFT1:
            portb_out_write(0x0002);
            break;
        case LEFT2:
            portb_out_write(0x0004);
            break;
        case LEFT3:
            portb_out_write(0x0008);
            break;
        case LEFT4:
            portb_out_write(0x0010);
            break;
        case LEFT5:
            portb_out_write(0x0020);
            break;
        case LEFT6:
            portb_out_write(0x0040);
            break;
        case LEFT7:
            portb_out_write(0x0080);
            break;
        case RIGHT7:
            portb_out_write(0x0001);
            break;
        case RIGHT6:
            portb_out_write(0x0002);
            break;
        case RIGHT5:
            portb_out_write(0x0004);
            break;
        case RIGHT4:
            portb_out_write(0x0008);
            break;
        case RIGHT3:
            portb_out_write(0x0010);
            break;
        case RIGHT2:
            portb_out_write(0x0020);
            break;
        case RIGHT1:
            portb_out_write(0x0040);
            break;
        case RIGHT0:
            portb_out_write(0x0080);
            break;
        case FAIL0:
            if(win)
                portb_out_write(0x0080);
            else if (win == 0)
                portb_out_write(0x0001);
            break;
        case FAIL1:
            portb_out_write(0x0000);
            break;
        case FAIL2:
            if(win)
                portb_out_write(0x0080);
            else if (win == 0)
                portb_out_write(0x0001);
            break;
        case FAIL3:
            portb_out_write(0x0000);
            break;
        case FAIL4:
            if(win)
                portb_out_write(0x0080);
            else if (win == 0)
                portb_out_write(0x0001);
            break;
        case FAIL5:
            portb_out_write(0x0000);
            break;
        default:
            portb_out_write(0x00FF);
            break;
    }
    
    
}