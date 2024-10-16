//6. Escreva um programa que leia uma sequência de números inteiros positivos e imprima o menor e o maior número lido;

#include <stdio.h>

int main() {
    int num, menor, maior;

    printf("Digite números inteiros positivos (digite 0 para parar):\n");

    // Lê o primeiro número e inicializa menor e maior
    do {
        scanf("%d", &num);
        menor = num;
        maior = num;
    } while (num <= 0);

    // Lê os demais números e atualiza menor e maior
    do {
        scanf("%d", &num);
        if (num > 0) {
            if (num < menor) {
                menor = num;
            }
            if (num > maior) {
                maior = num;
            }
        }
    } while (num != 0);

    printf("O menor número é: %d\n", menor);
    printf("O maior número é: %d\n", maior);

    return 0;
}
