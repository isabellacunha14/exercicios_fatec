#include <stdio.h>

int main() {
    float altura, peso_ideal;
    char sexo;

    printf("Digite a altura (em metros): ");
    scanf("%f", &altura);

    printf("Digite o sexo (M para masculino, F para feminino): ");
    scanf(" %c", &sexo);


    if (sexo == 'M' || sexo == 'm') {
        peso_ideal = (72.7 * altura) - 58;
        printf("O peso ideal para um homem de %.2f metros é: %.2f kg\n", altura, peso_ideal);
    } else if (sexo == 'F' || sexo == 'f') {
        peso_ideal = (62.1 * altura) - 44.7;
        printf("O peso ideal para uma mulher de %.2f metros é: %.2f kg\n", altura, peso_ideal);
    } else {
        printf("Sexo inválido! Por favor, insira 'M' para masculino ou 'F' para feminino.\n");
    }

    return 0;
}
