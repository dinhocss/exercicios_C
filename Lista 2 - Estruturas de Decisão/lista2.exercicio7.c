/*
7.Faça um programa que leia a quantidade de horas aula dadas por dois professores
e o valor por hora recebido por cada um. Mostrar na tela qual dos professores tem o 
salário total maior.
*/

#include <stdio.h>

void compararSalario(float sal1, float sal2){
    if(sal1>sal2){
        printf("O primeiro professor ganha R$%.2f.\nO segundo professor ganha R$%.2f.\nO primeiro professor ganha R$%.2f a mais que o segundo.",sal1,sal2,(sal1-sal2));
    }
    else if(sal1<sal2){
        printf("O primeiro professor ganha R$%.2f.\nO segundo professor ganha R$%.2f.\nO segundo professor ganha R$%.2f a mais que o primeiro.",sal1,sal2,(sal2-sal1));
    }
    else{
        printf("Os professores ganham igual, que é R$%.2f",sal1);
    }
}

int main(void){
    
    float horaAula1, horaAula2, hora1,hora2,sal1,sal2;
    printf("Digite o valor recebido por hora do primeiro professor:");
    scanf("%f",&horaAula1);
    printf("Digite a quantidade de horas de aulas dadas do primeiro professor:");
    scanf("%f",&hora1);
    printf("Digite o valor recebido por hora do segundo professor:");
    scanf("%f",&horaAula2);
    printf("Digite a quantidad de horas de aulas dadas do segundo professor:");
    scanf("%f",&hora2);
    sal1 = horaAula1*hora1;
    sal2 = horaAula2*hora2;
    compararSalario(sal1,sal2);
    
    
    return 0;
}