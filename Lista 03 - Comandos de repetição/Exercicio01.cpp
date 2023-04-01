//1. Faca um programa que determine o mostre os cinco primeiros multiplos de 3, 
//considerando numeros maiores que 0.

#include <stdio.h>

int main() {
    int x;
    x = 3;
    while (x <= 18) {
        printf("%d\n", x);
        x += 3; // x = x + 3;
    }
    return 0;
}