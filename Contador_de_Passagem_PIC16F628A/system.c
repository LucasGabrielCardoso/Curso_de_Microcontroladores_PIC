/*
 * File:   system.c
 * Author: Lucas Gabriel
 *
 * Created on 14 de Novembro de 2021, 21:32
 */


#include "system.h"

void System_Initialize(void) 
{
    //Desable Comparators
    CMCON           =   0b00000111;
    
    //Display Configurations
    DISPLAY_TRIS        =   0x00;
    DISPLAY             =   0x7e;
    
    //Sensor Configurations
    sensor_TRIS         =   0b1;
    sensor              =   0b0;
    
    //Set Interrupts
    INTCONbits.GIE          =   0b1;        //Enable Global Interrupt
    INTCONbits.PEIE         =   0b0;        //Disable Periferal Interrupts
    INTCONbits.INTE         =   0b1;        //Enable External Interrupt
    INTCONbits.INTF         =   0b0;        //Cleaned Interrupt Flag
    OPTION_REGbits.INTEDG   =   0b1;        //Interrupt on  rising edge 
}
