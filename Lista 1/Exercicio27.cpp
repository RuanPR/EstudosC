//27. Leia um valor de área em hectares e apresente-o convertido em metros quadrados m2. A
//fórmula de conversão é: M = H*10000, sendo M a área em metros quadrados e H a área em
//hectares.

#include <stdio.h>

int main() {
    float H, M;
    printf("Digite sua area em hectares: ");
    scanf("%f", &H);
    M = H*10000;
    printf("Sua area em metros quadradados é: %.2f", M);
    return 0;
}
