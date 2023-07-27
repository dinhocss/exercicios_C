/*
7. Faça um programa que leia três notas e que calcule e escreva a média aritmética
dessas notas.
*/

#include <stdio.h>

float media(float n1, float n2){
    float med;
    med = (n1+n2)/2;
    return med;
}

int main(void){
    float n1,n2,med;
    printf("Digite o valor da primeira nota:");
    scanf("%f",&n1);
    printf("Digite o valor da segunda nota:");
    scanf("%f",&n2);
    med = media(n1,n2);
    printf("A média é %.2f",med);
    
    return 0;
}