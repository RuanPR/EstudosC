//34. Leia o valor do raio de um círculo e calcule e imprima a área do círculo correspondente. A
//área do círculo é pi*raio2
//, considere pi = 3.141592

#include <stdio.h>

int main() {
    float R, A;
    printf("Digite o raio do circulo: ");
    scanf("%f", &R);
    A = 3.141592*R*R;
    printf("A area do seu circulo é: %.2f", A);
    return 0;
}