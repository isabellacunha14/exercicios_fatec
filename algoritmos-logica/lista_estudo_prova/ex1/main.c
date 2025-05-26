#include <stdio.h>

int main(void) {
    float nota, soma = 0, media=0;
    int cont=0;

    scanf("%f", &nota);

    if (nota <-100 || nota > 100) {
        printf("Insira um numero valida\n");
    }

     while (nota != -1){
        if (nota > 0) {
            soma = soma + nota;
            cont++;
        }
        scanf("%f", &nota);
         media = soma / cont;
    }



    printf("Media = %.2f\n", media);

}