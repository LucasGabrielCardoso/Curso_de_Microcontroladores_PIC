/*
 * File:   system.c
 * Author: LucasGabriel
 *
 * Created on 9 de Fevereiro de 2022, 20:40
 */


#include "system.h"

void System_Initializer(void) 
{
//    Disable Internal Comparators
    CMCONbits.CM            =   0b111;
//    Setting Unused Pins like Tristate Mode
    TRISA                   =   0xFF;
    TRISB                   =   0xFF;
//    Setting LED Pins
    LED_2_TRIS              =   0b0;
    LED_2                   =   0b0;
    LED_1_TRIS              =   0b0;
    LED_1                   =   0b0;
//    Setting Motor Pins
    MOTOR_TRIS              =   0b0;
    MOTOR                   =   0b0;
//    Setting TX and RX Pins
    UART_TX_TRIS            =   0b0;
    UART_TX                 =   0b0;
    UART_RX_TRIS            =   0b1;
    UART_RX                 =   0b1;
//    Setting Interrupt
    INTCONbits.GIE          =   0b1;
    INTCONbits.PEIE         =   0b1;
}
