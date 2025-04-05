#include <stdio.h>

int main(void) {
    int numero;

    printf("Digite um número: ");
    scanf("%d", &numero);

    if (numero >= 10 && numero <= 50) {
        printf("O número está no intervalo entre 10 e 50.\n");
    } else {
        printf("O número está fora do intervalo entre 10 e 50.\n");
    }

    return 0;
}
