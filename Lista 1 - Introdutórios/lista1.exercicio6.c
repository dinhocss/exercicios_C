/*
6. João recebeu seu salário e precisa pagar duas contas atrasadas. Como as contas
estão atrasadas, João deverá pagar uma múlta de 2% sobre cada uma. Faça um 
programa que leia o valor do salário de João e das contas que ele deve pagar,
e que mostre quanto restará do seu salário após o pagamento das contas.
*/

#include <stdio.h>

int main(void){
    
    float conta1, conta2,multa1,multa2,sal;
    
    printf("Digite o salário de João:");
    scanf("%f",&sal);
    printf("Digite o valor da primeira conta:");
    scanf("%f",&conta1);
    printf("Digite o valor da segunda conta:");
    scanf("%f",&conta2);
    multa1 = conta1*0.02;
    multa2 = conta2*0.02;
    sal = sal - conta1 - multa1 - conta2 - multa2;
    printf("A primeira conta é no valor de R$%.2f.\nA segunda conta é no valor de R$%.2f",(conta1+multa1),(conta2+multa2));
    printf("\nRestará R$%.2f após o pagamento das contas.",sal);
    
    return 0;
}