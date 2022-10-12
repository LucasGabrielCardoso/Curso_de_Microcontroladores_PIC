/*
 * File:   main.c
 * Author: Lucas Gabriel
 *
 * Created on 15 de Novembro de 2021, 16:11
 */


#include "system.h"
#include "interrupt_manager.h"

void main(void) 
{
    System_Initialize();
    Interrupt_Init();
    
    while(1);

    
}//End Main
