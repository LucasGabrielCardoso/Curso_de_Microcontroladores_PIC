/*
 * File:   system.c
 * Author: Lucas Gabriel
 *
 * Created on 4 de Dezembro de 2021, 09:13
 */


#include "system.h"

void System_Initialize(void)
{
//    Disable Internal Comparators
    CMCONbits.CM                =   0b111;
    
//    Setting Unused Ports on Tristate Mode
    TRISA                       =   0xFF;
    TRISB                       =   0xFF;
    
//    Setting SWTCHs' Pins
    SWITCH2_TRIS                =   0b1;
    SWITCH2                     =   0b1;
    SWITCH1_TRIS                =   0b1;
    SWITCH1                     =   0b1;
    
//    Setting LEDs' Pins
    LED2_TRIS                   =   0b0;
    LED2                        =   0b0;
    LED1_TRIS                   =   0b0;
    LED1                        =   0b0;
    
//    Setting DIPSWITCH Pins
    IN4_TRIS                    =   0b0;
    IN4                         =   0b0;
    IN3_TRIS                    =   0b0;
    IN3                         =   0b0;
    IN2_TRIS                    =   0b0;
    IN2                         =   0b0;
    IN1_TRIS                    =   0b0;
    IN1                         =   0b0;
    
//    Enable Global Interrups
    INTCONbits.GIE              =   0b1;
    INTCONbits.PEIE             =   0b0;
}
