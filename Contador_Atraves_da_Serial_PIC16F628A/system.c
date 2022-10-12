/*
 * File:   system.c
 * Author: LucasGabriel
 *
 * Created on 12 de Fevereiro de 2022, 19:43
 */


#include "system.h"

void System_Initializer(void)
{
//    Disable Internal Comparators
    CMCONbits.CM                =   0b111;
    
//    Setting Unused Pins like Tristate Mode
    TRISA                       =   0xFF;
    TRISB                       =   0xFF;
    
//    Setting Led Pins
    LED_2_TRIS                  =   0b0;
    LED_2                       =   0b1;
    LED_1_TRIS                  =   0b0;
    LED_1                       =   0b0;
    
//    Setting Button Pin
    BUTTON_1_TRIS               =   0b1;
    BUTTON_1                    =   0b1;
    
//    Setting Uart Tx/Rx Pins
    UART_TX_TRIS                =   0b0;
    UART_TX                     =   0b0;
    UART_RX_TRIS                =   0b1;
    UART_RX                     =   0b0;
    
//    Setting Interrupts
    INTCONbits.GIE              =   0b1;
}
