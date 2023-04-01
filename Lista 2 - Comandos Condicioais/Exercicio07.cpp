//7. Faca um programa que receba dois numeros e mostre o maior. Se por acaso, os dois
//numeros forem iguais, imprima a mensagem Numeros iguais.

#include <stdio.h>

int main() {
    float x, y;
    printf("Digite dois numeros: ");
    scanf("%f %f", &x, &y);
    if (x > y) {
        printf("%.2f", x);
    }
    else if (y > x) {
        printf("%.2f", y);
    }
    else {
        printf("Numeros iguais");
    }
}