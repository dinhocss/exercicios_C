/*
13.Faça um programa que leia dois números inteiros e que calcule e mostre a soma
e a multiplicação dos dois números e a divisão e a subtração do primeiro pelo segundo.

*/

#include <stdio.h>

void imprimeCalculo(int n1, int n2){
    printf("Soma:%d+%d = %d\n",n1,n2,(n1+n2));
    printf("Subtração:%d-%d = %d\n",n1,n2,(n1-n2));
    printf("Multiplicação:%d*%d = %d\n",n1,n2,(n1*n2));
    printf("Divisão:%d/%d = %.1f\n",n1,n2,((n1*1.0)/n2));
 
}

int main() {
    int n1, n2;
    printf("Digite o primeiro número:");
    scanf("%d",&n1);
    printf("Digite o segundo número:");
    scanf("%d",&n2);
    imprimeCalculo(n1,n2);
    return 0;
}