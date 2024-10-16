//2. Escrever um algoritmo que leia uma quantidade desconhecida de números e conte quantos deles estão nos seguintes intervalos: [0,25], [26,50], [51,75] e [76,100]; 
//A entrada de dados deve terminar quando for lido um número negativo;

#include <stdio.h>

int main() {
    int numero;
    int cont_0_25 = 0, cont_26_50 = 0, cont_51_75 = 0, cont_76_100 = 0;

    // Leitura dos números e contagem por intervalos
    do {
        printf("Digite um número (negativo para terminar): ");
        scanf("%d", &numero);

        if (numero >= 0 && numero <= 25) {
            cont_0_25++;
        } else if (numero >= 26 && numero <= 50) {
            cont_26_50++;
        } else if (numero >= 51 && numero <= 75) {
            cont_51_75++;
        } else if (numero >= 76 && numero <= 100) {
            cont_76_100++;
        }
	// Continua enquanto o número for não-negativo
    } while (numero >= 0);  

    // Exibe os resultados
    printf("Quantidade no intervalo [0, 25]: %d\n", cont_0_25);
    printf("Quantidade no intervalo [26, 50]: %d\n", cont_26_50);
    printf("Quantidade no intervalo [51, 75]: %d\n", cont_51_75);
    printf("Quantidade no intervalo [76, 100]: %d\n", cont_76_100);

    return 0;
}

