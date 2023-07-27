/*
3. Sabendo que o quilowatt de energia custa um décimo do salário mínimo, faça
um programa que leia o valor do salário mínimo e a quantidade de quilowatts
gasta por um usuário e calcule e escreva: o valor de um quilowatt e o valor da
conta de energia do usuário.

Informações:
Salário mínimo = R$1320.
*/

#include <stdio.h>
#define sal_min 1320

int main(void){
    
    float val_kw, val_cont, qtd_kw;
    val_kw = sal_min/10;
    printf("Digite a quantidade de kWh gasta pelo usuário:");
    scanf("%f",&qtd_kw);
    val_cont = qtd_kw*val_kw;
    printf("1 kWh equivale a R$%.2f.\n",val_kw);
    printf("A conta de energia do usuário é R$%.2f.",val_cont);

    return 0;
}
