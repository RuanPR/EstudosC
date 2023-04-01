//10. Leia uma velocidade em km/h (quilômetros por hora) e apresente-a convertida em m/s
//(metros por segundo). A fórmula de conversão é: M = K/3.6, sendo K a velocidade em km/h e M
//em m/s.

#include <stdio.h>

int main(){
    float M, K;
    printf("Digite a velocidade em KM/H: ");
    scanf("%f", &K);
    M = K/3.6;
    printf("Sua velocidade em M/S é: %.2f", M);
    return 0;
}