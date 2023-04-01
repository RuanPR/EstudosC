//12. Faca um programa que leia um numero inteiro positivo  N e imprima todos os numeros 
//naturais de 0 ate N em ordem decrescente


#include <stdio.h>

int main() {
    int x, i;
    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &x);
    for (i = x; i >= 0; i--) {
        printf("%d\n", i);
    }
    return 0;
}