/*
 * File:   clock_manager.c
 * Author: LucasGabriel
 *
 * Created on 5 de Fevereiro de 2022, 22:20
 */


#include "clock_manager.h"
#include "system_config.h"

char    segundos    =   0x00,
        minutos     =   0x00,
        horas       =   0x00,
        clk_cont    =   0x00;

void Clock_Manager(void) 
{
    if(59 < segundos)
    {
        segundos    =   0x00;
        minutos++;
        if(59 < segundos)
        {
            minutos =   0x00;
            horas++;
            if(23 > horas) horas    =   0x00;
        }
    }
    
    if(!BOTAO_MIN) flag_botao.b0 = 0b1;
    if(!BOTAO_HOR) flag_botao.b1 = 0b1;
    
    if(BOTAO_MIN && flag_botao.b0)
    {
        flag_botao.b0 =   0b0;
        minutos++;
        if(59 < minutos) minutos=0x00;
    }
    if(BOTAO_HOR && flag_botao.b1)
    {
        flag_botao.b1 =   0b0;
        horas++;
        if(23 < horas) horas=0x00;
    }
}
