#include <stdio.h>

int main() {
    int i = 1;
	int soma = 0;  // Variável para armazenar a soma;

    // Loop para somar os números de 1 a 100;
    for (i = 1; i <= 100; i++) {
        soma += i;  // Adiciona o valor de i à variável soma;
    }

    // Exibe o resultado
    printf("A soma dos 100 primeiros números inteiros é: %d\n", soma);

    return 0;
}

