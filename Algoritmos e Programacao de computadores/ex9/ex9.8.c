#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    char str1[100];
    char str2[100];
    char str3[100];

    printf("String 1: ");
    fgets(str1, sizeof(str1), stdin);
    str1[strcspn(str1, "\n")] = '\0';

    printf("String 2: ");
    fgets(str2, sizeof(str2), stdin);
    str2[strcspn(str2, "\n")] = '\0';

    printf("String 3: ");
    fgets(str3, sizeof(str3), stdin);
    str3[strcspn(str3, "\n")] = '\0';

    if (strcmp(str1, str2) > 0) {
        char temp[100];
        strcpy(temp, str1);
        strcpy(str1, str2);
        strcpy(str2, temp);
    }

    if (strcmp(str1, str3) > 0) {
        char temp[100];
        strcpy(temp, str1);
        strcpy(str1, str3);
        strcpy(str3, temp);
    }

    if (strcmp(str2, str3) > 0) {
        char temp[100];
        strcpy(temp, str2);
        strcpy(str2, str3);
        strcpy(str3, temp);
    }

    printf("%s, %s e %s\n", str1, str2, str3);

    return 0;
}