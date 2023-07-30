/*
3.Faça um programa que leia 2 números inteiros positivos, A e B, e que calcule a 
soma de todos os números compreendidos entre eles. Os valores A e B não devem ser
considerados no somatório. Caso A seja maior do que B deve ser enviada uma mensagem
para o usuário informando que a soma não será realizada.
*/

#include <stdio.h>

int main(void){
    
    int A, B, i, soma=0;
    
    printf("Digite o valor de A:");
    scanf("%d",&A);
    printf("Digite o valor de B:");
    scanf("%d",&B);
    
    if(A>B){
        printf("O valor de A deve ser menor que B. A soma não será realizada.");
    }
    
    for(i=A+1;i<B;i++){
        soma += i;
    }
    
    for(i=A+1;i<B;i++){
        printf("%d ",i);
        if(i==B-1){
            continue;
        }
        printf("+ ");
    }
    
    printf("= %d",soma);
    
    return 0;
}