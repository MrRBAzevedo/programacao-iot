#include <stdio.h>

int main() {
    for (int fator1 = 1; fator1 <= 10; fator1++) {
        for (int fator2 = 1; fator2 <= 10; fator2++) {
            printf("%d x %d = %d  ", fator2, fator1, fator1*fator2);
        }
        printf("\n");
    }

    return 0;
}