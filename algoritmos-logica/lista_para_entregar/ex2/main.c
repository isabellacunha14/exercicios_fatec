#include <stdio.h>

int main(void) {
    int cont = 0;
    int quant;
    int num;

    scanf("%d", &quant);

    while (quant < 1 || quant > 100) {
        printf("Número inválido! Digite um número entre 1 e 100: ");
        scanf("%d", &quant);
    }

    for(int i=1; i<=quant; i++){
        scanf("%d", &num);
        while (num < -1000 || num > 1000) {
            printf("Número inválido! Digite um número entre -1000 e 1000:");
            scanf("%d", &num);
        }
        if (num % 2 == 0){
            cont++;
        }
    }

    printf("%d", cont);
    return 0;
}
