#include <stdio.h>

int main(void) {
    float valorDolar, cotacao, valorReal;

    printf("Digite o valor em dólares: ");
    scanf("%f", &valorDolar);

    printf("Digite a cotação do dólar (em reais): ");
    scanf("%f", &cotacao);

    valorReal = valorDolar * cotacao;

    printf("Valor em reais: R$ %.2f\n", valorReal);

    return 0;
}
