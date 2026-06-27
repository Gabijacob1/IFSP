#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int tamanho(const char *str) {
    int count = 0;
    while (str[count] != '\0' && str[count] != '\n') {
        count++;
    }
    return count;
}

int main(void) {
    char frase[100];

    printf("Frase: ");
    fgets(frase, sizeof(frase), stdin);
    frase[strcspn(frase, "\n")] = '\0';

    printf("%d caractere(s)!\n", tamanho(frase));

    return 0;
}