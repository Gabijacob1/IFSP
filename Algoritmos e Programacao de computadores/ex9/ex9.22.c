#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void imprimirDireita(const char *str) {

    int tam = strlen(str);
    int espacos = 80 - tam;

    if (espacos < 0) {
        espacos = 0;
    }

    for (int i = 0; i < espacos; i++) {
        printf(" ");
    }

    printf("%s\n", str);
}

int main(void) {

    char str[100];

    printf("String: ");
    fgets(str, sizeof(str), stdin);

    str[strcspn(str, "\n")] = '\0';

    imprimirDireita(str);

    return 0;
}