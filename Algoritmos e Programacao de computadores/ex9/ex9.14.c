#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void tornarMaiuscula(char *str) {

    while (*str != '\0') {

        if (*str >= 'a' && *str <= 'z') {
            *str = *str - ('a' - 'A');
        }

        str++;
    }
}

int main(void) {

    char frase[100];

    printf("Frase: ");
    fgets(frase, sizeof(frase), stdin);

    frase[strcspn(frase, "\n")] = '\0';

    tornarMaiuscula(frase);

    printf("%s\n", frase);

    return 0;
}