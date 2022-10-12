/*
 * File:   uart_communication.c
 * Author: LucasGabriel
 *
 * Created on 7 de Fevereiro de 2022, 19:17
 */


#include "system_config.h"
#include "uart_communication.h"

void UART_Initializer(void)
{
    TXSTAbits.BRGH                      =   0b1;
    TXSTAbits.SYNC                      =   0b0;
    SPBRG                               =   25;
    RCSTAbits.SPEN                      =   0b1;
    TXSTAbits.TXEN                      =   0b1;
    RCSTAbits.CREN                      =   0b1;    
}

void UART_Echo(void)
{
    TXREG   =   'D';
    UART_TestBuff();
    TXREG   =   'I';
    UART_TestBuff();
    TXREG   =   'G';
    UART_TestBuff();
    TXREG   =   'I';
    UART_TestBuff();
    TXREG   =   'T';
    UART_TestBuff();
    TXREG   =   'A';
    UART_TestBuff();
    TXREG   =   'D';
    UART_TestBuff();
    TXREG   =   'O';
    UART_TestBuff();
    TXREG   =   ':';
    UART_TestBuff();
    TXREG   =   ' ';
    UART_TestBuff();
    TXREG   =   RCREG;
    UART_TestBuff();
    TXREG   =   0x0D;
    UART_TestBuff();
    TXREG   =   0x0A;
    UART_TestBuff();
}

void UART_TestBuff(void)
{
    while(!TXSTAbits.TRMT);
}

void UART_WriteRS(void)
{
    TXREG   =   'W';
    UART_TestBuff();
    TXREG   =   'R';
    UART_TestBuff();
    TXREG   =   ' ';
    UART_TestBuff();
    TXREG   =   'K';
    UART_TestBuff();
    TXREG   =   'I';
    UART_TestBuff();
    TXREG   =   'T';
    UART_TestBuff();
    TXREG   =   'S';
    UART_TestBuff();
    TXREG   =   0x0D;
    UART_TestBuff();
    TXREG   =   0x0A;
    UART_TestBuff();
}