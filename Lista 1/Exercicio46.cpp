//46. Faça um programa que leia um número inteiro positivo de três dígitos (de 100 a 999). Gere
//outro número formado pelos dígitos invertidos do número lido. Exemplo:
//numero_lido = 123
//numero_gerado = 321

#include <stdio.h>

int main() {
    int n, n1, n2, n3;
       printf("Digite um numero inteiro positivo de 3 digitos: ");
    scanf("%d", &n);
    n3 = n % 10;    // pega o terceiro digito do numero
    n = n / 10;     // "tira" o digito anterior
    n2 = n % 10;    // pega o segundo
    n = n / 10;     // "tira" o segundo
    n1 = n % 10;    // pega o primeiro
    printf("%d%d%d", n3, n2, n1);
    return 0;
}