#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int contarPalavras(const char *str) {

    int cont = 0;
    int dentroPalavra = 0;

    while (*str != '\0') {

        if (*str != ' ' && *str != '\t' && *str != '\n') {

            if (!dentroPalavra) {
                cont++;
                dentroPalavra = 1;
            }

        } else {
            dentroPalavra = 0;
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

    printf("Quantidade de palavras: %d\n",
           contarPalavras(frase));

    return 0;
}