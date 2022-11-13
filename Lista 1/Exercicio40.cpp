//40. Uma empresa contrata um encanador a R$30,00 por dia. Faça um programa que solicite o
//número de dias trabalhados pelo encanador e imprima a quantia líquida que deverá ser paga,
//sabendo-se que são descontados 8% para imposto de renda.


#include <stdio.h>

int main() {
    float d, s;
    printf("Digite quantos dias trabalhou: ");
    scanf("%f", &d);
    s = 30*d*0.92;
    printf("A quantia liquida de acordo com seus dias trabalhados é de %.2f", s);
    return 0;
}