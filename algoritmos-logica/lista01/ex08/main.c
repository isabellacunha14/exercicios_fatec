#include <stdio.h>

//Cálculo do tempo de viagem

int main(void) {
    float distancia, velocidade, tempo;

    printf("Digite a distancia percorrida: ");
    scanf("%f", &distancia);

    printf("Digite a velocidade percorrida: ");
    scanf("%f", &velocidade);

    tempo = distancia / velocidade;
    printf("Tempo de distancia: %.2f\n", tempo);

    return 0;
}