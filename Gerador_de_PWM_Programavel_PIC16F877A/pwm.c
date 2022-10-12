/*
 * File:   pwm.c
 * Author: Lucas Gabriel
 *
 * Created on 6 de Novembro de 2021, 21:32
 */

#include "pwm.h"
#include <math.h>

unsigned int TMR2_Prescale = 16;
void PWM_Init(unsigned int pwm_freq) 
{
    PR2     =   round((_XTAL_FREQ/4)/(pwm_freq*TMR2_Prescale)-1);
    PWM_Duty(0);
    TRISCbits.TRISC2 = 0;
    T2CON   =   0b00000111;
    CCP1CONbits.CCP1M =   0b1100;
}

void PWM_Duty(float duty_cycle)
{
    unsigned int duty_cycle_int;
    
    duty_cycle /= 100;
    duty_cycle_int = round(duty_cycle*PR2);
    CCPR1L            = duty_cycle_int;
    CCP1CONbits.CCP1X = duty_cycle_int>>1;
    CCP1CONbits.CCP1Y = duty_cycle_int>>2;
}