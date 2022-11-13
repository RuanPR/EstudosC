//52. Três amigos jogaram na loteria. Caso eles ganhem, o prêmio deve ser repartido
//proporcionalmente ao valor que cada deu para a realização da aposta. Faça um programa que
//leia quanto cada apostador investiu, o valor do prêmio, e imprima quanto cada um ganharia do
//prêmio com base no valor investido.

#include <stdio.h>

int main() {
    float x, y, z, p, px, py, pz, t;
    printf("Quanto cada um investiu? ");
    scanf("%f %f %f", &x, &y, &z);
    printf("Qual o valor do premio? ");
    scanf("%f", &p);
    t = x + y + z;
    px = x/t*p;
    py = y/t*p;
    pz = z/t*p;
    printf("Cada um ganharia, proporcionalmente ao valor investido, %.2fR$, %.2fR$ e %.2fR$.", px, py, pz);
    return 0;
}