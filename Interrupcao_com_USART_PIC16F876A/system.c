/*
 * File:   system.c
 * Author: LucasGabriel
 *
 * Created on 7 de Fevereiro de 2022, 18:38
 */


#include "system.h"

void System_Initializer(void) 
{
//    Disable Internal Comparators
    CMCONbits.CM                =   0b111;
    
//    Setting Unused Pins into Tristate Mode
    TRISA                       =   0xFF;
    TRISB                       =   0xFF;
    
//    Setting LED Pins like output Pins
    LED_2_TRIS                  =   0b0;
    LED_2                       =   0b0;
    LED_1_TRIS                  =   0b0;
    LED_1                       =   0b0;
    
//    Setting TX and RX Pins Like output and input Pins
    TX_PIN_TRIS                 =   0b0;
    TX_PIN                      =   0b0;
    RX_PIN_TRIS                 =   0b1;
    RX_PIN                      =   0b0;
    
//    Setting Interrupt
    INTCONbits.GIE              =   0b1;
    INTCONbits.PEIE             =   0b1;
}
