#include <stdio.h>

int main(void) {
    int A, R, N;

    // Lê todos os valores em uma única linha
    scanf("%d %d %d", &A, &R, &N);

    // Validação dos dados de entrada
    if (A < -100 || A > 100 || R < -100 || R > 100 || N < 1 || N > 100) {
        printf("Digite um valor valido\n");
        return 0;
    }

    // Impressão dos termos da PA
    for (int i = 0; i < N; i++) {
        printf("%d", A + i * R);
        if (i < N - 1) {
            printf(" ");
        }
    }

    printf("\n");
    return 0;
}
