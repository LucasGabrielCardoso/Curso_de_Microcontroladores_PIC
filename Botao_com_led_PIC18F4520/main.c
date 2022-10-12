/*
 * File:   main.c
 * Author: LucasGabriel
 *
 * Created on 20 de Fevereiro de 2022, 17:09
 */


#include "system.h"
#include "system_config.h"

void main(void) 
{
    System_Initializer();
    while(1)
    {
        if (!BUTTON) 
        {
            LED         =   0b1;
            __delay_ms(500);
            LED         =   0b0;
        }//END IF
    }//END WHILE
}//END MAIN
