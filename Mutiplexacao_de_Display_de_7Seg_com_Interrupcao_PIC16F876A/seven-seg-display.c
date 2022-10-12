/*
 * File:   seven-seg-display.c
 * Author: LucasGabriel
 *
 * Created on 15 de Janeiro de 2022, 19:48
 */


#include "seven-seg-display.h"
#include "system_config.h"

unsigned char mil, cen, dec, uni, cathode;
int counter =   0x00;
char control_flag   =   0x01;

unsigned char SEGMENTO[10] = {0x3F,                  //BCD zero   '0'
                              0x06,                  //BCD um     '1'
                              0x5B,                  //BCD dois   '2'
                              0x4F,                  //BCD três   '3'
                              0x66,                  //BCD quatro '4'
                              0x6D,                  //BCD cinco  '5'
                              0x7D,                  //BCD seis   '6'
                              0x07,                  //BCD sete   '7'
                              0x7F,                  //BCD oito   '8'
                              0x67};                 //BCD nove   '9'

unsigned char display(int num)
{
    cathode = SEGMENTO[num];
    return cathode;
}

void changeCounter(void)
{
    if(INCnDEC)
    {
        counter++;
        if(counter>9999) counter=0x00;
        __delay_ms(100);
    }
    else
    {
        counter--;
        if(counter<0) counter=9999;
        __delay_ms(100);
    }
}

