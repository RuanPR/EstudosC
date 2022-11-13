//05. Leia um número real e imprima a quinta parte deste número.


#include <stdio.h>

int main(){
    float x, q;
    printf("Digite seu número: ");
    scanf("%f", &x);
    q = x / 5;
    printf("A quinta parte do seu número é: %.2f", q);
    return 0;
}