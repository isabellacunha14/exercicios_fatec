#include <stdio.h>

int main (){
    float p1,p2, media;

    printf("Digite as notas: \n");
    scanf("%f%f", &p1, &p2);

    media = (p1+p2)/2;

    if (media < 3){
        printf ("Reprovado");
    } else if (media <7){
        printf("Exame");
    } else if(media <10){
        printf("Aprovado");
    }else{
        printf("Aprovado com distincao");
    }
    return 0;
}
