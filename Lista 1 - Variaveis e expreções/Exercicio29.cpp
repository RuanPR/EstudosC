//29. Leia quatro notas, calcule a média aritmética e imprima o resultado.

#include <stdio.h>

int main() {
    float X, Y, Z, V, M;
    printf("Digite a nota: ");
    scanf("%f", &X);
    printf("Digite a nota: ");
    scanf("%f", &Y);
    printf("Digite a nota: ");
    scanf("%f", &Z);
    printf("Digite a nota: ");
    scanf("%f", &V);
    M = (X + Y + Z + V)/4;
    printf("Sua media aritmetica é; %.2f", M);
    return 0;
}