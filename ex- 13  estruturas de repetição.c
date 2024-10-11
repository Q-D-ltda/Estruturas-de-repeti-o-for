#include <stdio.h>

int main() {
	int i;
    double soma = 0.0;
    int numerador = 1000;
    int sinal = 1; // Alterna entre + e -

    // Loop para calcular a soma dos primeiros 50 termos
    for (i = 1; i <= 50; i++) {
        soma += sinal * (double)numerador / i; // Soma ou subtrai o termo atual da série
        numerador -= 3; // Decrementa o numerador em 3
        sinal *= -1; // Alterna o sinal (+ ou -)
    }

    // Exibe o resultado
    printf("O resultado da série é: %.2f\n", soma);

    return 0;
}

