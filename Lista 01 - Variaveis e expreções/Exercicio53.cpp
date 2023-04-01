//53. Faça um programa para ler as dimensões de um terreno (comprimento c e largura l), bem
//como o preço do metro de tela p. Imprima o custo para cercar este mesmo terreno com tela.

#include <stdio.h>

int main() {
    float l, c, p, t;
    printf("Digite o comprimento e a largura em metros do terreno: ");
    scanf("%f %f", &c, &l);
    printf("Digite o preco do metro de tela: ");
    scanf("%f", &p);
    t = p * (c*2 + l*2);
    printf("O custo para cercar o terreno vai ser de %.2fR$.", t);
    return 0;
}