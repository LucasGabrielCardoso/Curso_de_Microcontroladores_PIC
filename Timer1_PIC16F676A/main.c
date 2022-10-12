/*
 * File:   main.c
 * Author: Lucas Gabriel
 *
 * Created on 15 de Novembro de 2021, 15:27
 */


#include "system.h"

void main(void) 
{
    System_Initialize();
    while (1) 
    {
        if(PIR1bits.TMR1IF)
        {
            PIR1bits.TMR1IF     =   0b0;
            OUTPUT^=1;   
        }
    }

}
