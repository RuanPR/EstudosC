//06. Leia uma temperatura em graus Celsius e apresente-a convertida em graus Fahrenheit. A
//formula de conversão é: F = C*(9.0/5.0)+32.0, sendo F a temperatura em Fahrenheit e C a
//temperatura em Celsius

#include <stdio.h>

int main(){
    float F, C;
    printf("Digite a temperatura em Celcius: ");
    scanf("%f", &C);
    F = C*(9.0/5.0)+32.0;
    printf("Sua temperatura em Fahrenheit é: %.2f", F);
    return 0;
}