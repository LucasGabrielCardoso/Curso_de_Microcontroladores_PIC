/*
 * File:   main.c
 * Author: LucasGabriel
 *
 * Created on 21 de Janeiro de 2022, 18:35
 */


#include "system.h"

void main(void) 
{
    System_Initializer();
    Interrupt_Initializer();
    
    while (1);
}
