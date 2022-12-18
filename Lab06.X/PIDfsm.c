#include <stdint.h>

int16_t desired, ki, kd, kp, actuator, actualPrev, error, deriv, integ, actual;
float actuator_f;

static enum pid_states {INIT, CTRL} pid_state;

PIDfsm_init(){
    pid_state = INIT;
}

PIDfsm_tick(){
    actual = ic1_ticks2rpm(ic1_getperiod());
    switch(pid_state){
        case INIT:
            actuator_f = 0;
            actualPrev = 0;
            kd = 0;
            ki = 0;
            kp = 400;
            break;
        case CTRL:
            error = desired - actual;
            deriv = actual - actualPrev;
            
            integ = integ + error;
            if(integ > 300) integ = 300;
            else if(integ < -300) integ = -300;
            
            actuator_f = kp * error - kd * deriv + ki * integ;
            actualPrev = actual;
            
            if(actuator_f > 65535) actuator = 0xffff;
            else if (actuator_f < 0) actuator = 0;
            else actuator = (uint16_t)actuator_f;
            
            oc1_setduty_plib(actuator);
            
            break;
    }
}
