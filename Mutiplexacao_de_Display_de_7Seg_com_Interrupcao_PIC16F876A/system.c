/*
 * File:   system.c
 * Author: LucasGabriel
 *
 * Created on 15 de Janeiro de 2022, 19:47
 */


#include "system.h"

void System_Initialize(void) 
{
    CMCONbits.CM    =   0b111;
    
    TRISA           =   0xFF;
    TRISB           =   0xFF;
    TRISC           =   0xFF;
    
    DIGI_UNI_TRIS       =   0b0;
    DIGI_UNI            =   0b0;
    DIGI_DEC_TRIS       =   0b0;   
    DIGI_DEC            =   0b0;
    DIGI_CEN_TRIS       =   0b0;
    DIGI_CEN            =   0b0;
    DIGI_MIL_TRIS       =   0b0;
    DIGI_MIL            =   0b0;

    DIGIT_TRIS          =   0x80;
    DIGIT               =   0x80;

    //Increase/Decriase bit flag
    INCnDEC_TRIS        =   0b1;
    INCnDEC             =   0b0;   
    
    INTCONbits.GIE      =   0b1;
    INTCONbits.PEIE     =   0b0;
}
