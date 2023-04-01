//9. Faca um programa que leia um numero inteiro N e depois imprima os N primeiros
//numeros naturais ımpares.

#include <stdio.h>

int main() {
    int x, i;
    x = 1;
    printf("Digite quantos numeros impares voce quer: ");
    scanf("%d", &i);
    while (i > 0) {
        printf("%d\n", x);
        x += 2;
        i -= 1;
    }
    return 0;
}