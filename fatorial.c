#include <stdio.h>

int main() {
    int num, i;
    unsigned long long fatorial = 1; // Variável para armazenar o fatorial (evita overflow)

    printf("Digite um número inteiro positivo: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("Não existe fatorial de número negativo!\n");
    } else {
        for (i = num; i > 0; i--) {  // De num até 1
            fatorial *= i;
        }
        printf("O fatorial de %d é: %llu\n", num, fatorial);
    }

    return 0;
}
