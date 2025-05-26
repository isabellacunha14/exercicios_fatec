#include <stdio.h>

int main(void) {
    int num;
    int soma = 0;


    do {

        printf("Digite um numero:\n");
        scanf("%d", &num);

        if(num < (-1000) || num > 1000){
            printf("Valor invalido\n");
        } else {
            soma += num;
        }
    }while (num !=0);

    printf("%d", soma);
    return 0;
}
