/*
 * File:   interrupt_manager.c
 * Author: Lucas Gabriel
 *
 * Created on 3 de Dezembro de 2021, 18:53
 */


#include "system.h"

void Interrupt_Initialize(void)
{
    //Setting Timer0 Interrupt
    OPTION_REGbits.nRBPU        =   0b1;
    OPTION_REGbits.T0CS         =   0b1;
    OPTION_REGbits.T0SE         =   0b1;
    OPTION_REGbits.PSA          =   0b1;
    OPTION_REGbits.PS           =   0b00;
    
    INTCONbits.T0IE             =   0b1;
    INTCONbits.T0IF             =   0b0;
    
    TMR0                        =   250;    
}

__interrupt() void Timer0_Increase(void)
{
    if(INTCONbits.T0IF)
    {
        INTCONbits.T0IF             =   0b0;
        TMR0                        =   250;
        LED1                        =   !LED1;
    }
}
