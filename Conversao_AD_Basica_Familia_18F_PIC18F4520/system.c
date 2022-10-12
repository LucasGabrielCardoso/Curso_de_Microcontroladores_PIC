/*
 * File:   system.c
 * Author: LucasGabriel
 *
 * Created on 23 de Fevereiro de 2022, 16:39
 */


#include "system.h"

void System_Initializer(void) 
{
    ADCON1          =   0x07;
    CMCON            =   0x07;
    //Setting unused pins in tristate mode
    TRISA                   =   0xFF;
    TRISB                   =   0xFF;
    TRISC                   =   0xFF;
    TRISD                   =   0xFF;
    TRISE                   =   0xFF;
    //Setting output Port
    OUTPUT_MSB_TRIS         =   0x00;
    OUTPUT_MSB              =   0x00;
    OUTPUT_LSB1             =   0b0;
    OUTPUT_LSB1_TRIS        =   0b0;
    OUTPUT_LSB0_TRIS        =   0b0;
    OUTPUT_LSB0             =   0b0;
}
