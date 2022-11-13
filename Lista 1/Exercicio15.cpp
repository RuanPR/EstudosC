//15. Leia um ângulo em radianos e apresente-o convertido em graus. A fórmula de conversão é:
//G = R*180/pi, sendo G o ângulo em graus e R em radianos e pi = 3.141592.

#include <stdio.h>

int main() {
    float R, G, pi;
    printf("Digite seu angulo em radianos: ");
    scanf("%f", &R);
    pi = 3.141592;
    G = R*180/pi;
    printf("Seu angulo em graus é: %.2f", G);
    return 0;
}