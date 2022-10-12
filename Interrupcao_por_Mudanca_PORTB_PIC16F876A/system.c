/*
 * File:   system.c
 * Author: Lucas Gabriel
 *
 * Created on 15 de Novembro de 2021, 12:40
 */


#include "system.h"

void System_Initialize(void) 
{
    //Unable internal comparators 
    CMCONbits.CM        =   0b111;
    
    //Setting Buttons Ports
    SW4_TRIS            =   0b1;
    SW4                 =   0b1;
    SW3_TRIS            =   0b1;
    SW3                 =   0b0;
    SW2_TRIS            =   0b1;
    SW2                 =   0b0;
    SW1_TRIS            =   0b1;
    SW1                 =   0b0;
    
    //Setting output signal pin
    OUTPUT_TRIS         =   0b0;
    OUTPUT              =   0b0;
    
    //Enable Interrupt
    INTCONbits.GIE      =   0b1;
}
