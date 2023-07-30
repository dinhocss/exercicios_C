/*
4.Faça um programa que leia 2 números inteiros positivos, A e Bm e que calcule a soma
de todos os números múltiplos de 4 compreendidos entre eles. Os valores A e B não devem
ser considerados no somatório. Caso A seja maior do que B deve ser enviado uma mensagem 
para o usuário informando que a soma não será realizada.
*/


#include <stdio.h>

int main(void){
    
    int A, B, soma=0, i;
    
    printf("Digite o valor de A:");
    scanf("%d",&A);
    printf("Digite o valor de B:");
    scanf("%d",&B);
    
    if(A>B){
        printf("Não foi possível realizar a soma. Valor de A deve ser menor que B");
    }
    
    printf("Os números compreendidos entre %d e %d, que são múltiplos de 4 são: ",A,B);
    for(i=A+1;i<B;i++){
        if(i%4==0){
            soma+=i;
            printf("%d ",i);
        }
    }
    

    
    printf("\nA soma desses números é %d",soma);
    return 0;
}
