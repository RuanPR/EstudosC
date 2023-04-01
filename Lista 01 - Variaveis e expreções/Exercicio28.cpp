//28. Faça a leitura de três valores e apresente como resultado a soma dos quadrados dos três
//valores lidos.

#include <stdio.h>

int main() {
    int X, Y, Z, S;
    printf("Digite o primeiro valor: ");
    scanf("%d", &X);
    printf("Digite o segundo valor: ");
    scanf("%d", &Y);
    printf("Digite o terceiro valor: ");
    scanf("%d", &Z);
    S = X*X + Y*Y + Z*Z;
    printf("A soma dos quadrados dos tres valores é: %d", S);
    return 0;
}