/*
 * File:   interrupt_manager.c
 * Author: LucasGabriel
 *
 * Created on 20 de Janeiro de 2022, 19:51
 */


#include "system_config.h"
#include "interrupt_manager.h"

unsigned char my_duty  = 5;
char counter           = 0x00;

void Interrupt_Initializer(void) 
{
    INTCONbits.T0IE     =   0b1;
    INTCONbits.T0IF     =   0b0;
    OPTION_REGbits.T0CS =   0b0;
    OPTION_REGbits.T0SE =   0b0;
    OPTION_REGbits.PSA  =   0b0;
    OPTION_REGbits.PS   =   0b001;
}

__interrupt() void Manager_TMR0(void)
{
    if(INTCONbits.T0IF)
    {
        INTCONbits.T0IF =   0x00;
        counter++;
        BUZER           =   ~BUZER;
        if(counter==0x32)
        {
            counter = 0x00;
            LED_1   = ~LED_1;
            LED_2   = ~LED_2;
            my_duty++;
        }
    }
}