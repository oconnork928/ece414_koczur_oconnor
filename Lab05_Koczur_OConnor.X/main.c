#pragma config FNOSC = FRCPLL, POSCMOD = OFF
#pragma config FPLLIDIV = DIV_2, FPLLMUL = MUL_20
#pragma config FPBDIV = DIV_1, FPLLODIV = DIV_2
#pragma config FWDTEN = OFF, JTAGEN = OFF, FSOSCEN = OFF
#define SHAMT 21

#include<inttypes.h>
#include<xc.h>
#include <stdio.h>
#include <plib.h>

#include "adc_intf.h"
#include "debouncer.h"
#include "fsm_calc.h"
#include "single_pulser.h"
#include "tft_gfx.h"
#include "tft_master.h"
#include "timer.h"
#include "Touchscreen.h"
#include "ts_lcd.h"


int main(int argc, char** argv){
    char buffer[30];
    
    SYSTEMConfigPerformance(PBCLK);
    
    configureADC();
    
    
    //initialize screen
    tft_init_hw();
    tft_begin();
    tft_setRotation(3); 
    tft_fillScreen(ILI9341_BLACK);  
    ts_lcd_init();
    
    //initialize TStruct
//    struct TSPoint p;
//    p.x = 0;
//    p.y = 0;
//    p.z = 0;
    
    //initialize timer
    uint16_t ta1, ta2;
    const uint16_t PERIOD = 50;
    timer1_init();
    ta1 = timer1_read();
    
    //initialize FSMs
    debounce_init();
    calc_init();
    uint64_t m = 2147483647;
    while(1){
        ta2 = timer1_read();
        
        if(timer1_ms_elapsed(ta1,ta2)>= PERIOD ) {
            ta1 = ta2;
            single_pulse();
            calc_tick();
        }
        
        tft_setCursor(20, 50);
        tft_setTextColor(ILI9341_WHITE); 
        tft_setTextSize(2);

        //erase old text
        tft_setTextColor(ILI9341_BLACK);
        tft_writeString(buffer);
        
        tft_setCursor(20, 50);
        tft_setTextColor(ILI9341_WHITE);
        
        if(error){
            sprintf(buffer,"             ERROR");
            error = 0;
        }
        else if(error_zero){
            sprintf(buffer,"             DIV/0");
            error_zero = 0;
        }
        else sprintf(buffer, "%18d",dis);
        
        tft_writeString(buffer);
        delay_ms(100);
    }
    
}

