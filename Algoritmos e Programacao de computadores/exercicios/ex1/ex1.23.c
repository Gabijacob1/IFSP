#include <stdio.h>
#include <stdlib.h>
int main(void) {
    int n1, n2;
    printf("Ano do nascimento: ");
    scanf("%d", &n2);

    printf("\n Ano atual: ");
    scanf("%d", &n1);
    
    printf("\n Idade aproximada: %d anos\n", n1-n2);
    return 0;
}