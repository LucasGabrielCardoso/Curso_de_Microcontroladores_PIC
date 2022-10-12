/*
 * File:   main.c
 * Author: LucasGabriel
 *
 * Created on 17 de Fevereiro de 2022, 21:53
 */


#include "system.h"

void main(void) 
{
    System_Initialization();
    while(1) 
    {
        OUTPUT_OFF();
        OUTPUT_ON();
    }
}
