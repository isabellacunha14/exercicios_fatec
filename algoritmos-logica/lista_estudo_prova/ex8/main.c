#include <stdio.h>

int main(void) {
    int numero;

    do {
        scanf("%d", &numero);

        if (numero < 0 || numero > 10000) {
            printf("Numero invalido\n");
        }
    }while (numero < 0 || numero > 10000);

    for (int i = 1; i <= numero; i++) {
        if (numero % i == 0) {
            printf("%d ", i);
        }
    }
}