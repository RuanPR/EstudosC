//8. Escreva um programa que leia 10 numeros e escreva o menor valor lido e o maior valor
//lido.

#include <stdio.h>

int main() {
    int i;
    float x, maior, menor;
    maior = 0;
    menor = 0;
    i = 0;
    while (i < 10) {
        printf("Digite um numero: ");
        scanf("%f", &x);
        i += 1;
        if (x > maior) {
            maior = x;
        }
        else {
            menor = x;
        }
    }
    printf("O maior numero é %.2f e o menor é %.2f", maior, menor);
    return 0;
}