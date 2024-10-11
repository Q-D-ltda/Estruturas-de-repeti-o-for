#include <stdio.h>

int main() {
	int celsius;
    float fahrenheit;

    // Exibe o cabeçalho da tabela
    printf("Tabela de Conversão: Celsius para Fahrenheit\n");
    printf("---------------------------------------------\n");
    printf("Celsius\t\tFahrenheit\n");
    printf("---------------------------------------------\n");

    // Loop para calcular e exibir a conversão de 0 a 100 graus Celsius em intervalos de 5
    for (celsius = 0; celsius <= 100; celsius += 5) {
        // Fórmula de conversão para Fahrenheit
        fahrenheit = (celsius * 9.0 / 5.0) + 32;

        // Exibe o valor em Celsius e Fahrenheit
        printf("%d\t\t%.2f\n", celsius, fahrenheit);
    }

    return 0;
}

