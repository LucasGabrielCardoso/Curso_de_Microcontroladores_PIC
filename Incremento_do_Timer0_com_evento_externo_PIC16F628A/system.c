/*
 * File:   system.c
 * Author: Lucas Gabriel
 *
 * Created on 3 de Dezembro de 2021, 18:25
 */


#include "system.h"

void System_Initialize(void) 
{
    //Disable Comparators
    CMCONbits.CM                =   0b111;
    
    //Setting Unused Ports to Tristate Mode
    TRISA                       =   0xFF;
    TRISB                       =   0xFF;
    
    //Settings Led Pin
    LED1_TRIS                   =   0b0;
    LED1                        =   0b0;
    
    //Enable Interrupts
    INTCONbits.GIE              =   0b1;
    INTCONbits.PEIE             =   0b0;    
}
