/*
 * File:   simbol.c
 * Author: Lucas Gabriel
 *
 * Created on 6 de Novembro de 2021, 20:24
 */



#include "button.h"

unsigned char aux       = 1;    //Auxiliar para reconhecer tecla 
unsigned char dezena    = 0;    //Variável para valor da dezena
unsigned char unidade   = 0;    //Variável para valor da unidade
unsigned char store     = 0;    //Auxiliar para atualizar dezena ou unidade
unsigned char value     = 0;    //Valor do duty cycle
char controler = 0x01;          //Variável de controle do teclado

__interrupt() void Button_Maneger_SCR(void)
{
    if(INTCONbits.TMR0IF)             //Houve o estouro do Timer0
    {
        INTCONbits.TMR0IF = 0x00;   //Limpa o flag
        TMR0              = 0x00;   //Reinicia o Timer0
        
        if(col_1&&(controler==0x01))//Coluna 1 em nível high? Contol igual a 1?
        {
            controler = 0x02;
            col_1     = 0x00;           //Apenas a coluan 1 em nível baixo
            col_2     = 0x01;
            col_3     = 0x01;
            
            if(!row_A)      chrWrite(1);         //1 como parâmetro de chrWrite(Techa 1)
            else if(!row_B) chrWrite(4);    //4 como parâmetro de chrWrite(Techa 4)
            else if(!row_C) chrWrite(7);    //7 como parâmetro de chrWrite(Techa 7)
            else if(!row_D) value = 50;     //Força o duty para 50% (Tecla *)
            aux                   =  0;
        }
        else if(col_2&&(controler==0x02))//Coluna 2 em nível high? Contol igual a 1?
        {
            controler = 0x03;
            col_1     = 0x01;           
            col_2     = 0x00;                   //Apenas a coluan 1 em nível baixo
            col_3     = 0x01;
            
            if(!row_A)      chrWrite(2);    //2 como parâmetro de chrWrite(Techa 2)
            else if(!row_B) chrWrite(5);    //5 como parâmetro de chrWrite(Techa 5)
            else if(!row_C) chrWrite(8);    //8 como parâmetro de chrWrite(Techa 8)
            else if(!row_D) chrWrite(0);    //0 como parâmetro de chrWrite(Techa 0)
            aux                   =  0;
        }
        else if(col_3&&(controler==0x03))//Coluna 3 em nível high? Contol igual a 1?
        {
            controler = 0x01;
            col_1     = 0x01;           
            col_2     = 0x01;
            col_3     = 0x00;                   //Apenas a coluan 3 em nível baixo
            
            if(!row_A)      chrWrite(3);    //3 como parâmetro de chrWrite(Techa 3)
            else if(!row_B) chrWrite(6);    //6 como parâmetro de chrWrite(Techa 6)
            else if(!row_C) chrWrite(9);    //9 como parâmetro de chrWrite(Techa 9)
            else if(!row_D) aux = 0;      //Atualiza duty cycle (Tecla #)
        }
    }//end test flag
}//end interrupt

void chrWrite(char number)                //Atualiza valores de dezena e unidade
{

        if(store == 0)                    //Store igual a zero?
        {                                 //Sim...
          dezena = number;                //Atualiza dezena
          store = 1;                      //store igual a 1 (torna o if falso)
        }
        else                              //Senão...
        {
          unidade = number;               //Atualiza unidade
        }

} //end chrWrite

unsigned char StrToValue(char dez, char uni) //Converte dezena e unidade em número único
{
    unsigned char result;                    //Variável para o resultado
    
    result = (10*dez) + uni;                 //Atribui valores ajustando a dezena

    return result;                           //Retorna o resultado

} //end StrToValue