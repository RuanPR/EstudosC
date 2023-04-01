//3. Leia um numero real. Se o numero for positivo imprima a raiz quadrada. Do contrario,
//imprima o numero ao quadrado.

#include <stdio.h>
#include <math.h>

int main() {
    float x, raiz_x, quad_x;
    printf("Digite um numero real: ");
    scanf("%f", &x);
    raiz_x = sqrt(x);
    quad_x = x*x;
    if (x > 0) {
        printf("%.2f", raiz_x);
    }
    else {
        printf("%.2f", quad_x);
    }
    return 0;
}