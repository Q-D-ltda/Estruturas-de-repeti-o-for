#include <stdio.h>

int main() {
	int i = 1;
    int termo = 1; // Primeiro termo da s�rie

    // Exibe os 10 primeiros termos
    printf("Os 10 primeiros termos da s�rie s�o:\n");
    for (i = 0; i < 10; i++) {
        printf("%d ", termo);
        termo *= 3; // Multiplica o termo anterior por 3 para gerar o pr�ximo
    }

    printf("\n");
    return 0;
}

