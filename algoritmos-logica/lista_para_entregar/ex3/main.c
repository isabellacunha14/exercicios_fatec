#include <stdio.h>

int main(void) {
    int num;

    scanf("%d", &num);
    while (num < 1 || num > 1000) {
        printf("Número inválido! Digite um número entre 1 e 1000:");
        scanf("%d", &num);
    }
    for(int i=1; i<=num; i++){
        if (i % 3 == 0){
            printf("%d ", i);
        }
    }
    return 0;
}
