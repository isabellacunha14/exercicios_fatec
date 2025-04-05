#include <stdio.h>

int main(void) {
    int dia;

    printf("Digite um numero inteiro de 1 a 7: ");
    scanf("%d", &dia);

    switch (dia) {
        case 1:
            printf("O dia é Domingo, fim de semana\n");
        break;

        case 2:
            printf("O dia é segunda feira, dia util\n");
        break;

        case 3:
            printf("O dia é terca feira, dia util\n");
        break;

        case 4:
            printf("O dia eh quarta feira, dia util\n");
        break;

        case 5:
            printf("O dia eh quinta feira, dia util\n");

        break;

        case 6:
            printf("O dia eh sexta feira, dia util\n");
        break;

        case 7:
            printf("O dia eh Sabado, fim de semana\n");
        break;

        default:
            printf("Numero invalido");
        break;
    }
}