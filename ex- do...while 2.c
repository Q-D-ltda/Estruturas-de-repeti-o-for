//4. Escreva um programa que leia números inteiros positivos até que o número 0 seja digitado e imprima a média desses números;

#include <stdio.h>

int main() {
    int numero, soma = 0, contador = 0;
    float media;

    // Leitura e processamento dos números
    do {
        printf("Digite um número inteiro positivo (0 para terminar): ");
        scanf("%d", &numero);

        if (numero > 0) {
            soma += numero;  // Soma dos números positivos
            contador++;      // Conta quantos números foram digitados
        }

    } while (numero != 0);  // Continua até que o número 0 seja digitado

    // Cálculo da média
    if (contador > 0) {
        media = (float)soma / contador;  // Calcula a média
        printf("A média dos números positivos é: %.2f\n", media);
    } else {
        printf("Nenhum número positivo foi digitado.\n");
    }

    return 0;
}

