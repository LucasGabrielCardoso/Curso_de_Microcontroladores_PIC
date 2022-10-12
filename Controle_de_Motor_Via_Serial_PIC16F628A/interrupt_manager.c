/*
 * File:   interrupt_manager.c
 * Author: LucasGabriel
 *
 * Created on 9 de Fevereiro de 2022, 20:40
 */


#include "interrupt_manager.h"
#include "system_config.h"
#include "uart_manager.h"

unsigned char counter = 0x00;

void Interrupt_Initializer(void) 
{
//    Timer0 INTERRUPT
    OPTION_REGbits.nRBPU        =   0b1;
    OPTION_REGbits.T0CS         =   0b0;
    OPTION_REGbits.PSA          =   0b0;
    OPTION_REGbits.PS           =   0b111;
    
    INTCONbits.T0IE             =   0b1;
    INTCONbits.T0IF             =   0b0;    
    
//    UART INTERRUPT
    PIE1bits.RCIE               =   0b1;
    PIR1bits.RCIF               =   0b0;
}

__interrupt() void Interrupt_Bach(void)
{
    if(PIR1bits.RCIF)
    {
        PIR1bits.RCIF           =   0b0;
        if(RCSTAbits.FERR || RCSTAbits.OERR)
        {
            RCSTAbits.CREN      =   0b0;
            RCSTAbits.CREN      =   0b1;
            asm("retfie");
        }
        UART_Echo();
    }//END RCIF
    if(INTCONbits.T0IF)
    {
        INTCONbits.T0IF        =    0b0;
        counter++;
        if(0x0A == counter)
        {
            counter         =   0x00;
            LED_1           =   !LED_1;
            LED_2           =   !LED_2;
        }
    }//END TOIF
}// END INTERRUPT