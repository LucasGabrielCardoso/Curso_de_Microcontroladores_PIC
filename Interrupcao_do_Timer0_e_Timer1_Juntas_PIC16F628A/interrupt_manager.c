/*
 * File:   interrupt_manager.c
 * Author: Lucas Gabriel
 *
 * Created on 30 de Novembro de 2021, 18:22
 */

#include <stdbool.h>
#include "system.h"
#include "interrupt_manager.h"

int counter0                    =   0x00;
int counter1                    =   0x00;
bool change                     =   false;

void Interrupt_Initialize(void)
{
    T1CON                   =   0x31;
    OPTION_REG              =   0x81;
    PIE1bits.TMR1IE         =   0b1;
    INTCONbits.T0IE         =   0b1;
    
    
    TMR0                    =   0x06;
    TMR1L                   =   255;
    TMR1H                   =   206;
}

__interrupt() void Interrupt_Timer(void)
{
    if(INTCONbits.T0IF)
    {
        INTCONbits.TMR0IF           =   0b0;
        TMR0                        =   0x06;
        counter0++;
        
        if(counter0 ==  500)
        {
            counter0    =   0x00;
            BACKLIGHT   =   !BACKLIGHT;
        }
    }
    
    if(PIR1bits.TMR1IF)
    {
        PIR1bits.TMR1IF         =   0b0;
        TMR1L                   =   255;
        TMR1H                   =   206;
        counter1++;
        
        if(counter1 == 10)
        {
            counter1        =   0x00;
            change          =   !change;
            OUTPUT          =   !OUTPUT;
        }
    }
}