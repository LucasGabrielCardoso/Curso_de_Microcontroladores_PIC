/*
 * File:   oscilator_manager.c
 * Author: LucasGabriel
 *
 * Created on 21 de Fevereiro de 2022, 20:18
 */


#include "system_config.h"
#include "oscilator_manager.h"

unsigned char i1, i2;

void OSC_Delay(void)
{
    for(i1=15; i1; i1--)
    {
        if(!BUTTON) OSCCONbits.IRCF ^= 1;
        for(i2=15; i2; i2--);
    }
}
