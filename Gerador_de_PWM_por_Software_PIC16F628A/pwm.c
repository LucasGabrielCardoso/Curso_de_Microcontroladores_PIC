/*
 * File:   pwm.c
 * Author: Lucas Gabriel
 *
 * Created on 9 de Dezembro de 2021, 23:43
 */


#include "pwm.h"
#include "system_config.h"
#include "interrupt_manager.h"

unsigned char duty_PWM1   = 128,              //Duty Cicle initialized in 50%
              duty_PWM2   = 128,              //Duty Cicle initialized in 50%
              duty_PWM3   = 128,              //Duty Cicle initialized in 50%
              control_PWM = 0x01;             //Select whese PWM will change

void Change_PWM(void) 
{
    if(!BUTTON1)    state_button1=0x01;
    if(!BUTTON2)    state_button2=0x01;
    
    if(BUTTON1 && state_button1)
    {
        state_button1=0x00;
        switch(control_PWM)
        {
            case 0x01:
                duty_PWM1+=4;
                break;
            case 0x02:
                duty_PWM2+=4;
                break;
            case 0x03:
                duty_PWM3+=4;
                break;
        }
    }
    if(BUTTON2 && state_button2)
    {
        state_button2=0x00;
        switch(control_PWM)
        {
            case 0x01:
                duty_PWM1-=4;
                break;
            case 0x02:
                duty_PWM2-=4;
                break;
            case 0x03:
                duty_PWM3-=4;
                break;
        }
    }
    switch(control_PWM)
    {
        case 0x01:
            LED1=0b0;
            LED2=0b1;
            break;
        case 0x02:
            LED1=0b1;
            LED2=0b0;
            break;
        case 0x03:
            LED1=0b1;
            LED2=0b1;
            break;
    }
}
