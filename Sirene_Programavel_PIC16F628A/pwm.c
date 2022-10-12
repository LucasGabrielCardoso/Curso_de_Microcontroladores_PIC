/*
 * File:   pwm.c
 * Author: LucasGabriel
 *
 * Created on 20 de Janeiro de 2022, 20:50
 */


#include "system_config.h"
#include "pwm.h"

void PWM_Initializer(int pwm_frequecy) 
{
    T2CONbits.T2CKPS            =   0b01;
    PR2 =   (unsigned char)(((_XTAL_FREQ/4)/(pwm_frequecy*4))-1);
    PWM_Duty_Cycle(5);
    TRISBbits.TRISB3            =   0b0;
    TMR2                        =   0x00;
    T2CONbits.TMR2ON            =   0b1;
    CCP1CONbits.CCP1M           =   0b1100;
}

void PWM_Duty_Cycle(unsigned char duty_cycle)
{
    unsigned int duty_cycle_true;
    duty_cycle_true =   (PR2*duty_cycle)/100;
    CCPR1L  =   (unsigned char)duty_cycle_true;
    CCPR1H  =   (unsigned char)(duty_cycle_true>>8);
}
