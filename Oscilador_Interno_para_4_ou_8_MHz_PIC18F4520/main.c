/*
 * File:   main.c
 * Author: LucasGabriel
 *
 * Created on 21 de Fevereiro de 2022, 19:47
 */


#include "system.h"

void main(void)
{
    System_Initializer();
    while(1)
    {
        LED     =   0b1;
        OSC_Delay();
        LED     =   0b0;
        OSC_Delay();
    }
}
