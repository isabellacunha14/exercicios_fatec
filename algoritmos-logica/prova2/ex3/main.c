#include <stdio.h>

int main(void) {
    float l,x, soma=0, media = 0, cont =0;

    do{
        scanf("%f", &l);
    }while (l<1 || l >100);

    for(int i = 1; i <= l; i++){
        do{
            scanf("%f", &x);
        }while (x<-1000 || x > 1000);

        if( x > 0){
            soma += x;
            cont ++;
        }
    }

    if(soma == 0){
        printf("0.00");
        return 0;
    }

    media = soma / cont;

    printf("%.2f", media);


    return 0;
}
