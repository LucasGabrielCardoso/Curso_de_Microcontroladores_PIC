/*
 * File:   interrupt_manager.c
 * Author: LucasGabriel
 *
 * Created on 7 de Fevereiro de 2022, 18:39
 */


#include "interrupt_manager.h"
#include "system_config.h"
#include "uart_communication.h"

char counter    =   0x00;

void Interrupt_Initializer(void) 
{
    OPTION_REGbits.nRBPU                =   0b1;
    OPTION_REGbits.INTEDG               =   0b0;
    OPTION_REGbits.T0CS                 =   0b0;
    OPTION_REGbits.T0SE                 =   0b0;
    OPTION_REGbits.PSA                  =   0b0;
    OPTION_REGbits.PS                   =   0b111;
    
    INTCONbits.T0IF                     =   0b0;
    INTCONbits.T0IE                     =   0b1;
    
//    Setting UART Interrupt
    PIR1bits.RCIF                       =   0b0;
    PIE1bits.RCIE                       =   0b1;
}

__interrupt() void Interrupt_Bach(void)
{
    if(PIR1bits.RCIF)
    {
        PIR1bits.RCIF               =   0b0;
        if(RCSTAbits.FERR || RCSTAbits.OERR) //Verificação de erro
        {
            RCSTAbits.CREN          =   0b0;
            RCSTAbits.CREN          =   0b1;
            asm("retfie");
        }
        UART_Echo();
    }//END RCIF
    
    if(INTCONbits.T0IF)
    {
        INTCONbits.T0IF             =   0b0;
        counter++;
        if(0x0A == counter)
        {
            counter                 =   0x00;
            LED_2                   =   !LED_2;
            LED_1                   =   !LED_1;
        }
    }//END T0IF
}
