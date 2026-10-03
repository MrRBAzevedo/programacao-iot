#include <stdio.h>

int main() {
    int matriz[3][3], soma[3] = {0, 0, 0};
    int entrada;

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            scanf("%d", &entrada);
            matriz[i][j] = entrada;
            soma[j] += entrada;
        }
    }

    for (int i = 0; i < 3; i++) {
        printf("%d ", soma[i]);
    }

    printf("\n");
    return 0;
}