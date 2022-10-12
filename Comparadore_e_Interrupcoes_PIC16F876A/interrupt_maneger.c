/*
 * File:   interrupt_maneger.c
 * Author: Lucas Gabriel
 *
 * Created on 15 de Novembro de 2021, 11:34
 */

#include <xc.h>

__interrupt() void Comparator_SRN(void) 
{
    if(PIE2bits.CMIE && PIR2bits.CMIF)
    {
        PIR2bits.CMIF       =   0b0;        //Cleaned Interrupt
        if(CMCONbits.C1OUT) PORTBbits.RB0 = 0b1;
        else                PORTBbits.RB0 = 0b0;
    }
}
