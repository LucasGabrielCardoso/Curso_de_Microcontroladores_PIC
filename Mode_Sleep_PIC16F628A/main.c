/*
 * File:   main.c
 * Author: Lucas Gabriel
 *
 * Created on 15 de Novembro de 2021, 10:08
 */


#include "system.h"
#include "interrupt_maneger.h"

void main(void) 
{
    System_Initialize();
    while(1)
    {
        __delay_ms(500);
        LED1^=1;
        __delay_ms(500);
    }//End While
}
