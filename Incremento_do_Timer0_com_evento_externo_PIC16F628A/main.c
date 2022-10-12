/*
 * File:   main.c
 * Author: Lucas Gabriel
 *
 * Created on 3 de Dezembro de 2021, 18:25
 */


#include "system.h"
#include "interrupt_manager.h"

void main(void) 
{
    System_Initialize();
    Interrupt_Initialize();
    
    while (1);
}
