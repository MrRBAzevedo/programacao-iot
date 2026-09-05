#include <stdio.h>

int main() {
    int inicio, fim, total = 0;

    printf("Informe o primeiro número: ");
    scanf("%d", &inicio);
    printf("Informe o segundo número: ");
    scanf("%d", &fim);

    printf("Números pares: ");
    while (inicio < fim) {
        if (inicio % 2 == 0) {
            printf("%d ", inicio);
            total++;
        }

        inicio++;
    }

    printf("\nTotal: %d números pares\n", total);

    return 0;
}