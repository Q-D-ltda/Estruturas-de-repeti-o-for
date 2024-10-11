#include <stdio.h>

int main() {
    int opcao;

    // Loop para manter o menu at� que o usu�rio escolha sair (op��o 5)
    do {
        // Exibe o menu principal
        printf("# MENU PRINCIPAL #\n");
        printf("[1] Inserir\n");
        printf("[2] Excluir\n");
        printf("[3] Consultar\n");
        printf("[4] Listar\n");
        printf("[5] Sair\n");
        printf("Escolha uma op��o: ");
        scanf("%d", &opcao);

        // Verifica qual op��o foi escolhida e exibe a respectiva mensagem
        switch(opcao) {
            case 1:
                printf("Voc� escolheu: Inserir\n");
                break;
            case 2:
                printf("Voc� escolheu: Excluir\n");
                break;
            case 3:
                printf("Voc� escolheu: Consultar\n");
                break;
            case 4:
                printf("Voc� escolheu: Listar\n");
                break;
            case 5:
                printf("Encerrando o programa...\n");
                break;
            default:
                printf("Op��o inv�lida! Tente novamente.\n");
        }

        printf("\n"); // Linha em branco para separar as intera��es

    } while(opcao != 5); // Continua no loop at� o usu�rio escolher a op��o 5

    return 0;
}

