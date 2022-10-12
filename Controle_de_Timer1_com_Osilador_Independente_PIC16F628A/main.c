/*
 * File:   main.c
 * Author: LucasGabriel
 *
 * Created on 22 de Janeiro de 2022, 12:50
 */


#include "system.h"

void main(void) 
{
    System_Initializer();
    Interrupt_Initializer();
    
    while (1);

}
