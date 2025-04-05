#include <stdio.h>

int main(void) {
    double nota;
    int faltas;

    printf("Digite a média do aluno: ");
    scanf("%lf", &nota);

    printf("Digite numero de faltas do aluno: ");
    scanf("%d", &faltas);

    if (faltas <25 && nota >= 7) {
        printf("Aluno aprovado");
    } else if (faltas >= 25) {
        printf("Aluno reprovado por faltas");
    } else if (nota <7) {
        printf("Aluno reprovado por nota");
    }
    return 0;
}