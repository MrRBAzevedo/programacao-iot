#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int vetor[n];

    for (int i = n - 1; i >= 0; i--) {
        scanf("%d", &vetor[i]);
    }    

    for (int i = 0; i < n; i++) {
        printf("%d ", vetor[i]);
    }

    printf("\n");
    return 0;
}