#include <stdio.h>

int main(void) {
    float preco;

    printf("Digite o valor unitario da fruta");
    scanf("%f", &preco);

    for(int i=1; i<=10; i++){
        printf("O preco de %d frutas eh %.2f \n", i, preco*i);
    }
    return 0;
}
