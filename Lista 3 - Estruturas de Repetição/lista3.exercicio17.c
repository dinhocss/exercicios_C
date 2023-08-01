/*
17.Faça um programa que apure os votos de uma eleição presidencial onde concorrem três
candidatos. Os votos podem ser 1, 2, 3 e 4 e devem ser contados de acordo com a tabela abaixo:
    -> 1: João da Silva
    -> 2: José Ramalho
    -> 3: Maria de Mattos
    -> 4: Voto em branco
    -> Outros: Voto Nulo
Calcule e escreva o total de votos de cada candidato, o total de votos brancos, o total de
votos nulos e o nome do candidato que recebeu mais votos.
*/

#include <stdio.h>
#include <string.h>

void menu(){
    printf("Votação:\n");
    printf("1 - João da Silva\n");
    printf("2 - José Ramalho\n");
    printf("3 - Maria de Mattos\n");
    printf("4 - Voto em branco\n");
    printf("5 - Resultado parcial\n");
    printf("0 - Sair\n");
    printf("Obs:Qualquer digito diferente dos de cima será considerado nulo!\n");
}

void resultado(int votoJoao, int votoJose, int votoMaria){
    char nome[50];
    if(votoJoao>votoJose && votoJoao>votoMaria){
        strcpy(nome,"João da Silva");
    }
    if(votoJose>votoJoao && votoJose>votoMaria){
        strcpy(nome,"Jose Ramalho");
    }
    if(votoMaria>votoJoao && votoMaria>votoJose){
        strcpy(nome,"Maria de Mattos");
    }
    printf("\nO candidato mais votado foi %s\n",nome);
}

void totalVotos(int votoJoao, int votoJose, int votoMaria, int votoBranco, int votoNulo){
    printf("\nResultados:\n");
    printf("João da Silva: %d votos.\n",votoJoao);
    printf("José Ramalho: %d votos.\n",votoJose);
    printf("Maria de Mattos: %d votos.\n",votoMaria);
    printf("Votos em branco: %d votos.\n",votoBranco);
    printf("Votos nulos: %d votos.\n",votoNulo);
}

int main(void){
    char nome[50];
    int op,votoJoao=0,votoJose=0,votoMaria=0,votoBranco=0,votoNulo=0,maisVotos;
    menu();
    printf("Digite a opção desejada:");
    scanf("%d",&op);
    do{
        switch(op){
            case 1:
                printf("\nVoto em João da Silva computado.\n");
                votoJoao++;
                printf("Digite a opção desejada:");
                scanf("%d",&op);
                break;
            case 2:
                printf("\nVoto em Jose Ramalho computado.\n");
                votoJose++;
                printf("Digite a opção desejada:");
                scanf("%d",&op);
                break;
            case 3:
                printf("\nVoto em Maria de Mattos computado.\n");
                votoMaria++;
                printf("Digite a opção desejada:");
                scanf("%d",&op);
                break;
            case 4:
                printf("\nVoto em branco computado.\n");
                votoBranco++;
                printf("Digite a opção desejada:");
                scanf("%d",&op);
                break;
            case 5:
                totalVotos(votoJoao,votoJose,votoMaria,votoBranco,votoNulo);
                resultado(votoJoao,votoJose,votoMaria);
                printf("Digite a opção desejada:");
                scanf("%d",&op);
                break;
            default:
                printf("\nVoto anulado.\n");
                votoNulo++;
                printf("Digite a opção desejada:");
                scanf("%d",&op);
                break;
        }
    }while(op!=0);
    

    
    return 0;
}