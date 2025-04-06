#include <stdio.h>

//Divisão e resto da divisão

int main(void) {
    int num1, num2;
    int divisao,resto;

    printf("Digite o primeiro numero: ");
    scanf("%d", &num1);
    printf("Digite o segundo numero: ");
    scanf("%d", &num2);

    divisao = (num1 / num2);
    resto = (num1 % num2);

    printf("A divisao entre os dois numeros eh: %d\n", divisao);
    printf("O resto dos numeros eh: %d\n", resto);

    return 0;
}