/*
 * File:   interrupt_manager.c
 * Author: Lucas Gabriel
 *
 * Created on 20 de Novembro de 2021, 00:54
 */


#include "system_config.h"
#include "interrupt_manager.h"

int periodo;                        
unsigned char temp_H, temp_L;           //Storege the time of capture

void Interrupt_Initialize(void) 
{   
    T1CONbits.T1CKPS        =   0b00;
    T1CONbits.T1OSCEN       =   0b0;
    T1CONbits.TMR1CS        =   0b0;
    T1CONbits.TMR1ON        =   0b0;
    
    PIE1bits.TMR1IE         =   0b0;
    
    TMR1L                   =   0x00;
    TMR1H                   =   0x00;
    
    CCP1CONbits.CCP1M       =   0b0101;         //Capture in rasing edge
    PIE1bits.CCP1IE         =   0b1;            //Setting interrupt by comparator module    
    PIR1bits.CCP1IF         =   0b0;
}

__interrupt() void Capture(void)
{
    if(PIR1bits.CCP1IF && CCP1CONbits.CCP1M0)
    {
        PIR1bits.CCP1IF     =   0b0;
        CCP1CONbits.CCP1M   =   0b0100;
        TMR1H               =   0x00;
        TMR1L               =   0x00;
        T1CONbits.TMR1ON    =   0b1;
    }
    else if(PIR1bits.CCP1IF)
    {
        PIR1bits.CCP1IF     =   0b0;
        CCP1CONbits.CCP1M   =   0b0101;
        temp_H              =   TMR1H;
        temp_L              =   TMR1L;
        T1CONbits.TMR1ON    =   0b0;
    }
}
