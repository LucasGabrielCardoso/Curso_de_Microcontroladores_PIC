/*
 * File:   interrupt_manager.c
 * Author: LucasGabriel
 *
 * Created on 12 de Fevereiro de 2022, 19:13
 */


#include "system_config.h"
#include "interrupt_manager.h"

char counter = 0x00;

void Interrupt_Initializer(void)
{
    OPTION_REGbits.nRBPU            =   0b0;
    
//  Setting Timer0 Interrupt  
    OPTION_REGbits.T0CS             =   0b0;
    OPTION_REGbits.T0SE             =   0b0;
    OPTION_REGbits.PSA              =   0b0;
    OPTION_REGbits.PS               =   0b111;
    
    INTCONbits.T0IF                 =   0b0;
    INTCONbits.T0IE                 =   0b1;
}
__interrupt() void Interrupt_Bach(void)
{
    if(INTCONbits.T0IF)
    {
        INTCONbits.T0IF             =   0b0;
        counter++;
        if(0x0A==counter)
        {
            counter                 =   0x00;
            LED_2                   =   !LED_2;
            LED_1                   =   !LED_1;
        }//END COUNTER
    }//END T0IF
}//END INTERRUPT