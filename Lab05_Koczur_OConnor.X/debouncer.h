/* 
 * File:   debouncer.h
 * Author: oconnork
 *
 * Created on September 22, 2022, 10:15 PM
 */

#ifndef DEBOUNCER_H
#define	DEBOUNCER_H

extern uint16_t but_down;
extern char c;

extern void debounce_init();

extern void debounce_tick();


#endif	/* DEBOUNCER_H */

