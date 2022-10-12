/*
 * File:   interrupt_maneger.c
 * Author: Lucas Gabriel
 *
 * Created on 15 de Novembro de 2021, 10:37
 */


#include "interrupt_maneger.h"

unsigned char controler   = 0; 
__interrupt() void Sleep_Mode(void)
{
    if(INTCONbits.INTE && INTCONbits.INTF)
    {
        INTCONbits.INTF     =   0b0;      //Cleaned External Interrupt Flag
        LED2^=1;
        controler^=1;
        if(controler) SLEEP();
    }
}//End Interrupt
