/*
 * File:   set_seg.c
 * Author: LucasGabriel
 *
 * Created on 5 de Fevereiro de 2022, 21:55
 */

#include "display_set_seg.h"
#include "system_config.h"

char controler  = 0x01;
int mil, cen, dez, uni;


unsigned char Display(int num)
{
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
    
    return SEGMENTO[num];
}