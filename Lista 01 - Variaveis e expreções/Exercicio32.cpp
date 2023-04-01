//32. Leia um número inteiro e imprima a soma do sucessor de seu triplo com o antecessor de seu
//dobro

#include <stdio.h>

int main() {
    int X, S;
    printf("Digite um numero inteiro: ");
    scanf("%d", &X);
    S = ((X*3)+1)+((X*2)-1);
    printf("A soma do seu numero é: %d", S);
    return 0;
}