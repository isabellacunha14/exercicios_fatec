#include <stdio.h>
//Cálculo do valor final de um produto com desconto

int main(void) {
    double valor, desconto, valorFinal;

    printf("Digite o valor: ");
    scanf("%lf", &valor);

    printf("Digite o desconto: ");
    scanf("%lf", &desconto);

    valorFinal = valor - (valor * (desconto/100));

    printf("O valor total eh: %.2f", valorFinal);

    return 0;
}