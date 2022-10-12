/*
 * File:   system.c
 * Author: Lucas Gabriel
 *
 * Created on 28 de Novembro de 2021, 20:10
 */


#include "system.h"

void System_Initialize(void)
{
    //Disable Unused Functions
    CMCONbits.CM                =   0b111;
    
    //Setting Unused Ports In Tristate Mode
    TRISA                       =   0x00;
    TRISB                       =   0x00;

    //Setting Display Pins
    RS_TRIS                     =   0b0;
    RS                          =   0b0;
    EN_TRIS                     =   0b0;
    EN                          =   0b0;
    D4_TRIS                     =   0b0;
    D4                          =   0b0;
    D5_TRIS                     =   0b0;
    D5                          =   0b0;
    D6_TRIS                     =   0b0;
    D6                          =   0b0;
    D7_TRIS                     =   0b0;
    D7                          =   0b0;
    
    //Setting Interruptions
    INTCONbits.GIE              =   0b1;
    INTCONbits.PEIE             =   0b1;
}
