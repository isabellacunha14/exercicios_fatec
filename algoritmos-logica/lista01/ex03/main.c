
#include <stdio.h>
//calculo do dobro e triplo de um numero

int main(void) {
   int num, dobro, triplo;

   printf("Digite um numero: ");
   scanf("%d", &num);

   dobro = num *2;
   triplo = num *3;

   printf("O dobro digitado eh %d", dobro);
   printf("O triplo digitado eh %d", triplo);
}