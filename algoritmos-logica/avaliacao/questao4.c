#include <stdio.h>

int main(){
    int faixa;

    printf("Digite a faixa de 1 a 5 \n");
    scanf("%d", &faixa);

    switch (faixa) {
        case 1:
            printf("Crianca");
            break;

        case 2:
            printf("Adolescente");
            break;

        case 3:
            printf("Jovem");
            break;

        case 4:
            printf("Adulto");
            break;

        case 5:
            printf("Idoso");

        default:
            printf("Opcao invalida");

    }

}