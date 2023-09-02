#include <stdio.h>

int numeroPrimo(int n){
    int i;
    if(n<=1){
        return 0;
    }
    for(i=2;i*i<=n;i++){
        if(n%i==0){
            return 0;
        }
    }
    return 1;
}

int main(void){
    int i, n, found;
    

    
    while(1){
        printf("\nDigite o número desejado:");
        scanf("%d",&n);        
        if(n<=0){
            break;
        }
        i=n+1;//Faz com que nosso ponto de partida seja a partir de n.
        found=0;//Utilizado para irmos de 0 até n, selecionando os n valores desejados
        while(found<n){
            if(numeroPrimo(i)){
                printf("%d ",i);
                found++;
            }
            i++;
        }

    }
    
    return 0;
}