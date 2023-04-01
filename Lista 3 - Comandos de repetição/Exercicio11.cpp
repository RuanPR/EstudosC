//11. Faca um programa que leia um numero inteiro positivo N e imprima todos os numeros 
//naturais de 0 ate N em ordem crescente.

#include <stdio.h>

int main() {
    int x, i;
    printf("Digite um numero positivo: ");
    scanf("%d", &x);
    for (i = 0; i <= x; i++) {
        printf("%d\n", i);
    }
    return 0;
}