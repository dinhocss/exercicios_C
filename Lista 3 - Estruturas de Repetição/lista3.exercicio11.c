/*
11.Faça um programa que escreva os N primeiros termos de uma PA. O primeiro termo,
a1, e a razão da PA devem ser lidos.
*/

#include <stdio.h>

int main(void){
    
    int a1, razao, i, termos, pa;
    printf("Digite a quantidade de termos desejada:");
    scanf("%d",&termos);
    printf("Digite o primeiro termo da PA:");
    scanf("%d",&a1);
    printf("Digite a razão da PA:");
    scanf("%d",&razao);
    for(i=1;i<=termos;i++){
        pa = a1 + (i-1)*razao;
        printf(" %d ",pa);
 
    }
    return 0; 
}