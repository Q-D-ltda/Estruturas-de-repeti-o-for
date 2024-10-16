//Construir um programa que leia valores inteiros do teclado at� que o produto (multiplica��o) desses valores ultrapasse 100;

#include <stdio.h>

int main() {
    int numero;
    int produto = 1;

    // La�o do...while garante que o c�digo ser� executado pelo menos uma vez;
    do {
        printf("Digite um n�mero inteiro: ");
        scanf("%d", &numero);
	// Multiplica o valor digitado pelo produto atual;
        produto *= numero;  
  	// Continua enquanto o produto for <= 100;   
    } while (produto <= 100);  

    // Exibe o produto final;
    printf("O produto dos valores ultrapassou 100. Produto final: %d\n", produto);

    return 0;
}


