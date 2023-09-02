/*
3.O enunciado é muito grande.
*/
#include <stdio.h>

int calculoHora(int h1, int m1, int h2, int m2){
    int tot1, tot2;
    h1 = h1*60;
    h2 = h2*60;
    tot1 = h1+m1;
    tot2 = h2+m2;
    if(tot1 > tot2){
        tot2 += 24*60;
        tot2 = tot2 - tot1;
    }
    else{
    tot2 = tot2 - tot1;        
    }

    return tot2;
}

int verificaHora(int h1, int m1, int h2, int m2){
        if(h1 > 23 || h1 < 0 || m1 > 59 || m1 < 0 || h2 > 23 || h2 < 0 || m2 > 59 || m2 < 0){
            return 0;
        }
        return 1;
}

int main(void){
    int H1,M1,H2,M2, total;

    scanf("%d %d %d %d",&H1,&M1,&H2,&M2);
    while(H1!=0 || H2!=0 || M1!=0 || M2!=0){    

        if(!verificaHora(H1, M1, H2, M2)){
            printf("Hora inválida!\n");
        }
        total = calculoHora(H1, M1, H2, M2);
        printf("%d\n",total);
        scanf("%d %d %d %d",&H1,&M1,&H2,&M2);       
    }

    return 0;
}