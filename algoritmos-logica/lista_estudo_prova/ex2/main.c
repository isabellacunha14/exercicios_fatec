#include <stdio.h>

int main(void) {
    int numero;
    int cont=0;

    scanf("%d",&numero);

    if (numero < 0 || numero > 1000000){
      printf("Numero invalido");
    }

     do {
       numero = numero / 10;
       cont++;
       } while (numero != 0);

       printf("Quantidade de numeros entidos: %d", cont);
}