#include <stdio.h>

int main(void) {
    int num;
 
    scanf("%d", &num);

    for (int i = num; i >= 1; i--) {
        if (i % 2 == 0) {
            printf("%d \n", i);
        }
    }
    return 0;
}