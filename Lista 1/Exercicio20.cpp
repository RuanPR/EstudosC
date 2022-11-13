//20. Leia um valor de massa em quilogramas e apresente-o convertido em libras. A fórmula de
//conversão é: L = K/0.45, sendo K a massa em quilogramas e L a massa em libras.

#include <stdio.h>

int main() {
    float L, K;
    printf("Digite sua massa em quilogramas: ");
    scanf("%f", &K);
    L = K/0.45;
    printf("Sua massa em libras é: %.2f", L);
    return 0;
}