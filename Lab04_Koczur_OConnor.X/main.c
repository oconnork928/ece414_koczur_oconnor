#pragma config FNOSC = FRCPLL, POSCMOD = OFF
#pragma config FPLLIDIV = DIV_2, FPLLMUL = MUL_20
#pragma config FPBDIV = DIV_1, FPLLODIV = DIV_2
#pragma config FWDTEN = OFF, JTAGEN = OFF, FSOSCEN = OFF
#define SHAMT 21

#include <inttypes.h>
#include <xc.h>
#include <stdio.h>
#include "uart1.h"
#include "ztimer.h"

// Number of iterations for testing. You may need to play with this
// number. If it is too short, you may not get a very accurate measure
// of performance. Too long and you will have to wait forever.
#define NUM_ITERATIONS 100000
// This is the number of times you repeat the operation within the
// loop. You want to repeat enough times that the loop overhead is
// small for the simplest operations.
#define NUM_REPS 10


void test_uint8_add() {
    uint32_t i;
    uint8_t i1, i2, i3;
    i1 = 15;
    i2 = 26;
    for (i=0; i<NUM_ITERATIONS; i++){
        // Make sure NUM_REPS is the same as the number
        // of repeated lines here.
	    i3 = i1+i2;
        i3 = i1+i2;
        i3 = i1+i2;
        i3 = i1+i2;
        i3 = i1+i2;
        i3 = i1+i2;
        i3 = i1+i2;
        i3 = i1+i2;
        i3 = i1+i2;
        i3 = i1+i2;
    }
}
void test_uint16_add() {
    uint32_t i;
    uint16_t i1, i2, i3;
    i1 = 15;
    i2 = 26;
    for (i=0; i<NUM_ITERATIONS; i++){
        // Make sure NUM_REPS is the same as the number
        // of repeated lines here.
	    i3 = i1+i2;
        i3 = i1+i2;
        i3 = i1+i2;
        i3 = i1+i2;
        i3 = i1+i2;
        i3 = i1+i2;
        i3 = i1+i2;
        i3 = i1+i2;
        i3 = i1+i2;
        i3 = i1+i2;
    }
}
void test_uint32_add() {
    uint32_t i;
    uint32_t i1, i2, i3;
    i1 = 15;
    i2 = 26;
    for (i=0; i<NUM_ITERATIONS; i++){
        // Make sure NUM_REPS is the same as the number
        // of repeated lines here.
  	    i3 = i1+i2;
        i3 = i1+i2;
        i3 = i1+i2;
        i3 = i1+i2;
        i3 = i1+i2;
        i3 = i1+i2;
        i3 = i1+i2;
        i3 = i1+i2;
        i3 = i1+i2;
        i3 = i1+i2;
    }
}
void test_uint64_add() {
    uint32_t i;
    uint64_t i1, i2, i3;
    i1 = 15;
    i2 = 26;
    for (i=0; i<NUM_ITERATIONS; i++){
        // Make sure NUM_REPS is the same as the number
        // of repeated lines here.
        i3 = i1+i2;
        i3 = i1+i2;
        i3 = i1+i2;
        i3 = i1+i2;
        i3 = i1+i2;
        i3 = i1+i2;
        i3 = i1+i2;
        i3 = i1+i2;
        i3 = i1+i2;
        i3 = i1+i2;
    }
}
void test_float_add() {
    uint32_t i;
    float i1, i2, i3;
    i1 = 15;
    i2 = 26;
    for (i=0; i<NUM_ITERATIONS; i++){
        // Make sure NUM_REPS is the same as the number
        // of repeated lines here.
        i3 = i1+i2;
        i3 = i1+i2;
        i3 = i1+i2;
        i3 = i1+i2;
        i3 = i1+i2;
        i3 = i1+i2;
        i3 = i1+i2;
        i3 = i1+i2;
        i3 = i1+i2;
        i3 = i1+i2;
    }
}
void test_double_add() {
    uint32_t i;
    double i1, i2, i3;
    i1 = 15;
    i2 = 26;
    for (i=0; i<NUM_ITERATIONS; i++){
        // Make sure NUM_REPS is the same as the number
        // of repeated lines here.
        i3 = i1+i2;
        i3 = i1+i2;
        i3 = i1+i2;
        i3 = i1+i2;
        i3 = i1+i2;
        i3 = i1+i2;
        i3 = i1+i2;
        i3 = i1+i2;
        i3 = i1+i2;
        i3 = i1+i2;
    }
}
void test_uint8_sub() {
    uint32_t i;
    uint8_t i1, i2, i3;
    i1 = 15;
    i2 = 26;
    for (i=0; i<NUM_ITERATIONS; i++){
        // Make sure NUM_REPS is the same as the number
        // of repeated lines here.
	    i3 = i1-i2;
        i3 = i1-i2;
        i3 = i1-i2;
        i3 = i1-i2;
        i3 = i1-i2;
        i3 = i1-i2;
        i3 = i1-i2;
        i3 = i1-i2;
        i3 = i1-i2;
        i3 = i1-i2;
    }
}
void test_uint16_sub() {
    uint32_t i;
    uint16_t i1, i2, i3;
    i1 = 15;
    i2 = 26;
    for (i=0; i<NUM_ITERATIONS; i++){
        // Make sure NUM_REPS is the same as the number
        // of repeated lines here.
	    i3 = i1-i2;
        i3 = i1-i2;
        i3 = i1-i2;
        i3 = i1-i2;
        i3 = i1-i2;
        i3 = i1-i2;
        i3 = i1-i2;
        i3 = i1-i2;
        i3 = i1-i2;
        i3 = i1-i2;
    }
}
void test_uint32_sub() {
    uint32_t i;
    uint32_t i1, i2, i3;
    i1 = 15;
    i2 = 26;
    for (i=0; i<NUM_ITERATIONS; i++){
        // Make sure NUM_REPS is the same as the number
        // of repeated lines here.
  	    i3 = i1-i2;
        i3 = i1-i2;
        i3 = i1-i2;
        i3 = i1-i2;
        i3 = i1-i2;
        i3 = i1-i2;
        i3 = i1-i2;
        i3 = i1-i2;
        i3 = i1-i2;
        i3 = i1-i2;
    }
}
void test_uint64_sub() {
    uint32_t i;
    uint64_t i1, i2, i3;
    i1 = 15;
    i2 = 26;
    for (i=0; i<NUM_ITERATIONS; i++){
        // Make sure NUM_REPS is the same as the number
        // of repeated lines here.
        i3 = i1-i2;
        i3 = i1-i2;
        i3 = i1-i2;
        i3 = i1-i2;
        i3 = i1-i2;
        i3 = i1-i2;
        i3 = i1-i2;
        i3 = i1-i2;
        i3 = i1-i2;
        i3 = i1-i2;
    }
}
void test_float_sub() {
    uint32_t i;
    float i1, i2, i3;
    i1 = 15;
    i2 = 26;
    for (i=0; i<NUM_ITERATIONS; i++){
        // Make sure NUM_REPS is the same as the number
        // of repeated lines here.
        i3 = i1-i2;
        i3 = i1-i2;
        i3 = i1-i2;
        i3 = i1-i2;
        i3 = i1-i2;
        i3 = i1-i2;
        i3 = i1-i2;
        i3 = i1-i2;
        i3 = i1-i2;
        i3 = i1-i2;
    }
}
void test_double_sub() {
    uint32_t i;
    double i1, i2, i3;
    i1 = 15;
    i2 = 26;
    for (i=0; i<NUM_ITERATIONS; i++){
        // Make sure NUM_REPS is the same as the number
        // of repeated lines here.
        i3 = i1-i2;
        i3 = i1-i2;
        i3 = i1-i2;
        i3 = i1-i2;
        i3 = i1-i2;
        i3 = i1-i2;
        i3 = i1-i2;
        i3 = i1-i2;
        i3 = i1-i2;
        i3 = i1-i2;
    }
}
void test_uint8_mult() {
    uint32_t i;
    uint8_t i1, i2, i3;
    i1 = 15;
    i2 = 26;
    for (i=0; i<NUM_ITERATIONS; i++){
        // Make sure NUM_REPS is the same as the number
        // of repeated lines here.
	    i3 = i1*i2;
        i3 = i1*i2;
        i3 = i1*i2;
        i3 = i1*i2;
        i3 = i1*i2;
        i3 = i1*i2;
        i3 = i1*i2;
        i3 = i1*i2;
        i3 = i1*i2;
        i3 = i1*i2;
    }
}
void test_uint16_mult() {
    uint32_t i;
    uint16_t i1, i2, i3;
    i1 = 15;
    i2 = 26;
    for (i=0; i<NUM_ITERATIONS; i++){
        // Make sure NUM_REPS is the same as the number
        // of repeated lines here.
	    i3 = i1*i2;
        i3 = i1*i2;
        i3 = i1*i2;
        i3 = i1*i2;
        i3 = i1*i2;
        i3 = i1*i2;
        i3 = i1*i2;
        i3 = i1*i2;
        i3 = i1*i2;
        i3 = i1*i2;
    }
}
void test_uint32_mult() {
    uint32_t i;
    uint32_t i1, i2, i3;
    i1 = 15;
    i2 = 26;
    for (i=0; i<NUM_ITERATIONS; i++){
        // Make sure NUM_REPS is the same as the number
        // of repeated lines here.
  	    i3 = i1*i2;
        i3 = i1*i2;
        i3 = i1*i2;
        i3 = i1*i2;
        i3 = i1*i2;
        i3 = i1*i2;
        i3 = i1*i2;
        i3 = i1*i2;
        i3 = i1*i2;
        i3 = i1*i2;
    }
}
void test_uint64_mult() {
    uint32_t i;
    uint64_t i1, i2, i3;
    i1 = 15;
    i2 = 26;
    for (i=0; i<NUM_ITERATIONS; i++){
        // Make sure NUM_REPS is the same as the number
        // of repeated lines here.
        i3 = i1*i2;
        i3 = i1*i2;
        i3 = i1*i2;
        i3 = i1*i2;
        i3 = i1*i2;
        i3 = i1*i2;
        i3 = i1*i2;
        i3 = i1*i2;
        i3 = i1*i2;
        i3 = i1*i2;
    }
}
void test_float_mult() {
    uint32_t i;
    float i1, i2, i3;
    i1 = 15;
    i2 = 26;
    for (i=0; i<NUM_ITERATIONS; i++){
        // Make sure NUM_REPS is the same as the number
        // of repeated lines here.
        i3 = i1*i2;
        i3 = i1*i2;
        i3 = i1*i2;
        i3 = i1*i2;
        i3 = i1*i2;
        i3 = i1*i2;
        i3 = i1*i2;
        i3 = i1*i2;
        i3 = i1*i2;
        i3 = i1*i2;
    }
}
void test_double_mult() {
    uint32_t i;
    double i1, i2, i3;
    i1 = 15;
    i2 = 26;
    for (i=0; i<NUM_ITERATIONS; i++){
        // Make sure NUM_REPS is the same as the number
        // of repeated lines here.
        i3 = i1*i2;
        i3 = i1*i2;
        i3 = i1*i2;
        i3 = i1*i2;
        i3 = i1*i2;
        i3 = i1*i2;
        i3 = i1*i2;
        i3 = i1*i2;
        i3 = i1*i2;
        i3 = i1*i2;
    }
}
void test_uint8_div() {
    uint32_t i;
    uint8_t i1, i2, i3;
    i1 = 15;
    i2 = 26;
    for (i=0; i<NUM_ITERATIONS; i++){
        // Make sure NUM_REPS is the same as the number
        // of repeated lines here.
	    i3 = i1/i2;
        i3 = i1/i2;
        i3 = i1/i2;
        i3 = i1/i2;
        i3 = i1/i2;
        i3 = i1/i2;
        i3 = i1/i2;
        i3 = i1/i2;
        i3 = i1/i2;
        i3 = i1/i2;
    }
}
void test_uint16_div() {
    uint32_t i;
    uint16_t i1, i2, i3;
    i1 = 15;
    i2 = 26;
    for (i=0; i<NUM_ITERATIONS; i++){
        // Make sure NUM_REPS is the same as the number
        // of repeated lines here.
	    i3 = i1/i2;
        i3 = i1/i2;
        i3 = i1/i2;
        i3 = i1/i2;
        i3 = i1/i2;
        i3 = i1/i2;
        i3 = i1/i2;
        i3 = i1/i2;
        i3 = i1/i2;
        i3 = i1/i2;
    }
}
void test_uint32_div() {
    uint32_t i;
    uint32_t i1, i2, i3;
    i1 = 15;
    i2 = 26;
    for (i=0; i<NUM_ITERATIONS; i++){
        // Make sure NUM_REPS is the same as the number
        // of repeated lines here.
  	    i3 = i1/i2;
        i3 = i1/i2;
        i3 = i1/i2;
        i3 = i1/i2;
        i3 = i1/i2;
        i3 = i1/i2;
        i3 = i1/i2;
        i3 = i1/i2;
        i3 = i1/i2;
        i3 = i1/i2;
    }
}
void test_uint64_div() {
    uint32_t i;
    uint64_t i1, i2, i3;
    i1 = 15;
    i2 = 26;
    for (i=0; i<NUM_ITERATIONS; i++){
        // Make sure NUM_REPS is the same as the number
        // of repeated lines here.
        i3 = i1/i2;
        i3 = i1/i2;
        i3 = i1/i2;
        i3 = i1/i2;
        i3 = i1/i2;
        i3 = i1/i2;
        i3 = i1/i2;
        i3 = i1/i2;
        i3 = i1/i2;
        i3 = i1/i2;
    }
}
void test_float_div() {
    uint32_t i;
    float i1, i2, i3;
    i1 = 15;
    i2 = 26;
    for (i=0; i<NUM_ITERATIONS; i++){
        // Make sure NUM_REPS is the same as the number
        // of repeated lines here.
        i3 = i1/i2;
        i3 = i1/i2;
        i3 = i1/i2;
        i3 = i1/i2;
        i3 = i1/i2;
        i3 = i1/i2;
        i3 = i1/i2;
        i3 = i1/i2;
        i3 = i1/i2;
        i3 = i1/i2;
    }
}
void test_double_div() {
    uint32_t i;
    double i1, i2, i3;
    i1 = 15;
    i2 = 26;
    for (i=0; i<NUM_ITERATIONS; i++){
        // Make sure NUM_REPS is the same as the number
        // of repeated lines here.
        i3 = i1/i2;
        i3 = i1/i2;
        i3 = i1/i2;
        i3 = i1/i2;
        i3 = i1/i2;
        i3 = i1/i2;
        i3 = i1/i2;
        i3 = i1/i2;
        i3 = i1/i2;
        i3 = i1/i2;
    }
}


void main(){
    uint32_t t1, t2;
    
    // !!! Add code: Initialize uart1 & ztimer modules
    uart1_init(9600);
    
    zTimerOn();
    
    // and turn on interrupts
    U1STAbits.URXISEL = 1;
    U1STAbits.UTXISEL = 1;
    
    printf("Performance Summary: Time per operation statistics\r\n");
    
    // Test addiplying bytes
    t1 = zTimerReadms();
    test_uint8_add();
    t2 = zTimerReadms();
    
    // Print timing result. Doubles OK here. Not time critical code.
    printf("UINT8 add: %.06f us per operation\r\n",
    (double)(t2-t1)/
    (double)NUM_ITERATIONS /(double)NUM_REPS*1000.0);
    
    // Test addiplying bytes
    t1 = zTimerReadms();
    test_uint16_add();
    t2 = zTimerReadms();
    
    // Print timing result. Doubles OK here. Not time critical code.
    printf("UINT16 add: %.06f us per operation\r\n",
    (double)(t2-t1)/
    (double)NUM_ITERATIONS /(double)NUM_REPS*1000.0);
    
    // Test addiplying bytes
    t1 = zTimerReadms();
    test_uint32_add();
    t2 = zTimerReadms();
    
    // Print timing result. Doubles OK here. Not time critical code.
    printf("UINT32 add: %.06f us per operation\r\n",
    (double)(t2-t1)/
    (double)NUM_ITERATIONS /(double)NUM_REPS*1000.0);
    
    t1 = zTimerReadms();
    test_uint64_add();
    t2 = zTimerReadms();
    
    // Print timing result. Doubles OK here. Not time critical code.
    printf("UINT64 add: %.06f us per operation\r\n",
    (double)(t2-t1)/
    (double)NUM_ITERATIONS /(double)NUM_REPS*1000.0);
    
    t1 = zTimerReadms();
    test_float_add();
    t2 = zTimerReadms();
    
    // Print timing result. Doubles OK here. Not time critical code.
    printf("FLOAT add: %.06f us per operation\r\n",
    (double)(t2-t1)/
    (double)NUM_ITERATIONS /(double)NUM_REPS*1000.0);
    
    t1 = zTimerReadms();
    test_double_add();
    t2 = zTimerReadms();
    
    // Print timing result. Doubles OK here. Not time critical code.
    printf("DOUBLE add: %.06f us per operation\r\n",
    (double)(t2-t1)/
    (double)NUM_ITERATIONS /(double)NUM_REPS*1000.0);    
    
    // Test subiplying bytes
    t1 = zTimerReadms();
    test_uint8_sub();
    t2 = zTimerReadms();
    
    // Print timing result. Doubles OK here. Not time critical code.
    printf("UINT8 sub: %.06f us per operation\r\n",
    (double)(t2-t1)/
    (double)NUM_ITERATIONS /(double)NUM_REPS*1000.0);
    
    // Test subiplying bytes
    t1 = zTimerReadms();
    test_uint16_sub();
    t2 = zTimerReadms();
    
    // Print timing result. Doubles OK here. Not time critical code.
    printf("UINT16 sub: %.06f us per operation\r\n",
    (double)(t2-t1)/
    (double)NUM_ITERATIONS /(double)NUM_REPS*1000.0);
    
    // Test subiplying bytes
    t1 = zTimerReadms();
    test_uint32_sub();
    t2 = zTimerReadms();
    
    // Print timing result. Doubles OK here. Not time critical code.
    printf("UINT32 sub: %.06f us per operation\r\n",
    (double)(t2-t1)/
    (double)NUM_ITERATIONS /(double)NUM_REPS*1000.0);
    
    t1 = zTimerReadms();
    test_uint64_sub();
    t2 = zTimerReadms();
    
    // Print timing result. Doubles OK here. Not time critical code.
    printf("UINT64 sub: %.06f us per operation\r\n",
    (double)(t2-t1)/
    (double)NUM_ITERATIONS /(double)NUM_REPS*1000.0);
    
    t1 = zTimerReadms();
    test_float_sub();
    t2 = zTimerReadms();
    
    // Print timing result. Doubles OK here. Not time critical code.
    printf("FLOAT sub: %.06f us per operation\r\n",
    (double)(t2-t1)/
    (double)NUM_ITERATIONS /(double)NUM_REPS*1000.0);
    
    t1 = zTimerReadms();
    test_double_sub();
    t2 = zTimerReadms();
    
    // Print timing result. Doubles OK here. Not time critical code.
    printf("DOUBLE sub: %.06f us per operation\r\n",
    (double)(t2-t1)/
    (double)NUM_ITERATIONS /(double)NUM_REPS*1000.0);
    
    // Test multiplying bytes
    t1 = zTimerReadms();
    test_uint8_mult();
    t2 = zTimerReadms();
    
    // Print timing result. Doubles OK here. Not time critical code.
    printf("UINT8 MULT: %.06f us per operation\r\n",
    (double)(t2-t1)/
    (double)NUM_ITERATIONS /(double)NUM_REPS*1000.0);
    
    // Test multiplying bytes
    t1 = zTimerReadms();
    test_uint16_mult();
    t2 = zTimerReadms();
    
    // Print timing result. Doubles OK here. Not time critical code.
    printf("UINT16 MULT: %.06f us per operation\r\n",
    (double)(t2-t1)/
    (double)NUM_ITERATIONS /(double)NUM_REPS*1000.0);
    
    // Test multiplying bytes
    t1 = zTimerReadms();
    test_uint32_mult();
    t2 = zTimerReadms();
    
    // Print timing result. Doubles OK here. Not time critical code.
    printf("UINT32 MULT: %.06f us per operation\r\n",
    (double)(t2-t1)/
    (double)NUM_ITERATIONS /(double)NUM_REPS*1000.0);
    
    t1 = zTimerReadms();
    test_uint64_mult();
    t2 = zTimerReadms();
    
    // Print timing result. Doubles OK here. Not time critical code.
    printf("UINT64 MULT: %.06f us per operation\r\n",
    (double)(t2-t1)/
    (double)NUM_ITERATIONS /(double)NUM_REPS*1000.0);
    
    t1 = zTimerReadms();
    test_float_mult();
    t2 = zTimerReadms();
    
    // Print timing result. Doubles OK here. Not time critical code.
    printf("FLOAT MULT: %.06f us per operation\r\n",
    (double)(t2-t1)/
    (double)NUM_ITERATIONS /(double)NUM_REPS*1000.0);
    
    t1 = zTimerReadms();
    test_double_mult();
    t2 = zTimerReadms();
    
    // Print timing result. Doubles OK here. Not time critical code.
    printf("DOUBLE MULT: %.06f us per operation\r\n",
    (double)(t2-t1)/
    (double)NUM_ITERATIONS /(double)NUM_REPS*1000.0);
    
        // Test diviplying bytes
    t1 = zTimerReadms();
    test_uint8_div();
    t2 = zTimerReadms();
    
    // Print timing result. Doubles OK here. Not time critical code.
    printf("UINT8 div: %.06f us per operation\r\n",
    (double)(t2-t1)/
    (double)NUM_ITERATIONS /(double)NUM_REPS*1000.0);
    
    // Test diviplying bytes
    t1 = zTimerReadms();
    test_uint16_div();
    t2 = zTimerReadms();
    
    // Print timing result. Doubles OK here. Not time critical code.
    printf("UINT16 div: %.06f us per operation\r\n",
    (double)(t2-t1)/
    (double)NUM_ITERATIONS /(double)NUM_REPS*1000.0);
    
    // Test diviplying bytes
    t1 = zTimerReadms();
    test_uint32_div();
    t2 = zTimerReadms();
    
    // Print timing result. Doubles OK here. Not time critical code.
    printf("UINT32 div: %.06f us per operation\r\n",
    (double)(t2-t1)/
    (double)NUM_ITERATIONS /(double)NUM_REPS*1000.0);
    
    t1 = zTimerReadms();
    test_uint64_div();
    t2 = zTimerReadms();
    
    // Print timing result. Doubles OK here. Not time critical code.
    printf("UINT64 div: %.06f us per operation\r\n",
    (double)(t2-t1)/
    (double)NUM_ITERATIONS /(double)NUM_REPS*1000.0);
    
    t1 = zTimerReadms();
    test_float_div();
    t2 = zTimerReadms();
    
    // Print timing result. Doubles OK here. Not time critical code.
    printf("FLOAT div: %.06f us per operation\r\n",
    (double)(t2-t1)/
    (double)NUM_ITERATIONS /(double)NUM_REPS*1000.0);
    
    t1 = zTimerReadms();
    test_double_div();
    t2 = zTimerReadms();
    
    // Print timing result. Doubles OK here. Not time critical code.
    printf("DOUBLE div: %.06f us per operation\r\n",
    (double)(t2-t1)/
    (double)NUM_ITERATIONS /(double)NUM_REPS*1000.0);

    while (1); // When done, wait forever.
    
    
    
    
    // PRIOR TESTS   
    
    //uart1_init (1200);
    //uart1_init (19200);
//    uart1_init (4800);
//    printf("Hello!\n\r");
//    char *w0 = "HEY\n\r";
//    uart1_txwrite_str(w0);
//    char *w1 = "Hello! Kristen and Erin made this code! This lab is so fun! We love embedded systems! So fun! Yay! :)\n\r";
//    uart1_txwrite_str(w1);
//    char *w2 = "m\n\r";
//    uart1_txwrite_str(w2);
//    while(1){
//        while(uart1_rxrdy()==0);
//        char x = uart1_rxread();
//        if(x >= 'a' && x <= 'z') x = x - 0x20;
//        else if(x >= 'A' && x <= 'Z') x = x + 0x20;
//        uart1_txwrite(x);
//   }       
}
