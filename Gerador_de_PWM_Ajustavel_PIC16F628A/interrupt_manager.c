/*
 * File:   interrupt_manager.c
 * Author: Lucas Gabriel
 *
 * Created on 8 de Dezembro de 2021, 21:14
 */


#include "system.h"
#include "interrupt_manager.h"

unsigned char duty=0, counter=0;

void Interrupt_Initialize(void)
{
    OPTION_REGbits.nRBPU        =   0b1;
    OPTION_REGbits.T0CS         =   0b0;
    OPTION_REGbits.PSA          =   0b0;
    OPTION_REGbits.PS           =   0b110;
    
    INTCONbits.T0IE             =   0b1;
    INTCONbits.T0IF             =   0b0;
    TMR0                        =   0x64;
}

__interrupt() void Interrupt_Timer0(void)
{
    if(INTCONbits.T0IF)
    {
        INTCONbits.T0IF         =   0b0;
        TMR0                    =   0x64;
        counter++;
        if(2==counter)
        {
            counter=0;
            if(!BUTTON1)    duty++;
            if(!BUTTON2)    duty--;
            if(duty>100)    duty=100;
        }
    }
}
