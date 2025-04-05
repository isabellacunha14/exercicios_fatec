#include <stdio.h>

int main (){
    int num;

    printf("Digite um numero inteiro \n");
    scanf("%d", &num);

    if (num%2==0){
        printf("Numero eh par");
    } else {
        printf("Numero eh impar");
    }

    return 0;

}
