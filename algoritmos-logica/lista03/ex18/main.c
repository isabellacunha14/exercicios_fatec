#include <stdio.h>

int main(void) {
    int a, b, c, temp;

    printf("Digite três números inteiros:\n");
    scanf("%d %d %d", &a, &b, &c);

    // Coloca o menor em 'a'
    if (a > b) {
        temp = a;
        a = b;
        b = temp;
    }
    if (a > c) {
        temp = a;
        a = c;
        c = temp;
    }

    // Agora garante que b <= c
    if (b > c) {
        temp = b;
        b = c;
        c = temp;
    }

    printf("Números em ordem crescente: %d %d %d\n", a, b, c);

    return 0;
}
