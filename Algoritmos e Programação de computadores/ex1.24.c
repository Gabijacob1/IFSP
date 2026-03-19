#include <stdio.h>
#include <stdlib.h>
int main(void) {
    float n1, n2, n3, n4;
    printf("Valor da hora/aula: ");
    scanf("%f", &n1);
    printf("\n Quantidade de aulas: ");
    scanf("%f", &n2);
    printf("\n Porcentagem de desconto do INSS: ");
    scanf("%f", &n3);
    n4 = (n1*n2) - ((n1*n2) * (n3 / 100));

    printf("Valor total a receber: %.2f\n", n4);
    return 0;
}