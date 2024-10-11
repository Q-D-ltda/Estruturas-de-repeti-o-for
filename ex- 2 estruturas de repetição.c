#include <stdio.h>

int main() {
    // Loop para a contagem regressiva de 10 até 0;
    int i = 1;
	for (i = 10; i >= 0; i--) {
        printf("%d\n", i);
    }

    // Após a contagem regressiva, exibe "Fogo!";
    printf("Fogo!\n");

    return 0;
}

