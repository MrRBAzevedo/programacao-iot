#include <stdio.h>
#include <string.h>

int main() {
    float notas[4][4];
    // As matrizes são vetores de vetores
    /* Em C, para declarar uma matriz, é necessário informar, além do tipo 
    de variável que irá ser armazenado e o seu nome, o número de linhas e
    de colunas. */
    
    int numeros[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    // Inicialização estática
    /* Existem diversas maneiras de inicializar matrizes em C. Uma delas é
    a inicialização estática, em que são informados todos os elementos da
    matriz no momento de sua declaração. */
    
    int digitos[5][5];

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            digitos[i][j] = i * j;
        }
    }

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            printf("%2d ", digitos[i][j]);
            /* O número posto dentro do especificador de formato permite a impressão
            dos valores com espaçamento de 2 caracteres. */
            
        }
        printf("\n");
    }


    return 0;
}