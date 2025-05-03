#include <stdio.h>

int main(void) {
    int num;

    printf("Digite um numero: ");
    scanf("%d", &num);

    for (int i = 1; i <= num; i++) {
        printf("*");
    }
    return 0;
}