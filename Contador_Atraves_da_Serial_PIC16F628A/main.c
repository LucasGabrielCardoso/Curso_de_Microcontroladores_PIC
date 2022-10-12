/*
 * File:   main.c
 * Author: LucasGabriel
 *
 * Created on 12 de Fevereiro de 2022, 18:50
 */

/*
    Curso de Microcontroladores PIC WR Kits Channel

    Aula 70: Contador Através da Serial

    MCU: PIC16F628A   Clock: 4MHz   Ciclo de Máquina: 1us

    Sistema Embarcado Sugerido: PARADOXUS PEPTO WR KITS

    Disponível em   https://wrkits.com.br/catalog/show/141

    Autor: Eng. Wagner Rambo   Data: Março de 2016

    www.wrkits.com.br | youtube.com/user/canalwrkits | facebook.com/wrkits
*/

#include <stdio.h>
#include "system.h"

void main(void) 
{
    int value       = 0x00;
    botao.flag      = 0b0;
    System_Initializer();
    UART_Initializer();
    Interrupt_Initializer();
    
    sprintf(UART_Text, "%d", value);
    UART_WriteRS();
    
    while(1) 
    {
        if(!BUTTON_1) botao.flag = 0b1;
        if(BUTTON_1 && botao.flag)
        {
            botao.flag  =   0b0;
            value++;            
            sprintf(UART_Text, "%0.3d", value);
            UART_WriteRS();
        }//END IF
    }//END WHILE
}//END MAIN
