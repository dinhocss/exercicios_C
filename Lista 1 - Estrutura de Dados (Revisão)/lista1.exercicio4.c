#include <stdio.h>

int calculoMDC(int f1, int f2){
    int maiorValor = 0,i;
    if(f1>f2){
        for(i=f1;i>=0;i--){
            if(f1%i==0 && f2%i==0){
                if(i > maiorValor){
                    maiorValor = i;                    
                }
                return maiorValor;
            }
        }
    }
    else{
        for(i=f2;i>=0;i--){
            if(f1%i==0 && f2%i==0){
                if(i>maiorValor){
                    maiorValor = i;
                }
                return maiorValor;
            }
        }
    }
    
}

int main(void){
    int N, F1, F2, resp, i;
        scanf("%d",&N); 
    while(N>1&&N<3000){
        for(i=0;i<N;i++){
            scanf("%d %d",&F1,&F2);
            resp = calculoMDC(F1,F2);
            printf("%d\n",resp);
        }
        break;
    }

    return 0;
}