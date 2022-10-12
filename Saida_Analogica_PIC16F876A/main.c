/*
 * File:   main.c
 * Author: Lucas Gabriel
 *
 * Created on 19 de Novembro de 2021, 21:29
 */


#include "system.h"

void main(void) 
{
    System_Initialize();
    
    while (1)
    {
        VRCONbits.VR    =   0b000;
        __delay_ms(500);
        VRCONbits.VR    =   0b001;
        __delay_ms(500);
        VRCONbits.VR    =   0b010;
        __delay_ms(500);
        VRCONbits.VR    =   0b011;
        __delay_ms(500);
        VRCONbits.VR    =   0b100;
        __delay_ms(500);
        VRCONbits.VR    =   0b101;
        __delay_ms(500);
        VRCONbits.VR    =   0b110;
        __delay_ms(500);
        VRCONbits.VR    =   0b111;
        __delay_ms(500);
    }

}
