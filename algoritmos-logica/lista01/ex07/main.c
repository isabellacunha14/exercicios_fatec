#include <stdio.h>

// Conversão de temperatura (Celsius para Fahrenheit)

int main(void) {
    float celsius, fahrenheit;

    printf("Digite a temperatura em Celsius: ");
    scanf("%f", &celsius);

    fahrenheit = (celsius * 1.8) + 32;

    printf("Sua temperatura em Fahrenheit eh: %f", fahrenheit);

    return 0;
}