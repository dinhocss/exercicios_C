/*
5.Faça um programa que calcule a àrea total de uma casa(sala, cozinha, quartos, banheiros, etc).
Considere que todos os cômodos são retangulares. O usuário deve entrar com a largura
e o comprimento de cada cômodo da casa. O final da leitura será detectado quando for 
digitado um número negativo.
*/

#include <stdio.h>

void menu(){
    printf("Menu:\n");
    printf("Digite 1 para adicionar um comodo.\n");
    printf("Digite -1 para sair.\n");
    printf("Digite a opção desejada:");
}

int main(void){
    
    int op, larg, comp, area, areaTotal=0;
    char comodo[30];
    
    menu();
    scanf("%d",&op);
    while(op>=0){
        printf("Digite o comodo desejado:");
        scanf("%s",comodo);
        printf("Digite a largura do(a) %s:",comodo);
        scanf("%d",&larg);
        printf("Digite o comprimento do(a) %s:",comodo);
        scanf("%d",&comp);
        printf("Cômodo adicionado.\n\n");
        area = larg * comp;
        areaTotal += area;
        menu();
        scanf("%d",&op);
    }
    
    printf("\nA área total da casa é de %dm²",areaTotal);
    
    return 0;  
}