/*
 * File:   system.c
 * Author: LucasGabriel
 *
 * Created on 23 de Fevereiro de 2022, 20:53
 */


#include "system.h"

void System_Initializer(void)
{
    //Setting unused ports like tristate mode
    TRISA               =   0xFF;
    TRISB               =   0xFF;
    TRISC               =   0xFF;
    TRISD               =   0xFF;
    TRISE               =   0xFF;
    //Setting I/O Pins
    OUTPUT_MSB_TRIS     =   0xFC;
    OUTPUT_MSB          =   0xFC;
    OUTPUT_LSB_TRIS     =   0x00;
    OUTPUT_LSB          =   0x00;
    //Setting A/D pin like a input
    SENSOR_TRIS         =   0b1;
}
