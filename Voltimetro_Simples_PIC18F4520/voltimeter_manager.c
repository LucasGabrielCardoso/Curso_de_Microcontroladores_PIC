/*
 * File:   voltimeter_manager.c
 * Author: LucasGabriel
 *
 * Created on 24 de Fevereiro de 2022, 16:24
 */

#include "voltimeter_manager.h"
#include "system.h"

int voltage_result     =   0x00;

void Voltimeter(unsigned char range)
{
    char    i   =   0x00;
    adc_result  =   ADC_Read();
    voltage_result  =   ((adc_result*range)/1024)+1;
    if(!BUTTON) button.flag =   0b1;
    if(BUTTON   && button.flag)
    {
        for(i=0x00; i<voltage_result; i++)
        {
            LED         =   0b1;
            __delay_ms(200);
            LED         =   0b0;
            __delay_ms(200);
        }
        button.flag =   0b0;
    }
}
