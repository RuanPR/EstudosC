//45. Faça um programa para converter uma letra maiúscula em letra minúscula. Use a tabela
//ASCII para resolver o problema.

#include <stdio.h>

int main() {
    char l, lm;
    printf("Digite uma letra maiuscula: ");
    scanf("%c", &l);
    lm = l + 32;
    printf("A letra minuscula eh %c", lm);
    return 0;
}
