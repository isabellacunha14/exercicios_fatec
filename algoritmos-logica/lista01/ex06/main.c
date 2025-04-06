#include <stdio.h>
// Soma e multiplicação de três números

int main(void) {
    int num1, num2, num3, soma, prod ;

    printf("Digite tres numeros: \n");
    scanf("%d %d %d", &num1, &num2, &num3);

    soma = num1 + num2 + num3;
    prod = num1 * num2 * num3;

    printf("Soma = %d\n", soma);
    printf("Prod= %d\n", prod);

    return 0;
}