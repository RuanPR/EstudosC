//30. Leia um valor em real e a cotação do dólar. Em seguida, imprima o valor correspondente em
//dólares

#include <stdio.h>

int main() {
    float R, C, D;
    printf("Digite seu valor em real: ");
    scanf("%f", &R);
    printf("Digite a cotação do dolar: ");
    scanf("%f", &D);
    C = R/D;
    printf("Seu valor em dolares é: %.2f", C);
    return 0;
}