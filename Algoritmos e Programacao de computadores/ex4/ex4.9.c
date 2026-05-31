#include <stdio.h>
#include <stdlib.h>


int main() {
    int array[5];
    int arrayInv[5];

    for (int i = 0; i < 5; i++) {
        printf("array[%d]: \n", i);
        scanf("%d", &array[i]);
    }

    for(int i = 0; i < 5; i++) {
        arrayInv[i] = array[4 - i];
    }
    for (int i = 0; i < 5; i++) {
        printf("arrayInv[%d]: %d\n", i, arrayInv[i]);
    }

    return 0;
}