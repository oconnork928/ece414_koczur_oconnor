/*=========================================================
* main.c
* My second PIC32 program.
*
* Author: Erin Koczur and Kristen O'Connor
*====================================================================*/
/* Clock configuration */
#pragma config FNOSC = FRCPLL, POSCMOD = OFF
#pragma config FPLLIDIV = DIV_2, FPLLMUL = MUL_20
#pragma config FPBDIV = DIV_1, FPLLODIV = DIV_2
#pragma config FWDTEN = OFF, JTAGEN = OFF, FSOSCEN = OFF
#include <inttypes.h> 
#include "porta_in.h"
#define SHAMT 21

#include <xc.h>
#include "portb_out.h"

int main() {
   uint8_t in;
   uint16_t out;
   porta_in_init();
   portb_out_init();
   
   while(1){
       in = porta_in_read();
       if(~in & 0x01){
           portb_out_write(0x01);
       }
       if(~in & 0x02){
           portb_out_write(0x02);
       }
       if(~in & 0x04){
           portb_out_write(0x04);
       }
       if(~in & 0x08){
           portb_out_write(0x08);
       }
       if(~in & 0x10){
           portb_out_write(0x10);
       }
   }
//   while (1) {
//       in = porta_in_read();
//       uint8_t x = in & 0xF;
//       if ((in & 0x10) != 0) {
//           out = ~(1 << x);
//       }
//       else {
//           out = (1 << x);
//       }
//       portb_out_write(out);
//   }
}

        
        
