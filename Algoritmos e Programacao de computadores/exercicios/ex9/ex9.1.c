#include <stdio.h>
#include <stdlib.h>

int main(void) {
    char str[100];

    printf("String: ");

    fgets(str, sizeof(str), stdin);

    for (int i = 0; i < 4 && str[i] != '\0'; i++) {
        putchar(str[i]);
        if (i < 3 && str[i + 1] != '\0') {
        printf(", ");
        } else {
            printf(".");
        }
    }

    printf("\n");

    return 0;
}
