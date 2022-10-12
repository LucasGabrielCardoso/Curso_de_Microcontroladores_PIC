/*
 * File:   interrupt_manager.c
 * Author: Lucas Gabriel
 *
 * Created on 3 de Dezembro de 2021, 22:15
 */


#include "system.h"
#include "interrupt_manager.h"

char flagB1   =   0x00;
char flagB0   =   0x00;
unsigned int timer1, timer2;
unsigned int freq;

void Interrupt_Initialize(void)
{
//    Setting Interrupt Capture Module
    T1CONbits.TMR1ON                =   0b1;
    CCP1CONbits.CCP1M               =   0b0111;
    PIE1bits.CCP1IE                 =   0b1;
    PIR1bits.CCP1IF                 =   0b0;    
    
//    Setting Timer0 Interrupt
    OPTION_REGbits.nRBPU            =   0b1;
    OPTION_REGbits.T0CS             =   0b0;
    OPTION_REGbits.PSA              =   0b0;
    OPTION_REGbits.PS               =   0b0;
    INTCONbits.T0IE                 =   0b1;
    INTCONbits.T0IF                 =   0b0;
    TMR0                            =   0x06;
}

__interrupt() void Capture_Interrupt(void)
{
    if(INTCONbits.T0IF)
    {
        INTCONbits.T0IF             =   0b0;
        TMR0                        =   0x06;
        LED_IR                     ^=   0b1;  
    }
    
    if(PIR1bits.CCP1IF)
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
