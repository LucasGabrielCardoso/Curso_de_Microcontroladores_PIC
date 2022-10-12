/*
 * File:   adc.c
 * Author: LucasGabriel
 *
 * Created on 23 de Fevereiro de 2022, 21:00
 */

#include "system_config.h"
#include "adc.h"

void ADC_Initializer(void)
{
    ADCON0bits.CHS          =   0b0000;
    ADCON1bits.VCFG1        =   0b0;    
    ADCON1bits.VCFG0        =   0b0;
    ADCON1bits.PCFG         =   0b1110;
    ADCON2bits.ADFM         =   0b1;
    ADCON2bits.ACQT         =   0b010;
    ADCON2bits.ADCS         =   0b001;
    ADCON0bits.ADON         =   0b1;
}
unsigned int ADC_Read(void)
{
    ADCON0bits.GO_nDONE     =   0b1;
    while (ADCON0bits.GO_nDONE);
    return (ADRESH<<8)+ADRESL;
}
