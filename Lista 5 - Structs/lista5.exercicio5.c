/*
5. Foi realizada uma pesquisa sobre as características físicas de 50 habitantes de uma certa
região. De cada habitante foram coletados os seguintes dados: altura, idade e cor dos olhos
(A-azuis, V-verdes, C-castanhos). Faça um programa que leia estes dados e que calcule e mostre:
    ->A média das idades;
    ->A maior e a menor altura;
    -> A quantidade de pessoas de olhos castanhos que possuam idade acima da média calculada
*/

#include <stdio.h>
#include <stdlib.h>
#define num 3

typedef struct{
    int idade;
    float altura;
    char cor;
}Pesquisa;

int main(void){
    Pesquisa habitante[num];
    int i, mediaIdade, somaIdade=0,qtd=0;
    float maiorAltura=0, menorAltura=2.0;
    
    for(i=0;i<num;i++){
        printf("Digite a idade do %d° habitante:",i+1);
        scanf("%d",&habitante->idade);
        printf("Digite a altura do %d° habitante:",i+1);
        scanf("%f",&habitante->altura);
        getchar();
        printf("Digite a cor dos olhos do %d° habitante:",i+1);
        scanf("%c",&habitante->cor);
        somaIdade += habitante->idade;
        if(habitante->altura>maiorAltura){
            maiorAltura = habitante->altura;
        }
        if(habitante->altura<menorAltura){
            menorAltura = habitante->altura;
        }
        if(habitante->cor='C' && habitante->idade>(somaIdade/num)){
            qtd++;
        }
    }
    printf("\nMédia de idade:%d anos.\n",somaIdade/num);
    printf("Maior altura:%.2fm",maiorAltura);
    printf("\nMenor altura:%.2fm",menorAltura);
    printf("\nExistem %d pessoas de olhos castanhos com idade acima da média.",qtd);
    
    return 0;
}