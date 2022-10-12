/*
 * File:   system.c
 * Author: LucasGabriel
 *
 * Created on 21 de Janeiro de 2022, 18:36
 */


#include "system.h"

void System_Initializer(void)
{
    CMCONbits.CM                =   0b111;
    
    TRISA                       =   0xFF;
    TRISB                       =   0xFF;
    
    LED_1_TRIS                  =   0b0;
    LED_1                       =   0b0;
    LED_2_TRIS                  =   0b0;
    LED_2                       =   0b0;
    OUTPUT_1_TRIS               =   0b0;
    OUTPUT_1                    =   0b0;
    OUTPUT_2_TRIS               =   0b0;
    OUTPUT_2                    =   0b0;
    OUTPUT_3_TRIS               =   0b0;
    OUTPUT_3                    =   0b0;
    OUTPUT_4_TRIS               =   0b0;
    OUTPUT_4                    =   0b0;
    
    INTCONbits.GIE              =   0b1;
    INTCONbits.PEIE             =   0b1;
}
