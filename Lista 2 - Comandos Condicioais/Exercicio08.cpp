//8. Faca um programa que leia 2 notas de um aluno, verifique se as notas sao validas e
//exiba na tela a media destas notas. Uma nota valida deve ser, obrigatoriamente, um 
//valor entre 0.0 e 10.0, onde caso a nota nao possua um valor valido, este fato deve ser
//informado ao usuario e o programa termina. 

#include <stdio.h>

int main() {
    float x, y, media;
    printf("Digite duas notas: ");
    scanf("%f %f", &x, &y);
    if ((x >= 0 && x <=10) && (y >= 0 && y <= 10)) {
        media = (x+y)/2;
        printf("Sua media é %.2f", media);
    }
    else {
        printf("Esse não é um valor valido.");
    }
    return 0;
}
