#include <stdio.h>

int main (){
    float p1,p2, p3, media, exame, mediafinal;

    printf("Digite as notas: \n");
    scanf("%f%f%f", &p1, &p2, &p3);

    media = (p1+p2+p3)/3;

    if (media < 3){
        printf ("Reprovado sem direito a exame \n");
    } else if (media <7){
        printf("Voce esta de Exame \n");
        scanf("%f", &exame);
        mediafinal = (media+exame)/2;
        if (mediafinal >= 5){
            printf("Aprovado no exame");
        } else {
            printf("Reprovado no exame");
        }
    } else {
        printf("Aprovado");

    }
    return 0;
}