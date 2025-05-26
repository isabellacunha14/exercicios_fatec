#include <stdio.h>

int main(void) {
    int x, y, pow=1;

    scanf("%d %d", &x, &y);

    if (x < 0 || x >20 || y < 0 || y > 10) {
        printf("Numero invalido\n");
    }

    for (int i = 1; i <= y; i++) {
        pow *= x;
    }

    printf("%d\n", pow);
    return 0;
}