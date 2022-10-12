/*
 * File:   interrupt_manager.c
 * Author: Lucas Gabriel
 *
 * Created on 18 de Novembro de 2021, 18:54
 */


#include "system_config.h"

unsigned char duty    =   16;
unsigned char adc     =   0x00;

void Interrupt_Initialize(void)
{
    OPTION_REG                  =   0x87;
    INTCONbits.TMR0IE           =   0b1;
    INTCONbits.TMR0IF           =   0b0;
    TMR0                        =   0x00;
}

__interrupt() void PWM_BY_Timer1(void)
{
    if(INTCONbits.TMR0IF)
    {
        INTCONbits.TMR0IF       =   0b0;
        
        if(SERVO1)
        {
            TMR0    =   duty;
            SERVO1  =   0x00;
        }
        else
        {
            TMR0     =  255-duty;
            SERVO1   =  0x01;
            
        }
    }
}

