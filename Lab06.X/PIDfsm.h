/* 
 * File:   PIDfsm.h
 * Author: oconnork
 *
 * Created on November 10, 2022, 9:06 AM
 */

#ifndef PIDFSM_H
#define	PIDFSM_H

extern int16_t desired, ki, kd, kp;

extern void PIDfsm_init();
extern void PIDfsm_tick();

#endif	/* PIDFSM_H */

