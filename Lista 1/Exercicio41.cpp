//41. Faça um programa que leia o valor da hora de trabalho (em reais) e número de horas
//trabalhadas no mês. Imprima o valor a ser pago ao funcionário, adicionando 10% sobre o valor
//calculado.

#include <stdio.h>

int main() {
    float v, h, s;
    printf("Digite o valor das horas e quantas horas trabalhou esse mes: ");
    scanf("%f %f", &v, &h);
    s = v*h*1.10;
    printf("O valor a ser pago ao funcionario é de %.2f", s);
    return 0;
}