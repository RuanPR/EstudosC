//3. Ler um conjunto de numeros reais, armazenando-o em vetor e calcular o quadrado das 
//componentes deste vetor, armazenando o resultado em outro vetor. Os conjuntos tem
//10 elementos cada. Imprimir todos os conjuntos.

#include <stdio.h>

int main () {

int i;
float qtdNum[10], numQuad[10];

printf("Digite os 10 números que serão feitos o quadrado: \n");
for (i=0; i <10 ;i++) {
   scanf("%f",&qtdNum[i]);
    }

for (i=0; i < 10; i++) { 
        numQuad[i] = qtdNum[i] * qtdNum[i];
    }

printf("\nNúmeros digitados:");
for (i = 0; i < 10; i++) { 
        if (i != 9) {
            printf("%.2f, ",qtdNum[i]);
        } else {
            printf("%.2f.",qtdNum[i]);
        }
    }

printf("\nNúmeros quadrados: ");
for (i = 0; i < 10; i++) {
            if (i != 9) {
            printf("%.2f, ",numQuad[i]);
        } else {
            printf("%.2f.",numQuad[i]);
        }
    }

return 0;
}