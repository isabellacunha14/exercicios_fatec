 #include <stdio.h>

int main(void) {
    int horas, meteoros, cont=0;


    printf("Digite a quantidade de horas: ");
    scanf("%d", &horas);

    for (int i = 1; i <= horas; i++) {
        printf("Quantos meteoros voce viu na hora %d: ", i);
        scanf("%d", &meteoros);
        cont += meteoros;

        printf("Hora %d: ", i);
        for (int j = 1; j <= meteoros; j++) {
            printf("*");

        }
        printf(" (%d meteoros)", meteoros);
        printf("\n");

    }

    printf("Total de meteoros vistos em %d: %d", horas, cont);
    return 0;
}