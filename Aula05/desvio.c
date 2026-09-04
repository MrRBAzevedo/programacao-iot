#include <stdio.h>

int main(){
    int dividendo, divisor;
    float quociente;

    printf("Digite o dividendo: ");
    scanf("%d", &dividendo);
    printf("Digite o divisor: ");
    scanf("%d", &divisor);

    quociente = (float)dividendo / divisor;

    printf("%d divido por %d e %.2f", dividendo, divisor, quociente);

    return 0;
}