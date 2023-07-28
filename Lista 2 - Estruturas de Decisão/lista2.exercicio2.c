/*
2. Faça um programa que leia dois números inteiros e que calcule e mostre a soma
e a multiplicação dos dois números e a divisão e a subtração do primeiro pelo segundo.
Caso o segundo número digitado seja zero, o programa deve informar ao usuário que
a operação de divisão é impossível.
*/

#include <stdio.h>

void imprimeConta(int n1, int n2){
    printf("Soma:%d+%d = %d\n",n1,n2,(n1+n2));
    printf("Produto:%d*%d = %d\n",n1,n2,(n1*n2));
    printf("Subtração:%d-%d = %d\n",n1,n2,(n1-n2));
    if(n2==0){
        printf("Divisão por 0 é impossível!");
    }
    else{
        printf("Divisão:%d/%d=%.1f",n1,n2,(n1*1.0/n2));
    }
    
}

int main(void){
    int n1, n2;
    
    printf("Digite o primeiro número:");
    scanf("%d",&n1);
    printf("Digite o segundo número:");
    scanf("%d",&n2);
    imprimeConta(n1,n2);
    
    return 0;
}