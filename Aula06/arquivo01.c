#include <stdio.h>

int main(){
    int entrada = 1;

    while (entrada != 0) {
        printf("Digite um numero inteiro: ");
        scanf("%d", &entrada);

        printf("Voce digitou o numero %d\n", entrada);
    }

    printf("Voce finalizou o programa");

    return 0;
}