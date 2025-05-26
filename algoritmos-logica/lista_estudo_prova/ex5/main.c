#include <stdio.h>

int main() {
    int N;
    int digito;

    do {
        scanf("%d", &N);

        if (N < 0 || N > 1000000) {
            printf("Número inválido. Tente novamente.\n");
        }
    } while (N < 0 || N > 1000000);

    while (N > 0) {
        digito = N % 10;
        printf("%d", digito);
        N = N / 10;

    }
    printf("\n");
    return 0;

}
