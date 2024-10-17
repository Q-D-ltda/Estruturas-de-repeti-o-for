#include <stdio.h>

int main() {
	int i;
    int numero, inicio, fim;

    printf("Digite o número para mostrar a tabuada: ");
    scanf("%d", &numero);
    printf("Digite o valor inicial: ");
    scanf("%d", &inicio);
    printf("Digite o valor final: ");
    scanf("%d", &fim);


    for (i = inicio; i <= fim; i++) {
        printf("%d x %d = %d\n", numero, i, numero * i);
    }

    return 0;
}

