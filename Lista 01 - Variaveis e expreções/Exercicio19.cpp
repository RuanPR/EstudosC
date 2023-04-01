//19. Leia um valor de volume em litros e apresente-o convertido em metros cúbicos m3. A
//fórmula de conversão é: M = L /1000, sendo L o volume em litros e M o volume em metros
//cúbicos

#include <stdio.h>

int main() {
    float L, M;
    printf("Digite seu volume em litros: ");
    scanf("%f", &L);
    M = L /1000;
    printf("Seu volume em metros cubicos é: %.2f", M);
    return 0;
}
