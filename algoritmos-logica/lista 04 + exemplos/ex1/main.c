#include <stdio.h>
// contagem de 10 a 1
int main(void) {
    for(int i =10; i>0; i--){

        for (int j=0; j<600000000; j++){ // numero grande para ter um tempo de espera
        }
        printf("%d \n", i);
    }
    printf("FOGO!!! \n");
    return 0;
}
