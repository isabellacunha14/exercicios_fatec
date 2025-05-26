#include <stdio.h>

int main(void) {
    int num, primo;
    int soma=0;

    scanf("%d", &num);

    while (num < 1|| num > 100) {
        printf("Número inválido! Digite um número entre 1 e 100: ");
        scanf("%d", &num);
    }

    for (int i = 2; i <= num; i++) {
       primo = 1; // Assume que é primo para comparar;

        for (int j = 2; j <= i / 2; j++) {
            if (i % j == 0) {
                primo = 0; // Não é primo
                break;     //sai do for
            }
        }

        if (primo) {
            soma += i;
        }
    }

    printf("Soma dos primos até %d: %d\n", num, soma);
    return 0;
}

