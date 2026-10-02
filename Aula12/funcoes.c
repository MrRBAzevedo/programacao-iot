#include <stdio.h>

int potencia(int a, int b);
/* Quando se desejar escrever uma função após a princiapl - main -
é necessário informar seu protótipo, isto é, seu tipo de retorno,
nome e parâmetros. */ 


int somar(int a, int b) {
    /* As funções são um conjunto de instruções que pode
    ser chamado em qualquer parte do código, simplificando-o.
       Elas são muito utilizadas quando, no código, há trechos
    que se repetem. */

    return a + b;
}

int multiplicar(int a, int b) {
    /* Em C, para declarar uma função, é necessário informar o seu
    tipo de retorno, o seu nome e seus parâmetros:
            tipo_retorno nome_funcao(parametros) 
        Lembrando que também é necessário indicar os tipos dos parâmentros*/

    return a * b;
}

float dividir(int a, int b) {

    return (float)a / b;
    /* O return retorna um valor para o local do código em que a função
    foi chamada, encerrando-a */
}

int fatorial(int a) {
    if (a == 0 || a == 1) {
        return 1;
    } else {
        return a * fatorial(a - 1);
    }

}

int maior(int n, int lista[n]) {
    int maior = lista[0];

    for (int i = 1; i < n; i++) {
        if (lista[i] > maior) {maior = lista[i];}
    }

    return maior;
}

void ola(){
    /* Uma função pode não receber nenhum parâmetro e
    não retornar nenhum valor */

    printf("Olá!\n");
}

// int main() {
//     int x, y;

//     scanf("%d", &x);
//     scanf("%d", &y);

//     // printf("%.2f\n", dividir(x, y));
//     printf("%d\n", potencia(x, y));

//     return 0;
// }

int main() {
    ola();

    int n;
    scanf("%d", &n);

    int lista[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &lista[i]);
    }

    printf("%d\n", maior(n, lista));

    return 0;
}

int potencia(int base, int expoente) {
    // Depois de informar seu protótipo antes da função main,
    // essa função pode ser escrita.

    if (expoente == 0) {
        return 1;
    } else {
        int resultado = base;
        for (int i = 1; i < expoente; i++) {
            resultado *= base;
        }
        return resultado;
    }
}