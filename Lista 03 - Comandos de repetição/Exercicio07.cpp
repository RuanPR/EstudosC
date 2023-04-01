//7. Faca um programa que leia 10 inteiros positivos, ignorando nao positivos, e imprima sua
//media
#include <stdio.h>

int main() {
    int x, i;
    float soma, media;
    while (i < 10) {
        printf("Digite numeros inteiros: ");
        scanf("%d", &x);
        if (x >= 0) {
            soma += x;
            i += 1;
        }
        else {
            printf("Numeros negativos são invalidos!\n");
        }
   }
    media = soma/10;
    printf("Sua media é: %.2f.", media);
    return 0;
}
