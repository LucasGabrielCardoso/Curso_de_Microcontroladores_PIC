/*
 * File:   system.c
 * Author: Lucas Gabriel
 *
 * Created on 19 de Novembro de 2021, 21:29
 */


#include "system.h"

void System_Initialize(void)
{
    //Disable internal comparators
    CMCONbits.CM            =   0b111;
    
    //Setting unusable ports in tristate
    TRISA                   =   0xFF;
    TRISB                   =   0xFF;
    
    //Settin Analogical output
    VRCONbits.VREN            =   0b1;
    VRCONbits.VROE            =   0b1;
    VRCONbits.VRR             =   0b1;
    VRCONbits.VR              =   0b111;
}
