//6. Escreva um programa que leia uma sequ�ncia de n�meros inteiros positivos e imprima o menor e o maior n�mero lido;

#include <stdio.h>

int main() {
    int num, menor, maior;

    printf("Digite n�meros inteiros positivos (digite 0 para parar):\n");

    // L� o primeiro n�mero e inicializa menor e maior
    do {
        scanf("%d", &num);
        menor = num;
        maior = num;
    } while (num <= 0);

    // L� os demais n�meros e atualiza menor e maior
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

    printf("O menor n�mero �: %d\n", menor);
    printf("O maior n�mero �: %d\n", maior);

    return 0;
}
