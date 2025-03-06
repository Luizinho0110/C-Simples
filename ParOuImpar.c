#include <stdio.h>

int main() {
    int i;

    printf(" --- Par ou Ímpar ---\n\n");

    do {
        printf("Digite um número (ou 0 para sair): ");
        scanf("%d", &i);

        if (i == 0) {
            printf("Saindo...\n");
            break;
        }

        if (i % 2 == 0) {
            printf("O número %d é par!\n\n", i);
        } else {
            printf("O número %d é ímpar!\n\n", i);
        }

    } while (1);  // Loop infinito, só para quando o usuário digita 0

    return 0;
}
