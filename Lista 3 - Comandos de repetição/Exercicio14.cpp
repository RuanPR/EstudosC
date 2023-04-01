//14. Faca um programa que leia um numero inteiro positivo par N e imprima todos os numeros 
//pares de 0 ate N em ordem decrescente.

#include <stdio.h>

int main() {
    int x, i;
    printf("Digite um numero inteiro positivo par: ");
    scanf("%d", &x);
    if ((x % 2 == 0) && x > 0) {
        for (i = x; i >= 0; i -= 2){
            printf("%d\n", i);
        }
    }
    else {
        printf("Apenas numeros pares e positivos!");
    }
    return 0;
}