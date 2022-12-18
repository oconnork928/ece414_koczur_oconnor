
#include<inttypes.h>
#include<xc.h>
#include <stdio.h>
void uart1_init (uint32_t baudrate) {
	uint32_t frequency = 40000000;
    ANSELA = 0;
    TRISA = 0x1F;
    U1RXR = 0b0000;
    ANSELB = 0;
    TRISB = 0x00;
    RPB3R = 1; 
    
    
    
    
    U1MODEbits.BRGH = 0;
	U1BRG = frequency / ((16 * baudrate)) - 1;
    U1MODEbits.PDSEL = 0;
    U1MODEbits.STSEL = 0;
    U1MODEbits.ON = 1; 
    U1STAbits.UTXEN = 1;
    U1STAbits.URXEN = 1;
    __XC_UART = 1;
}

uint8_t uart1_txrdy(){
    if(U1STAbits.UTXBF) return 0;
    else return 1;
}

void uart1_txwrite(char c){
    U1TXREG = c; 
} 

void uart1_txwrite_str(char *cp){
    while (*cp) {
        while (uart1_txrdy() == 0);
        uart1_txwrite(*cp++);
        
    }
}

uint8_t uart1_rxrdy(){
    if(U1STAbits.URXDA) return 1;
    else return 0;
}

uint8_t uart1_rxread(){
    uint8_t c;
    c = U1RXREG;
    return c;
}



