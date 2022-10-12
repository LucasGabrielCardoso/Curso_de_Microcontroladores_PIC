/*
 * File:   interrupt_manager.c
 * Author: Lucas Gabriel
 *
 * Created on 15 de Novembro de 2021, 12:41
 */

#include "interrupt_manager.h"
#include "system_config.h"

void Interrupt_Init(void)
{
    INTCONbits.RBIE     =   0b1;            //Enable PortB interrupt
    INTCONbits.RBIF     =   0b0;            //Cleaned interrupt Flag
}
__interrupt() void Button_Change(void)
{
    if(INTCONbits.RBIE && INTCONbits.RBIF)
    {
        INTCONbits.RBIF     =   0b0;
        OUTPUT = !OUTPUT;
        __delay_us(500);
    }
}
