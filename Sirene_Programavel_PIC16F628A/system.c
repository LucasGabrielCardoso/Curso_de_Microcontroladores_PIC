/*
 * File:   system.c
 * Author: LucasGabriel
 *
 * Created on 20 de Janeiro de 2022, 19:51
 */


#include "system.h"
#include "system_config.h"

void System_Initializer(void) 
{
    CMCONbits.CM        =   0b111;
    TRISA               =   0xFF;
    TRISB               =   0xFF;
    
    LED_2_TRIS          =   0b0;
    LED_2               =   0b0;
    LED_1_TRIS          =   0b0;
    LED_1               =   0b0;
    BUZER_TRIS          =   0b0;
    BUZER               =   0b0;
    
    INTCONbits.GIE      =   0b1;
    INTCONbits.PEIE     =   0b1;
}
