/*
10.Fazer um programa que leia uma temperatura em graus Celsius e transforme
para Fahrenheit.

Informações:
(C*9/5)+32=F
*/

#include <stdio.h>

int main(void){
    float C, F;
    printf("Digite a temperatura em C°:");
    scanf("%f",&C);
    F = (C*9/5)+32;
    printf("%.2f",F);
    

    return 0;
}
