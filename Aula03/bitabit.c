#include <stdio.h>

int main(){
    int numero;

    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);
    numero = ~numero;
    numero = ~numero;

    printf("numero: %d", numero);

    return 0;
}