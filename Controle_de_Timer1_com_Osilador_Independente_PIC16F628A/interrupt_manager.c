/*
 * File:   interrupt_manager.c
 * Author: LucasGabriel
 *
 * Created on 22 de Janeiro de 2022, 12:51
 */


#include "interrupt_manager.h"
#include "system_config.h"

void Interrupt_Initializer(void)
{
    PIE1bits.TMR1IE     =   0b1;
    T1CONbits.T1CKPS    =   0b11;
    T1CONbits.T1OSCEN   =   0b1;
    T1CONbits.nT1SYNC   =   0b1;
    T1CONbits.TMR1CS    =   0b1;
    T1CONbits.TMR1ON    =   0b1;
    TMR1L               =   0x66;
    TMR1H               =   0xFE;
}

__interrupt() void Interrupt_Bach(void)
{
    if(PIR1bits.TMR1IF)
    {
        PIR1bits.TMR1IF     =   0b0;
        
        TMR1L               =   0x66;
        TMR1H               =   0xFE;
        
        OUTPUT              =   ~OUTPUT;
    }
}