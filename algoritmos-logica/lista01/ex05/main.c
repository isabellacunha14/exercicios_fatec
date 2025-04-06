#include <stdio.h>
//Cálculo do perímetro e área de um retângulo

int main(void) {
    float altura, largura;
    float perimetro, area;

    printf("Digite sua altura: ");
    scanf("%f", &altura);
    printf("Digite sua largura: ");
    scanf("%f", &largura);

    perimetro = 2*(altura+largura);
    area = altura*largura;

    printf("Perimetro: %.2f\n", perimetro);
    printf("Area: %.2f\n", area);

    return 0;
}