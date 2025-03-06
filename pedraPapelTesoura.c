#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int usuario, computador;

    srand(time(NULL));

    // O computador escolhe aleatoriamente entre 1 (Pedra), 2 (Papel), 3 (Tesoura)
    computador = rand() % 3 + 1;

    // Solicita a escolha do usuário
    printf("Escolha uma opção:\n");
    printf("1 - Pedra\n2 - Papel\n3 - Tesoura\n");
    printf("Digite sua escolha (1, 2 ou 3): ");
    scanf("%d", &usuario);
    printf("O computador escolheu ");
        if (computador == 1) {
            printf("Pedra.\n");
        } else if (computador == 2) {
            printf("Papel.\n");
        } else {
            printf("Tesoura.\n");
        }

    // Comparação entre as escolhas do usuário e do computador
    if (usuario == computador) {
        printf("Empate! Ambos escolheram ");
        if (usuario == 1) {
            printf("Pedra.\n");
        } else if (usuario == 2) {
            printf("Papel.\n");
        } else {
            printf("Tesoura.\n");
        }
        
    } else if ((usuario == 1 && computador == 3) || (usuario == 2 && computador == 1) || (usuario == 3 && computador == 2)) {
        printf("Você ganhou! ");
        if (usuario == 1) {
            printf("Pedra vence Tesoura.\n");
        } else if (usuario == 2) {
            printf("Papel vence Pedra.\n");
        } else {
            printf("Tesoura vence Papel.\n");
        }
    } else {
        printf("Você perdeu! ");
        if (computador == 1) {
            printf("Pedra vence Tesoura.\n");
        } else if (computador == 2) {
            printf("Papel vence Pedra.\n");
        } else {
            printf("Tesoura vence Papel.\n");
        }
    }

    return 0;
}
