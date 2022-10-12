/*
 * File:   interrupt_manager.c
 * Author: LucasGabriel
 *
 * Created on 21 de Janeiro de 2022, 18:36
 */


#include "interrupt_manager.h"
#include "system_config.h"

void Interrupt_Initializer(void) 
{
    OPTION_REGbits.nRBPU    =   0b1;
    OPTION_REGbits.INTEDG   =   0b0;
    INTCONbits.INTE         =   0b1;
    
    OPTION_REGbits.T0CS     =   0b0;
    OPTION_REGbits.PSA      =   0b1;
    OPTION_REGbits.PS       =   0b000;
    INTCONbits.T0IE         =   0b1;
    TMR0                    =   0x00;
    
    PIE1bits.TMR1IE         =   0b1;
    TMR1L                   =   0x00;
    TMR1H                   =   0xFF;
    T1CONbits.T1CKPS        =   0b0;
    T1CONbits.T1OSCEN       =   0b0;
    T1CONbits.TMR1CS        =   0b0;
    T1CONbits.TMR1ON        =   0b1;
    
    PIE1bits.TMR2IE         =   0b1;
    T2CONbits.TOUTPS        =   0b0000;
    T2CONbits.TMR2ON        =   0b1;
    T2CONbits.T2CKPS        =   0b00;
    
}

__interrupt() void Interrupt_Bach(void)
{
    if(INTCONbits.INTF)
    {
        INTCONbits.INTF         =   0b0;
        OUTPUT_1                =   ~OUTPUT_1;
    }
    if(INTCONbits.T0IF)
    {
        INTCONbits.T0IF         =   0b0;
        OUTPUT_2                =   ~OUTPUT_2;
    }
    if(PIR1bits.TMR1IF)
    {
        PIR1bits.TMR1IF         =   0b0;
        TMR1H                   =   0xFF;
        OUTPUT_3                =   ~OUTPUT_3;
    }
    if(PIR1bits.TMR2IF)
    {
        PIR1bits.TMR2IF         =   0b0;
        OUTPUT_4                =   ~OUTPUT_4;
    }
}