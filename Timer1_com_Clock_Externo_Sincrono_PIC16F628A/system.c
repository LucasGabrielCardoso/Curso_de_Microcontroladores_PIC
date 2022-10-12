/*
 * File:   system.c
 * Author: LucasGabriel
 *
 * Created on 4 de Fevereiro de 2022, 18:35
 */


#include "system.h"

void System_Initializer(void) 
{
//    Internal Comparators Disable
    CMCONbits.CM                =   0b111;
    
//    Putting Unused Ports into Tristate Mode
    TRISA                       =   0xFF;
    TRISB                       =   0xFF;
    
//    I/O Ports Configurations
    OUTPUT_TRIS                 =   0b0;
    OUTPUT                      =   0b0;
    
//    Setting Interrupts
    INTCONbits.GIE              =   0b1;
    INTCONbits.PEIE             =   0b1;
}
