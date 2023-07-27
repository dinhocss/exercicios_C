/*
8. Faça um programa que leia três notas de um aluno com os seus respectivos
pesos e que calcule e escreva a média ponderada dessas notas.
*/

#include <stdio.h>

float mediaPonderada(int p1, float n1, int p2, float n2, int p3, float n3){
    float mp;
    int pesos;
    pesos = p1+p2+p3;
    mp = ((n1*p1)+(n2*p2)+(n3*p3))/pesos;
    return mp;
    
}

int main(void){
    
    float n1,n2,n3,mp;
    int p1,p2,p3;
    printf("Digite a primeira nota:");
    scanf("%f",&n1);
    printf("Digite o peso da primeira prova:");
    scanf("%d",&p1);
    printf("Digite a segunda nota:");
    scanf("%f",&n2);
    printf("Digite o peso da segunda prova:");
    scanf("%d",&p2);
    printf("Digite a terceira nota:");
    scanf("%f",&n3);
    printf("Digite o peso da terceira prova:");
    scanf("%d",&p3);
    mp = mediaPonderada(p1,n1,p2,n2,p3,n3);
    printf("A média ponderada é:%.2f",mp);
    
    return 0;
}