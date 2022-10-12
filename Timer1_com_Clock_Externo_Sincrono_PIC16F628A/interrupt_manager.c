/*
 * File:   interrupt_manager.c
 * Author: LucasGabriel
 *
 * Created on 4 de Fevereiro de 2022, 18:58
 */


#include "interrupt_manager.h"
#include "system_configurations.h"

void Interrupt_Initializer(void)
{
    T1CONbits.T1CKPS                    =   0b00;
    T1CONbits.T1OSCEN                   =   0b0;
    T1CONbits.nT1SYNC                   =   0b0;
    T1CONbits.TMR1CS                    =   0b1;
    T1CONbits.TMR1ON                    =   0b1;
    
    TMR1L                               =   0x66;
    TMR1H                               =   0xFE;
    
    PIE1bits.TMR1IE                     =   0b1;
}

__interrupt() void Interrupt_Bach(void)
{
    if(PIR1bits.TMR1IF)
    {
        PIR1bits.TMR1IF         =   0b0;
        TMR1L                   =   0x66;
        TMR1H                   =   0xFE;      
        OUTPUT                  =   !OUTPUT;
    }
}
