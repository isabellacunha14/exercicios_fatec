#include <stdio.h>

int main(void) {
    int num;
    double fatorialI, fatorialJ,fatorialIJ, coeficiente;

    printf("Digite um numero: ");
    scanf("%d", &num);

        for(int i = 0; i <= num; i++) {
            for(int j = 0; j <= i; j++) {
                fatorialI = 1;
                fatorialJ = 1;
                fatorialIJ = 1;
                for(int k = 1; k <= i; k++) { //fatorial de i
                    fatorialI *= k;
                }

                for (int l= 1; l <= j; l++) {//fatorial de j
                    fatorialJ *= l;
                }

                for (int m = 1; m <= (i-j); m++) { //fatorail de i-j
                    fatorialIJ *= m;
                }

                coeficiente = fatorialI / (fatorialJ * fatorialIJ);
                printf("%.lf ", coeficiente);
            }
            printf("\n");
        }

    return 0;
}