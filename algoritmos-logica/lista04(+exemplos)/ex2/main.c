#include <stdio.h>
// tabuadas de 1 a 10
int main(void) {

    for (int i=1; i <=10; i++){
        printf("TABUADA DO %d \n", i);
        printf("============== \n");
        for(int j=1; j<=10; j++){
            printf("[%3d X %3d = %3d] \n", i, j, i*j);
        }
        printf("\n");
    }
    return 0;
}
