#include <stdio.h>

int main(void) {
    int num1, num2, num3;

    printf("Digite o primeiro número: ");
    scanf("%d", &num1);

    printf("Digite o segundo número: ");
    scanf("%d", &num2);

    printf("Digite o terceiro número: ");
    scanf("%d", &num3);

    if (num1 < 0 || num2 < 0 || num3 < 0) {
        printf("Pelo menos um dos números é negativo.\n");
    } else {
        printf
