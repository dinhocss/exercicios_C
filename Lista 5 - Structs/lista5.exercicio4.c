/*
Faça um programa que leia as informações sobre as N ordens de serviço de uma oficina mecânica.
Os seguintes dados serão lidos: número da OS, valor, tipo de serviço e nome do cliente.
O programa deve apresentar no final:
    -> A média de preço dos serviços prestados
    -> Os nomes dos clientes que pagaram por serviços acima da média calculada
    -> O nome do cliente que pagou o serviço mais caro
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
    int os;
    float valor;
    char nome[50],serv[50];
}Cliente;

int main(void){
    int n,i;
    float maiorValor = 0,media,soma=0;
    printf("Digite o numero de ordens de serviço:");
    scanf("%d",&n);
    Cliente cliente[n];
    char nome[n][50],caro[50];
    
    for(i=0;i<n;i++){
        printf("Digite o numero da OS do %d° cliente:",i+1);
        scanf("%d",&cliente[i].os);
        getchar();
        printf("Digite o valor da OS de numero %d:",cliente[i].os);
        scanf("%f",&cliente[i].valor);
        printf("Digite o tipo de serviço desejado:");
        scanf("%s",cliente[i].serv);
        printf("Digite o nome do %d° cliente:",i+1);
        scanf("%s",cliente[i].nome);
        soma+=cliente[i].valor;
    }
    
    media = soma/n*1.0;
    printf("\nMédia:R$%.2f",media);
    printf("\nClientes que pagaram valores acimada média:\n");
    for(i=0;i<n;i++){
        if(cliente[i].valor>maiorValor){
            maiorValor = cliente[i].valor;
            strcpy(caro,cliente[i].nome);
        }
        if(cliente[i].valor>media){
            printf("%s\n",cliente[i].nome);
        }
    }
    
    printf("\nCliente que pagou o maior valor:%s",caro);
    return 0;
}