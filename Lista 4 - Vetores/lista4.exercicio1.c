/*
1.Faça um programa que leia os nomes e as notas dos 60 alunos de uma turma e imprima,
após a entrada de todos os dados, os nomes dos alunos aprovados. Considere que a média
para aprovação é 6,0.
*/

#include <stdio.h>
#define max_alunos 60

int main(void){
    
    int i;
    float nota[max_alunos];
    char nomes[max_alunos][50];
    for(i=0;i<max_alunos;i++){
        printf("Digite o nome do %d° aluno:",i+1);
        scanf("%s",nomes[i]);
        printf("Digite a nota do %d° aluno:",i+1);
        scanf("%f",&nota[i]);
    }
        printf("\nAprovados:\n");    
    for(i=0;i<max_alunos;i++){
        if(nota[i]>=6){
            printf("%s\n",nomes[i]);
        }
    }
    return 0;
}