#include <stdio.h>

int main (){
    double salario, bonus;
    int tempo;

    printf("Informe seu salario \n");
    scanf("%lf", &salario);

    printf("Informe o seu tempo de trabalho na empresa (em anos)\n");
    scanf("%d", &tempo);

    if (tempo >= 5){
        bonus = salario * 0.2;
    } else {
        bonus = salario * 0.1;
    }

    printf("Seu bonus eh %.2lf \n", bonus);

    return 0;
}
