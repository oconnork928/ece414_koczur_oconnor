/* 
 * File:   ts_lcd.h
 * Author: oconnork
 *
 * Created on October 13, 2022, 8:24 AM
 */

#include<inttypes.h>
#include<xc.h>
#include <stdio.h>

#ifndef TS_LCD_H
#define	TS_LCD_H


extern uint8_t lcd_get_ts (uint16_t *x, uint16_t *y);

extern void ts_lcd_init();

#endif	/* TS_LCD_H */

