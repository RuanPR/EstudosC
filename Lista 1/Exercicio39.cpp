//39. A importância de R$780.000,00 será dividida entre três ganhadores de um concurso. Sendo
//que da quantia total:
//- O primeiro ganhador receberá 46%;
//- O segundo receberá 32%;
//- O terceiro receberá o restante;
//Calcule e imprima a quantia ganha por cada um dos ganhadores.

#include <stdio.h>

int main() {
    float p, s, t;
    p = 780000*0.46;
    s = 780000*0.32;
    t = 780000*0.22;
    printf("O primeiro ganhador receberá %.2f, o segundo recebera %.2f e o terceiro %.2f.", p, s, t);
    return 0;
}