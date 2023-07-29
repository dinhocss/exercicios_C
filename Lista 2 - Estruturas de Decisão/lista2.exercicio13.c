/*
13.Considere as viagens que são realizadas entre as cidades de Metrópolis e Gotham City.
Sabendo que todas as viagens entre estas cidades são feitas sempre dentro de um mesmo dia,
elabore um programa que permita que um usuário informe o momento exato(hora, minuto, segundo)
da sua partida e da sua chegada, e que calcule e escreva o tempo total da viagem(tambémn
em horas, minutos e segundos).
*/

#include <stdio.h>

int main(void){
    
    int horaPartida, minutoPartida, segundoPartida, horaChegada, minutoChegada, segundoChegada,diferenca, horaTotalChegada,horaTotalPartida, minutoTotal, segundoTotal, horaTotal;
    
    printf("Digite a hora de partida(hh:mm:ss):");
    scanf("%d:%d:%d",&horaPartida,&minutoPartida,&segundoPartida);
    printf("Digite a hora da chegada(hh:mm:ss):");
    scanf("%d:%d:%d",&horaChegada,&minutoChegada,&segundoChegada);
    horaPartida = horaPartida*3600;
    minutoPartida = minutoPartida*60;
    horaTotalPartida = horaPartida + minutoPartida + segundoPartida;
    
    horaChegada = horaChegada*3600;
    minutoChegada = minutoChegada*60;
    horaTotalChegada = horaChegada + minutoChegada + segundoChegada;
    
    diferenca = horaTotalChegada - horaTotalPartida;
    
    horaTotal = diferenca/3600;
    diferenca = diferenca%3600;
    minutoTotal = diferenca/60;
    segundoTotal = diferenca%60;
    
    printf("%d:%d:%d",horaTotal,minutoTotal,segundoTotal);
    

    return 0;
}