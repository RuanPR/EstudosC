//38. Leia o salário de um funcionário. Calcule e imprima o valor do novo salário, sabendo que ele
//recebeu um aumento de 25%.

#include <stdio.h>

int main() {
    float s, a;
    printf("Digite o salariao do funcionario: ");
    scanf("%f", &s);
    a = s*1.25;
    printf("Seu salario com o aumento é: %.2f", a);
    return 0;
}