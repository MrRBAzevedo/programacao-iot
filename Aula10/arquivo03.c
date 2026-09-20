#include <stdio.h>
#include <string.h>

int main() {
    char nome1[] = "Renan";
    char nome2[] = "Mari";

    if (strcmp(nome1, nome2) == 0) {
        printf("As strings são iguais!");
    } else {
        printf("As strings são diferentes!");
    }
    
    return 0;
}