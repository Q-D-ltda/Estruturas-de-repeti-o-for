#include <stdio.h>

int main() {
	int i;
    int soma = 0;
    int contador = 0;

    // Soma n�meros consecutivos a partir de 1 at� que a soma ultrapasse 100
    for (i = 1; soma <= 100; i++) {
        soma += i;
        contador++;
    }

    // Exibe o resultado
    printf("S�o necess�rios %d n�meros para que a soma ultrapasse 100.\n", contador);
    printf("A soma total �: %d\n", soma);

    return 0;
}

