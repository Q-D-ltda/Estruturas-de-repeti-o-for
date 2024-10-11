#include <stdio.h>

int main() {
	int i = 1;
    int numero, soma = 0;

    // Solicita números ao usuário até que ele insira zero
    do {
        printf("Digite um número (0 para sair): ");
        scanf("%d", &numero);

        soma += numero;  // Adiciona o número à soma, exceto se for zero
    } while (numero != 0);  // Continua o loop enquanto o número for diferente de zero

    // Exibe o resultado da soma
    printf("A soma dos números fornecidos é: %d\n", soma);

    return 0;
}

