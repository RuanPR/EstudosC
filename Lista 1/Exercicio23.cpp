//23. Leia um valor de comprimento em metros e apresente-o convertido em jardas. A fórmula de
//conversão é: J = M/0.91, sendo J o comprimento em jardas e M o comprimento em metros.

#include <stdio.h>

int main() {
    float M, J;
    printf("Digite seu comprimento em metros: ");
    scanf("%f", &M);
    J = M/0.9144;
    printf("Seu comprimento em jardas é: %.2f", J);
    return 0;
}