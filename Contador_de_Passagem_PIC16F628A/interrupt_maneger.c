/*
 * File:   interrupt_maneger.c
 * Author: Lucas Gabriel
 *
 * Created on 14 de Novembro de 2021, 21:32
 */


#include "system.h"
#include "display.h"
#include "interrupt_maneger.h"

unsigned char counter   =   0x0;
__interrupt() void Sensor(void)                         //Interrupção externa
{                                                       
    if(INTCONbits.INTE && INTCONbits.INTF)              //Sim...
    {
        INTCONbits.INTF =   0b0;    //Limpa a Flag
        counter++;                  //Incrementa o contador
        if(counter>9) counter=0x0;  //Reinicia o Contador
        Disp(counter);              //Envia dados para o display
    }//End IF
}//End Interrupt