//3. Faca um algoritmo utilizando o comando while que mostra uma contagem regressiva
//na tela, iniciando em 10 e terminando em 0. Mostrar uma mensagem “FIM!” apos a
//contagem.

#include <stdio.h>

int main() {
    int x;
    x = 10;
    while (x >= 0) {
        printf("%d\n", x);
        x -= 1;
    }
    printf("FIM!");
    return 0;
}