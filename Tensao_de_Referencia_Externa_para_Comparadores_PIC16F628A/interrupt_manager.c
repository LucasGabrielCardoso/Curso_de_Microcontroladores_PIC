/*
 * File:   interrupt_manager.c
 * Author: Lucas Gabriel
 *
 * Created on 8 de Dezembro de 2021, 18:16
 */

#include "system.h"
#include "interrupt_manager.h"

void Interrupt_Initialize(void) 
{
    PIE1bits.CMIE                   =   0b1;
}

__interrupt() void Interrupt_Comparator(void)
{
    if(PIR1bits.CMIF)
    {
        PIR1bits.CMIF               =   0b0;
        if(!CMCONbits.C1OUT)
        {
            RELAY                   =   0b1;   
        }
        else RELAY                  =   0b0;
    }
}
