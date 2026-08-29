#include <stdio.h>

int main(){
    int num, resultado;

    printf("Digite um número inteiro: ");
    scanf("%d", &num);

    resultado = (num > 10);

    if (resultado == 1){
        printf("O número %d é maior que 10", num);
    } else {
        printf("O número %d é menor que 10", num);
    }
}