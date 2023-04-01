//2. Leia um numero fornecido pelo usuario. Se esse numero for positivo, calcule a raiz
//quadrada do numero. Se o numero for negativo, mostre uma mensagem dizendo que o
//numero e invalido.

#include <stdio.h>
#include <math.h>

int main() {
    float x, raiz_x;
    printf("Digite um numero: ");
    scanf("%f", &x);
    raiz_x = sqrt(x);
    if (x > 0) {
        printf("%.2f", raiz_x);
    }
    else {
        printf("Esse numero é invalido!");
    }
    return 0;
}