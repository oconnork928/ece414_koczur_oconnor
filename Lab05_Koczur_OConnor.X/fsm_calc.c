#include<inttypes.h>
#include<xc.h>
#include <stdio.h>
#include <plib.h>

#include "adc_intf.h"
#include "TouchScreen.h"
#include "tft_master.h"
#include "tft_gfx.h"
#include "ts_lcd.h"
#include "single_pulser.h"
#include "debouncer.h"


int32_t dis, error, error_zero;
int16_t state;

    int64_t op1;
    int64_t op2;
    int64_t ans;
    int16_t num, state, calc, zero;
    char oper1, oper2;
    int16_t op2_check;

static enum calc_states{START, OP1, OP1_IN, OPER, OP2, OP2_IN, EQUAL, ERROR} calc_state;

void calc_init(){
    calc_state = START;
}

void calc_tick(){

    switch(calc_state){
        case START:
            op2_check = 0;
            ans = 0;
            zero = 0;
            op1 = 0;
            op2 = 0;
            calc = 0;
            if(pulse){
                if(c >= 48 && c <= 57){
                    if(c == 48) num = 0;
                    if(c == 49) num = 1;
                    if(c == 50) num = 2;
                    if(c == 51) num = 3;
                    if(c == 52) num = 4;
                    if(c == 53) num = 5;
                    if(c == 54) num = 6;
                    if(c == 55) num = 7;
                    if(c == 56) num = 8;
                    if(c == 57) num = 9;
                    
                    calc_state = OP1_IN;
                    pulse = 0;
                }
            }
            dis = 0;
            state = 0;
            break;
        case OP1_IN:
            op1 = op1 * 10 + num;
            calc = 0;
            calc_state = OP1;
            dis = op1;
            ans = op1;
            state = 1;
            break;
        case OP1:
            calc = 0;
            if(op1 > 2147483647) calc_state = ERROR;
            if(pulse){
                if(c >= 48 && c <= 57){
                    if(c == 48) num = 0;
                    if(c == 49) num = 1;
                    if(c == 50) num = 2;
                    if(c == 51) num = 3;
                    if(c == 52) num = 4;
                    if(c == 53) num = 5;
                    if(c == 54) num = 6;
                    if(c == 55) num = 7;
                    if(c == 56) num = 8;
                    if(c == 57) num = 9;
                    
                    calc_state = OP1_IN;
                }
                if(c == 42 || c == 43 || c == 45 || c == 47){
                    oper1 = c;
                    calc_state = OPER;
                }
                if(c == 99) calc_state = START;
                if(c == '=') calc_state = EQUAL;
                pulse = 0;
            }
            state = 2;
            dis = op1;
            break;
        case OPER:
            if(op2_check == 1){
                if(oper1 == 42) ans = op1 * op2;
                else if(oper1 == 43) ans = op1 + op2;
                else if(oper1 == 47){
                    if(op2 == 0){
                        zero = 1;
                        calc_state = ERROR;
                    }
                    else ans = op1 / op2;
                }
                else if(oper1 == 45) ans = op1 - op2;
                if(ans > 2147483647) calc_state = ERROR;
                if(ans < -2147483647)calc_state = ERROR;
                oper1 = oper2;
                op1 = ans;
                op2 = 0;
                op2_check = 0;
            }
            if(pulse){
                if(c >= 48 && c <= 57){
                    if(c == 48) num = 0;
                    if(c == 49) num = 1;
                    if(c == 50) num = 2;
                    if(c == 51) num = 3;
                    if(c == 52) num = 4;
                    if(c == 53) num = 5;
                    if(c == 54) num = 6;
                    if(c == 55) num = 7;
                    if(c == 56) num = 8;
                    if(c == 57) num = 9;
                    
                    calc_state = OP2_IN;
                }
                
                if(c == 99) calc_state = START;
                pulse = 0;
            }
            state = 3;
            dis = op1;
            break;
        case OP2_IN:
            calc = 0;
            op2_check = 1;
            op2 = op2 * 10 + num;
            state = 4;
            calc_state = OP2;
            dis = op2;
            break;
        case OP2:
            calc = 0;
            if(op2 > 2147483647) calc_state = ERROR;
  //          if(op2 < -2147483647)calc_state = ERROR;
            if(op1 > 2147483647) calc_state = ERROR;
            if(op1 < -2147483647)calc_state = ERROR;
            dis = op2;
            if(pulse){
                if(c >= 48 && c <= 57){
                    if(c == 48) num = 0;
                    if(c == 49) num = 1;
                    if(c == 50) num = 2;
                    if(c == 51) num = 3;
                    if(c == 52) num = 4;
                    if(c == 53) num = 5;
                    if(c == 54) num = 6;
                    if(c == 55) num = 7;
                    if(c == 56) num = 8;
                    if(c == 57) num = 9;
                    
                    calc_state = OP2_IN;
                }
                if(c == 42 || c == 43 || c == 45 || c == 47){
                    oper2 = c;
                    calc_state = OPER;
                }
                if(c == 99) calc_state = START;
                if(c == '=') calc_state = EQUAL;
                
                pulse = 0;
            }
            state = 5;
            break;
        case EQUAL:
            if(op2_check == 1){
                if(oper1 == 43) ans = op1 + op2;
                if(oper1 == 45) ans = op1 - op2;
                if(oper1 == 42) ans = op1 * op2;
                if(oper1 == 47){
                    if(op2 == 0){
                        zero = 1;
                        calc_state = ERROR;
                    }
                    else ans = op1 / op2;
                }
                if(ans > 2147483647) calc_state = ERROR;
                if(ans < -2147483647)calc_state = ERROR;
            } else ans = op1;
            dis = ans;   
            if(pulse){
                if(c == 99) calc_state = START;
                pulse = 0;
            }
            state = 6;
            break;
        case ERROR:
            if(zero == 1){
                error_zero = 1;
            } else error = 1;
            if(pulse){
                zero = 0;
                if(c == 99) calc_state = START;
                pulse = 0;
            }
            state = 7;
            break;
    }
 
}

