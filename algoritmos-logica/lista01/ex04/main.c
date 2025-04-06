#include <stdio.h>
// Conversão de metros para centímetros

int main(void) {
    int metros, cem;

    printf("Insira a quantidade de metros: ");
    scanf("%d", &metros);

    cem = metros * 100;

    printf("O valor de centimetros eh: %d", cem);

    return 0;
}