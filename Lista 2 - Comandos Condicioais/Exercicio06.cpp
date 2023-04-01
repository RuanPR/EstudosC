//6. Escreva um programa que, dados dois numeros inteiros, mostre na tela o maior deles,
//assim como a diferenca existente entre ambos.

#include <stdio.h>

int main() {
    int x, y, d;
    printf("Digite dois numeros inteiros: ");
    scanf("%d %d", &x, &y);
    if (x > y) {
        d = x - y;
        printf("O maior é %d e sua diferença com o menor é de %d", x, d);
    }
    else {
        d = y - x;
        printf("O maior é %d e sua diferença com o menor é de %d", y, d);
    }
    return 0;
}