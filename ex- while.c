//1. Elaborar um programa que apresente todos os valores num�ricos inteiros �mpares situados no intervalo de 0 a 20;

#include <stdio.h>

int main() {
	// In�cio com o primeiro n�mero �mpar
    int i = 1;  

    // La�o while que percorre o intervalo de 0 a 20
    while (i <= 20) {
    // Exibe os n�meros �mpares	
        printf("%d ", i); 
	// Incrementa de 2 para obter apenas os �mpares	 
        i += 2;  
    }
// Quebra de linha ap�s exibir os n�meros
    printf("\n");  
    return 0;
}

