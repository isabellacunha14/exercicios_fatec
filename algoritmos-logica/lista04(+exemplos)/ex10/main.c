#include <stdio.h>
//Construa um programa que utilize a estrutura for para contar e exibir quantos
//números múltiplos de 3 existem entre 1 e 100.

int main(void) {
    int cont=0;

    for (int i=1; i<=100; i++){
        if (i % 3 == 0){
            cont++;
        }
    }
    printf("Ha %d numeros multiplos de 3 entre 1 a 100", cont);
    return 0;
}
