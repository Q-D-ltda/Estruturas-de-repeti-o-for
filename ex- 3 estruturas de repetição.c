#include <stdio.h>

int main() {
    // Loop de 1 a 100 para verificar os m�ltiplos de 5;
   int i = 1;
    for (i = 1; i <= 100; i++) {
        if (i % 5 == 0) {  // Verifica se o n�mero � m�ltiplo de 5;
            printf("%d\n", i);
        }
    }

    return 0;
}

