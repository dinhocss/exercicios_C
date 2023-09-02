/*
2. Foi feita uma estatística em 20 estados brasileiros para coletar dados sobre acidentes
de trânsito. Foram informados dados como:a sigla do estado, o número de veículos,
e a quantidade de acidentes.Faça um programa que calcule e mostre:
    ->A sigla do estado que possui maior número de carros;
    ->Considerando o número de acidentes e o número de carros que circulam no estado,
    informar o estado com menor índice de acidentes de trânsito
    ->O número total de acidentes de trânsito computado.
*/

#include <stdio.h>
#include <string.h>

typedef struct{
    char estado[5];
    int numVeiculos, qtdAcidente;
}Dados;

void menu(){
    printf("\nMenu:\n");
    printf("1 - Informar o estado com o maior número de carros\n");
    printf("2 - Informar o estado com menor índice de acidentes\n");
    printf("3 - Informar o número total de acidentes computados\n");
    printf("0 - Sair\n");
}

int main(void){
    

    Dados pesquisa[5];
    int i,numCarros=0,numAcidentes=0,op;
    float indiceAcidente, menor=10000;
    char maiorEstado[5],menorEstado[5];
    
    for(i=0;i<5;i++){
        printf("Digite a sigla do estado:");
        scanf("%s",pesquisa[i].estado);
        printf("Digite o número de veículos no de estado %s:",pesquisa[i].estado);
        scanf("%d",&pesquisa[i].numVeiculos);
        printf("Digite a quantidade de acidentes no de estado %s:",pesquisa[i].estado);
        scanf("%d",&pesquisa[i].qtdAcidente);
        if(pesquisa[i].numVeiculos > numCarros){
            numCarros = pesquisa[i].numVeiculos;
            strcpy(maiorEstado,pesquisa[i].estado);
            
        }
        numAcidentes+=pesquisa[i].qtdAcidente;
        indiceAcidente = (pesquisa[i].qtdAcidente*1.0/pesquisa[i].numVeiculos)*100;
        if(indiceAcidente<menor){
            menor = indiceAcidente;
            strcpy(menorEstado,pesquisa[i].estado);
        }
        
    }
    
    menu();
    printf("Digite a opção desejada:");
    scanf("%d",&op);
    do{
        switch(op){
            case 1:
                printf("\nO estado com o maior número de carros é o %s com %d carros.\n",maiorEstado,numCarros);
                printf("Digite a opção desejada:");
                scanf("%d",&op);
                break;
            case 2:
                printf("\nO estado com o menor índice de acidentes é o %s com %.1f%% de acidentes registrados.\n",menorEstado,indiceAcidente);
                printf("Digite a opção desejada:");
                scanf("%d",&op);
                break;
            case 3:
                printf("\nO número total de acidentes computados é de %d acidentes.\n",numAcidentes);
                printf("Digite a opção desejada:");
                scanf("%d",&op);
                break;
            default:
                printf("Opção inválida!\n");
                printf("Digite a opção desejada:");
                scanf("%d",&op);
                break;
        }
    }while(op!=0);
    return 0;
}