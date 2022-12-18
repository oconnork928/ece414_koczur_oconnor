#include<inttypes.h>
#include<xc.h>
#include <stdio.h>
#include <plib.h>

#include "adc_intf.h"
#include "TouchScreen.h"
#include "tft_master.h"
#include "tft_gfx.h"



uint8_t lcd_get_ts (uint16_t *x, uint16_t *y) {
   
    
}

void ts_lcd_init() {
    tft_init_hw();
    tft_begin();
    tft_setRotation(2);
    
    tft_fillScreen(ILI9341_BLACK);
    
    tft_drawLine(0, 260, 240, 260, 0xFFFF);
    tft_drawLine(0, 200, 240, 200, 0xFFFF);
    tft_drawLine(0, 140, 240, 140, 0xFFFF);
    tft_drawLine(0, 80, 240, 80, 0xFFFF);
    tft_drawLine(60, 320, 60, 80, 0xFFFF);
    tft_drawLine(120, 320, 120, 80, 0xFFFF);
    tft_drawLine(180, 320, 180, 80, 0xFFFF);
    tft_drawLine(240, 320, 240, 80, 0xFFFF);
    
    tft_drawChar(20,100,'7',0xFFFF,0,3);
    tft_drawChar(80,100,'8',0xFFFF,0,3);
    tft_drawChar(140,100,'9',0xFFFF,0,3);
    tft_drawChar(20,160,'4',0xFFFF,0,3);
    tft_drawChar(80,160,'5',0xFFFF,0,3);
    tft_drawChar(140,160,'6',0xFFFF,0,3);
    tft_drawChar(20,220,'1',0xFFFF,0,3);
    tft_drawChar(80,220,'2',0xFFFF,0,3);
    tft_drawChar(140,220,'3',0xFFFF,0,3);
    tft_drawChar(80,280,'0',0xFFFF,0,3);
    tft_drawChar(200,280,'+',0xFFFF,0,3);
    tft_drawChar(200,220,'-',0xFFFF,0,3);
    tft_drawChar(200,100,'/',0xFFFF,0,3);
    tft_drawChar(200,160,'*',0xFFFF,0,3);
    tft_drawChar(140,280,'=',0xFFFF,0,3);
    tft_drawChar(20,280,'c',0xFFFF,0,3);
}

