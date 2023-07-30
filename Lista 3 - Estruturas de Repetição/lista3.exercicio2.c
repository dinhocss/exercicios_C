/*
2.Faça um programa que leia a quantidade e o preço de 50 produtos que foram comprados
por uma empresa. Ao final deve ser escrito o total gasto pela empresa.
*/

#include <stdio.h>

int main(void){
    
    int qtd,i;
    float preco,precoTotal = 0;
    
    printf("Digite a quantidade de produtos:");
    scanf("%d",&qtd);
    for(i=0;i<qtd;i++){
        printf("Digite o valor do %d° produto:",i+1);
        scanf("%f",&preco);
        precoTotal += preco;
    }
    
    printf("O preço total a ser pago pela empresa é de R$%.2f",precoTotal);
    return 0;
}