#include <stdio.h>

int busca(int n, int vetor[n], int alvo) {
    int pon_esq = 0, pon_dir = n - 1;
    int meio = (pon_dir - pon_esq) / 2;

    while (vetor[meio] != alvo) {
        if (vetor[meio] > alvo) {
            pon_dir = meio - 1;
        } else {
            pon_esq = meio + 1;
        }

        meio = (pon_dir - pon_esq) / 2 + pon_esq;
    }

    return meio;
}

int main() {
    int n, alvo;
    scanf("%d", &n);
    scanf("%d", &alvo);

    int lista[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &lista[i]);
    }

    printf("%d\n", busca(n, lista, alvo));

    return 0;
}