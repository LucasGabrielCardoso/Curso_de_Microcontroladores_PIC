/*
 * File:   system.c
 * Author: LucasGabriel
 *
 * Created on 20 de Fevereiro de 2022, 17:13
 */


#include "system_config.h"

void System_Initializer(void)
{
//    Setting Port B pins like I/O
    ADCON1                  =   0x0F;
    
//    Settins unused Pins like Tristate Mode
    TRISA                   =   0xFF;
    TRISB                   =   0xFF;
    TRISC                   =   0xFF;
    TRISD                   =   0xFF;
    TRISE                   =   0xFF;
    
//    Abling Port B internal pull-ups
    INTCON2bits.nRBPU       =   0b0;
    
//    Setting I/O ports
    LED_TRIS                =   0b0;
    LED                     =   0b0;
    BUTTON_TRIS             =   0b1;
    BUTTON                  =   0b1;
}
