#include <stdio.h>

int main (void){
    int x,y;

    printf("Digite dois numeros");
    scanf("%d%d", &x, &y);

    printf("Resultado: %s \n", (x>y) ? 1 : 0;

}

//erro na compilação por causa do %s e da falta de parenteses no final;