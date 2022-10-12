/*
 * File:   main.c
 * Author: LucasGabriel
 *
 * Created on 23 de Fevereiro de 2022, 16:31
 */


#include "system.h"

void main(void) {
    System_Initializer();
    ADC_Initializer();
    while (1) 
    {
        ADC_Read();
    }

}
