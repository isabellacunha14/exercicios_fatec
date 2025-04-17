#include <stdio.h>

int main(){
    int valor1, valor2;

    printf("Digite o valor 1 \n");
    scanf("%d", &valor1);

    printf("Digite o valor 2\n");
    scanf("%d", &valor2);

    if (valor1 == valor2){
        printf("Sao Iguais\n");
    } else {
        valor1 > valor2 ? printf("Valor 1 eh maior\n") : printf("Valor 2 eh maior\n");
    }
    valor1 == valor2 ? printf("são iguais") : valor1 > valor2 ? printf("Valor 1 eh maior") : printf("Valor 2 eh maior");
    return 0;
}