//9. Leia o salario de um trabalhador e o valor da prestacao de um emprestimo. Se a
//prestacao for maior que 20% do salario imprima: Emprestimo nao concedido, caso
//contrario imprima: Emprestimo concedido.

#include <stdio.h>

int main() {
    float x, y;
    printf("Digite o salario: ");
    scanf("%f", &x);
    printf("Digite a prestação do emprestimo: ");
    scanf("%f", &y);
    if (y > x*0.20) {
        printf("Emprestimo não concedido.");
    }
    else {
        printf("Emprestimo concedido.");
    }
    return 0;
}