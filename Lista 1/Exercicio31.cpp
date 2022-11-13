//31. Leia um número inteiro e imprima o seu antecessor e o seu sucessor.

#include <stdio.h>

int main() {
    int X, Y, Z;
    printf("Digite um numero inteiro: ");
    scanf("%d", &X);
    Y = X-1;
    Z = X+1;
    printf("O numero antecessor é %d, e seu sucessor é %d.", Y, Z);
    return 0;
}