/*
 * File:   system.c
 * Author: LucasGabriel
 *
 * Created on 24 de Fevereiro de 2022, 16:32
 */


#include "system.h"

void System_Initializer(void)
{
    //Setting unused pins in Tristate Mode
    TRISA               =   0xFF;
    TRISB               =   0xFF;
    TRISC               =   0xFF;
    TRISD               =   0xFF;
    TRISE               =   0xFF;
    
    //Setting internal pull-ups
    INTCON2bits.nRBPU   =   0x0;
    
    //Setting I/O Pins
    LED_TRIS            =   0b0;
    LED                 =   0b0;
    BUTTON_TRIS         =   0b1;
    BUTTON              =   0b1;
    
    //Setting Anolog Pins
    SENSOR_TRIS         =   0b1;
}