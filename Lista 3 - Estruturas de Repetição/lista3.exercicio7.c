/*
7.Em um cinema, cada espectador respondeu a uma pesquisa, que perguntava a sua 
idade e a sua opinião em relação a um filme(O - Ótimo;B - Bom;R - Regular;P - Péssimo).
Faça um programa que informe a média de idade das pessoas que responderam o questionário
e a porcentagem dada para cada uma das respostas. O programa deve terminar quando o usuário 
digitar uma idade negativa.
*/

#include <stdio.h>

int main(void){
    
    int idade,op,somaIdade=0,notaO=0,notaB=0,notaR=0,notaP=0,total=0;
    char nota;
    
    printf("Menu:\n");
    printf("1 - Responder a pesquisa\n");
    printf("2 - Informar idade média\n");
    printf("3 - Informar porcentagem de respostas\n");
    printf("-1 - Sair\n");
    printf("Digite a opção desejada:");
    scanf("%d",&op);
    do{
        switch(op){
            case 1:
                printf("Digite sua idade:");
                scanf("%d",&idade);
                printf("Digite a nota do filme:");
                getchar();
                scanf("%c",&nota);
                somaIdade += idade;
                total++;
                switch(nota){
                    case 'O':
                        notaO+=1;
                        break;
                    case 'B':
                        notaB+=1;
                        break;
                    case 'R':
                        notaR+=1;
                        break;
                    case 'P':
                        notaP+=1;
                        break;
                    default:
                        printf("Nota inválida!\n");
                        printf("Digite a nota desejada:");
                        scanf("%c",&nota);
                }
                printf("Digite a opção desejada:");
                scanf("%d",&op);
                break;
                
            case 2:
                printf("Idade media:%.1f anos.\n",somaIdade*1.0/total);
                printf("Digite a opção desejada:");
                scanf("%d",&op);
                break;
            case 3:
                printf("Porcentagem das Respostas:\n");
                printf("O - %.1f%%\n",(notaO*1.0/total)*100);
                printf("B - %.1f%%\n",(notaB*1.0/total)*100);
                printf("R - %.1f%%\n",(notaR*1.0/total)*100);
                printf("P - %.1f%%\n",(notaP*1.0/total)*100);
                printf("Digite a opção desejada:");
                scanf("%d",&op);
                break;
            
        }        
    }while(op!=-1);

    
    return 0;
}