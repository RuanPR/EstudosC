//5. Faca um programa que peca ao usuario para digitar 10 valores e some-os

#include <stdio.h>

int main() {
    int i;
    float x, soma;
    i = 0;
    while (i < 10) {
        printf("Digite um valor: ");
        scanf("%f", &x);
        soma = soma + x;
        i += 1;
    }
    printf("A soma de todos os valores é: %.2f", soma);
    return 0;
}