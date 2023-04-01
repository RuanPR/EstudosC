//25. Leia um valor de área em acres e apresente-o convertido em metros quadrados m2. A
//fórmula de conversão é: M = A*4048.58, sendo M a área em metros quadrados e A a área em
//acres.


#include <stdio.h>

int main() {
    float A, M;
    printf("Digite a sua area em acres: ");
    scanf("%f", &A);
    M = A*4048.58;
    printf("Sua area em metros quadrados é: %f", M);
    return 0;
}