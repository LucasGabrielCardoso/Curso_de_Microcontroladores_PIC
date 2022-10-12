/*
 * File:   display.c
 * Author: Lucas Gabriel
 *
 * Created on 14 de Novembro de 2021, 21:32
 */

#include "system.h"
#include "display.h"

void Disp(int num) 
{ 
    //Vetor para o barramento de dados do Display 7 seg catodo PORTB<RB7:RB1>
    unsigned char catodo[] = {0x7e,   // '0'
                              0x0c,   // '1'
                              0xb6,   // '2'
                              0x9e,   // '3'
                              0xcc,   // '4'
                              0xda,   // '5'
                              0x0f8,  // '6'
                              0x0e,   // '7'
                              0xfe,   // '8'
                              0xce,   // '9'
                              };
    DISPLAY = catodo[num];
}
