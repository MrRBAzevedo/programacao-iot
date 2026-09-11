#include <stdio.h>

int main() {
    int i = 1;


    for (; ;) {
        if (i > 10) {break;}
        printf("%d\n", i);
        i++;
    }
    
    return 0;
}