//10. Faca um programa que calcule e mostre a soma dos 50 primeiros numeros pares. 

#include <stdio.h>

int main() {
    int i, x, soma;
    soma = 0;
    x = 0;
    i = 50;
    while (i > 0) {
        x += 2;
        soma += x;
        i -= 1;
    }
    printf("A soma dos 50 primeiros pares é %d.", soma);
    return 0;
}