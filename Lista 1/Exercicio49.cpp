//49. Faça um programa para leia o horário (hora, minuto e segundo) de início e a duração, em
//segundos, de uma experiência biológica. O programa deve resultar com o novo horário (hora,
//minuto e segundo) do termino da mesma.

#include <stdio.h>

int main() {
    int h, m, s, d, st, s2;
    printf("Digite o inicio em hora, minuto e segundo: ");
    scanf("%d %d %d", &h, &m, &s);
    printf("Digite a duracao da experiencia em segundos: ");
    scanf("%d", &d);
    h = h * 3600;
    m = m * 60;
    st = h + m + s + d;
    h = st / 3600;
    s2 = st - h * 3600;
    m = s2 / 60;
    s2 = s2 - m * 60;
    printf("O novo horario é %dh%dm%ds", h, m, s2);
    return 0;
}