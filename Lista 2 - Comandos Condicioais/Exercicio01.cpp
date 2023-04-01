//1. Faca um programa que receba dois numeros e mostre qual deles e o maior

#include <stdio.h>

int main() {
    int x, y;
    printf("Digite dois numeros: ");
    scanf("%d %d", &x, &y);
    if (x > y) {
    printf("%d", x);
    }
    else {
    printf("%d", y);
    }
    return 0;
}