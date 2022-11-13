//36. Leia a altura e o raio de um cilindro circular e imprima o volume do cilindro. O volume de um
//cilindro circular é calculado por meio da seguinte fórmula: V = pi * raio2 * altura, onde pi =
//3.141592.

#include <stdio.h>

int main() {
    float v, r, h;
    printf("Digite o raio e a altura do seu cilindro circular: ");
    scanf("%f %f", &r, &h);
    v = 3.141592*r*r*h;
    printf("O volume do seu cilindro circular é: %.2f", v);
    return 0;
}