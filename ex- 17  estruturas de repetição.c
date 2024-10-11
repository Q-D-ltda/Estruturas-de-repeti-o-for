#include <stdio.h>

int main() {
    int opcao;

    // Loop para manter o menu até que o usuário escolha sair (opção 5)
    do {
        // Exibe o menu principal
        printf("# MENU PRINCIPAL #\n");
        printf("[1] Inserir\n");
        printf("[2] Excluir\n");
        printf("[3] Consultar\n");
        printf("[4] Listar\n");
        printf("[5] Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);

        // Verifica qual opção foi escolhida e exibe a respectiva mensagem
        switch(opcao) {
            case 1:
                printf("Você escolheu: Inserir\n");
                break;
            case 2:
                printf("Você escolheu: Excluir\n");
                break;
            case 3:
                printf("Você escolheu: Consultar\n");
                break;
            case 4:
                printf("Você escolheu: Listar\n");
                break;
            case 5:
                printf("Encerrando o programa...\n");
                break;
            default:
                printf("Opção inválida! Tente novamente.\n");
        }

        printf("\n"); // Linha em branco para separar as interações

    } while(opcao != 5); // Continua no loop até o usuário escolher a opção 5

    return 0;
}

