#include <stdio.h>
#include <stdlib.h>

int main() {
	int i;
    int numeroSecreto, palpite, tentativas = 5;

    
    srand(time(0));
    numeroSecreto = rand() % 100 + 1;  

    printf("Tente adivinhar o numero secreto entre 1 e 100.\n");

    for (i = 1; i <= tentativas; i++) {
        
        printf("Tentativa %d de %d: ", i, tentativas);
        scanf("%d", &palpite);

        
        if (palpite == numeroSecreto) {
            printf("Parabéns! Você acertou o número secreto!\n");
            return 0;  
        } else if (palpite < numeroSecreto) {
            printf("Muito baixo!\n");
        } else {
            printf("Muito alto!\n");
        }
    }

   
    printf("Você não conseguiu adivinhar o número. O número secreto era: %d\n", numeroSecreto);

    return 0;
}

