//09. Leia uma temperatura em graus Celsius e apresente-a convertida em graus Kelvin. A fórmula
//de conversão é: K = C + 273.15, sendo C a temperatura em Celsius e K a temperatura em Kelvin.

#include <stdio.h>

int main(){
    float K, C;
    printf("Digite sua temperatura em Celsius: ");
    scanf("%f", &C);
    K = C + 273.15;
    printf("Sua temperatura em Kelvin é: %.2f", K);
    return 0;
}