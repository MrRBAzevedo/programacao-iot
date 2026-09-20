#include <stdio.h>
#include <string.h>

int main() {
    char Nome[6] = "Renan";

    for (int i = 0; Nome[i] != '\0'; i++) {
        printf("%c", Nome[i]);
    }
    printf("\n");

    strcpy(Nome, "Laura");
    for (int i = 0; Nome[i] != '\0'; i++) {
        printf("%c", Nome[i]);
    }

    printf("\n");
    return 0;
}