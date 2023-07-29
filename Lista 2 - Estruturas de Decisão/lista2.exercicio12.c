/*
12.O presidente de um país sul-americano quer investir em saúde, educação, habitação,
segurança e previdência, que são as cinco metas de seu governo. Assim, o presidente
decide criar mais um imposto, o ISSS(Imposto Sobre Seu Saldo), que é calculado sobre 
o saldo médio da conta-corrente,segundo a tabela abaixo:
    -> Saldo < 100: isento
    -> 100<= Saldo < 1000: imposto devido é 1% sobre o Saldo
    -> 1000<= Saldo < 10000: imposto devido é 2% sobre o Saldo
    -> 10000<= Saldo < 100000: imposto devido é de 3% sobre o Saldo
    -> Saldo >= 100000: imposto devido é de 5% sobre o Saldo
Faça um programa que permita ao usuário informar seu saldo bancário e escreva o 
ISSS devido.
*/

#include <stdio.h>

void impostoDevido(float saldo){
    if(saldo < 100){
        printf("O usuário está isento do imposto.");
    }
    else if(saldo>=100 && saldo<1000){
        printf("O imposto devido é de 1%% em relação ao saldo, totalizando R$%.2f de imposto.",(saldo*0.01));
    }
    else if(saldo>=1000 && saldo<10000){
        printf("O imposto devido é de 2%% em relação ao saldo, totalizando R$%.2f de imposto.",(saldo*0.02));
    }
    else if(saldo>=10000 && saldo<100000){
        printf("O imposto devido é de 3%% em relação ao saldo, totalizando R$%.2f de imposto.",(saldo*0.03));
    }
    else{
        printf("O imposto devido é de 5%% em relação ao saldo, totalizando R$%.2f de imposto.",(saldo*0.05));
    }
}


int main(void){
    
    float saldo;
    
    printf("Digite o saldo bancário do usuário:");
    scanf("%f",&saldo);
    
    impostoDevido(saldo);
    
    return 0;
}