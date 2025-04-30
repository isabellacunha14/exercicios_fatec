#include <stdio.h>

int main(void) {
    int num;
    double nota, media, soma;

    printf("Digite quantas notas deseja adicionar: ");
    scanf("%d", &num);

    for (int i = 1; i <= num; i++) {
        printf("Digite a nota %d: ", i);
        scanf("%lf", &nota);
        soma += nota;
    }

    media = soma / num;

    printf("A media dos alunos eh: %.2lf", media);
    return 0;
}