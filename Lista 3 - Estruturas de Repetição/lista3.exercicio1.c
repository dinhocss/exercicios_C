/*
1. Faça um programa que apresente o peso total que será carregado por um caminhão.
Sabe-se que este caminhão carrega 25 caixas. O peso de cada uma das caixas será informado
pelo usuário.
*/


#include <stdio.h>
#define caixa 25

int main(void){
    
    int peso, somaPeso,i;
    
    for(i=0;i<caixa;i++){
        printf("Digite o peso da %d° caixa:",i+1);
        scanf("%d",&peso);
        somaPeso += peso;
    }
    printf("O peso total que será carregado pelo caminhão é de %dKg.",somaPeso);
    
    return 0;
}