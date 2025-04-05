#include <stdio.h>


int main(void) {
    double salario, imposto;

    scanf("%lf", &salario);

    if (salario <=2112) {
        printf("Isento do imposto de renda");
    } else if (salario <=2826.65) {
        imposto = salario*0.075;
        printf("O imposto de renda retido na fonte é de %.2lf", imposto);
    } else if (salario <=3751.05) {
        imposto = salario*0.15;
        printf("O imposto de renda retido na fonte é de %.2lf", imposto);
    } else if (salario > 3751.05) {
        imposto = salario*0.225;
        printf("O imposto de renda retido na fonte é de %.2lf", imposto);
    }
    return 0;
}