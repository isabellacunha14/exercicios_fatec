#include <stdio.h>

int main (){
    int cod;

    printf("Digite o codigo do produto \n");
    scanf("%d", &cod);

    switch(cod){
        case 1:
            printf("Alimento nao perecivel");
        break;
        case 2:
        case 3:
        case 4:
            printf("Alimento perecivel");
        break;
        case 5:
        case 6:
            printf("Vestuario");
        break;
        case 7:
            printf("Higiene pessoal");
        break;
        case 8:
        case 9:
        case 10:
            printf("Utensilios domesticos");
        break;
        default:
            printf("codigo invalido");

    }
    return 0;
}
