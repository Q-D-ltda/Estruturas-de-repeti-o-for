#include <stdio.h>

int main() {
    int senha;
    int tentativas = 0; // Contador de tentativas

    // Loop para solicitar a senha at� que seja v�lida
    while (1) {
        printf("Digite a senha: ");
        scanf("%d", &senha);
        tentativas++; // Incrementa o contador de tentativas

        // Verifica se a senha � v�lida
        if (senha == 2009) {
            printf("ACESSO PERMITIDO\n");
            printf("A senha foi informada %d vez(es).\n", tentativas);
            break; // Sai do loop se a senha estiver correta
        } else {
            printf("ACESSO NEGADO\n");
        }
    }

    return 0;
}

