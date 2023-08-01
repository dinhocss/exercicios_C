/*
16.Faça um programa que calcule o valor de E segundo a expressão abaixo:
    ->E = 2^1 + 2^2 + 2^3 + ... + 2^N-1 + 2^N
*/

#include <stdio.h>
#include <math.h>

int main(void){
    
    int i,N;
    float E,soma=0;
    
    printf("Digite o valor de N:");
    scanf("%d",&N);
    for(i=1;i<=N;i++){
        E = pow(2,i);
        soma+=E;
    }
    printf("E = ");
    for(i=1;i<=N;i++){
        if(i==N){
            printf("2^%d = ",i);
            break;
        }
        printf("2^%d + ",i);
    }
    printf("%.0f",soma);
    
    return 0;
}