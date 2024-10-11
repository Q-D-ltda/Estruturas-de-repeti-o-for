#include <stdio.h>

int main() {
	int i;
    double soma = 0.0;

    // Loop para calcular a soma da série
    for (i = 1; i <= 100; i++) {
        soma += (double)i / (101 - i); // Soma os termos da série
    }

    // Exibe o resultado
    printf("O resultado da série é: %.2f\n", soma);

    return 0;
}

