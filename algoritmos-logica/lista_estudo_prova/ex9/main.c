#include <stdio.h>

int main() {
    int A, B;
    int a_original, b_original;

    // Leitura dos dois números
    scanf("%d %d", &A, &B);

    // Guardar os valores originais para o cálculo do MMC depois
    a_original = A;
    b_original = B;

    // Algoritmo de Euclides para calcular o MDC
    while (B != 0) {
        int resto = A % B;
        A = B;
        B = resto;
    }

    // Agora A contém o MDC
    int mdc = A;

    // Calcula o MMC com a fórmula MMC = (a * b) / MDC
    int mmc = (a_original * b_original) / mdc;

    // Imprime o resultado
    printf("%d\n", mmc);

    return 0;
}
