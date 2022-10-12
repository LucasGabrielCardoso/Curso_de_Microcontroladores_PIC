/*
 * File:   system.c
 * Author: Lucas Gabriel
 *
 * Created on 19 de Novembro de 2021, 23:54
 */


#include "system.h"

void System_Initialize(void)
{
    //Disable internal comparators
    CMCONbits.CM            =   0b111;
    
    //Setting unusable ports as tristate
    TRISA                   =   0xFF;
    TRISB                   =   0xFF;
    
    //Setting LCD Ports
    D7_TRIS                 =   0b0;
    D7                      =   0b0;
    D6_TRIS                 =   0b0;
    D6                      =   0b0;
    D5_TRIS                 =   0b0;
    D5                      =   0b0;
    D4_TRIS                 =   0b0;
    D4                      =   0b0;
    EN_TRIS                 =   0b0;
    EN                      =   0b0;
    RS_TRIS                 =   0b0;
    RS                      =   0b0;
    
    //Setting Interrupt
    INTCONbits.GIE          =   0b1;
    INTCONbits.PEIE         =   0b1;
    
    //Setting Capture ports
    CAPTURE_TRIS            =   0b1;
    CAPTURE                 =   0b1;
}
