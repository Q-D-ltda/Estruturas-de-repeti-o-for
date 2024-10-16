//5. Escreva um programa que leia dois n�meros inteiros e calcule o m�ximo divisor comum (MDC) desses n�meros.

#include <stdio.h>

int mdc(int a, int b) {
    while (b != 0) {
        int temp = a % b;
        a = b;
        b = temp;
    }
    return a;
}

int main() {
    int num1, num2;

    printf("Digite dois n�meros inteiros: ");
    scanf("%d %d", &num1, &num2);

    int resultado = mdc(num1, num2);

    printf("O MDC de %d e %d �: %d\n", num1, num2, resultado);

    return 0;
}

