/*
4.Faça um programa que leia o preço de um produto, calcule o seu aumento e mostre a sua
classificação.
    ->Se o preço for menor ou igual a 50, o produto receberá um aumento de 5%
    ->Se o preço for maior que 50 e menor ou igual a 100, o aumento será de 10%
    ->Se o preço for maior que 100, o aumento será de 15%
A classificação do produto deve ser:
    ->Barato: até 80 reais(inclusive)
    ->Normal:entre 80 reais e 120 reais(inclusive)
    ->Caro:entre 120 reais e 200 reais(inclusive)
    ->Muito caro: maior que 200 reais
*/

#include <stdio.h>

float aumento(float preco){
    if(preco<=50){
        preco = preco + (preco*0.05);
    }
    else if(preco>50 && preco<=100){
        preco = preco + (preco*0.1);
    }
    else{
        preco = preco + (preco*0.15);
    }
    return preco;

}

void imprime(float preco){
    if(preco<=80){
        printf("Produto barato.");
    }
    else if(preco>80 && preco<=120){
        printf("Produto normal.");
    }
    else if(preco>120 && preco <=200){
        printf("Produto caro.");
    }
    else{
        printf("Produto muito caro.");
    }
}

int main(void){
    float preco;
    printf("Digite o preço do produto:");
    scanf("%f",&preco);
    preco = aumento(preco);
    printf("Valor final do produto:R$%.2f\n",preco);
    imprime(preco);
    
    return 0;
}