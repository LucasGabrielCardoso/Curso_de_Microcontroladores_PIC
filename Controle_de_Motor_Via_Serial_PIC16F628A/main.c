/*
 * File:   main.c
 * Author: LucasGabriel
 *
 * Created on 9 de Fevereiro de 2022, 20:40
 */


#include "system.h"

void main(void) 
{
    System_Initializer();
    UART_Initializer();
    Interrupt_Initializer();
    
    flag_motor.ON            =   0b0;
    flag_motor.OFF           =   0b0;
    UART_WriteRS();
    
    while (1) 
    {
        if(('U' == RCREG)&&(!flag_motor.ON))
        {
            flag_motor.ON       =   0b1;
            flag_motor.OFF      =   0b0;
            UART_Mensagem_Motor_ON();
        }
        else if(flag_motor.ON)  MOTOR   =   0b1;
        
        if(('H' == RCREG)&&(!flag_motor.OFF))
        {
            flag_motor.ON       =   0b0;
            flag_motor.OFF      =   0b1;
            UART_Mensagem_Motor_OFF();
        }
        else if(flag_motor.OFF)  MOTOR   =   0b0;
    }//END WHILE
}//END MAIN
