#include <stdio.h>

int main() {
	int i;
    int numero;

    // Solicita ao usu�rio que insira um n�mero;
    printf("Digite um n�mero para ver sua tabuada: ");
    scanf("%d", &numero);

    // Loop para calcular e exibir a tabuada de 1 a 100;
    for (i = 1; i <= 100; i++) {
        printf("%d x %d = %d\n", numero, i, numero * i);
    }

    return 0;
}

