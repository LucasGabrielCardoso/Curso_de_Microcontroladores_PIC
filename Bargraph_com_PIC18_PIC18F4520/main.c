/*
 * File:   main.c
 * Author: LucasGabriel
 *
 * Created on 23 de Fevereiro de 2022, 20:44
 */


#include "system.h"

void main(void) 
{
    System_Initializer();
    ADC_Initializer();
    while(1)
    {
        switch(ADC_Read())
        {
            case 0x00:  OUTPUT_LSB = 0x00; OUTPUT_MSB = 0x00; break;
            case 0x64:  OUTPUT_LSB = 0x01; OUTPUT_MSB = 0x00; break;
            case 0xC8:  OUTPUT_LSB = 0x03; OUTPUT_MSB = 0x00; break;
            case 0x12C: OUTPUT_LSB = 0x07; OUTPUT_MSB = 0x00; break;
            case 0x190: OUTPUT_LSB = 0x0F; OUTPUT_MSB = 0x00; break;
            case 0x1F4: OUTPUT_LSB = 0x1F; OUTPUT_MSB = 0x00; break;
            case 0x258: OUTPUT_LSB = 0x3F; OUTPUT_MSB = 0x00; break;
            case 0x2BC: OUTPUT_LSB = 0x7F; OUTPUT_MSB = 0x00; break;
            case 0x320: OUTPUT_LSB = 0xFF; OUTPUT_MSB = 0x00; break;
            case 0x384: OUTPUT_LSB = 0xFF; OUTPUT_MSB = 0x01; break;
            case 0x3EB: OUTPUT_LSB = 0xFF; OUTPUT_MSB = 0x03; break;
        }
    }
}
