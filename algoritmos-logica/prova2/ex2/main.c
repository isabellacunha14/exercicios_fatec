#include <stdio.h>

int main(void) {
    int n, pot = 1;

    do{
        scanf("%d", &n);
    }while(n<1 || n > 1000000);

    while (pot < n){
        pot = pot* 2;
    }

    if (pot == n){
        printf("SIM");
    } else {
        printf("NAO");
    }

    return 0;
}
