//16. Leia um valor de comprimento em polegadas e apresente-o convertido em centímetros. A
//fórmula de conversão é: C = P*2.54, sendo C o comprimento em centímetros e P o comprimento
//em polegadas.

#include <stdio.h>

int main() {
    float C, P;
    printf("Digite seu comprimento em polegadas: ");
    scanf("%f", &P);
    C = P*2.54;
    printf("Seu comprimento em centimetros é: %.2f", C);
    return 0;
}