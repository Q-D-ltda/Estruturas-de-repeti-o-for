//Construir um programa que apresente a soma dos cem primeiros números naturais (1+2+3+ ...+98+99+100);

#include <stdio.h>

int main() {
	int i = 1;
    int soma = 0;

    // Laço para somar os cem primeiros números naturais;
    while (i <= 100) {
    	soma = soma + i;
        i = i + 1;
    }

    // Exibe o resultado;
    printf("A soma dos cem primeiros números naturais é: %d", soma);

    return 0;
}



