#include <stdio.h>

// Fun��o para calcular o fatorial
int fatorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * fatorial(n - 1);
    }
}

int main() {
    int numero;

    // Solicita que o usu�rio insira um n�mero
    printf("Digite um n�mero inteiro positivo: ");
    scanf("%d", &numero);

    // Verifica se o n�mero � positivo
    if (numero < 0) {
        printf("Por favor, insira um n�mero positivo.\n");
    } else {
        int resultado = fatorial(numero);
        printf("O fatorial de %d � %d.\n", numero, resultado);
    }

    return 0;
}

