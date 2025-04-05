#include <stdio.h>

int main (){
    float p1, p2, media;

    printf("Digite as notas:\n");
    scanf("%f%f", &p1, &p2);

    media=(p1+p2)/2;

    if(media >=7.0){
        printf("Aprovado \n");
    } else
        printf("Reprovado \n");

    printf("A nota final eh: %.2f", media);


    return 0;
}
