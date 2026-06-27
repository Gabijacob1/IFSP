#include <stdio.h>
#include <stdlib.h>

int main(void) {

    char str[100];

    printf("Sentenca: ");
    fgets(str, sizeof(str), stdin);

    for (int i = 0; str[i] != '\0' && str[i] != '\n'; i++) {

        if (i % 2 != 0) {   

            if (str[i] == ' ') {
                printf("' '");
            } else {
                printf("%c", str[i]);
            }

            if (str[i + 2] != '\0' && str[i + 2] != '\n') {
                printf(", ");
            }
        }
    }

    printf("\n");

    return 0;
}