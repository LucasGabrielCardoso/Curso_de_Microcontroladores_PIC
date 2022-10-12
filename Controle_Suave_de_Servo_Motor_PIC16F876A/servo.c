/*
 * File:   adc.c
 * Author: Lucas Gabriel
 *
 * Created on 18 de Novembro de 2021, 18:49
 */

#include "system_config.h"
#include "servo.h"
#include "interrupt_manager.h"

char i;

void Servo_Slow_Up(void)
{
    for(i=9; 38>i; i++)
    {
        duty    =   i;
        __delay_ms(50);
    }//End For
}//End Servo_Slow_Up

void Servo_Slow_Down(void)
{
    for(i=37; 8<i; i--)
    {
        duty    =   i;
        __delay_ms(50);
    }//End for
}//End Servo_Slow_Down