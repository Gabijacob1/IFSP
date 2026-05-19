#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void) {
    float n1;

    printf("Numero: ");
    scanf("%f", &n1);

    printf("Maior inteiro mais proximo: %.2f\n", ceil(n1));
    printf("Menor inteiro mais proximo: %.2f\n", floor(n1));

    return 0;
}