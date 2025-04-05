#include <stdio.h>

int main(void) {
    int opcao;
    float saldo = 0.0, valor;

    do {
        printf("\n----- MENU -----\n");
        printf("1 - Depositar\n");
        printf("2 - Sacar\n");
        printf("3 - Consultar saldo\n");
        printf("4 - Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                printf("Digite o valor para depositar: ");
            scanf("%f", &valor);
            if (valor > 0) {
                saldo += valor;
                printf("Deposito realizado com sucesso!\n");
            } else {
                printf("Valor invalido para deposito.\n");
            }
            break;
            case 2:
                printf("Digite o valor para sacar: ");
            scanf("%f", &valor);
            if (valor > 0 && valor <= saldo) {
                saldo -= valor;
                printf("Saque realizado com sucesso!\n");
            } else {
                printf("Saque invalido. Verifique o valor ou saldo insuficiente.\n");
            }
            break;
            case 3:
                printf("Saldo atual: R$ %.2f\n", saldo);
            break;
            case 4:
                printf("Saindo do programa...\n");
            break;
            default:
                printf("Opcao invalida. Tente novamente.\n");
        }
    } while (opcao != 4);

    return 0;
}
