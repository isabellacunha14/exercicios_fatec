
#include <stdio.h>

int main(void) {
    int a,b,c;

    printf("Digite os lados do triangulo:\n");
    scanf("%d%d%d", &a, &b, &c);

    if (a + b > c && a + c > b && b + c > a) {
        printf( "O triangulo eh valido \n");

        if (a == b && b == c) {
            printf("O triangulo eh Equilátero.\n");
        } else if (a == b || a == c || b == c) {
            printf("O triangulo eh Isósceles.\n");
        } else {
            printf("O triangulo eh Escaleno.\n");
        }
    } else
        printf("O triangulo nao eh valido.\n");

    return 0;
}