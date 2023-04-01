//2. Crie um programa que le 6 valores inteiros e, em seguida, mostre na tela os valores lidos. 

#include <stdio.h>

int main() {
    int A[6], i;
    for (i = 0; i < 6; i++) {
        printf("Digite um valor: ");
        scanf("%d", &A[i]);
    }
    printf("Seus valores sao: {");
     for (i = 0; i < 6; i++) {
        if ( i == 5) {
            printf("%d}", A[i]);
        }
        else {
            printf("%d, ", A[i]);
        }
    }
    return 0;
}