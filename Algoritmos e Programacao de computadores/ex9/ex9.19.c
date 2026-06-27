#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void substring(char *recorte, const char *origem, int inicio, int fim) {

    int tam = strlen(origem);

    if (inicio < 0 || fim > tam || inicio >= fim) {
        strcpy(recorte, origem);
        return;
    }

    int j = 0;

    for (int i = inicio; i < fim; i++) {
        recorte[j] = origem[i];
        j++;
    }

    recorte[j] = '\0';
}

int main(void) {

    char str[100];
    char recorte[100];
    int inicio;
    int fim;

    printf("String: ");
    fgets(str, sizeof(str), stdin);

    str[strcspn(str, "\n")] = '\0';

    printf("Inicio: ");
    scanf("%d", &inicio);

    printf("Fim: ");
    scanf("%d", &fim);

    substring(recorte, str, inicio, fim);

    printf("Recorte: %s\n", recorte);

    return 0;
}