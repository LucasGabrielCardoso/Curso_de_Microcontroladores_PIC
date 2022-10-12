/*
 * File:   pwm.c
 * Author: Lucas Gabriel
 *
 * Created on 8 de Dezembro de 2021, 20:04
 */

#include "system.h"
#include "pwm.h"

void PWM_Initialize(void)
{
    PR2=0b00111110;
    PWM_Duty_Cycle(0);
    PWM_OUTPUT  =   0b0;
    CCP1CONbits.CCP1M   =   0b1100;
    T2CONbits.T2CKPS    =   0b10;
    T2CONbits.TMR2ON    =   0b1;
    T2CONbits.TOUTPS    =   0b0000;
}

void PWM_Duty_Cycle(unsigned char pwm_duty_Cycle)
{
    pwm_duty_Cycle  =   (pwm_duty_Cycle*PR2)/100;   
    CCPR1L              =   pwm_duty_Cycle;
    CCPR1H              =   pwm_duty_Cycle>>8;
}