//14. Leia um ângulo em graus e apresente-o convertido em radianos. A fórmula de conversão é:
//R = G*pi/180, sendo G o ângulo em graus e R em radianos e pi = 3.141592.

#include <stdio.h>

int main() {
    float R, G, pi;
    printf("Digite o grau do seu angulo: ");
    scanf("%f", &G);
    pi = 3.141592;
    R = G*pi/180;
    printf("Seu grau em radianos é: %.2f", R);
    return 0;
}