#include <stdio.h>

int main() {
	int i;
    int soma = 0;
    int contador = 0;

    // Soma números consecutivos a partir de 1 até que a soma ultrapasse 100
    for (i = 1; soma <= 100; i++) {
        soma += i;
        contador++;
    }

    // Exibe o resultado
    printf("São necessários %d números para que a soma ultrapasse 100.\n", contador);
    printf("A soma total é: %d\n", soma);

    return 0;
}

