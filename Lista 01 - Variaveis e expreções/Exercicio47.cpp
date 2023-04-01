//47. Leia um número inteiro de 4 dígitos (de 1000 a 9999) e imprima 1 dígito por linha.
 
#include <stdio.h>

int main() {
    int n, n1, n2, n3, n4;
    printf("Digite um numero inteiro de 4 digitos: ");
    scanf("%d", &n);
    n4 = n % 10; 
    n = n / 10;
    n3 = n % 10;
    n = n / 10;
    n2 = n % 10;
    n = n / 10;
    n1 = n % 10;
    printf("%d\n%d\n%d\n%d\n", n1, n2, n3, n4);
    return 0;
}