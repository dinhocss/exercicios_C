/*
2. Faça um programa que escreva quanto um consumidor deverá pagar na sua conta 
de luz. Os dados de entrada do algoritmo devem ser: o nome do consumidor, o seu
consumo mensal em quilowatts, e o preço equivalente a um quilowatt.

Informações:
1kWh = R$0,92 
*/

#include <stdio.h>
#define kWh 0.92

int main(void){
    char nome[50];
    float cons_mensal,valor;
    
    printf("Digite o nome do consumidor:");
    scanf("%s",nome);
    printf("Digite o consumo mensal:");
    scanf("%f",&cons_mensal);
    valor = cons_mensal * kWh;
    printf("%s terá que pagar R$%.2f.\n",nome,valor);
    
    return 0;
}