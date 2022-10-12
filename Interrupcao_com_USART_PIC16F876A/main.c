/*
 * File:   main.c
 * Author: LucasGabriel
 *
 * Created on 7 de Fevereiro de 2022, 18:34

    Curso de Microcontroladores PIC WR Kits Channel

    Aula 68: Exemplo de Comunicação Serial RS232 com PIC

    MCU: PIC16F628A   Clock: 4MHz   Ciclo de Máquina: 1us

    Sistema Embarcado Sugerido: PARADOXUS PEPTO WR KITS
    
    Disponível em   https://wrkits.com.br/catalog/show/141

    Autor: Eng. Wagner Rambo   Data: Março de 2016

    www.wrkits.com.br | youtube.com/user/canalwrkits | facebook.com/wrkits 
 */


#include "system.h"
#include "uart_communication.h"
#include "interrupt_manager.h"

void main(void) 
{
    System_Initializer();
    UART_Initializer();
    Interrupt_Initializer();
    
    UART_WriteRS();
    while (1);
}
