//43. Escreva um programa de ajuda para vendedores. A partir de um valor total lido, mostre:
//- o total a pagar com desconto de 10%;
//- o valor de cada parcela, no parcelamento de 3x sem juros;
//- a comissão do vendedor, no caso da venda ser a vista (5% sobre o valor com desconto);
//- a comissão do vendedor, no caso da venda ser parcelada (5% sobre o valor total).

#include <stdio.h>

int main() {
    float vt, d, cav, cp, p;
    printf("Digite o valor total da vendas: ");
    scanf("%f", &vt);
    p = vt/3;
    d = vt*0.90;
    cav = d*0.05;
    cp = vt*0.05;
    printf("O total a pagar, com os descontos aplicados é de: %.2f.\nO valor de cada parcela divindo em 3x é de: %.2f\nA comissão do vendedor pela venda à vista é %.2f e parcelada é %.2f.", d, p, cav, cp);
    return 0; 
}