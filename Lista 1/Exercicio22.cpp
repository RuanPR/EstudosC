//22. Leia um valor de comprimento em jardas e apresente-o convertido em metros. A fórmula de
//conversão é: M = 0.91*J, sendo J o comprimento em jardas e M o comprimento em metros.

#include <stdio.h>

int main() {
    float M, J;
    printf("Digite seu comprimento em jardas: ");
    scanf("%f", &J);
    M = 0.9144*J;
    printf("Seu comprimento em metros é: %.2f", M);
    return 0;
}