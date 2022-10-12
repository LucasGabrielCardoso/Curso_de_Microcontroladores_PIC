/*
 * File:   main.c
 * Author: Lucas Gabriel
 *
 * Created on 9 de Dezembro de 2021, 23:17
 */


#include <xc.h>

#include "system.h"
#include "interrupt_manager.h"
#include "pwm.h"

void main(void) 
{
    System_Initalize();
    Interrupt_Initialize();
    
    while (1) 
    {
        Change_PWM();
    }

    return;
}
