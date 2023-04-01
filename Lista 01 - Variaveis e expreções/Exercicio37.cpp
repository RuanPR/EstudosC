//37. Faça um programa que leia o valor de um produto e imprima o valor com desconto, tendo
//em vista que o desconto foi de 12%.

#include <stdio.h>

int main() {
    float v, d;
    printf("Digite o valor do seu produto: ");
    scanf("%f", &v);
    d = v*0.88;
    printf("O valor do seu produto com desconto é: %.2f", d);
    return 0;
}