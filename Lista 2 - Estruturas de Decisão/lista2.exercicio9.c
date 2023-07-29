/*
9.A prefeitura da "Terra do Nunca" vai realizar suas eleições em urnas eletrônicas,
sendo 3 os candidatos à prefeitura (Capitão Gancho, Peter Pan e Wendy).
Elabore um programa que permita ao usuário informar o número de votos de cada um
dos candidatos, escrevendo em seguida o resultado da eleição. Sabe-se que, caso um
dos candidatos tenha mais de 50% dos votos ele é eleito sem necessidade de segundo
turno. Na "Terra do Nunca" não existem votos nulos ou brancos.
*/

#include <stdio.h>

void contagemVotos(int capitaoGancho,int peterPan, int wendy, int total){
    
    printf("\nResultados:\n");
    printf("%.1f%% - Capitão Gancho\n",((capitaoGancho*1.0/total)*100));
    printf("%.1f%% - Peter Pan\n",((peterPan*1.0/total)*100));
    printf("%.1f%% - Wendy\n",((wendy*1.0/total)*100));
    if((capitaoGancho*1.0/total)*100>50){
        printf("\nCapitão Gancho foi eleito no primeiro turno com %.1f%% dos votos.",(capitaoGancho*1.0/total)*100);
    }
    else if((peterPan*1.0/total)*100>50){
        printf("\nPeter Pan foi eleito no primeiro turno com %.1f%% dos votos.",(peterPan*1.0/total)*100);
    }
    else if((wendy*1.0/total)*100>50){
        printf("\nWendy foi eleita no primeiro turno com %.1f%% dos votos.",(wendy*1.0/total)*100);
    }
    printf("\nVencedor do primeiro turno:\n");
    if(capitaoGancho>peterPan && capitaoGancho>wendy){
        printf("Capitão Gancho.");
    }
    else if(peterPan>capitaoGancho && peterPan>wendy){
        printf("Peter Pan.");
    }
    else if(wendy>capitaoGancho && wendy>peterPan){
        printf("Wendy.");
    }
    
}

int main(void){
    
    int capitaoGancho, peterPan, wendy, total;
    
    printf("Digite a quantidade de votos para o Capitão Gancho:");
    scanf("%d",&capitaoGancho);
    printf("Digite a quantidade de votos para o Peter Pan:");
    scanf("%d",&peterPan);
    printf("Digite a quantidade de votos para a Wendy:");
    scanf("%d",&wendy);
    
    total = capitaoGancho + peterPan + wendy;
    
    contagemVotos(capitaoGancho,peterPan,wendy,total);
    
    
}