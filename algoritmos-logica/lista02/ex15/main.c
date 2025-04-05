#include <stdio.h>

int main(void) {
    int n, i;
    int ehPrimo = 1; // Assume que é primo até provar o contrário

    printf("Digite um número inteiro maior que 1: ");
    scanf("%d", &n);

    if (n <= 1) {
        printf("Números menores ou iguais a 1 não são primos.\n");
        return 0;
    }

    for (i = 2; i < n; i++) {
        if (n % i == 0) {
            ehPrimo = 0;
            break; // Encontrou um divisor, não precisa continuar
        }
    }

    if (ehPrimo) {
        printf("%d é um número primo.\n", n);
    } else {
        printf("%d não é um número primo.\n", n);
    }

    return 0;
}
