#include <stdio.h>

int main() {
    int potencias[10];

    for (int i = 1; i <= 10; i++) {
        potencias[i - 1] = i * i;
    }

    for (int i = 0; i < 10; i++) {
        printf("%d ", potencias[i]);
    }

    printf(" ");
    return 0;
}