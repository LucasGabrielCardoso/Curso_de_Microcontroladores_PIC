/*
 * File:   button.c
 * Author: Lucas Gabriel
 *
 * Created on 14 de Novembro de 2021, 20:29
 */


#include "system.h"
#include "button.h"

__interrupt() void Button(void) 
{
    if(INTCONbits.INTE && INTCONbits.INTF)      //Houve a interrupção externa?
    {                                           //Sim...
        INTCONbits.INTF =   0b0;                //Limpa a flag
        toggle_led2();                          //Muda o estado do led2
    }
}
