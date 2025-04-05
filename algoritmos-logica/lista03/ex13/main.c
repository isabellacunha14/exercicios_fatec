#include <stdio.h>
#include <ctype.h>  // Para usar a função isalpha()

int main() {
    char caractere;

    // Leitura do caractere
    printf("Digite um caractere: ");
    scanf("%c", &caractere);

    if (caractere) {
        if (caractere == 'a' || caractere == 'e' || caractere == 'i' || caractere == 'o' || caractere == 'u') {
            printf("O caractere '%c' eh uma vogal.\n", caractere);
        } else {
            printf("O caractere '%c' eh uma consoante.\n", caractere);
        }
    } else {
        printf("O caractere '%c' não eh uma letra. Caractere invalido.\n", caractere);
    }

    return 0;
}
