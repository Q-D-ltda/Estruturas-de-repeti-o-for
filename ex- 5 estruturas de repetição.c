#include <stdio.h>

int main() {
	int i = 1;
    int limite, contador = 0;

    // Solicita ao usuário que insira o número limite
    printf("Digite um número: ");
    scanf("%d", &limite);

    // Loop para exibir os números pares de 1 até o número lido
    for (i = 1; i <= limite; i++) {
        if (i % 2 == 0) {  // Verifica se o número é par
            printf("%d\n", i);
            contador++;  // Incrementa o contador de números pares
        }
    }

    // Exibe a quantidade de números pares
    printf("Quantidade de números pares: %d\n", contador);

    return 0;
}

