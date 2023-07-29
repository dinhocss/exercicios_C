/*
8.Faça um programa que leia o número de eleitores de um município, o número de votos
brancos, nulos e válidos. Calcule e escreva o percentual que cada um representa
em relação ao total de eleitores.
*/

#include <stdio.h>

void lerVotos(int eleitores, int brancos, int nulos, int validos){
    printf("%.1f%% de votos brancos.\n",((brancos*1.0/eleitores)*100));
    printf("%.1f%% de votos nulos.\n",((nulos*1.0/eleitores)*100));
    printf("%.1f%% de votos válidos.\n",((validos*1.0/eleitores)*100));
}

int main(void){
    
    int eleitores, brancos, nulos, validos;
    
    printf("Digite o número de eleitores:");
    scanf("%d",&eleitores);
    printf("Digite o número de votos em branco(%d restantes):",eleitores);
    scanf("%d",&brancos);
    printf("Digite o número de votos nulos(%d restantes):",(eleitores-brancos));
    scanf("%d",&nulos);
    printf("Digite o número de votos válidos(%d restantes):",(eleitores-brancos-nulos));
    scanf("%d",&validos);
    
    lerVotos(eleitores, brancos, nulos, validos);
    
    return 0;
}