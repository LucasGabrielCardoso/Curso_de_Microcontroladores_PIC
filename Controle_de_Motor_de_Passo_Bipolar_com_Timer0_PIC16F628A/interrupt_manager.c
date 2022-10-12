/*
 * File:   interrupt_manager.c
 * Author: Lucas Gabriel
 *
 * Created on 4 de Dezembro de 2021, 09:14
 */

#include "interrupt_manager.h"
#include "system_config.h"
#include "step_motor_four_inputs.h"

unsigned char T0_control    =   0x00;
unsigned char next_step;

void Interrupt_Initialize(void)
{
    OPTION_REGbits.nRBPU    =   0b1;
    OPTION_REGbits.T0CS     =   0b0;
    OPTION_REGbits.PSA      =   0b0;
    OPTION_REGbits.PS       =   0b111;
    
    INTCONbits.T0IE         =   0b1;
    INTCONbits.T0IF         =   0b0;
    TMR0                    =   T0_control;
}

__interrupt() void Step_Motor(void)
{
    if(INTCONbits.T0IF)
    {
        INTCONbits.T0IF                 =   0b0;
        TMR0                            =   T0_control;
        
        next_step++;
        if(next_step > 0x04) next_step  =   0x01;
        
//        LED1                            =   !LED1;   
        
        switch(next_step)
        {
            case 0x01:  Step01();   break;
            case 0x02:  Step02();   break;
            case 0x03:  Step03();   break;
            case 0x04:  Step04();   break;
        }
    }
}
