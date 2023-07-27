/*
12.Faça um programa que receba o ano de nascimento de uma pessoa e o ano atual.
Calcular e escrever a idade dessa pessoa em anos, meses e semanas.
*/

#include <stdio.h>

int main() {
    int ano, mes, semana, anoAtual, anoNascimento;
    
    printf("Digite o ano atual:");
    scanf("%d",&anoAtual);
    printf("Digite o ano de nascimento:");
    scanf("%d",&anoNascimento);
    ano = anoAtual - anoNascimento;
    mes = ano*12;
    semana = ano*52;
    printf("Idade:\nEm anos:%d\nEm meses:%d\nEm semanas:%d\n",ano,mes,semana);
    return 0;
}