#include <stdio.h>

int main(void) {
    int a,b;
    int maior, menor, sub;

    scanf("%d", &a);
    scanf("%d", &b);

    if (a>b){
        maior = a;
        menor = b;
    } else {
        maior = b;
        menor = a;
    }

    sub = maior - menor;

    while (sub!=0){
        if(menor > sub){
        maior = menor;
        menor = sub;
    } else {
        maior = sub;
        }
        sub = maior - menor;
    }

    printf("%d", maior);
    return 0;
}
