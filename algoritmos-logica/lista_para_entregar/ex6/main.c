#include <stdio.h>

int main(void) {
    int num;

    scanf("%d", &num);

    while (num < 0 || num > 1000) {
        printf("Número inválido! Digite um número entre 1 e 1000:");
        scanf("%d", &num);
    }

    for (int i = 2; i<=num/2; i++){
        if (num % i == 0){
            printf("NÃO");
            return 0;
        }
    }
    printf("SIM");
    return 0;
}
