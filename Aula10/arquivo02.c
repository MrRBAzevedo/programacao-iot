#include <stdio.h>

int main() {
    char nome[15];

    printf("Digite o seu nome: ");
    scanf("%s", nome);

    printf("Seja bem-vindo ao sistema, %s!\n", nome);

    return 0;
}