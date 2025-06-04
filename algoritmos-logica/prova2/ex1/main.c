#include <stdio.h>

int main(void) {
    int n, soma=0;

    do{
        scanf("%d", &n);
    }while(n<1 || n > 1000);

    for (int i = 1; i <=n; i++){
        soma+= i;
    }

    printf("%d", soma);

    return 0;
}
