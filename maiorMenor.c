#include <stdio.h>

int main() {
    int n1, n2;
    printf("Digite um número: ");
    scanf("%d", &n1);

    printf("Digite outro número: ");
    scanf("%d", &n2);

    if (n1 > n2) {
        printf("O número -%d- é maior que o número -%d-.", n1, n2);
    } else if (n1 < n2) {
        printf("O número -%d- é menor que o número -%d-.", n1, n2);
    } else {
        printf("Os números são iguais.");
    }
}