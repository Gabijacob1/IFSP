#include <stdio.h>
#include <stdlib.h>

int main() {
    int array1[5];
    int array2[5];
    int array3[5];

    printf("Forneca os valores do primeiro array:\n");
    for (int i = 0; i < 5; i++) {
        printf("array1[%d]: ", i);
        scanf("%d", &array1[i]);
    }
    printf("\n");

    printf("Forneca os valores do segundo array:\n");
    for (int i = 0; i < 5; i++) {
        printf("array2[%d]: \n", i);
        scanf("%d", &array2[i]);
    }

    for (int i = 0; i < 5; i++) {
        array3[i] = array1[i] + array2[i];
    }

    for (int i = 0; i < 5; i++) {
        printf("arraySoma[%d] = %d\n", i, array3[i]);
    }
    printf("\n");

    return 0;
}

    