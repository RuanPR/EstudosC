//33. Leia o tamanho do lado de um quadrado e imprima como resultado a sua área.

#include <stdio.h>

int main() {
    float X, A;
    printf("Digite o lado do seu quadrado: ");
    scanf("%f", &X);
    A = X*X;
    printf("A area do seu quadrado é: %.2f", A);
    return 0;
}