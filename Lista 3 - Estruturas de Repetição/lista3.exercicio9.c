/*
9.Faça um programa que leia um número K e escreva os termos da série de Fibonacci menores
ou iguais a K. Faça a validação para que o valor de K seja maior do que 0.
*/

#include <stdio.h>

int main(void){
    
    int a1, a2, an,i,op;
    printf("Sequência de Fibonacci:\n");
    printf("Digite a quantidade de termos desejada:");

    if(op<0){
        printf("Erro!");
    }
    scanf("%d",&op);
    op=op-3;
    a1 = 1;
    a2 = 1;
    an = a1 + a2;
    printf("0 %d %d %d ",a1,a2, an);
    for(i=0;i<op;i++){
        a2=a1;
        a1 = an;
        an = a1+a2;
        printf("%d ",an);
    }
    a1 = a2;
    
    
    return 0;
}