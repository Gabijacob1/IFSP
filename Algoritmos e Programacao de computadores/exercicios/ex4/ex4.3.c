#include <stdio.h>
#include <stdlib.h>

int main() {
    float array[5];
    float soma = 0;
    float prod = 1;

    for (int i = 0; i < 5; i++) {
        printf("array[%d]: ", i);
        scanf("%f", &array[i]);
    }

    for(int i = 0; i < 5; i++) {
       soma += array[i];
       prod *= array[i];
    }
    printf("Somatorio: %.2f\n", soma);
    printf("Produtorio: %.2f\n", prod);

    return 0;
}