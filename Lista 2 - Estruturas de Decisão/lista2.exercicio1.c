/*
1. Faça um programa que leia 3 valores reais e que informe se eles formam um triângulo.
Caso seja possível formar o triângulo indique se este é equilátero, isósceles ou escaleno.
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c;
    
    printf("Digite os lados do triângulo:");
    scanf("%d %d %d",&a,&b,&c);
    
    if(abs(b-c)<a && (b+c)>a){
        if(abs(a-c)<b && (a+c)>b){
            if(abs(a-b)<c && (a+b)>c){
                if(a==b && a==c){
                    printf("O triângulo existe e é equilátero.");
                }
                else if(a==b||a==c||b==c){
                    printf("O triângulo existe e é isósceles.");
                }
                else{
                    printf("O triângulo existe e é escaleno.");
                }
            }
        }
    }else{
        printf("O triângulo não existe.");
    }
    return 0;
}