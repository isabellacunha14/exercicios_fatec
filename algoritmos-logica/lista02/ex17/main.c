#include <stdio.h>

int main(void) {
    int N;
    int a = 0, b = 1, proximo;

    printf("Digite um número inteiro positivo: ");
    scanf("%d", &N);

    if (N <= 0) {
        printf("Por favor, digite um número maior que zero.\n");
        return 0;
    }

    printf("Os %d primeiros números da sequência de Fibonacci são:\n", N);

    for (int i = 1; i <= N; i++) {
        printf("%d ", a);
        proximo = a + b;
        a = b;
        b = proximo;
    }

    printf("\n");

    return 0;
}
