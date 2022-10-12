/*
 * File:   system.c
 * Author: Lucas Gabriel
 *
 * Created on 15 de Novembro de 2021, 10:08
 */


#include "system.h"

void System_Initialize(void)
{
    //Disable Internal Comparators
    CMCON       =   0b00000111;
    
    //Setting Buttons and Leds Ports
    SW2_TRIS        =   0b1;
    SW2             =   0b1;
    SW1_TRIS        =   0b1;
    SW1             =   0b1;
    SW_SLEEP_TRIS   =   0b1;
    SW_SLEEP        =   0b1;
    
    LED2_TRIS       =   0b0;
    LED2            =   0b0;
    LED1_TRIS       =   0b0;
    LED1            =   0b0;
    
    //Setting External Interrupt
    OPTION_REGbits.INTEDG   =   0b0;            //Interruption on rise edge
    OPTION_REGbits.nRBPU    =   0b1;            //Disable Pull-Up  
    INTCONbits.GIE          =   0b1;            //Enable global Interrupts
    INTCONbits.PEIE         =   0b0;            //Disable peripheral Interrupts
    INTCONbits.INTE         =   0b1;            //Enable external Interrupt RB0
    INTCONbits.INTF         =   0b0;            //Cleaned Interrupt Flag
    
}
