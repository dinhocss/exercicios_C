/*
10. Existem números de 4 dígitos (entre 1000 e 9999) que obedecem à seguinte
característica: se dividirmos o número em dois números de dois dígitos, um composto
pela dezena e pela unidade, e outro pelo milhar e pela centena, se somarmos estes
dois novos números gerando um terceiro, o quadrado deste terceiro número é exatamente
o número original de quatro dígitos.
Por exemplo: 2025 -> dividindo: 20 e 25 -> somando temos 45 -> 452 = 2025.
Escreva um programa para ler um número e verificar se ele obedece a esta característica
*/

#include <stdio.h>

int main(void){
    
    int num, dezenaUnidade, milharCentena, terceiro, terceiroQuadrado;
    
    printf("Digite o número desejado(1000 - 9999):");
    scanf("%d",&num);
    
    if(num<1000 || num>9999){
        printf("Número inválido!");
        return 1;
    }
    
    //Separando a dezena e unidade do milhar e centena
    dezenaUnidade = num%100;
    milharCentena = num/100;
    
    //Obtendo o terceiro numero
    terceiro = dezenaUnidade + milharCentena;
    
    //Obtendo o quadrado do terceiro numero
    terceiroQuadrado = terceiro*terceiro;
    
    //Fazendo a comparação
    if(terceiroQuadrado == num){
        printf("O número %d obedece a regra.",num);
    }
    else{
        printf("O número %d não obedece a regra.",num);
    }
    
    return 0;
}