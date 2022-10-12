/*
 * File:   main.c
 * Author: LucasGabriel
 *
 * Created on 20 de Janeiro de 2022, 19:51
 */


#include "system.h"

void main(void) 
{
    System_Initializer();
    Interrupt_Initializer();
    PWM_Initializer(1500);
    PWM_Duty_Cycle(my_duty);
    
    LED_1   =   0b0;
    LED_2   =   0b1;
    BUZER   =   0b0;
    
    while(1) PWM_Duty_Cycle(my_duty);
}
