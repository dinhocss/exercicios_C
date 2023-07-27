/*
1. Faça um programa que leia a base e a altura de um retângulo e escreva o seu
perimetro, a sua área e a sua diagonal.

Informações:
A = bxh
P = 2x(b+h)
D = (b^2+h^2)^1/2
*/

#include <stdio.h>
#include <math.h>

int main(void){
    
    float A, P, D, b, h;
    printf("Digite a base do triângulo:");
    scanf("%f",&b);
    printf("Digite a altura do triângulo:");
    scanf("%f",&h);
    A = b*h;
    P = 2*(b+h);
    D = sqrt((pow(b,2)+pow(h,2)));
    
    printf("A área é: %.2fcm\n",A);
    printf("O perímetro é: %.2fcm\n",P);
    printf("O diâmetro é: %.2fcm\n",D);
    
    return 0;
}