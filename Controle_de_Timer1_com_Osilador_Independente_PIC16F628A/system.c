/*
 * File:   system.c
 * Author: LucasGabriel
 *
 * Created on 22 de Janeiro de 2022, 12:50
 */


#include "system.h"
#include "system_config.h"

void System_Initializer(void) 
{
    CMCONbits.CM          = 0b111;
    
    TRISA                 = 0xFF;     
    TRISB                 = 0xFF;
    
    OUTPUT_TRIS           = 0b0;   
    OUTPUT                = 0b0;   
    
    INTCONbits.GIE        = 0b1;
    INTCONbits.PEIE       = 0b1;
}
