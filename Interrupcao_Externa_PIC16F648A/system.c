/*
 * File:   system.c
 * Author: Lucas Gabriel
 *
 * Created on 14 de Novembro de 2021, 19:41
 */


#include "system.h"

void System_Initialize(void) 
{
    //Desable Unnecessary Registers
    CMCON       =   0b00000111;         //Desabilita comparadores Internos
    
    //Config Leds and Button Ports
    led1_Tris   =   0b0;
    led1        =   0b0;
    led2_Tris   =   0b0;
    led2        =   0b0;
    butt_Tris   =   0b1;
    butt        =   0b1;
    
    //Set Button Interrupt
    INTCONbits.GIE          =   0b1;
    INTCONbits.PEIE         =   0b0;
    INTCONbits.INTE         =   0b1;
    INTCONbits.INTF         =   0b0;
    OPTION_REGbits.INTEDG   =   0b0;
}
