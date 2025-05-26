#include <stdio.h>

int main(void) {
    int num, digito;
    int soma_par = 0 , soma_impar=0, soma_total=0;

    do {
        scanf("%d", &num);

        if (num < 0 || num > 1000000) {
            printf("Numero invalido\n");
        }
    } while (num < 0 || num > 1000000);

    while (num > 0) {
        digito = num % 10;

        if (digito % 2 == 0) {
            soma_par += digito;
        } else {
            soma_impar += digito;
        }
        num = num / 10;
    }
    soma_total = soma_par - soma_impar;

    printf("%d", soma_total);

}