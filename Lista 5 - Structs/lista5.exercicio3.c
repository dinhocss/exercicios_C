/*
3. Um funcionário recebe um salário fixo mais 6% de comissão sobre suas vendas.
Faça um programa que leia o salário de um funcionário, o valor total de suas vendas
e apresente seu salário final. Considere N funcionários (use alocação dinâmica)
*/

#include <stdio.h>
#include <stdlib.h>

int main(void){
    float *sal,*vendas,comissao;
    int N, i;
    
    printf("Digite a quantidade de funcionários:");
    scanf("%d",&N);
    sal = (float*)malloc(N*sizeof(float));
    vendas = (float*)malloc(N*sizeof(float));
    
    for(i=0;i<N;i++){
        printf("Digite o salário do %d° funcionário:",i+1);
        scanf("%f",&sal[i]);
        printf("Digite o valor de vendas do %d° funcionário:",i+1);
        scanf("%f",&vendas[i]);
        comissao = vendas[i]*0.06;
        sal[i]+=comissao;
    }
    
    printf("\nSalários:\n");
    for(i=0;i<N;i++){
        printf("Funcionário %d: R$%.2f\n",(i+1),sal[i]);
    }
    free(sal);
    free(vendas);
    

    
    return 0;
}