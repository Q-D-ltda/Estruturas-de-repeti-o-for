#include <stdio.h>

int main() {
    float nota1, nota2, nota3, media;
    int continuar = 1;  

    while (continuar == 1) {
       
        printf("Digite a nota da primeira prova: ");
        scanf("%f", &nota1);
        printf("Digite a nota da segunda prova: ");
        scanf("%f", &nota2);
        printf("Digite a nota da terceira prova: ");
        scanf("%f", &nota3);

        media = (nota1 + nota2 + nota3) / 3;

        if (media >= 7.0) {
            printf("Média: %.2f - Aluno aprovado!\n", media);
        } else if (media >= 5.0 && media < 7.0) {
            printf("Média: %.2f - Aluno em recuperação.\n", media);
        } else {
            printf("Média: %.2f - Aluno reprovado.\n", media);
        }

        printf("Deseja calcular a média de outro aluno? (1-Sim, 0-Não): ");
        scanf("%d", &continuar);
    }

    return 0;
}

