#include <stdio.h>
#include <math.h>  // Para usar pow()

int main(void) {
    float raio, area;
    const float PI = 3.14159;

    printf("Digite o raio do círculo: ");
    scanf("%f", &raio);

    area = PI * pow(raio, 2);

    printf("A área do círculo é: %.2f\n", area);

    return 0;
}
