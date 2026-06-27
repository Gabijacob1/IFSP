#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

bool ehPalindromo(const char *str) {

    int i = 0;
    int j = strlen(str) - 1;

    while (i < j) {

        if (str[i] != str[j]) {
            return false;
        }

        i++;
        j--;
    }

    return true;
}

int main(void) {

    char str[100];

    printf("String: ");
    fgets(str, sizeof(str), stdin);

    str[strcspn(str, "\n")] = '\0';

    if (ehPalindromo(str)) {
        printf("\"%s\" eh um palindromo!\n", str);
    } else {
        printf("\"%s\" nao eh um palindromo!\n", str);
    }

    return 0;
}