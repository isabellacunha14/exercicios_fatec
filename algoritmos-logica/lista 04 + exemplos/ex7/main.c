#include <stdio.h>
//programa que utilize o comando for para calcular e exibir a soma
//de todos os números pares entre 1 e 50.

int main(void) {
    int soma;

    for(int i = 1; i<=50; i++){
        if (i % 2 ==0){
            soma +=i;
        }
    }
    printf("Soma dos numeros pares de 1 a 50 eh: %d", soma);
    return 0;
}
// for (int i = 2; i <=50; i+=2){
//      soma += i;
//     }