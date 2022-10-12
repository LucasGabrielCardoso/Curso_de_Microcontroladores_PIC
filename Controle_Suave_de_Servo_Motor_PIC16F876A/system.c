/*
 * File:   system.c
 * Author: Lucas Gabriel
 *
 * Created on 18 de Novembro de 2021, 18:42
 */

#include "system.h"

void System_Initialize(void)
{
    //Disable internal comparators
    CMCONbits.CM            =   0b111;
    
    //Setting unusable ports in Tristate mode
    TRISA                   =   0xFF;
    TRISB                   =   0xFF;
    TRISC                   =   0xFF;
    
    //Setting outputs ports
    SERVO1_TRIS             =   0b0;
    SERVO1                  =   0b0;
    
    //Enable interrupts
    INTCONbits.GIE          =   0b1;
    INTCONbits.PEIE         =   0b1;
}
