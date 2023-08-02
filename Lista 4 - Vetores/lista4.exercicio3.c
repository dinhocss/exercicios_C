/*
3.Faça um programa que leia os N salários dos funcionários de uma empresa.
Calcule a média salarial da empresa e escreva a quantidade de funcionários que possuem
salario acima da média.
*/

#include <stdio.h>

int main(void){
    
    float media=0;
    int i,N,cont=0;
    
    printf("Digite a quantidade de funcionários da empresa:");
    scanf("%d",&N);
    float sal[N];
    for(i=0;i<N;i++){
        printf("Digite o salário do %d° funcionário:",i+1);
        scanf("%f",&sal[i]);
        media+=sal[i];
    }
    media = media/N;
    
    for(i=0;i<N;i++){
        if(sal[i]>media){
            cont++;
        }
    }
    printf("\nExiste um total de %d funcionários com salário acima de R$%.2f",cont,media);
}