#include <stdio.h>

int main(){
    int contador = 1;

    while(1) {
        printf("%d\n", contador);
        
        if (contador == 10000) {
            break;
        }

        contador++;
    }

    return 0;
}