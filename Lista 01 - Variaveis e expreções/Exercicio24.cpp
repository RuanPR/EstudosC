//24. Leia um valor de área em metros quadrados m2 e apresente-o convertido em acres. A
//fórmula de conversão é: A = M*0.000247, sendo M a área em metros quadrados e A a área em
//acres

#include <stdio.h>

int main() {
    float A, M;
    printf("Digite a sua area em metros quadrados: ");
    scanf("%f", &M);
    A = M*0.000247;
    printf("Sua area em acres é: %f", A);
    return 0;
}