//3. Escreva um programa que leia uma sequ�ncia de n�meros inteiros positivos e negativos e imprima a soma dos n�meros positivos e a soma dos n�meros negativos;

#include <stdio.h>

int main() {
    int numero;
    int soma_positivos = 0, soma_negativos = 0;

    // La�o do...while para garantir que o programa execute pelo menos uma vez
    do {
        printf("Digite um n�mero (0 para terminar): ");
        scanf("%d", &numero);

        if (numero > 0) {
            soma_positivos += numero;  // Soma n�meros positivos
        } else if (numero < 0) {
            soma_negativos += numero;  // Soma n�meros negativos
        }

    } while (numero != 0);  // Continua enquanto o n�mero for diferente de 0

    // Exibe os resultados
    printf("Soma dos n�meros positivos: %d\n", soma_positivos);
    printf("Soma dos n�meros negativos: %d\n", soma_negativos);

    return 0;
}



