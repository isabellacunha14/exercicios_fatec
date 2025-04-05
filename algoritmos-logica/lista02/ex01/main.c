#include <stdio.h>

int main(void) {
    int num1, num2;

    printf("Digite o primeiro número: ");
    scanf("%d", &num1);

    printf("Digite o segundo número: ");
    scanf("%d", &num2);

    printf("\nResultados das operações:\n");
    printf("Soma: %d + %d = %d\n", num1, num2, num1 + num2);
    printf("Subtração: %d - %d = %d\n", num1, num2, num1 - num2);
    printf("Multiplicação: %d * %d = %d\n", num1, num2, num1 * num2);

    if (num2 != 0) {
        printf("Divisão: %d / %d = %.2f\n", num1, num2, (float)num1 / num2);
        printf("Resto da divisão: %d %% %d = %d\n", num1, num2, num1 % num2);
    } else {
        printf("Divisão e resto: impossível dividir por zero!\n");
    }

    return 0;
}
