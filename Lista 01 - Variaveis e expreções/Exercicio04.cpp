//04. Leia um número real e imprima o resultado do quadrado desse número.

#include <stdio.h>

int main(){
    float x, quad;
    printf("Digite seu número: ");
    scanf("%f", &x);
    quad = x * x;
    printf("O quadrado do seu número é: %.2f", quad);
    return 0;
}