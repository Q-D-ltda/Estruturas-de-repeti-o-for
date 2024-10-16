//5. Escreva um programa que leia dois números inteiros e calcule o máximo divisor comum (MDC) desses números.

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

    printf("Digite dois números inteiros: ");
    scanf("%d %d", &num1, &num2);

    int resultado = mdc(num1, num2);

    printf("O MDC de %d e %d é: %d\n", num1, num2, resultado);

    return 0;
}

