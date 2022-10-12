/*
 * File:   system.c
 * Author: Lucas Gabriel
 *
 * Created on 8 de Dezembro de 2021, 17:35
 */


#include "system.h"

void System_Initialize(void)
{
//    Setting Unuseable Pin in Tristate mode
    TRISA                       =   0xFF;
    TRISB                       =   0xFF;
    
//    Setting Input Reference Voltage
    TENSAO_REF_TRIS             =   0b1;
    
//    Setting I/O Pins
    RELAY_TRIS                 =   0b0;
    RELAY                      =   0b0;
            
//    Setting Internal Comparators
    CMCONbits.CM                =   0b010;
    CMCONbits.CIS               =   0b0;
    CMCONbits.C2OUT             =   0b0;
    CMCONbits.C2INV             =   0b0;
    CMCONbits.C1OUT             =   0b0;
    CMCONbits.C1INV             =   0b0;
    
//    Setting Voltage Reference Control
    VRCONbits.VREN              =   0b1;
    VRCONbits.VROE              =   0b0;
    VRCONbits.VRR               =   0b1;
    VRCONbits.VR                =   0b1100; 
    
//    Setting Interruption
    INTCONbits.GIE              =   0b1;
    INTCONbits.PEIE             =   0b1;
}