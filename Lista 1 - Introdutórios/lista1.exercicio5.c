/*
5. Faça um programa que leia uma hora (uma variável para hora e outra para minutos)
e que calcule e mostre a hora convertida em minutos e em segundos.
*/

#include <stdio.h>

int main(void){
    int hora, minuto, segundo,horaConvertida,minutoConvertido;
    
    printf("Digite a hora desejada para conversão(hh:mm):");
    scanf("%d:%d",&hora,&minuto);
    horaConvertida = hora*3600;
    minutoConvertido = minuto*60;
    segundo = horaConvertida + minutoConvertido;

    printf("%d:%dh => %ds\n",hora,minuto,segundo);
    
}