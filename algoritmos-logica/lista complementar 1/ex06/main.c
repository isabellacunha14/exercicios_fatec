#include <stdio.h>

int main(void) {
    int num, soma;

    printf("Digite um numero inteiro: \n");
    scanf("%d", &num);

    for (int i = 1; i < num; i++) {
        if (num % i == 0) {
            soma += i;
        }
    }

    printf("Soma = %d\n", soma);

    return 0;
}