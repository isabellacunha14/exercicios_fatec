#include <stdio.h>

int main(void) {
    for (int i = 1; i <= 10; i++) {
        if (i == 5) {
            continue; // pula o número 5
        }
        printf("%d\n", i);
    }

    return 0;
}
