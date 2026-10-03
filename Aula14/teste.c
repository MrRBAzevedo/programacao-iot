#include <stdio.h>

void Percorrendo(int n, int *vetor) {
    for (int i = 0; i < n; i++) {
        printf("%d ", vetor[i]);
    }

    printf(" ");
}


int main() {
    int n = 5;
    int vetor[] = {1, 2, 3, 4, 5};
    Percorrendo(n, vetor);

    return 0;
}