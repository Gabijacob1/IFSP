#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

bool contem(const char *fonte, const char *aPesquisar) {

    int tamFonte = strlen(fonte);
    int tamPesq = strlen(aPesquisar);

    if (tamPesq > tamFonte) {
        return false;
    }

    for (int i = 0; i <= tamFonte - tamPesq; i++) {

        int j;

        for (j = 0; j < tamPesq; j++) {

            if (fonte[i + j] != aPesquisar[j]) {
                break;
            }
        }

        if (j == tamPesq) {
            return true;
        }
    }

    return false;
}

int main(void) {

    char fonte[100];
    char pesquisa[100];

    printf("String fonte: ");
    fgets(fonte, sizeof(fonte), stdin);

    printf("String a pesquisar: ");
    fgets(pesquisa, sizeof(pesquisa), stdin);

    fonte[strcspn(fonte, "\n")] = '\0';
    pesquisa[strcspn(pesquisa, "\n")] = '\0';

    if (contem(fonte, pesquisa)) {
        printf("\"%s\" esta contida em \"%s\"\n",
               pesquisa, fonte);
    } else {
        printf("\"%s\" nao esta contida em \"%s\"\n",
               pesquisa, fonte);
    }

    return 0;
}