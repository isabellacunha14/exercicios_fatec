#include <stdio.h>

int main(void) {
    int idade;

    printf("Digite sua idade: ");
    scanf("%d", &idade);

    if (idade >= 16) {
        printf("Você pode votar.\n");
    } else {
        printf("Você ainda não pode votar.\n");
    }

    return 0;
}
