/*
 * File:   main.c
 * Author: Lucas Gabriel
 *
 * Created on 4 de Dezembro de 2021, 09:13
 */

#include "system.h"
#include "interrupt_manager.h"

void main(void) 
{
    System_Initialize();
    Interrupt_Initialize();
    
    while (1) 
    {
        if(!SWITCH1 &&  !LED1)  LED1    =   0b1;
        if(!SWITCH2 &&  !LED2)  LED2    =   0b1;
        
        if(SWITCH1  &&  LED1)
        {
            LED1    =   0b0;
            T0_control++;
        }
        if(SWITCH2  &&  LED2)
        {
            LED2    =   0b0;
            T0_control--;
        }
    }

}
