/*
 * File:   main.c
 * Author: Lucas Gabriel
 *
 * Created on 18 de Novembro de 2021, 18:42
 */


#include "system.h"
#include "interrupt_manager.h"

void main(void) 
{
    System_Initialize();
    Interrupt_Initialize();
    
    while (1)
    {
        adc                     =   (ADC_Read_Input())/64;
        duty                    =   adc + 16;    
    }

}
