#include <stdio.h>
// soma de dois numeros

int main(void) {
    int a, b, soma;

    printf("Digite dois numeros inteiros: \n");
    scanf("%d %d", &a, &b);

    soma = a + b;

    printf("Soma = %d\n", soma);
}