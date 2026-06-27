#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void removerLetra(char *str, char c) {

    char maiuscula;
    char minuscula;
    int i;
    int j = 0;

    if (c >= 'A' && c <= 'Z') {
        maiuscula = c;
        minuscula = c + ('a' - 'A');
    } else {
        minuscula = c;
        maiuscula = c - ('a' - 'A');
    }

    for (i = 0; str[i] != '\0'; i++) {

        if (str[i] != maiuscula && str[i] != minuscula) {
            str[j] = str[i];
            j++;
        }
    }

    str[j] = '\0';
}

int main(void) {

    char frase[100];
    char c;

    printf("Frase: ");
    fgets(frase, sizeof(frase), stdin);

    frase[strcspn(frase, "\n")] = '\0';

    printf("Caractere: ");
    scanf("%c", &c);

    removerLetra(frase, c);

    printf("%s\n", frase);

    return 0;
}