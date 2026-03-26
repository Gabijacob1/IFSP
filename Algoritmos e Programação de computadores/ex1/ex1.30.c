#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int n1, n2;
    scanf("%d", &n1);
    scanf("%d", &n2);

    int n3 = n1;
    int n4 = n2;

    printf("Valores antes da troca:\n");
    printf("Primeiro numero: %d\n", n1);
    printf("Segundo numero: %d\n", n2);
    printf("\n");
    printf("Valores depois da troca:\n");
    printf("Primeiro numero: %d\n", n4);
    printf("Segundo numero: %d\n", n3);

    return 0;
}