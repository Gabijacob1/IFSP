#include <stdio.h>
#include <stdlib.h>
int main(void) {
    float n1, n2;
    printf("Digite o preco do produto: ");
    scanf("%f", &n1);
    n2 = n1 - (n1 * 0.09);
    printf("Preco de venda com 9%% de desconto: %.2f\n", n2);

    return 0;
}