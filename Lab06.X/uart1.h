/* 
 * File:   uart1.h
 * Author: oconnork
 *
 * Created on September 29, 2022, 7:58 AM
 */

#ifndef UART1_H
#define	UART1_H

void uart1_init (uint32_t baudrate);

uint8_t uart1_txrdy();

void uart1_txwrite(char c);

void uart1_txwrite_str(char *cp);

uint8_t uart1_rxrdy();

uint8_t uart1_rxread();


#endif