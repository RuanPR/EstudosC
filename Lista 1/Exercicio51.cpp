//51. Escreva um programa que leia as coordenadas x e y de pontos no R2
// e calcule sua distância da origem (0, 0).

#include <stdio.h>
#include <math.h>

int main() {
    float x, y, d;
    printf("Digite suas coordenadas: ");
    scanf("%f %f", &x, &y);
    d = sqrt(x*x + y*y);
    printf("Sua distancia da origem (0, 0) é de %.2f", d);
    return 0;
}