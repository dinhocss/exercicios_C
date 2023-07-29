/*
11. Uma loja de bicicletas paga a cada vendedor 2 salários mínimos mensais, mais uma 
comissão de 5% sobre as vendas das bicicletas, dividida igualmente entre eles.
Escreva um programa que leia o número de empregados da loja, o valor do salário mínimo,
o valor das vendas do mês e que calcule e escreva: o salário total de cada empregado.
*/
    
#include <stdio.h>
#define salMin 1320


int main(void){
    
    float salFuncionario, comissao, vendasMes;
    int numFuncionario;
    
    printf("Digite o número de funcionários da loja:");
    scanf("%d",&numFuncionario);
    printf("Digite o número de vendas no mês:");
    scanf("%f",&vendasMes);
    comissao = (vendasMes*0.05)/numFuncionario;
    salFuncionario = (salMin*2) + comissao;
    printf("O salário de cada funcionário é de R$%.2f.",salFuncionario);
    
    
    return 0;
}