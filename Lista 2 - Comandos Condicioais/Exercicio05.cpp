//5. Faca um programa que receba um numero inteiro e verifique se este numero e par ou
//ımpar.

#include <stdio.h>

int main() {
    int x;
    printf("Digite um numero inteiro: ");
    scanf("%d", &x);
    if (x == 0 || x % 2 == 0) {
        printf("Seu numero é par!");
    }
    else {
        printf("Seu numero é impar!");
    }
    return 0;
}
