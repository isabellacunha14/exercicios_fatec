#include <stdio.h>
// tabuada de um numero, dado pelo usuario;

int main(void) {
    int num;

    printf("Digite o valor desejado \n");
    scanf("%d", &num);

    for(int i =1; i <=10; i++){
        printf("[%3d x %3d = %3d] \n",num, i, num*i);
    }
    return 0;
}
