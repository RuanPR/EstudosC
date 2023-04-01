//11. Leia uma velocidade em m/s (metros por segundo) e apresente-a convertida em km/h
//(quilômetros por hora). A fórmula de conversão é: K = M*3.6, sendo K a velocidade em km/h e
//M em m/s

#include <stdio.h>

int main() {
    float M, K;
    printf("Digite a velocidade em M/S: ");
    scanf("%f", &M);
    K = M*3.6;
    printf("Sua velocidade em KM/H é: %.2f", K);
    return 0;
}