#include <stdio.h>

int main(){
    int idade;
    printf("Digite sua idade \n");
    scanf("%d", &idade);

    if(idade <16){
        printf("Não pode iniciar o processo");
    } else if (idade<=17){
        printf("Pode iniciar o processo com autorização dos pais");
    } else {
        printf("Pode iniciar o processo");
    }

    return 0;
}