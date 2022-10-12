/*
 * File:   interrupt_manager.c
 * Author: Lucas Gabriel
 *
 * Created on 15 de Novembro de 2021, 16:30
 */


#include "interrupt_manager.h"

char aux = 0;

void Interrupt_Init(void)
{
    PIE1bits.TMR1IE             =   0b1;        //Enable TMR1 interrupt
    PIR1bits.TMR1IF             =   0b0;
    T1CONbits.T1CKPS            =   0b11;       //Prescaler 1:8
    T1CONbits.TMR1ON            =   0b1;        //Timer 1 ON
    TMR1L                       =   0x18;       
    TMR1H                       =   0xFC;       //Timer 1 count until 1000      
}

__interrupt() void Timer1_Manager(void)
{
    if(PIR1bits.TMR1IF)
    {
        PIR1bits.TMR1IF             =   0b0;
        TMR1L                       =   0x18;       
        TMR1H                       =   0xFC;       //Timer 1 count until 1000  
        OUTPUT1                     =   0b0;
        
        aux++;
        if(aux == 0x32)
        {
            aux             =   0;
            OUTPUT1         =   0b1;
            OUTPUT2^=1;
        }
    }
}
