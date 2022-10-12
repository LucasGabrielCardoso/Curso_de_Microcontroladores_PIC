/*
 * File:   system.c
 * Author: Lucas Gabriel
 *
 * Created on 15 de Novembro de 2021, 15:28
 */


#include "system.h"

void System_Initialize(void) 
{
    //Disable internal comparators
    CMCONbits.CM            = 0b111;

    //Settin TMR1
    T1CONbits.TMR1ON        =   0b1;          //Starting TMR1
    T1CONbits.T1CKPS        =   0b11;          //1:8 prescale value
    TMR1L                   =   0x00;         //Starting TMR1 in 0
    TMR1H                   =   0x00;
    
    //Setting I/O Ports
    OUTPUT_TRIS             =   0b0;
    OUTPUT                  =   0b0;
}
