#include <stdio.h>

int main(void) {
    int num;

    printf("Digite um numero: ");
    scanf("%d", &num);

    for (int i = 1; i <= num; i++) {
        for (int j = 1; j <= 10; j++) {
            printf("%d x %d = %d\n", i, j, i*j);
        }
        printf("**********\n");
    }
    return 0;
}