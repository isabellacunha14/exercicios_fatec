#include <stdio.h>
// calculo da media de tres numeros inteiros

int main(void) {
    int a,b,c;
    float media; // a media pode nao ser um numero inteiro

    printf("Digite tres numeros inteiros:");
    scanf("%d %d %d",&a,&b,&c);

    media = (a+b+c)/3;

    printf("Media = %.2f",media);
}