//18. Leia um valor de volume em metros cúbicos m3 e apresente-o convertido em litros. A
//fórmula de conversão é: L = 1000*M, sendo L o volume em litros e M o volume em metros
//cúbicos.

#include <stdio.h>

int main() {
    float L, M;
    printf("Digite seu volume em metros cubicos: ");
    scanf("%f", &M);
    L = 1000*M;
    printf("Seu volume em litros é: %.2f", L);
    return 0;
}
