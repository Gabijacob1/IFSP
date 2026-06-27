#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void imprimirCaixa(const char *str) {

    int tam = strlen(str);

    printf("++");

    for (int i = 0; i < tam + 2; i++) {
        printf("=");
    }

    printf("++\n");

    printf("|| %s ||\n", str);

    printf("++");

    for (int i = 0; i < tam + 2; i++) {
        printf("=");
    }

    printf("++\n");
}

int main(void) {

    char str[100];

    printf("String: ");
    fgets(str, sizeof(str), stdin);

    str[strcspn(str, "\n")] = '\0';

    imprimirCaixa(str);

    return 0;
}