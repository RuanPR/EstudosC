//17. Leia um valor de comprimento em centímetros e apresente-o convertido em polegadas. A
//fórmula de conversão é: P = C/2.54, sendo C o comprimento em centímetros e P o comprimento
//em polegadas

#include <stdio.h>

int main() {
    float C, P;
    printf("Digite seu comprimento em centimetros: ");
    scanf("%f", &C);
    P = C/2.54;
    printf("Seu comrpimento em polegadas é: %.2f", P);
    return 0;
}