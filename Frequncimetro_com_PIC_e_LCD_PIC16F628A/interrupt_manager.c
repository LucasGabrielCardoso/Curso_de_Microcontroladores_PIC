/*
 * File:   interrupt_manager.c
 * Author: Lucas Gabriel
 *
 * Created on 28 de Novembro de 2021, 20:57
 */

#include "system_config.h"
#include "interrupt_manager.h"

char flagB1   =   0x00;
char flagB0   =   0x00;
unsigned int timer1, timer2;
unsigned int freq;

void Interrupt_Initialize(void)
{
    T1CONbits.TMR1ON                =   0b1;
    CCP1CONbits.CCP1M               =   0b0111;
    PIE1bits.CCP1IE                 =   0b1;
    PIR1bits.CCP1IF                 =   0b0;
}

__interrupt() void frequencimeter(void)
{
    if(PIE1bits.CCP1IE && PIR1bits.CCP1IF)
    {
        PIR1bits.CCP1IF             =   0b0;
        if(!flagB0)
        {
            timer1  =   (CCPR1H << 8) + CCPR1L;
            flagB0  =   0x01;
        }//End IF
        else
        {
            timer2  =   (CCPR1H << 8) + CCPR1L;
            
            flagB0  =   0x00;
            flagB1  =   0x01;
            
        }//End ELSE
    }//END CAPTURE
}