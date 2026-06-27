#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int contarOcorrencias(const char *str, char c) {
    int count = 0;

    while (*str != '\0') {
        if (*str == c) {
            count++;
        }
        str++;
    }

    return count;
}

int main(void) {
    char c;
    char frase[100];

    printf("Caractere: ");
    scanf("%c", &c);

    getchar(); 

    while (1) {

        printf("Frase: ");
        fgets(frase, sizeof(frase), stdin);

        frase[strcspn(frase, "\n")] = '\0';

        if (strcmp(frase, "fim") == 0) {
            break;
        }

        printf("\"%s\" tem %d ocorrencia(s) do caractere '%c'\n",
               frase,
               contarOcorrencias(frase, c),
               c);
    }

    return 0;
}