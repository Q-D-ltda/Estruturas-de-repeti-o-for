#include <stdio.h>

int main() {
	int i = 1;
    int limite, contador = 0;

    // Solicita ao usu�rio que insira o n�mero limite
    printf("Digite um n�mero: ");
    scanf("%d", &limite);

    // Loop para exibir os n�meros pares de 1 at� o n�mero lido
    for (i = 1; i <= limite; i++) {
        if (i % 2 == 0) {  // Verifica se o n�mero � par
            printf("%d\n", i);
            contador++;  // Incrementa o contador de n�meros pares
        }
    }

    // Exibe a quantidade de n�meros pares
    printf("Quantidade de n�meros pares: %d\n", contador);

    return 0;
}

