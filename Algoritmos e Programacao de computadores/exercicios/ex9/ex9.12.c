#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int contarOcorrencias(const char *str, char c) {
    int cont = 0;

    while (*str != '\0') {
        if (*str == c) {
            cont++;
        }
        str++;
    }

    return cont;
}

int main(void) {
    char frase[100];

    printf("Frase: ");
    fgets(frase, sizeof(frase), stdin);

    frase[strcspn(frase, "\n")] = '\0';

    for (char letra = 'A'; letra <= 'E'; letra++) {

        int total =
            contarOcorrencias(frase, letra) +
            contarOcorrencias(frase, letra + ('a' - 'A'));

        printf("%c/%c: %d\n",
               letra,
               letra + ('a' - 'A'),
               total);
    }

    return 0;
}