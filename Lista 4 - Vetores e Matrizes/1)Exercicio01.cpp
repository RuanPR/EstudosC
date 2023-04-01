//1. Faca um programa que possua um vetor denominado A que armazene 6 numeros inteiros.
// O programa deve executar os seguintes passos:
//(a) Atribua os seguintes valores a esse vetor: 1, 0, 5, -2, -5, 7.
//(b) Armazene em uma variavel inteira (simples) a soma entre os valores das posicoes
//A[0], A[1] e A[5] do vetor e mostre na tela esta soma.
//(c) Modifique o vetor na posicao 4, atribuindo a esta posicao o valor 100. 
//(d) Mostre na tela cada valor do vetor A, um em cada linha.


#include <stdio.h>

int main() {
    int soma, i; 
    int A[6] = {1, 0, 5, -2, -5, 7};
    soma = A[0] + A[1] + A[5];
    A[3] = 100;
    printf("A soma é: %d\n", soma);
    for (i = 0; i < 6; i++) {
        printf("%d\n", A[i]);
    }
    return 0;
}