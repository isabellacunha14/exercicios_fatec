#include <stdio.h>

int main(void) {
    int n, digitos = 0, soma = 0;

    printf("Digite um numero: ");
    scanf("%d", &n);

    for (int i = n; i > 0; i = i/10) { // contar quantos digitos
        digitos++;
    }

    for (int i = n; i > 0; i = i/10) { // contar quantos digitos
        int algorismo = i%10;
        int pot = 1;
        for (int j = 1; j <= digitos; j++) {
            pot *= algorismo;
        }
        soma += pot;
    }

    if (soma == n) {
        printf("SIM\n");
    } else {
        printf("NAO\n");
    }
    return 0;
}
