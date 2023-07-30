/*
6.Faça um programa que apresente a tabuada de um número N, que será informado pelo usuário.
O programa deve garantir que o valor digitado para N esteja entre 0 e 9.
*/

#include <stdio.h>

void tabuada(int N){
    int i;
    while(N < 0 || N > 9){
        printf("Valor inválido!\n");
        printf("Escolha um valor entre 0 a 9:");
        scanf("%d",&N);
        getchar();
    }
    printf("Tabuada de %d:\n",N);
    for(i=0;i<=10;i++){
        printf("%dx%d = %d\n",N,i,(N*i));
    }
    printf("Fim!\n");
}

int main(void){
    
    int N;
    
    printf("Digite um número entre 0 a 9:");
    scanf("%d",&N);
    tabuada(N);
    
    
    
    return 0;
}