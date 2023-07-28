/*
6. Faça um programa que leia um valor inteiro e que informe se este valor é par ou ímpar.
*/

#include <stdio.h>

int main(void){
    
    int valor;
    printf("Digite o valor desejado:");
    scanf("%d",&valor);
    
    if(valor%2==0){
        printf("Par!");
    }
    else{
        printf("Ímpar!");
    }
    return 0;
}