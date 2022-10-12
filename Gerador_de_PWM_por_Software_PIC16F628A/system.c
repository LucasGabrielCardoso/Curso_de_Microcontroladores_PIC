/*
 * File:   system.c
 * Author: Lucas Gabriel
 *
 * Created on 9 de Dezembro de 2021, 23:17
 */


#include "system.h"

void System_Initalize(void) 
{
//    Disable internal Comparators
    CMCONbits.CM                =   0b111;
    
//    Setting Unusable Pins in Tristate mode
    TRISA                       =   0xFF;
    TRISB                       =   0xFF;
    
//    Settind PWM Ports
    PWM1_TRIS                   =   0b0;
    PWM1                        =   0b0;
    PWM2_TRIS                   =   0b0;
    PWM2                        =   0b0;
    PWM3_TRIS                   =   0b0;
    PWM3                        =   0b0;
    
//    Setting Button and Leds Ports
    BUTTON2_TRIS                =   0b1;
    BUTTON2                     =   0b1;
    BUTTON1_TRIS                =   0b1;
    BUTTON1                     =   0b1;
    SELECT_TRIS                 =   0b1;
    SELECT                      =   0b1;
    
    LED2_TRIS                   =   0b0;
    LED2                        =   0b0;
    LED1_TRIS                   =   0b0;
    LED1                        =   0b0;
    
//    Enabling Interrupts
    INTCONbits.GIE              =   0b1;
    INTCONbits.PEIE             =   0b1;
}
