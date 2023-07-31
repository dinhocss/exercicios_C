/*
10.A prefeitura de uma cidade resolveu fazer uma pesquisa entre os seus trabalhadores.
Para isso, ela coletou alguns dados como idade, sexo(M ou F) e salário. Faça um programa
que leia estes dados e que escreva ao final:
    ->A média salarial dos homens
    ->A média salarial das mulheres
    ->O maior salário encontrado entre as pessoas abaixo de 30 anos
obs:O final da leitura de dados é marcada por uma idade negativa.
*/

#include <stdio.h>

int menu(){
    
    int op;
    printf("Menu:\n");
    printf("1 - Adicionar funcionário\n");
    printf("2 - Informar média salarial dos homens\n");
    printf("3 - Informar média salarial das mulheres\n");
    printf("4 - Informar o maior salário encontrado entre pessoas abaixo de 30 anos\n");
    printf("0 - Sair\n");
    printf("Digite a opção desejada:");
    scanf("%d",&op);
    return op;
}

int main(void){
    
    float salHomem, salMulher, salMenor30=0, salTotalHomem = 0,salTotalMulher = 0;
    int contagemHomem=0, contagemMulher=0,op,idade;
    char sexo;
    op = menu();
    do{
        switch(op){
            case 1:
                printf("Digite o sexo:");
                getchar();
                scanf("%c",&sexo);
                if(sexo == 'M' || sexo=='m'){
                    printf("Digite a idade:");
                    scanf("%d",&idade);
                    printf("Digite o salário:");
                    scanf("%f",&salHomem);
                    salTotalHomem += salHomem;
                    contagemHomem++;
                    if(idade<30 && salHomem>salMenor30){
                        salMenor30 = salHomem;
                    }
                }
                else if(sexo == 'F' || sexo =='f'){
                    printf("Digite a idade:");
                    scanf("%d",&idade);
                    printf("Digite o salário:");
                    scanf("%f",&salMulher);
                    salTotalMulher += salMulher;
                    contagemMulher++;
                    if(idade<30 && salMulher>salMenor30){
                        salMenor30 = salMulher;
                    }
                }
                printf("Digite a opção desejada:");
                scanf("%d",&op);
                break;
                
            case 2:
                printf("\nMédia salarial dos homens:\n");
                printf("R$%.2f\n",(salTotalHomem/contagemHomem));
                printf("Digite a opção desejada:");
                scanf("%d",&op);
                break;
                
            case 3:
                printf("\nMédia salarial das mulheres:\n");
                printf("R$%.2f\n",(salTotalMulher/contagemMulher));
                printf("Digite a opção desejada:");
                scanf("%d",&op);
                break;
                
            case 4:
                printf("\nMaior salário:\n");
                printf("R$%.2f\n\n",salMenor30);
                printf("Digite a opção desejada:");
                scanf("%d",&op);
                break;
            default:
                break;
        }
    }while(op>0);
    
    return 0;
}