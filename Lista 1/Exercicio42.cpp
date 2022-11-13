//42. Receba o salário-base de um funcionário. Calcule e imprima o salário a receber, sabendo-se
//que esse funcionário tem uma gratificação de 5% sobre o salário-base. Além disso, ele paga 7%
//de imposto sobre o salário-base

#include <stdio.h>
int main() {
    float s, sb;
    printf("Digite seu salario base: ");
    scanf("%f", &sb);
    s = sb*1.05-sb*0.07;
    printf("Seu salario liquido é: %.2f", s);
    return 0;
}