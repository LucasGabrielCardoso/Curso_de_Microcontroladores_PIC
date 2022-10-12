/*
 * File:   system.c
 * Author: LucasGabriel
 *
 * Created on 5 de Fevereiro de 2022, 21:46
 */


#include "system.h"

void System_Initializer(void)
{
//    Disable Internal Comparators
    CMCONbits.CM            =   0b111;
//    Setting Unused ports on Tristate Mode
    TRISA                   =   0xFF;
    TRISB                   =   0xFF;
    TRISC                   =   0xFF;
    
//   Setting I/O Pins
    DIGI_UNI_TRIS           =   0b0;
    DIGI_UNI                =   0b0;
    DIGI_DEZ_TRIS           =   0b0;
    DIGI_DEZ                =   0b0;
    DIGI_CEN_TRIS           =   0b0;
    DIGI_CEN                =   0b0;
    DIGI_MIL_TRIS           =   0b0;
    DIGI_MIL                =   0b0;
    
    BOTAO_MIN_TRIS          =   0b1;
    BOTAO_MIN               =   0b1;
    BOTAO_HOR_TRIS          =   0b1;
    BOTAO_HOR               =   0b1;
    
    DIGITO_TRIS             =   0x00;
    DIGITO                  =   0x00;
    
    LED_TRIS                =   0b0;
    LED                     =   0b0;
    
//  Setting Interrupts
    INTCONbits.GIE          =   0b1;
}

