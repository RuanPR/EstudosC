//4. Faca um programa que leia um numero e, caso ele seja positivo, calcule e mostre: 
//• O numero digitado ao quadrado
//• A raiz quadrada do numero digitado

#include <stdio.h>
#include <math.h>

int main() {
    float x, raiz_x, quad_x;
    printf("Digite um numero positivo: ");
    scanf("%f", &x);
    quad_x = x*x;
    raiz_x = sqrt(x);
    if (x >= 0) {
        printf("O numero ao quadrado é %.2f e a sua raiz é %.2f.", quad_x, raiz_x);
    }
    else {
        printf("Numero invalido.");
    }
    return 0;
}