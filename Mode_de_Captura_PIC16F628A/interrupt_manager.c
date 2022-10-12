/*
 * File:   interrupt_manager.c
 * Author: Lucas Gabriel
 *
 * Created on 20 de Novembro de 2021, 00:54
 */


#include "system_config.h"
#include "interrupt_manager.h"

char flag0      =   0x00;               
char flag1      =   0x00;               
unsigned int timer1, timer2;

void Interrupt_Initialize(void) 
{   
    T1CONbits.T1CKPS        =   0b00;
    T1CONbits.T1OSCEN       =   0b0;
    T1CONbits.TMR1CS        =   0b0;
    T1CONbits.TMR1ON        =   0b1;
    
    CCP1CONbits.CCP1M       =   0b0101;         //Capture in rasing edge
    PIE1bits.CCP1IE         =   0b1;            //Setting interrupt by comparator module    
    PIR1bits.CCP1IF         =   0b0;
}

__interrupt() void Capture(void)
{
    if(PIE1bits.CCP1IE && PIR1bits.CCP1IF)
    {
        if(!flag0)
        {
            timer1          =   (CCPR1H<<8) + CCPR1L;    //Get the timer 1
            flag0           =   0x01;
        }
        else
        {
            timer2          =   (CCPR1H<<8) + CCPR1L;    //Get the timer 2
            flag0           =   0x00;
            flag1           =   0x01;
        }
        PIE1bits.CCP1IE     =   0b0;
        CCP1CONbits.CCP1M0  =   !CCP1CONbits.CCP1M0;
        PIE1bits.CCP1IE     =   0b1;
    }
    PIR1bits.CCP1IF     =   0b0;
}
