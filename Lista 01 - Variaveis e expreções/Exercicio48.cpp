//48. Leia um valor inteiro em segundos, e imprima-o em horas, minutos e segundos.

#include <stdio.h>

int main() {
    int s, h, m, s2;
    printf("Digite quantos segundos quer converter: ");
    scanf("%d", &s);
    h = s / 3600;
    s2 = s - h*3600;
    m = s2 / 60;
    s2 = s2 - m*60;
    printf("Se passaram %dh%dm%ds", h, m, s2);
    return 0;
}