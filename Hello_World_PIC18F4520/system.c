/*
 * File:   system.c
 * Author: LucasGabriel
 *
 * Created on 17 de Fevereiro de 2022, 21:53
 */


#include "system.h"

void System_Initialization(void) 
{
//    Setting Unused Pins like Tristate Mode
    TRISA               =   0xFF;
    TRISB               =   0xFF;
//    Disable Analog Pins
    ADCON1              =   0x0F;
//    Setting Pin 0 Like a output Pin
    OUTPUT_TRIS         =   0b0;
    OUTPUT              =   0b0;
}
