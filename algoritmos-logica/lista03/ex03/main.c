#include <stdio.h>

int main (){
    int a,b,c, maior;

    printf("Digite tres numeros inteiros:");
    scanf("%d%d%d", &a,&b,&c);

    maior=a;

    if(maior>b && maior>c){
        printf("O numero %d eh o maior", a );
    }else {
        maior =b;
        if (maior > c){
            printf("O numero %d eh o maior", b );
        } else
            printf("O numero %d eh o maior", c );
    }
    return 0;
}
