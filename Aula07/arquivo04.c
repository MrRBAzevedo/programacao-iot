#include <stdio.h>
#include <time.h>

int main() {
    int tempo;

    tempo = (long int)localtime(0);

    printf("%d\n", tempo);

    return 0;
}