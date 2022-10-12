/*
 * File:   main.c
 * Author: Lucas Gabriel
 *
 * Created on 15 de Novembro de 2021, 12:40
 */


#include "system.h"
#include "interrupt_manager.h"

void main(void) 
{
    System_Initialize();
    Interrupt_Init();
    
    while (1);
}
