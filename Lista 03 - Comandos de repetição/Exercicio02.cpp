//2. Escreva um programa que escreva na tela, de 1 ate 100, de 1 em 1, 3 vezes. A primeira
//vez deve usar a estrutura de repeticao for, a segunda while, e a terceira do while.

#include <stdio.h>

int main() {
    int x;

    printf("For: \n");
    for (x = 1; x <= 100; x++) {
        printf("%d ", x);
    }

    printf("\n\nWhile: \n");
    x = 1;
    while (x <= 100) {
        printf("%d ", x);
        x += 1;
    }

    printf("\n\nDo-while: \n");
    x = 1;
    do {
        printf("%d ", x);
        x += 1;
    } while (x <= 100);
    return 0;
}