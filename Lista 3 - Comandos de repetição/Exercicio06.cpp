//6. Faca um programa que leia 10 inteiros e imprima sua media. 

#include <stdio.h>

int main() {
    int x, i;
    float media, soma;
    i = 0;
    while (i < 10) {
        printf("Digite um numero: ");
        scanf("%d", &x);
        soma = soma + x;
        i += 1;
    }
    media = soma/10;
    printf("A media dos numeros é: %.2f", media);
    return 0; 
}