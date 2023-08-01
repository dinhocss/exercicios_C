/*
15.Faça um programa que calcule o fatorial de um número N.
*/

#include <stdio.h>

int fatorial(int N){
    int fat = 1,i;
    for(i=N;i>=1;i--){
        fat *= i;
    }
    return fat;
}

int main(void){
    
    int fat, N,i;
    printf("Digite o número desejado:");
    scanf("%d",&N);
    printf("!%d = ",N);
    for(i=N;i>=1;i--){
        if(i==1){
            printf("%d = ",i);
            break;
        }        
        printf("%d x ",i);

    }
    fat = fatorial(N);
    printf("%d",fat);
    return 0;
}