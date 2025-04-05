#include <stdio.h>

int main(void) {
    float valor, valorFinal, parcela;
    int opcao;

    printf("Digite o valor da etiqueta: \n");
    scanf("%f", &valor);

    printf("===== MENU PRINCIPAL =====\n");
    printf("1. A vista em dinheiro ou cheque, com 10%% de desconto\n");
    printf("2. A vista com cartao de credito, com 5%% de desconto\n");
    printf("3. Em 2 vezes, preco normal (sem juros)\n");
    printf("4. Em 3 vezes, preco de etiqueta com acrescimo de 10%%\n");
    printf("==========================\n");
    printf("Escolha uma opcao de pagamento: ");
    scanf("%d", &opcao);

    switch (opcao) {
        case 1:
            valorFinal = valor*0.9;
        printf("O valor Final eh de: R$ %.2", valorFinal);
        break;

        case 2:
            valorFinal = valor*0.95;
        printf("O valor Final eh de: R$ %.2f", valorFinal);
        break;

        case 3:
            valorFinal = valor;
        parcela = valor/2;
        printf("O valor Final eh de: R$ %.2f, em duas parcelas de R$ %.2f",valorFinal, parcela);
        break;

        case 4:
            valorFinal = valor*1.05;
        parcela = valorFinal/3;
        printf("O valor Final eh de: R$ %.2f, em tres parcelas de R$ %.2f",valorFinal, parcela);
        break;

        default:
            printf("Opcao invalida");
        break;

        return 0;
    }
}