#include <stdio.h>

int main() {
    // Loop de 1 a 100 para verificar os múltiplos de 5;
   int i = 1;
    for (i = 1; i <= 100; i++) {
        if (i % 5 == 0) {  // Verifica se o número é múltiplo de 5;
            printf("%d\n", i);
        }
    }

    return 0;
}

