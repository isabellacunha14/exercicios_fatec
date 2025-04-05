#include <stdio.h>

int main() {
    int ano;

    // Solicita ao usuário que insira um ano
    printf("Digite um ano: ");
    scanf("%d", &ano);

    // Verifica se o ano é bissexto
    // A primeira coisa é trabalhar com o que pode ser bisexto, toda vez que for modulo de 4, pode ser.
        if (ano % 4 == 0) { // Se o ano for divisível por 4
            if (ano % 100 == 0) { // Se o ano for divisível por 100 - (Pode ou não ser. Depende se for modulo de 400, será)
                if (ano % 400 == 0) { // Se o ano for divisível por 400
                    printf("%d é um ano bissexto.\n", ano); // É bissexto porque é divisível por 400
                } else {
                    printf("%d não é um ano bissexto.\n", ano); // Não é bissexto porque é divisível por 100, mas não por 400
                }
            } else {
                printf("%d é um ano bissexto.\n", ano); // É bissexto porque é divisível por 4, mas não por 100
            }
        } else {
            printf("%d não é um ano bissexto.\n", ano); // Não é bissexto porque não é divisível por 4
        }

    return 0;
}