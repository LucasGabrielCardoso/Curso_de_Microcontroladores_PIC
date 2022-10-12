/*
 * File:   adc.c
 * Author: LucasGabriel
 *
 * Created on 23 de Fevereiro de 2022, 17:36
 */


#include "system.h"

void ADC_Initializer(void)
{
    ADCON0bits.CHS          =   0b0000;
    ADCON1bits.VCFG0        =   0b0;
    ADCON1bits.VCFG1        =   0b0;
    ADCON1bits.PCFG         =   0b1110;
    ADCON2bits.ADFM         =   0b1;
    ADCON2bits.ACQT         =   0b111;
    ADCON2bits.ADCS         =   0b111;
    ADCON0bits.ADON         =   0b1;
}
unsigned int ADC_Read(void)
{
    ADCON0bits.GO_nDONE = 0b1;
    while (ADCON0bits.GO_nDONE);
    OUTPUT_LSB1     =   ADRESH>>1;
    OUTPUT_LSB0     =   ADRESH;
    OUTPUT_MSB      =   ADRESL;
}
