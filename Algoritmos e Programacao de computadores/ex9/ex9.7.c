#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    char str1[100];
    char str2[100];

    for (int i = 0; i < 5; i++) {

        fgets(str1, sizeof(str1), stdin);
        fgets(str2, sizeof(str2), stdin);

        str1[strcspn(str1, "\n")] = '\0';
        str2[strcspn(str2, "\n")] = '\0';

        if (strcmp(str1, str2) == 0) {
            printf("%s - %s: IGUAIS\n", str1, str2);
        }
        else if (strcmp(str1, str2) < 0) {
            printf("%s - %s: ORDEM CRESCENTE\n", str1, str2);
        }
        else {
            printf("%s - %s: ORDEM DECRESCENTE\n", str1, str2);
        }
    }

    return 0;
}