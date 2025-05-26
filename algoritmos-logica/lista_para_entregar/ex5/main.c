#include <stdio.h>

int main(void) {
    int num, digito;
    int soma =0;

    scanf("%d", &num);

    while (num < 0 || num > 1000000) {
        printf("Número inválido! Digite um número entre 1 e 1000000:");
        scanf("%d", &num);
    }

    do{
       digito = num % 10;
       soma += digito;
       num = num / 10;
    } while (num != 0);

    printf("%d", soma);
    return 0;
}
