#include <stdio.h>

int main() {
    int entrada, fator, fatorial = 1;

    printf("Digite um número inteiro: ");
    scanf("%d", &entrada);
    fator = entrada;

    while (fator > 1) {
        fatorial *= fator;
        fator--;
    }

    printf("O fatorial de %d é %d\n", entrada, fatorial);

    return 0;
}