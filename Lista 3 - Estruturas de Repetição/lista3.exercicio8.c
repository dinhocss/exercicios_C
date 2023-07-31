/*
8.Faça um programa que calcule o valor total que um edifício garagem arrecadou em um
dia de operação, no qual 200 caros utilizaram o estacionamento. O algoritmo deve ler 
o horário de entrada(hora e minuto) assim como o de saída. Sabe-se que o valor mínimo
cobrado é de 4 reais por um período de 2 horas. A partir daí, cobra-se 1 real por 
hora adicional.
*/

#include <stdio.h>

float contagemTempo(){
    
    int horaEntrada,minutoEntrada,horaSaida,minutoSaida,minutoTotal;
    printf("Digite a hora de entrada(hh:mm):");
    scanf("%d:%d",&horaEntrada,&minutoEntrada);
    printf("Digite a hora de saída(hh:mm):");
    scanf("%d:%d",&horaSaida,&minutoSaida);
    minutoTotal = ((horaSaida - horaEntrada)*60) + (minutoSaida-minutoEntrada);
    return minutoTotal;
}

int menu(){
    
    int op;
    
    printf("Menu:\n");
    printf("1 - Adicionar veículo\n");
    printf("2 - Informar rendimento\n");
    printf("0 - Sair\n");
    printf("Digite a opção desejada:");
    scanf("%d",&op);
}


int main(void){
    int tempoMinuto,tempoHora, op,valorCobrado,somaValor = 0;
    
    op = menu();
    do{
        switch(op){
            case 1:
                tempoMinuto = contagemTempo();
                if(tempoMinuto <= 120){
                    valorCobrado = 4;
                }
                else if(tempoMinuto >= 120){
                    valorCobrado = 3;
                    while(tempoMinuto>60){
                        tempoMinuto -= 60;
                        valorCobrado++;
                    }
                }
                printf("Valor cobrado:%d\n\n",valorCobrado);
                somaValor += valorCobrado;
                printf("Digite a opção desejada:");
                scanf("%d",&op);
                break;
            case 2:
                printf("O rendimento total é de R$%d\n\n",somaValor);
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
    
    tempoMinuto = contagemTempo();
    printf("%d\n",tempoMinuto);
    tempoHora = tempoMinuto/60;
    tempoMinuto = tempoMinuto%60;
    printf("%d:%d",tempoHora,tempoMinuto);
    
    return 0;
}