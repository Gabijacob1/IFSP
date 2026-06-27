#include <stdio.h>
#include <stdlib.h>

int main(void) {
    char str[100];
    int length = 0;

    printf("Sentenca: ");
    fgets(str, sizeof(str), stdin);

    while (str[length] != '\0' && str[length] != '\n') {
        length++;
    }

    if (length > 0) {
        printf("Primeiro caractere: %c\n", str[0]);
        printf("Ultimo caractere: %c\n", str[length - 1]);
        printf("Numero de caracteres: %d\n", length);
    } else {
        printf("A sentenca esta vazia.\n");
    }

    return 0;
}