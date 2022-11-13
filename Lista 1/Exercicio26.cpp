//26. Leia um valor de área em metros quadrados m2 e apresente-o convertido em hectares. A
//fórmula de conversão é: H = M*0.0001, sendo M a área em metros quadrados e H a área em
//hectares.

#include <stdio.h>

int main() {
    float H, M;
    printf("Digite sua area em metros quadradados: ");
    scanf("%f", &M);
    H = M*0.0001;
    printf("Sua area em hectares é: %.2f", H);
    return 0;
}