#include <stdio.h>
#include <stdlib.h>

int main(void) {
    char nome[100];

    printf("Nome: ");
    fgets(nome, sizeof(nome), stdin);

    for (int i = 0; i < 5; i++) {
        printf("%s", nome);
    }

    return 0;
}