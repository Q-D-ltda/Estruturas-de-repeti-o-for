#include <stdio.h>

int main() {
    double numero, menor, maior;
    int primeiro_numero = 1; // Para inicializar os valores de menor e maior no in�cio

    // Solicita a entrada do usu�rio
    printf("Digite uma sequ�ncia de n�meros reais positivos (0 para encerrar):\n");

    while (1) {
        scanf("%lf", &numero);

        // Se o n�mero for zero, encerra a entrada de dados
        if (numero == 0) {
            break;
        }

        // Se for o primeiro n�mero, inicializa 'menor' e 'maior'
        if (primeiro_numero) {
            menor = maior = numero;
            primeiro_numero = 0;
        } else {
            // Atualiza 'menor' e 'maior' se necess�rio
            if (numero < menor) {
                menor = numero;
            }
            if (numero > maior) {
                maior = numero;
            }
        }
    }

    // Calcula a amplitude
    if (!primeiro_numero) { // Certifica que ao menos um n�mero foi processado
        double amplitude = maior - menor;
        printf("A amplitude estat�stica �: %.1f\n", amplitude);
    } else {
        printf("Nenhum n�mero v�lido foi inserido.\n");
    }

    return 0;
}

