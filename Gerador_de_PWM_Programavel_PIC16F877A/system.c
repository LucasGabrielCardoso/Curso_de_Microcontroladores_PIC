/*
 * File:   system.c
 * Author: Lucas Gabriel
 *
 * Created on 5 de Novembro de 2021, 23:31
 */

#include "system.h"

void System_Initialize(void) 
{
    CMCON               = 0x07;     //Desabilita os comparadores
    OPTION_REG          = 0x87;     //Timer0 incrementa com ciclo de instrução, prescaler 1:256
    GIE                 = 0x01;     //Habilita interrupção global
    PEIE                = 0x01;     //Habilita interrupção por periféricos
    INTCONbits.TMR0IE   = 0x01;     //Habilita o timer0
    
    TMR0                = 0x00;     //Inicia o timer0
    
    TRISB               = 0xF0;     //Nibble mais significativo do PORTB será entrada
    TRISC               = 0xFB;     //Saída RC2 (PWM1 modulo)
    TRISD               = 0x03;     //Nibble mais significativo inicia em high.

    col_1     = 0x01;
    col_2     = 0x01;
    col_3     = 0x01;
    
    PWM_Init(500);                 //Inicia módulo PWM com frequência de 500Hz
    Lcd_Init();                     //Inicia módulo LCD
}
