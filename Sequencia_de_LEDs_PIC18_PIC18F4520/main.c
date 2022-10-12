/*
 * File:   main.c
 * Author: LucasGabriel
 *
 * Created on 22 de Fevereiro de 2022, 16:51
 */


#include "system.h"

//unsigned char controller = 0x00;
void main(void) 
{
    System_Initializer();
    while(1)
    {
        if(CONTROLLER==0x00) CONTROLLER = 0x01;
        __delay_ms(500);
        CONTROLLER = CONTROLLER<<1;
    }
}
