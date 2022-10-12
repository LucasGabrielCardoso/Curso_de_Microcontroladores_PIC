/*
 * File:   uart_manager.c
 * Author: LucasGabriel
 *
 * Created on 12 de Fevereiro de 2022, 19:15
 */


#include "system_config.h"
#include "uart_manager.h"

char UART_Text[] = "0000";

void UART_Initializer(void)
{
//    Baund Rate 90600
    SPBRG               =   25;
//  TXSTA Register
    TXSTAbits.BRGH      =   0b1;        //Seleciona baud rate em velocidade alta
    TXSTAbits.SYNC      =   0b0;        //Configura para modo assíncrono
    TXSTAbits.TXEN      =   0b1;        //Habilita transmissão
//    RCSTA Register
    RCSTAbits.CREN      =   0b1;        //Habilita recepção contínua
    RCSTAbits.SPEN      =   0b1;        //Habilita porta serial
}
void UART_WriteRS(void)
{
    TXREG   =   ' ';
    UART_TestBuff();
    TXREG   =   'c';
    UART_TestBuff();
    TXREG   =   'o';
    UART_TestBuff();
    TXREG   =   'n';
    UART_TestBuff();
    TXREG   =   't';
    UART_TestBuff();
    TXREG   =   'a';
    UART_TestBuff();
    TXREG   =   'g';
    UART_TestBuff();
    TXREG   =   'e';
    UART_TestBuff();
    TXREG   =   'm';
    UART_TestBuff();
    TXREG   =   ':';
    UART_TestBuff();
    TXREG   =   ' ';
    UART_TestBuff();
    TXREG   =   UART_Text[0];
    UART_TestBuff();
    TXREG   =   UART_Text[1];
    UART_TestBuff();
    TXREG   =   UART_Text[2];
    UART_TestBuff();
    TXREG   =   UART_Text[3];
    UART_TestBuff();
    TXREG   =   0x0D;
    UART_TestBuff();
    TXREG   =   0x0A;
    UART_TestBuff();
}
void UART_TestBuff(void)
{
    while (!TXSTAbits.TRMT);
}
