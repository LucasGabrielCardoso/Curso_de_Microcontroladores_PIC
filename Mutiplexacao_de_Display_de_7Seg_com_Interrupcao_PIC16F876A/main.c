/*
 * File:   main.c
 * Author: LucasGabriel
 *
 * Created on 15 de Janeiro de 2022, 19:47
 */

#include "interrupt_manager.h"
#include "system.h"
#include "seven-seg-display.h"



void main(void) 
{
    System_Initialize();
    Interrupt_Initialize();
    while (1) changeCounter();
}
