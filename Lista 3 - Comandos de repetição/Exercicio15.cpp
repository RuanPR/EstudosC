//15. Faca um programa que leia um numero inteiro positivo ımpar N e imprima todos os
//numeros ımpares de 1 ate N em ordem crescente.

#include <stdio.h>

int main() {
    int x, i;
    printf("Digite um numero inteiro positivo impar: ");
    scanf("%d", &x);
    if ((x % 2 != 0) && x > 0) {
        for (i = 1; i <= x; i += 2){
            printf("%d\n", i);
        }
    }
    else {
        printf("Apenas numeros impares e positivos!");
    }
    return 0;
}