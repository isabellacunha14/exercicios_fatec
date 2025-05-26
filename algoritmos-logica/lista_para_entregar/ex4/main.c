#include <stdio.h>

int main(void) {
    int num;
    int fatorial=1;

    scanf("%d", &num);

    while (num < 0 || num > 12) {
        printf("Número inválido! Digite um número entre 1 e 12:");
        scanf("%d", &num);
    }

    for(int i = 1; i<=num; i++){
        fatorial *=i;
    }

    printf("%d", fatorial);

    return 0;
}
