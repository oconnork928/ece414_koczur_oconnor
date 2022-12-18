/* 
 * File:   fsm_calc.h
 * Author: oconnork
 *
 * Created on October 20, 2022, 8:35 AM
 */

#ifndef FSM_CALC_H
#define	FSM_CALC_H

extern int32_t dis, op1,op2,ans;
extern int16_t state, error, error_zero;
extern char oper1, oper2;

extern void calc_init();

extern void calc_tick();

#endif
