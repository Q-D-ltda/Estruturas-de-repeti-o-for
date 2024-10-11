#include <stdio.h>

int main() {
	int i;
    int a = 1, b = 1, proximo;

    // Exibe os dois primeiros n�meros da sequ�ncia
    printf("Os 10 primeiros n�meros da sequ�ncia de Fibonacci s�o:\n");
    printf("%d, %d", a, b);

    // Loop para calcular e exibir os pr�ximos 8 n�meros da sequ�ncia
    for (i = 3; i <= 10; i++) {
        proximo = a + b;
        printf(", %d", proximo);
        a = b; // Atualiza o valor de 'a'
        b = proximo; // Atualiza o valor de 'b'
    }

    printf("\n");
    return 0;
}

