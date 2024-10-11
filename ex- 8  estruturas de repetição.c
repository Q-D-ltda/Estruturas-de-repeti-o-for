#include <stdio.h>

int main() {
	int celsius;
    float fahrenheit;

    // Exibe o cabe�alho da tabela
    printf("Tabela de Convers�o: Celsius para Fahrenheit\n");
    printf("---------------------------------------------\n");
    printf("Celsius\t\tFahrenheit\n");
    printf("---------------------------------------------\n");

    // Loop para calcular e exibir a convers�o de 0 a 100 graus Celsius em intervalos de 5
    for (celsius = 0; celsius <= 100; celsius += 5) {
        // F�rmula de convers�o para Fahrenheit
        fahrenheit = (celsius * 9.0 / 5.0) + 32;

        // Exibe o valor em Celsius e Fahrenheit
        printf("%d\t\t%.2f\n", celsius, fahrenheit);
    }

    return 0;
}

