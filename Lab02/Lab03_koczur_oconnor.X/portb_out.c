
#include <xc.h>
#include <inttypes.h>
#define SHAMT 21

#include <xc.h>
#include <inttypes.h>
#include "portb_out.h"
#include "debouncer.h"


void portb_out_init(){
    ANSELB = 0;
    TRISB = 0; 
}
void portb_out_write(uint16_t a){
    uint16_t b1 = a & 0x003F;
    uint16_t b2 = a & 0x07C0;
    uint16_t b3 = a & 0x3800;
    LATB = b1 | (b2 << 1) | (b3 << 2);
}
