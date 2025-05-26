#include <stdio.h>

int main(void) {
    int num;
    int tri;

    scanf("%d",&num);

    while (num < 0 || num > 1000) {
        printf("Número inválido! Digite um número entre 1 e 1000:");
        scanf("%d", &num);
    }

    for (int i = 1; i <= num; i++) {
        tri = (i * (i+1))/2; // calcula o numero triangular
        if (tri >= num) { //verifica se o numero triangular é maior ou igual ao num
            break; // como é o menor numero triangular, então no primeiro caso já sai do for
        }
    }

    printf("%d", tri);
}
