#include <stdio.h>

int main(void) {
    int n, digitos = 0, somapot = 0;

    printf("Digite um numero: ");
    scanf("%d", &n);


    for (int k = 1; k <= n; k++) {
        digitos = 0;
        somapot = 0;
        for (int i = k; i > 0; i = i/10) { // contar quantos digitos
            digitos++;
        }

        for (int i = k; i > 0; i = i/10) { // fazendo a potencia de cada algorismo
            int algorismo = i%10;
            int pot = 1;
            for (int j = 1; j <= digitos; j++) {
                pot *= algorismo;
            }
            somapot += pot;
        }
        if (somapot == k) {
            printf("%d ", k);
        }
    }

    return 0;
}
