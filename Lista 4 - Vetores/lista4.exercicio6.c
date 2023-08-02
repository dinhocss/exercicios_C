/*
6.Faça um programa que preencha uma matriz M5x5 com números reais. Após preencher a matriz:
    a)Verifique se ela é simétrica.
    b)Imprima a soma dos elementos da diagonal principal
    c)Imprima a soma dos elementos da diagonal secundária
*/

#include <stdio.h>
#include <stdbool.h>

int main(void){
    
    int matriz[3][3],i,j,somaPrincipal=0,somaSecundaria=0;
    
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("Digite o valor desejado:");
            scanf("%d",&matriz[i][j]);
        }
    }
    bool simetria = true;
    for(i=0;i<3;i++){
        printf("(");
        for(j=0;j<3;j++){
            printf(" %d ",matriz[i][j]);
            if(matriz[i][j]!=matriz[j][i]){
                simetria = false;
            }
        }
        printf(")");
        printf("\n");
    }
    
    for(i=0;i<3;i++){
        somaPrincipal += matriz[i][i];
    }
    for(j=0;j<3;j++){
        somaSecundaria += matriz[j][3-1-j];
    }
    printf("Soma da diagonal principal:%d\n",somaPrincipal);
    printf("Soma da diagonal secundária:%d\n",somaSecundaria);
    
    if(simetria){
        printf("\nA matriz é simétrica!");
    }else{
        printf("\nA matriz não é simétrica!");
    }
    return 0;
}