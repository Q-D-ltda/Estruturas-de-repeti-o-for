#include <stdio.h>

int main() {
    int i = 1;
	int soma = 0;  // Vari�vel para armazenar a soma;

    // Loop para somar os n�meros de 1 a 100;
    for (i = 1; i <= 100; i++) {
        soma += i;  // Adiciona o valor de i � vari�vel soma;
    }

    // Exibe o resultado
    printf("A soma dos 100 primeiros n�meros inteiros �: %d\n", soma);

    return 0;
}

