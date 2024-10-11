#include <stdio.h>

// Função para calcular o fatorial
int fatorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * fatorial(n - 1);
    }
}

int main() {
    int numero;

    // Solicita que o usuário insira um número
    printf("Digite um número inteiro positivo: ");
    scanf("%d", &numero);

    // Verifica se o número é positivo
    if (numero < 0) {
        printf("Por favor, insira um número positivo.\n");
    } else {
        int resultado = fatorial(numero);
        printf("O fatorial de %d é %d.\n", numero, resultado);
    }

    return 0;
}

