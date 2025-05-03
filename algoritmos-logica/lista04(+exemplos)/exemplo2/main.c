#include <stdio.h>

//contagem de 1 a 100;

int main(void) {
    for(int i = 1; i<=100; i++){ // for(i=2;i<=100;i+=2)
        if (i%2 == 0) {
            printf("%d ", i);
        }
    }
    return 0;
}
