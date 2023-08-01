/*
13. Faça um programa que leia os nomes e os preços dos produtos de uma loja e 
que escreva o nome do produto mais caro. Considere que o final da lista é marcado
pelo produto 'XXX' e que não existem preços repetidos.
*/


#include <stdio.h>
#include <string.h>

int main(void){
    float preco, maisCaro = 0;
    char produto[50],produtoCaro[50];
    int cmp=1;
    
    
    
    while(cmp!=0){
        printf("Digite o nome do produto:");
        scanf("%s",produto);
        cmp = strcmp(produto,"XXX");
        if(cmp!=0){
            printf("Digite o preço do produto:");
            scanf("%f",&preco);
            if(preco>maisCaro){
                maisCaro = preco;
                strcpy(produtoCaro,produto);
            }            
        }

    }
    printf("O produto mais caro é %s custando R$%.2f.",produtoCaro,maisCaro);
    
    return 0;
}