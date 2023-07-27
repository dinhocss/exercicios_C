/*
9.Faça um programa que leia o salário de um funcionário e que calcule e escreva
o salário com um desconto de 10%.
*/

#include <stdio.h>

int main(void){
    
    float sal,desc;
    printf("Digite o salário do funcionário:");
    scanf("%f",&sal);
    desc = sal*0.1;
    sal = sal - desc;
    printf("Houve um desconto de R$%.2f. O salário após o desconto é R$%.2f",desc,sal);
    
    return 0;
}
