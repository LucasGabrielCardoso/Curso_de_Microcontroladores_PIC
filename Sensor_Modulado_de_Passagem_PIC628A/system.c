/*
 * File:   system.c
 * Author: Lucas Gabriel
 *
 * Created on 3 de Dezembro de 2021, 22:07
 */


#include "system.h"

void System_Initialize(void) 
{
//    Disable Internal Comparators
    CMCONbits.CM                =   0b111;
    
//    Setting Unused Pins in Tristate Mode
    TRISA                       =   0xFF;
    TRISB                       =   0xFF;
    
//    Setting Output Pins
    OUTPUT_TRIS                 =   0b0;
    OUTPUT                      =   0b0;
    LED_IR_TRIS                 =   0b0;
    LED_IR                      =   0b0;
    
//    Enable Interrupts
    INTCONbits.GIE              =   0b1;
    INTCONbits.PEIE             =   0b1;
}
