//07. Leia uma temperatura em graus Fahrenheit e apresente-a convertida em graus Celsius. A
//fórmula de conversão é: C = 5.0*(F- 32.0)/9.0, sendo C a temperatura em Celsius e F a
//temperatura em Fahrenheit.

#include <stdio.h>

int main(){
    float F, C;
    printf("Digite a temperatura em Fahrenheit: ");
    scanf("%f", &F);
    C = 5.0*(F- 32.0)/9.0;
    printf("Sua temperatura em Celcius é: %.2f", C);
    return 0;
}