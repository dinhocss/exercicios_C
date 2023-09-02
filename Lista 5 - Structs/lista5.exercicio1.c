/*
1.A prefeitura de uma cidade fez uma pesquisa com seus habitantes, coletando dados sobre
salário, idade e número de filhos. Faça um programa que leia os dados de 20 pessoas, e que
calcule e mostre:
    ->A média de salário da população;
    ->A média do número de filhos;
    ->O maior salario;
*/

#include <stdio.h>


typedef struct{
    float salario;
    int filho,idade;
}Pessoa;

void menu(){
    printf("\nMenu:\n");
    printf("1 - Informar média de salário da população\n");
    printf("2 - Informar média do número de filhos da população\n");
    printf("3 - Informar o maior salário\n");
    printf("0 - Sair\n");
    
}

int main(void){

    int i,qtd,mediaFilho=0,op,qtdFilho=0;
    float maiorSal=0, mediaSal=0;
    
    printf("Digite a quantidade de entrevistados:");
    scanf("%d",&qtd);
    Pessoa entrevistados[qtd];
    for(i=0;i<qtd;i++){
        printf("Digite o salário da %d° pessoa:",i+1);
        scanf("%f",&entrevistados[i].salario);
        printf("Digite o número de filhos da %d° pessoa:",i+1);
        scanf("%d",&entrevistados[i].filho);
        printf("Digite a idade da %d° pessoa:",i+1);
        scanf("%d",&entrevistados[i].idade);
        if(entrevistados[i].salario>maiorSal){
            maiorSal = entrevistados[i].salario;
        }
        mediaSal += entrevistados[i].salario;
        mediaFilho += entrevistados[i].filho;
        if(entrevistados[i].filho>=1){
            qtdFilho++;
        }
    }
    
    menu();
    printf("Digite a opção desejada:");
    scanf("%d",&op);
    
    do{
        switch(op){
            case 1:
                printf("\nA média de salário da população é R$%.2f.\n",(mediaSal/qtd));
                printf("Digite a opção desejada:");
                scanf("%d",&op);
                break;
            case 2:
                printf("\nA média de filhos da população é de %d filhos.\n",(mediaFilho/qtdFilho));
                printf("Digite a opção desejada:");
                scanf("%d",&op);
                break;
            case 3:
                printf("\nA pessoa de maior salário recebe R$%.2f\n",maiorSal);
                printf("Digite a opção desejada:");
                scanf("%d",&op);
                break;
            default:
                printf("\nDigito inválido!\n");
                printf("Digite a opção desejada:");
                scanf("%d",&op);
                break;
        }
    }while(op!=0);
    
    return 0;
}