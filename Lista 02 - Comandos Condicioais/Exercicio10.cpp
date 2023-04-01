//10. Faca um programa que receba a altura e o sexo de uma pessoa e calcule e mostre seu
//peso ideal, utilizando as seguintes formulas (onde h corresponde a altura): 
//• Homens: (72.7 ∗ h) − 58
//• Mulheres: (62, 1 ∗ h) − 44, 7

#include <stdio.h>

int main() {
    float h, peso_ideal;
    char s;
    printf("Qual sua altura em metros? ");
    scanf("%f", &h);
    printf("Qual seu sexo M/F? ");
    scanf(" %c", &s); //limpar o buffer
    if (s == 'M') {
        peso_ideal = 72.7 * h - 58;
        printf("Seu peso ideal é %.2f", peso_ideal);
    }
    else if (s == 'F') {
        peso_ideal = 62.1 * h - 44.7;
        printf("Seu peso ideal é %.2f", peso_ideal);
    }
    else {
        printf("Sexo invalido.");
    }
    return 0;
}
