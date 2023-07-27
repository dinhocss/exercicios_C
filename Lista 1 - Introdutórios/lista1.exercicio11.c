/*
11. Faça um programa que leia o salário de um funcionário e o salário mínimo
vigente. Calcular e escrever quantos salários mínimos ganha o funcionário.

Informações:
Salário mínimo vigente: R$1320.00
*/

#include <stdio.h>
#define sal_min 1320

int main(void){
    float sal;
    printf("Digite o salário do funcionário:");
    scanf("%f",&sal);
    sal = sal/sal_min;
    printf("O funcionário recebe %.1f salários mínimos.",sal);
    
    return 0;
}