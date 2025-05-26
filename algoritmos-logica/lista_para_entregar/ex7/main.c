#include <stdio.h>

int main(void) {
    int N;
    int a=0, b=1, proximo=0;

    scanf("%d", &N);

    while (N < 0 || N > 20) {
        printf("Número inválido! Digite um número entre 1 e 1000:");
        scanf("%d", &N);
    }

    for (int i = 1; i <N; i++){
        proximo = a + b;
        a = b;
        b = proximo;
    }

    printf("%d", proximo);
    return 0;
}
