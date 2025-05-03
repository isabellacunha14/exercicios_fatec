#include <stdio.h>
// receba a idade de 5 pessoas, usando o comando for,
//e calcule e exiba a média das idades

int main(void) {
    int idade, soma=0;
    float media;

    for (int i = 1; i<=5; i++){
        printf("Digite a %d. idade \n", i);
        scanf("%d", &idade);

        soma += idade;
    }

    media = soma/ 5;

    printf("A media das idades eh %2.f", media);
    return 0;
}
