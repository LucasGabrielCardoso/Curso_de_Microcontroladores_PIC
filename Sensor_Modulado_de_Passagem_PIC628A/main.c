/*
 * File:   main.c
 * Author: Lucas Gabriel
 *
 * Created on 3 de Dezembro de 2021, 22:07
 */

#include <stdlib.h>
#include "system.h"
#include "interrupt_manager.h"

void main(void) 
{
    System_Initialize();
    Interrupt_Initialize();
    
    while (1) 
    {
        timer2  =   abs(timer2 - timer1);
        timer2  =   (timer2>>4);
        freq    =   1000000 / (timer2);
        
        if((950<freq) & (1050>freq))   OUTPUT  =   0b1;
        else    OUTPUT  =   0b0;
        
        flagB1  =   0x00;
        __delay_ms(100);
    }

}
