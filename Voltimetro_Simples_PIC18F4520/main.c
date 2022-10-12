/*
 * File:   main.c
 * Author: LucasGabriel
 *
 * Created on 24 de Fevereiro de 2022, 16:15
 */


#include "system.h"

void main(void) 
{
    System_Initializer();
    ADC_Initializer();
    button.flag    =   0b0;
    while(1)
    {
        Voltimeter(12);
    }
}
