#include <stdio.h>

int main() {
	int i = 1;
    int numero, soma = 0;

    // Solicita n�meros ao usu�rio at� que ele insira zero
    do {
        printf("Digite um n�mero (0 para sair): ");
        scanf("%d", &numero);

        soma += numero;  // Adiciona o n�mero � soma, exceto se for zero
    } while (numero != 0);  // Continua o loop enquanto o n�mero for diferente de zero

    // Exibe o resultado da soma
    printf("A soma dos n�meros fornecidos �: %d\n", soma);

    return 0;
}

