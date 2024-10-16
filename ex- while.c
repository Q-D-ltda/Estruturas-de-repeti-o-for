//1. Elaborar um programa que apresente todos os valores numéricos inteiros ímpares situados no intervalo de 0 a 20;

#include <stdio.h>

int main() {
	// Início com o primeiro número ímpar
    int i = 1;  

    // Laço while que percorre o intervalo de 0 a 20
    while (i <= 20) {
    // Exibe os números ímpares	
        printf("%d ", i); 
	// Incrementa de 2 para obter apenas os ímpares	 
        i += 2;  
    }
// Quebra de linha após exibir os números
    printf("\n");  
    return 0;
}

