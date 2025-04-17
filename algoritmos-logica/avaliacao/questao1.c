#include <stdio.h>

int main(void) {
    double celsius;

    printf("Digite a temperatura em Celsius");
    scanf("%lf", &celsius);

    if (celsius<0.0){
        printf("Muito Frio \n");
    } else if (celsius <= 18.0) {
        printf("Frio \n");
    } else if (celsius <=30.0) {
        printf("Temperatura Agradavel \n");
    } else {
        printf("Calor Intenso \n");
    }
}
