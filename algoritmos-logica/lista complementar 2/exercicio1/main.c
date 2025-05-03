#include <stdio.h>
// Máximo Divisor Comum (MDC) por busca decrescente

int main(void) {
    int a,b;
    int menor;

    printf("Digite dois numeros inteiros distintos: \n");
    scanf("%d %d", &a ,&b);
    if(a>b){
        menor=b;
    } else {
        menor=a;
    }

    for (int i=menor; i>=1; i--){
        if (a % i == 0 && b % i == 0 ){
            printf("MDC (%d,%d) = %d", a,b,i);
        }
    }

    return 0;

}