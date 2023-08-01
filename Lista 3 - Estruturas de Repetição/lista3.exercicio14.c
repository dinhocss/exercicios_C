/*
14.Faça um programa que leia um número inteiro positivo N e calcule o valor da expressão
abaixo. Caso o usuário digite um valor menor ou igual a zero, o algoritmo deve escrever
uma mensagem informando que a expressão não pode ser calculada.
    -> E = 1/N + 1/N-1 + 1/N-2 + ... + 1;
*/

#include <stdio.h>

int main(void){
    
    int N, i;
    float E, soma=0;
    
    printf("Digite o valor de N:");
    scanf("%d",&N);
    
    for(i=0;i<N;i++){
        E = 1*1.0/(N-i);
        soma += E;
    }
    
    printf("%f",soma);
    
    
    return 0;
}