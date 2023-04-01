//44. Receba a altura do degrau de uma escada e a altura que o usuário deseja alcançar subindo
//a escada. Calcule e mostre quantos degraus o usuário deverá subir para atingir seu objetivo.

#include <stdio.h>
#include <math.h>

int main() {
    float h, ht, t;
    printf("Digite a altura do degrau e a altura a qual você deseja alcancar subindo as escadas: ");
    scanf("%f %f", &h, &ht);
    t = ht/h;
    printf("O total de degraus que você devera subir é: %.0f", ceil(t)); //como arredondar o resultado "t" para cima? = use ceil
    return 0;
}