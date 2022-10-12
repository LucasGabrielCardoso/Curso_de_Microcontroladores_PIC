/*
 * File:   main.c
 * Author: LucasGabriel
 *
 * Created on 4 de Fevereiro de 2022, 18:35


     Ciclo de máquina para 4MHz = 1us
     Estouro Timer = TMR1H:TMR1L x prescaler x ciclo do clock externo (10kHz)
     Estouro Timer =     410     x     1     x      1/(10E3)
     Estouro Timer = 41ms

 */

#include "system.h"
void main(void) 
{
    System_Initializer();
    Interrupt_Initializer();
    
    while(1);
}
