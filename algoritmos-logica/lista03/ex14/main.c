#include <stdio.h>

int main() {
    int mes;

    printf("Digite o numero do mes (1 a 12): ");
    scanf("%d", &mes);


    switch (mes) {
        case 1:
            printf("Janeiro - Verao\n");
        break;
        case 2:
            printf("Fevereiro - Verao\n");
        break;
        case 3:
            printf("Marco - Outono\n");
        break;
        case 4:
            printf("Abril - Outono\n");
        break;
        case 5:
            printf("Maio - Outono\n");
        break;
        case 6:
            printf("Junho - Inverno\n");
        break;
        case 7:
            printf("Julho - Inverno\n");
        break;
        case 8:
            printf("Agosto - Inverno\n");
        break;
        case 9:
            printf("Setembro - Primavera\n");
        break;
        case 10:
            printf("Outubro - Primavera\n");
        break;
        case 11:
            printf("Novembro - Primavera\n");
        break;
        case 12:
            printf("Dezembro - Verao\n");
        break;
        default:
            printf("Mes invalido! Digite um numero entre 1 e 12.\n");
                break;
    }

    return 0;
}
