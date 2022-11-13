//03. Peça ao usuário para digitar três valores inteiros e imprima a soma deles.

#include <stdio.h>

int main (){
    int soma;
    int x, y, z;
    printf("Escreva o primeiro valor: ");
    scanf("%d", &x);
    printf("Escreva o segundo valor: ");
    scanf("%d", &y);
    printf("Escreva o terceiro valor: ");
    scanf("%d", &z);
    soma = x + y + z;
    printf("Sua soma é: %d", soma);
    return 0;
}