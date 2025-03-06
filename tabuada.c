#include <stdio.h>

int main() {
    int num, i;

    printf(" --- TABUADA ---\n\n");
    printf("Digite um número: ");
    scanf("%d", &num);
    for(i = 1; i < 11; i++) {
        printf("%d X %d = %d\n", num, i, num*i);
    }
}