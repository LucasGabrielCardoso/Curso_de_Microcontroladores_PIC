/*
 * File:   system.c
 * Author: Lucas Gabriel
 *
 * Created on 30 de Novembro de 2021, 18:22
 */


#include "system.h"

void System_Initialize(void)
{
    //Disable Unused registers
    CMCONbits.CM                =   0b111;
    
    //Setting unused pins in tristate mode
    TRISA                       =   0xFF;
    TRISB                       =   0xFF;
    
    //Setting Display Pins
    D7_TRIS                     =   0b0;
    D7                          =   0b0;
    D6_TRIS                     =   0b0;
    D6                          =   0b0;
    D5_TRIS                     =   0b0;
    D5                          =   0b0;
    D4_TRIS                     =   0b0;
    D4                          =   0b0;
    EN_TRIS                     =   0b0;
    EN                          =   0b0;
    RS_TRIS                     =   0b0;
    RS                          =   0b0;
    
    //Setting BACKLINGHT Pin
    BACKLIGHT_TRIS              =   0b0;
    BACKLIGHT                   =   0b0;
    
    //Setting OUTPUT Pin
    OUTPUT_TRIS                 =   0b0;
    OUTPUT                      =   0b0;
    
    //Setting Interrupts
    INTCONbits.GIE              =   0b1;
    INTCONbits.INTE             =   0b1;
}
