#include <stdio.h>
#include <stdlib.h>

int main() {
    int array[5];
    int arrayMult[5];
    int n1;

    for (int i = 0; i < 5; i++) {
        printf("array[%d]: ", i);
        scanf("%d", &array[i]);
    }

    printf("Multiplicar por: ");
    scanf("%d", &n1);

    for(int i = 0; i < 5; i++) {
       arrayMult[i] = array[i] * n1;
    }

    for (int i = 0; i < 5; i++){
        printf("arrayMult[%d] = %d\n", i, arrayMult[i]);
    }

    return 0;
}