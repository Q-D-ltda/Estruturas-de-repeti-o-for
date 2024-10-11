#include <stdio.h>

int main() {
	int i;
    int a = 1, b = 1, proximo;

    // Exibe os dois primeiros números da sequência
    printf("Os 10 primeiros números da sequência de Fibonacci são:\n");
    printf("%d, %d", a, b);

    // Loop para calcular e exibir os próximos 8 números da sequência
    for (i = 3; i <= 10; i++) {
        proximo = a + b;
        printf(", %d", proximo);
        a = b; // Atualiza o valor de 'a'
        b = proximo; // Atualiza o valor de 'b'
    }

    printf("\n");
    return 0;
}

