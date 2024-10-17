#include <stdio.h>

int main() {
    int opcao, numero;
    int contPar = 0, contImpar = 0;

    do {

        printf("\n# MENU PRINCIPAL #\n");
        printf("[1] DIGITE um numero par\n");
        printf("[2] DIGITE um numero impar\n");
        printf("[3] Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

     
        switch (opcao) {
            case 1:
        
                printf("Digite um numero par: ");
                scanf("%d", &numero);
            
                if (numero % 2 == 0) {
                    contPar++;
                } else {
                    printf("Erro: O numero digitado nao e par!\n");
                }
                break;

            case 2:
             
                printf("Digite um numero impar: ");
                scanf("%d", &numero);
             
                if (numero % 2 != 0) {
                    contImpar++;
                } else {
                    printf("Erro: O numero digitado nao e impar!\n");
                }
                break;

            case 3:
              
                printf("\nQuantidade de numeros pares digitados: %d\n", contPar);
                printf("Quantidade de numeros impares digitados: %d\n", contImpar);
                printf("Saindo do programa...\n");
                break;

            default:
                printf("Opcao invalida! Tente novamente.\n");
                break;
        }

    } while (opcao != 3); 

    return 0;
}

