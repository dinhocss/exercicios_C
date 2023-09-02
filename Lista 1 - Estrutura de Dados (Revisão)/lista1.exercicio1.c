/*
1. Implemente um programa que, infinitamente, receba, como parâmetro de entrada,
um número n e retorne os n primeiros números primos existentes. Seu programa para
quando n for menor ou igual a zero.
*/

#include <stdio.h>

int numeroPrimo(int n){
    int i;
    if(n<=1){
        return 0;
    }
    for(i=2;i*i<=n;i++){ 
        if(n%i==0){
            return 0;
        }
    }
    return 1;
}

int main(void){
    
    int n,i;
    printf("Digite o valor de n:");
    scanf("%d",&n);
    do{
        for(i=2;i<=n;i++){
            if(numeroPrimo(i)==1){
                printf("%d ",i);
            }

        }
        printf("\nDigite o número desejado:");
        scanf("%d",&n);
    }while(n>1);
    
    
    return 0;
}