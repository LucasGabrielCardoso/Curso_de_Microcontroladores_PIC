/*
 * File:   uart_manager.c
 * Author: LucasGabriel
 *
 * Created on 9 de Fevereiro de 2022, 20:40
 */


#include "uart_manager.h"
#include "system_config.h"

void UART_Initializer(void) 
{
    SPBRG               =   25;     //9600 baund rate
//    TXSTA Register
    TXSTAbits.BRGH      =   0b1;    //High Speed Baund Rate
    TXSTAbits.SYNC      =   0b0;    //Assinchronous Mode
    TXSTAbits.TXEN      =   0b1;    //Transmission Able
//    RCSTA Register
    RCSTAbits.CREN      =   0b1;    //Continuous Reception
    RCSTAbits.SPEN      =   0b1;    //Serial Port Able
}

void UART_WriteRS(void)
{
    TXREG       =   'W';
    UART_Test_Buffer();
    TXREG       =   'R';
    UART_Test_Buffer();
    TXREG       =   ' ';
    UART_Test_Buffer();
    TXREG       =   'K';
    UART_Test_Buffer();
    TXREG       =   'I';
    UART_Test_Buffer();
    TXREG       =   'T';
    UART_Test_Buffer();
    TXREG       =   'S';
    UART_Test_Buffer();
    TXREG       =   0x0D;
    UART_Test_Buffer();
    TXREG       =   0x0A;
    UART_Test_Buffer();
}

void UART_Echo(void)
{
    TXREG       =   'D';
    UART_Test_Buffer();
    TXREG       =   'I';
    UART_Test_Buffer();
    TXREG       =   'G';
    UART_Test_Buffer();
    TXREG       =   'I';
    UART_Test_Buffer();
    TXREG       =   'T';
    UART_Test_Buffer();
    TXREG       =   'A';
    UART_Test_Buffer();
    TXREG       =   'D';
    UART_Test_Buffer();
    TXREG       =   'O';
    UART_Test_Buffer();
    TXREG       =   ':';
    UART_Test_Buffer();
    TXREG       =   ' ';
    UART_Test_Buffer();
    TXREG       =   RCREG;
    UART_Test_Buffer();
    TXREG       =   0x0D;
    UART_Test_Buffer();
    TXREG       =   0x0A;
    UART_Test_Buffer();
}

void UART_Test_Buffer(void)
{
    while(!TXSTAbits.TRMT);
}

void UART_Mensagem_Motor_ON(void)
{
    TXREG       =   'M';
    UART_Test_Buffer();
    TXREG       =   'O';
    UART_Test_Buffer();
    TXREG       =   'T';
    UART_Test_Buffer();
    TXREG       =   'O';
    UART_Test_Buffer();
    TXREG       =   'R';
    UART_Test_Buffer();
    TXREG       =   ' ';
    UART_Test_Buffer();
    TXREG       =   'O';
    UART_Test_Buffer();
    TXREG       =   'N';
    UART_Test_Buffer();
    TXREG       =   0x0D;
    UART_Test_Buffer();
    TXREG       =   0X0A;
    UART_Test_Buffer();
}

void UART_Mensagem_Motor_OFF(void)
{
    TXREG       =   'M';
    UART_Test_Buffer();
    TXREG       =   'O';
    UART_Test_Buffer();
    TXREG       =   'T';
    UART_Test_Buffer();
    TXREG       =   'O';
    UART_Test_Buffer();
    TXREG       =   'R';
    UART_Test_Buffer();
    TXREG       =   ' ';
    UART_Test_Buffer();
    TXREG       =   'O';
    UART_Test_Buffer();
    TXREG       =   'F';
    UART_Test_Buffer();
    TXREG       =   'F';
    UART_Test_Buffer();
    TXREG       =   0x0D;
    UART_Test_Buffer();
    TXREG       =   0X0A;
    UART_Test_Buffer();    
}