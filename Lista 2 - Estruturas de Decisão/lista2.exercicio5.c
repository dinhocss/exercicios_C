/*
5.Faça um programa que leia a altura e o sexo de uma pessoa e escreva seu peso ideal
utilizando as seguintes fórmulas:
    -> Para homens:(72.7*altura)-58,0
    -> Para mulheres:(62,1 * altura)-44,7
*/

#include <stdio.h>

float pesoIdeal(float altura, char sexo){
    float peso;
    if(sexo=='M' || sexo=='m'){
        peso = (72.7*altura)-58;
    }
    else if(sexo=='F'|| sexo =='f'){
        peso = (62.1*altura)-44.7;
    }
    return peso;
}

int main(void){
    float altura, peso;
    char sexo;
    printf("Digite o sexo da pessoa[M/F]:");
    scanf("%c",&sexo);
    printf("Digite a altura da pessoa:");
    scanf("%f",&altura);
    
    
    peso = pesoIdeal(altura,sexo);
    printf("O peso ideal é %.1fkg",peso);
    return 0;
}