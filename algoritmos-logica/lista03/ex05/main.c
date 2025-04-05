#include <stdio.h>

int main (){
    double valorEmp, salario, parc;
    int nparc;

    printf("Informe o seu salario \n");
    scanf("%lf", &salario);

    printf("Informe o valor do emprestimo \n");
    scanf ("%lf", &valorEmp);

    printf ("Informe o numero de parcelas \n");
    scanf("%d", &nparc);

    parc = valorEmp / nparc;

    if(parc <= salario*0.3){
        printf("Emprestimo concedido \n");
    } else
        printf("Emprestimo nao concedido \n");


    return 0;
}
