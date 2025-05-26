#include <stdio.h>

int main(void) {
    int num;
    float soma = 0;

    do {
        scanf("%d", &num);
        if (num< 1 || num > 100) {
            printf("Numero invalido\n");
        }
    }while (num < 1 || num > 100);

    for (int i = 1; i <= num; i++) {
        soma += 1.0/i;
    }
    printf("%.4f\n", soma);
}