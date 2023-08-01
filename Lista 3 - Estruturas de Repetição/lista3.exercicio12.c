/*
12.Faça um programa que leia uma quantidade não determinada de números inteiros. O programa
deve calcular e escrever a quantidade de números pares e ímpares, a média aritmética
dos números pares e a divisão do somatório dos números pares pelo somatório dos números
ímpares. O número que encerrará a leitura será zero, que não deve ser considerado.
*/

#include <stdio.h>

int menu(){
    
    int op;
    printf("Menu:\n");
    printf("1 - Adicionar Número\n");
    printf("2 - Calcular a quantidade de pares e ímpares\n");
    printf("3 - Calcular média aritmética dos números pares\n");
    printf("4 - Calcular divisão do somatório dos pares pelos ímpares\n");
    printf("0 - Sair\n");
    printf("Digite a opção desejada:");
    scanf("%d",&op);
    return op;
}

int main(void){
    
    int qtdPares=0, somaPares = 0, qtdImpares=0,somaImpares = 0,op,num;
    op = menu();
    
    do{
        switch(op){
            case 1:
                printf("Digite o número desejado:");
                scanf("%d",&num);
                if(num%2==0){
                    qtdPares++;
                    somaPares += num;
                }
                else{
                    qtdImpares++;
                    somaImpares += num;
                }

                printf("Digite a opção desejada:");
                scanf("%d",&op);
                break;
                
            case 2:
                printf("\nQuantidade de pares:%d\n",qtdPares);
                printf("Quantidade de ímpares:%d\n",qtdImpares);
                printf("\nDigite a opção desejada:");
                scanf("%d",&op);
                break;
                
            case 3:
                printf("Média aritmética dos números pares:%.2f\n",(somaPares*1.0/qtdPares));
                printf("\nDigite a opção desejada:");
                scanf("%d",&op);
                break;
                
            case 4:
                printf("\nDivisão do somatório dos números pares pelos ímpares:%.2f\n",(somaPares*1.0/somaImpares));
                printf("Digite a opção desejada:");
                scanf("%d",&op);
                break;
                
            default:
                printf("\nOpção inválida!\n");
                printf("Digite a opção desejada:");
                scanf("%d",&op);
                break;
        }
    }while(op!=0);
    
    return 0;
}