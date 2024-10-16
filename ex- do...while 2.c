//4. Escreva um programa que leia n�meros inteiros positivos at� que o n�mero 0 seja digitado e imprima a m�dia desses n�meros;

#include <stdio.h>

int main() {
    int numero, soma = 0, contador = 0;
    float media;

    // Leitura e processamento dos n�meros
    do {
        printf("Digite um n�mero inteiro positivo (0 para terminar): ");
        scanf("%d", &numero);

        if (numero > 0) {
            soma += numero;  // Soma dos n�meros positivos
            contador++;      // Conta quantos n�meros foram digitados
        }

    } while (numero != 0);  // Continua at� que o n�mero 0 seja digitado

    // C�lculo da m�dia
    if (contador > 0) {
        media = (float)soma / contador;  // Calcula a m�dia
        printf("A m�dia dos n�meros positivos �: %.2f\n", media);
    } else {
        printf("Nenhum n�mero positivo foi digitado.\n");
    }

    return 0;
}

