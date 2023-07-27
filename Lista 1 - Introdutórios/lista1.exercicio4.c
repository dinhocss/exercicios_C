/*
4. Um funcionário recebe um salário fixo mais 4% de comissão sobre as suas
vendas. Faça um programa que receba o valor do salário fixo do funcionário,
o valor das suas vendas e que calcule e mostre o salário final do funcionário.
*/

#include <stdio.h>

int main(void){
    float val_sal, val_vendas, comissao, sal_final;
    
    printf("Digite o valor do salário do funcionário:");
    scanf("%f",&val_sal);
    printf("Digite quanto o funcionário vendeu no mês:");
    scanf("%f",&val_vendas);
    comissao = val_vendas*0.04;
    sal_final = val_sal + comissao;
    printf("O salário final do funcionário é R$%.2f.\n",sal_final);
    
    return 0;
}
