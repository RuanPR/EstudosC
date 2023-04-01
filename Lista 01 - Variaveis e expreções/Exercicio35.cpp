//35. Sejam a e b os catetos de um triângulo, onde a hipotenusa é obtida pela equação:
//ℎ𝑖𝑝𝑜𝑡𝑒𝑛𝑢𝑠𝑎 = √𝑎2 + b2. Faça um programa que receba os valores de a e b e calcule o valor da
//hipotenusa através da equação. Imprima o resultado dessa operação

#include <stdio.h>
#include <math.h>

int main() {
    int a, b;
    float hip;
    printf("Digite os valores dos vatetos do seu triangulo: ");
    scanf("%d %d", &a, &b);
    hip = sqrt(pow(a, 2)+pow(b, 2));
    printf("Sua hipotenusa é: %.2f", hip);
    return 0;
}