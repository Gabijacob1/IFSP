#include <stdio.h>
#include <stdlib.h>

int main(void) {

    for (int i = 0; i < 5; i++){
        for (int j = 0; j <= i; j++){
            printf("*");
        }
        printf("\n");
    }

    printf("\n");

    for (int i = 0; i < 5; i++){
        for (int j = i; j <= 4; j++){
            printf("*");
        }
        printf("\n");
    }

    printf("\n");

    for (int i = 0; i < 5; i++){
        for (int j = 0; j < 4 - i; j++){
            printf(" ");
        }
        for (int j = 0; j <= i; j++){
            printf("*");
        }
        printf("\n");
    }

    printf("\n");

    for (int y = 0; y < 5; y++){
        for (int x = 0; x < y; x++){
            printf(" ");
        }
        for (int x = 0; x < 5 - y; x++){
            printf("*");
        }
        printf("\n");
    }

    return 0;
}