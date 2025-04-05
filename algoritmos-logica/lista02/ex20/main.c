#include <stdio.h>

int main(void) {
    int numero, somaPares = 0, qtdPares = 0;

    for (int i = 1; i <= 10; i++) {
        printf("Digite o %dº número: ", i);
        scanf("%d", &numero);

        if (numero % 2 == 0) {
            somaPares += numero;
            qtdPares++;
        }
    }

    if (qtdPares > 0) {
        float media = (float)somaPares / qtdPares;
        printf("Média dos números pares: %.2f\n", media);
    } else {
        printf("Nenhum número par foi digitado.\n");
    }

    return 0;
}
