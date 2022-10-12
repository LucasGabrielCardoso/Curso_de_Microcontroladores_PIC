/*
 * File:   adc.c
 * Author: Lucas Gabriel
 *
 * Created on 18 de Novembro de 2021, 18:49
 */


#include <xc.h>

void ADC_Initialize(void)
{
  ADCON1 = 0b11000000; // Internal reference voltage is selected
  ADCON0 &= 0x11000101; //Clearing the Channel Selection Bits
  ADCON0 = 0b01000001; //ADC ON and Fosc/16 is selected
  ADCON0 |= 0<<3; //Setting the required Bits
}

int ADC_Read_Input(void)
{
  GO_nDONE = 1; //Initializes A/D Conversion
  while(GO_nDONE); //Wait for A/D Conversion to complete
  return ((ADRESH<<8)+ADRESL); //Returns Result
}