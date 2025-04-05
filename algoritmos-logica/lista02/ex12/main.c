#include <stdio.h>

int main(void) {
    int num;

do {
    printf("Digite um numero inteiro:");
    scanf("%d", &num);
    if (num <= 0) {
        printf("Valor inválido. Tente novamente.\n");
    }
} while (num <= 0);

return 0;
}