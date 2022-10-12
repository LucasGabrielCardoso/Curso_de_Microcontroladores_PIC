/*
 * File:   main.c
 * Author: Lucas Gabriel
 *
 * Created on 14 de Novembro de 2021, 19:35
 */


#include "system.h"

void main(void) 
{
    System_Initialize();
    
    while(1)
    {
        led1    =   0b1;        //Liga led verde
        __delay_ms(2000);
        led1    =   0b0; 
        __delay_ms(2000);       //Desliga led verde
    }
}
