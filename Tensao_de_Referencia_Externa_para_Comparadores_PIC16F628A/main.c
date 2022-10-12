/*
 * File:   main.c
 * Author: Lucas Gabriel
 *
 * Created on 8 de Dezembro de 2021, 17:34
 */


#include "system.h"
#include "interrupt_manager.h"

void main(void) 
{
    System_Initialize();
    Interrupt_Initialize();
    
    while (1);
}
