#include <stdio.h>

int main() {
	int i;
    double soma = 0.0;
    int numerador = 1;
    int denominador = 1;

    // Loop para calcular a soma dos primeiros 20 termos
    for (i = 0; i < 20; i++) {
        soma += (double)numerador / denominador; // Soma o termo atual da série
        numerador += 2; // Incrementa o numerador em 2 (1, 3, 5, 7, ...)
        denominador *= 2; // Multiplica o denominador por 2 (1, 2, 4, 8, ...)
    }

    // Exibe o resultado
    printf("O resultado da série é: %.2f\n", soma);

    return 0;
}

