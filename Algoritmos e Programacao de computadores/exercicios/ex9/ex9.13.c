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
    char vogais[] = {'A', 'E', 'I', 'O', 'U'};

    printf("Frase: ");
    fgets(frase, sizeof(frase), stdin);

    frase[strcspn(frase, "\n")] = '\0';

    for (int i = 0; i < 5; i++) {

        char maiuscula = vogais[i];
        char minuscula = vogais[i] + 32;

        int total = contarOcorrencias(frase, maiuscula) +
                    contarOcorrencias(frase, minuscula);

        printf("%c/%c: %d\n", maiuscula, minuscula, total);
    }

    return 0;
}