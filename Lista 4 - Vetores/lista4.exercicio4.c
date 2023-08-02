/*
4.Faça um programa que preencha um vetor de N posições com os N primeiros termos
de uma série de Fibonacci. Após preenchido o vetor, verifique se um determinado número
informado pelo usuário pertence ou não ao vetor.
*/

#include <stdio.h>

int main(void){
    
    int an, a1, a2, i,vetor[100],num;
    
    a1 = 0;
    a2 = 1;
    an = a1+a2;
    vetor[0] = 0;
    vetor[1] = 1;
    for(i=0;i<20;i++){
        vetor[i+2] = a1+a2;
        an = vetor[i+2];
        a1 = a2;
        a2 = an;
    }
    for(i=0;i<20;i++){
        printf("%d ",vetor[i]);
    }
    
    printf("\nDigite o número desejado:");
    scanf("%d",&num);
    for(i=0;i<20;i++){
        if(vetor[i]==num){
            printf("\nO número escolhido pertence ao vetor.");
            break;
        }
    }
    return 0;
}