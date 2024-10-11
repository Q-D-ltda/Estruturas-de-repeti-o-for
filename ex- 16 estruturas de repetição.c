#include <stdio.h>

int main() {
    double numero, menor, maior;
    int primeiro_numero = 1; // Para inicializar os valores de menor e maior no início

    // Solicita a entrada do usuário
    printf("Digite uma sequência de números reais positivos (0 para encerrar):\n");

    while (1) {
        scanf("%lf", &numero);

        // Se o número for zero, encerra a entrada de dados
        if (numero == 0) {
            break;
        }

        // Se for o primeiro número, inicializa 'menor' e 'maior'
        if (primeiro_numero) {
            menor = maior = numero;
            primeiro_numero = 0;
        } else {
            // Atualiza 'menor' e 'maior' se necessário
            if (numero < menor) {
                menor = numero;
            }
            if (numero > maior) {
                maior = numero;
            }
        }
    }

    // Calcula a amplitude
    if (!primeiro_numero) { // Certifica que ao menos um número foi processado
        double amplitude = maior - menor;
        printf("A amplitude estatística é: %.1f\n", amplitude);
    } else {
        printf("Nenhum número válido foi inserido.\n");
    }

    return 0;
}

