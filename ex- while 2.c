//3. Escreva um programa que leia uma sequência de números inteiros positivos e negativos e imprima a soma dos números positivos e a soma dos números negativos;

#include <stdio.h>

int main() {
    int numero;
    int soma_positivos = 0, soma_negativos = 0;

    // Laço do...while para garantir que o programa execute pelo menos uma vez
    do {
        printf("Digite um número (0 para terminar): ");
        scanf("%d", &numero);

        if (numero > 0) {
            soma_positivos += numero;  // Soma números positivos
        } else if (numero < 0) {
            soma_negativos += numero;  // Soma números negativos
        }

    } while (numero != 0);  // Continua enquanto o número for diferente de 0

    // Exibe os resultados
    printf("Soma dos números positivos: %d\n", soma_positivos);
    printf("Soma dos números negativos: %d\n", soma_negativos);

    return 0;
}



