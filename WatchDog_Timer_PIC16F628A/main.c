/*
 * File:   main.c
 * Author: Lucas Gabriel
 *
 * Created on 14 de Novembro de 2021, 23:46
 */


#include "system.h"

void main(void) 
{
    System_Initialize();
    
    asm("clrwdt");              //Comando que limpa o WDT              
    while(1) 
    {
        asm("clrwdt");              
        
        __delay_ms(300);
        LED2^=1;
        __delay_ms(300);
    }

}
