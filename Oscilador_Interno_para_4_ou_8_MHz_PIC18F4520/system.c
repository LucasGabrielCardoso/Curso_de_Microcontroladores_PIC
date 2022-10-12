/*
 * File:   system.c
 * Author: LucasGabriel
 *
 * Created on 21 de Fevereiro de 2022, 20:03
 */


#include "system.h"

void System_Initializer(void)
{
    //Setting Internal OSC
    OSCCONbits.IDLEN    =   0b0;
    OSCCONbits.IRCF     =   0b111;
    OSCCONbits.OSTS     =   0b0;
    OSCCONbits.IRCF     =   0b0;
    OSCCONbits.SCS      =   0b10;
    
    //Disable unused ports
    TRISA               =   0xFF;
    TRISB               =   0xFF;
    TRISC               =   0xFF;
    TRISD               =   0xFF;
    TRISE               =   0xFF;
    //Setting Port B pins like I/O pins
    ADCON1              =   0x0F;
    //Setting Internal pull-ups from port B
    INTCON2bits.nRBPU   =   0b0;
    //Setting LEDs and Button pins
    LED_TRIS            =   0b0;
    LED                 =   0b0;
    BUTTON_TRIS         =   0b1;
    BUTTON              =   0b1;
}
