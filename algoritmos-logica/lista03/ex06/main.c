#include <stdio.h>

int main (){
    int cod;

    printf("Digite o codigo do produto \n");
    scanf("%d", &cod);

    if (cod == 1){
        printf("Alimento nao perecivel");
    } else if ( cod == 2 || cod == 3 || cod == 4){
        printf("Alimento perecivel");
    } else if (cod == 5 || cod == 6){
        printf("Vestuario");
    } else if (cod == 7){
        printf("Higiene Pessoal");
    } else if (cod == 8 || cod == 9 || cod == 10){
        printf("Utensilios domesticos");
    } else {
        printf("Codigo invalido");
    }

    return 0;
}
