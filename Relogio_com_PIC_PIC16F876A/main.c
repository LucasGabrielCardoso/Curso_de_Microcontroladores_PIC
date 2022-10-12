/*
 * File:   main.c
 * Author: LucasGabriel
 *
 * Created on 5 de Fevereiro de 2022, 21:46
 
 C�lculos:

 TIMER0:
 
   O display � atualizado a cada estouro do TMR0

   Prescaler configurado para 1:16

   Ciclo de m�quina = 1us

   Estouro do timer 1us x 16 x 256 = 4,096 ms
   
   
   
 TIMER1:
 
   Os segundos s�o incrementados a cada estouro do TMR1
   
   Prescaler configurado para 1:8
   
   TMR1 conta at� 62500
   
   Ciclo de m�quina = 1us
   
   Estouro =  TMR1 x prescaler x ciclo de m�quina
           = 62500 x    8      x     1E-6
           = 500 ms
 */


#include "system.h"

void main(void) 
{
    System_Initializer();
    Interrupt_Initializer();
    
    while(1) Clock_Manager();
}
