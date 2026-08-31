#include <stdio.h>
#include <math.h>
#define Pi 3.14159

int main(){
    int P = 100, d = 2;
    float I = P / (4 * Pi * pow(d, 2));

    printf("%f", I);

    return 0;
}