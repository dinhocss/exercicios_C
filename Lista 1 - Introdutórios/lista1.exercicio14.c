/*
14.Fazer um programa que leia dois números inteiros A e B, e que troque seus valores.
Escrever os valores antes e depois da troca.
Exemplo: (Antes) A=5,B=8
         (Depois)A=8,B=5
*/

#include <stdio.h>

void troca(int n1,int n2){
    int temp;
    printf("Antes:A=%d,B=%d\n",n1,n2);
    temp = n1;
    n1 = n2;
    n2 = temp;
    printf("Depois:A=%d,B=%d",n1,n2);
}

int main() {
    int n1,n2;
    printf("Digite o primeiro valor:");
    scanf("%d",&n1);
    printf("Digite o segundo valor:");
    scanf("%d",&n2);
    troca(n1,n2);
    return 0;
}