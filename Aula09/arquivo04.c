#include <stdio.h>

int main() {
    char vetor[10];
    int soma = 0;
    
    for (int i = 0; i < 10; i++) {
        scanf("%c", &vetor[i]);
    }

    for (int i = 0; i < 10; i++) {
        printf("%c ", vetor[i]);
        if (vetor[i] != "a");
    }

    printf("\n");
    return 0;
}