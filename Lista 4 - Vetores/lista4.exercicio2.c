/*
2.Considere um vetor que guarde 100 números reais.Faça um programa que preencha este
vetor. Após o vetor preenchido multiplique seus valores ímpares por 3 e divida os
valores pares por 2. Escreva o maior elemento do vetor.
*/

#include <stdio.h>
#define max_vetor 100

void imprimirElementos(int elementos[max_vetor]){
    int i;
    printf("\nImprimindo elementos...\n");
    for(i=0;i<max_vetor;i++){
        printf("%d\n",elementos[i]);
    }
}


int main(void){
    
    int real[max_vetor], maiorElemento = 0;
    int i;
    printf("Preenchendo os elementos...\n");
    for(i=0;i<max_vetor;i++){
        real[i]=i;
    }
    imprimirElementos(real);
    
    for(i=0;i<max_vetor;i++){
        if(real[i]%2==0){
           real[i] = real[i]/2;
           if(real[i]>maiorElemento){
               maiorElemento = real[i];
           }
        }
        else{
            real[i] = real[i]*3;
            if(real[i]>maiorElemento){
                maiorElemento = real[i];
            }
        }
    }
    
    imprimirElementos(real);
    printf("\nMaior elemento:%d",maiorElemento);
    return 0;
}