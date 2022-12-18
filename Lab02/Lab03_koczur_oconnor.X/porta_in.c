#include <xc.h>
#include <inttypes.h>
#define SHAMT 21

#include <xc.h>
#include <inttypes.h>
#include "porta_in.h"


void porta_in_init(){
    ANSELA = 0;
    TRISA = 0x1F;
    CNPUA = 0x1F;
}
uint8_t porta_in_read(){
    uint8_t c = 0x00;
    return (c | PORTA);
}
