/*
3.Faça um programa que leia a idade de um nadador e que calcule e mostre a sua categoria
seguindo as regras:
    -> Categoria baby: até 4 anos
    -> Categoria infantil: 5-10 anos
    -> Categoria juvenil: 11-17 anos
    -> Categoria master: a partir de 18 anos
*/
#include <stdio.h>

void categoria(int idade){
    if(idade<=4){
        printf("Categoria Baby.");
    }
    else if(idade > 4 && idade <= 10){
        printf("Categoria Infantil.");
    }
    else if(idade > 10 && idade <=17){
        printf("Categoria Juvenil.");
    }
    else{
        printf("Categoria Master.");
    }
}


int main(void){
    int idade;
    
    printf("Digite a idade do nadador:");
    scanf("%d",&idade);
    categoria(idade);
    
    return 0;
}