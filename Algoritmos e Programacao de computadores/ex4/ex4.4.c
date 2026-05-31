#include <stdio.h>
#include <stdlib.h>
int main() {
    int array[5];
    int n1;

    for (int i = 0; i < 5; i++) {
        printf("array[%d]: ", i);
        scanf("%d", &array[i]);
    }

    printf("Buscar por: ");
    scanf("%d", &n1);

    for (int i = 0; i < 5; i++) {
        if(n1 == array[i]) {
            printf("Indice %d: ACHEI\n", i);
        }else{
            printf("Indice %d: NAO ACHEI\n", i);
        }

    }

    return 0;
}