#include <stdio.h>

int main() {
	int i = 1;
    int termo = 1; // Primeiro termo da série

    // Exibe os 10 primeiros termos
    printf("Os 10 primeiros termos da série são:\n");
    for (i = 0; i < 10; i++) {
        printf("%d ", termo);
        termo *= 3; // Multiplica o termo anterior por 3 para gerar o próximo
    }

    printf("\n");
    return 0;
}

