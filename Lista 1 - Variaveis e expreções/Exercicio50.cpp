//50. Implemente um programa que calcule o ano de nascimento de uma pessoa a partir de sua
//idade e do ano atual.

#include <stdio.h>

int main() {
    int n, i, a;
    printf("Digite sua idade e o ano atual: ");
    scanf("%d %d", &i, &a);
    n = a - i;
    printf("Voce nasceu em %d.", n);
    return 0;
}