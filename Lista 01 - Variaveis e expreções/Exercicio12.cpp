//12. Leia uma distância em milhas e apresente-a convertida em quilômetros. A fórmula de
//conversão é: K = 1.61*M, sendo K a distância em quilômetros e M em milhas.

#include <stdio.h>

int main() {
    float M, K;
    printf("Digite sua distancia em milhas: ");
    scanf("%f", &M);
    K = 1.61*M;
    printf("Sua distancia em KM é: %.2f", K);
    return 0;
}