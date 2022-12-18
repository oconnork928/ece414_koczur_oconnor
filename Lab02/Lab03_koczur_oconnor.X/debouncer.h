/* 
 * File:   debouncer.h
 * Author: oconnork
 *
 * Created on September 22, 2022, 10:15 PM
 */

#ifndef DEBOUNCER_H
#define	DEBOUNCER_H

extern unsigned int but_r_down;
extern unsigned int but_l_down;

extern void debounce_l_init();

extern void debounce_r_init();


extern void debounce_l_tick();

extern void debounce_r_tick();


#endif	/* DEBOUNCER_H */

