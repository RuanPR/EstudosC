//13. Leia uma distância em quilômetros e apresente-a convertida em milhas. A fórmula de
//conversão é: M = K/1.61, sendo K a distância em quilômetros e M em milhas.

#include <stdio.h>

int main() {
    float K, M;
    printf("Digite sua distancia em quilômetros: ");
    scanf("%f", &K);
    M = K/1.61;
    printf("Sua distancia em milhas é: %.2f", M);
    return 0;
}