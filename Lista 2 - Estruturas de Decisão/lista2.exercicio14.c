/*
14.O síndico do condomínio Praias Oceânicas, que possui 4 blocos, instituiu uma nova 
forma de cobrança. Os condomínios dos blocos Itaipu e Itacoatiara pagam 10% a mais 
que os moradores dos blocos Camboinhas e Piratininga. Os moradores da cobertura pagam 
uma  taxa extra fixa relativa a 1% do total do condomínio. Supondo que cada bloco 
possui 20 apartamentos simples e 4 coberturas, faça um programa que leia a taxa 
condominial básica e que informe o total arrecadado pelo síndico no mês, especificando 
também os valores diferenciados de cada condomínio.
*/

#include <stdio.h>

int main(void){
    
    float taxaCondominio,arrecadadoMes, itaipu, itacoatiara, camboinhas, piratininga, itaipuCobertura, itacoatiaraCobertura, piratiningaCobertura,camboinhasCobertura;
    printf("Digite a taxa de condomínio:");
    scanf("%f",&taxaCondominio);
    itaipu = taxaCondominio + (taxaCondominio*0.1);
    itacoatiara = taxaCondominio + (taxaCondominio*0.1);
    camboinhas = taxaCondominio;
    piratininga = taxaCondominio;
    itaipuCobertura = itaipu + (itaipu*0.01);
    itacoatiaraCobertura = itacoatiara + (itacoatiara*0.01);
    camboinhasCobertura = camboinhas + (camboinhas*0.01);
    piratiningaCobertura = piratininga + (piratininga*0.01);
    
    arrecadadoMes = (itaipu*20+itaipuCobertura*4)+(itacoatiara*20+itacoatiaraCobertura*4)+(camboinhas*20+camboinhasCobertura*4)+(piratininga*20+piratiningaCobertura*4);
    printf("Valor arrecadado mensal:R$%.2f\n",arrecadadoMes);
    printf("Taxa do bloco Itaipu:\nCondomínio:R$%.2f\nCobertura:R$%.2f\n\n",itaipu,itaipuCobertura);
    printf("Taxa do bloco Itacoatiara:\nCondomínio:R$%.2f\nCobertura:R$%.2f\n\n",itacoatiara,itacoatiaraCobertura);
    printf("Taxa do bloco Camboinhas:\nCondomínio:R$%.2f\nCobertura:R$%.2f\n\n",camboinhas,camboinhasCobertura);
    printf("Taxa do bloco Piratininga:\nCondomínio:R$%.2f\nCobertura:R$%.2f\n\n",piratininga,piratiningaCobertura);
    return 0;
}