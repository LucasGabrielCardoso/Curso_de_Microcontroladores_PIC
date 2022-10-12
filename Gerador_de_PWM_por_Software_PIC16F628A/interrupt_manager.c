/*
 * File:   interrupt_manager.c
 * Author: Lucas Gabriel
 *
 * Created on 9 de Dezembro de 2021, 23:18
 */


#include <pic16f628a.h>

#include "interrupt_manager.h"
#include "system_config.h"
#include "pwm.h"

unsigned char state_button1, state_button2;         //Store button state

void Interrupt_Initialize(void) 
{
    OPTION_REGbits.nRBPU            =   0b0;
    OPTION_REGbits.INTEDG           =   0b0;
    OPTION_REGbits.T0CS             =   0b0;
    OPTION_REGbits.T0SE             =   0b0;
    OPTION_REGbits.PSA              =   0b1;
    OPTION_REGbits.PS               =   0b00;
    
    INTCONbits.INTE                 =   0b1;
    INTCONbits.TMR0IE               =   0b1;
    
    PIE1bits.TMR1IE                 =   0b1;
    T1CON                           =   0b00000001;
    TMR1H                           =   0xFF;
    
    PIE1bits.TMR2IE                 =   0b1;
    T2CON                           =   0b00000100;
    PR2                             =   0xFF;
}

__interrupt() void Interrupt_PWM(void)
{
    if(INTCONbits.INTF)
    {
        INTCONbits.INTF             =   0b0;
        control_PWM++;              //Increase PWM Control
        
        if(control_PWM>3) control_PWM=0x01;
    }
    if(INTCONbits.T0IF)
    {
        INTCONbits.T0IF             =   0b0;
        if(PWM1)
        {
            TMR0                    = duty_PWM1;
            PWM1                    = 0x00;
        }
        else
        {
            TMR0                    =   255-duty_PWM1;
            PWM1                    =   0x01;
        }
    }
    if(PIR1bits.TMR1IF)
    {
        PIR1bits.TMR1IF             =   0b0;
        TMR1H                       =   0xFF;
        if(PWM2)
        {
            TMR1L                   = duty_PWM2;
            PWM2                    = 0x00;
        }
        else
        {
            TMR1L                   =   255-duty_PWM2;
            PWM2                    =   0x01;
        }
    }
    if(PIR1bits.TMR2IF)
    {
        PIR1bits.TMR2IF             =   0b0;
        if(PWM3)
        {
            TMR2                    = duty_PWM3;
            PWM3                    = 0x00;
        }
        else
        {
            TMR2                    =   255-duty_PWM3;
            PWM3                    =   0x01;
        }
    }
}