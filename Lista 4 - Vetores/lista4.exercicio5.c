/*
5.Faça um programa que preencha uma matriz M10x5 com números inteiros. Após preencher
a matriz, crie uma segunda matriz que seja transposta de M. Ao final, escreva 
a matriz transposta.
*/

#include <stdio.h>

int main(void){
    
    int matriz[10][5], transposta[5][10], i, j;
    
    for(i=0;i<10;i++){
        for(j=0;j<5;j++){
            printf("Digite o valor desejado:");
            scanf("%d",&matriz[i][j]);
        }
    }
    
    for(i=0;i<10;i++){
        for(j=0;j<5;j++){
            printf(" %d ",matriz[i][j]);
        }
        printf("\n");
    }
    
    for(i=0;i<5;i++){
        for(j=0;j<10;j++){
            transposta[i][j] = matriz[j][i];
        }
    }
    
    for(i=0;i<5;i++){
        for(j=0;j<10;j++){
            printf(" %d ",transposta[i][j]);

        }
            printf("\n");        
    }
    
    return 0;
}