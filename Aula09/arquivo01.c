#include <stdio.h>

int main() {
    int n;
    printf("Digite o tamanho: ");
    scanf("%d", &n);

    int numeros[n];

    for (int i = 0; i < n; i++) {
        printf("Digite o %dº numero: ", i + 1);
        scanf("%d", &numeros[i]);
    }

    for (int i = 0; i < n; i++) {
        printf("%d ", numeros[i]);
    }

    printf(" ");
    return 0;
}

