/*
 * File:   system.c
 * Author: Lucas Gabriel
 *
 * Created on 15 de Novembro de 2021, 01:02
 */


#include "system.h"

void System_Initialize(void) 
{
    OPTION_REG      =   0x8e;       //Associamos o prescaler associados ao WDT  (1:64)
                                    //Desabilitamos os resistores de pull-up
    
    LED1_TRIS       =   0b0;
    LED1            =   0b1;
    LED2_TRIS       =   0b0;
    LED2            =   0b0;    
}
