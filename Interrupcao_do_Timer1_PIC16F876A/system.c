/*
 * File:   system.c
 * Author: Lucas Gabriel
 *
 * Created on 15 de Novembro de 2021, 16:11
 */


#include "system.h"

void System_Initialize(void) 
{
    //Disable internal comparators
    CMCONbits.CM        =   0b111;
    
    //Setting I/O Ports
    OUTPUT2_TRIS        =   0b0;
    OUTPUT2             =   0b0;
    OUTPUT1_TRIS        =   0b0;
    OUTPUT1             =   0b0;
    
    //Setting Interrups
    INTCONbits.GIE      =   0b1;
    INTCONbits.PEIE     =   0b1;
}
