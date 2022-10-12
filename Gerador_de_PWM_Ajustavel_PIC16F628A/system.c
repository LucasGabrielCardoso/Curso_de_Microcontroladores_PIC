/*
 * File:   system.c
 * Author: Lucas Gabriel
 *
 * Created on 8 de Dezembro de 2021, 20:03
 */


#include "system.h"

void System_Initalize(void) 
{
//    Setting Unusable Pins in Tristate Mode
    TRISA               =   0xFF;
    TRISB               =   0xFF;
    
//    Disable Internal Comparators
    CMCONbits.CM        =   0b111;
    
//    Setting Display Pins
    D7_TRIS             =   0b0;
    D7                  =   0b0;
    D6_TRIS             =   0b0;
    D6                  =   0b0;
    D5_TRIS             =   0b0;
    D5                  =   0b0;
    D4_TRIS             =   0b0;
    D4                  =   0b0;
    
    RS_TRIS             =   0b0;
    RS                  =   0b0;
    EN_TRIS             =   0b0;
    EN                  =   0b0;
    
//    Setting Interruptions
    INTCONbits.GIE      =   0b1;
    INTCONbits.PEIE     =   0b0;
    
}
