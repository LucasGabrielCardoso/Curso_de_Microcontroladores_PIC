/*
 * File:   system.c
 * Author: LucasGabriel
 *
 * Created on 22 de Fevereiro de 2022, 16:55
 */


#include "system.h"

void System_Initializer(void) 
{
    //Setting unused Ports like tristate mode
    TRISA               =   0xFF;
    TRISB               =   0xFF;
    TRISC               =   0xFF;
    TRISD               =   0xFF;
    TRISE               =   0xFF;
    //Settins port B like I/O port
    ADCON1              =   0x0F;
    //Setting CONTROLLER LIKE OUTPUT PORT
    CONTROLLER_TRIS     =   0x00;
    CONTROLLER          =   0x00;
}
