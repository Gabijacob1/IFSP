#include <stdio.h>
#include <stdlib.h>


int main(void) {
    char nome[100];
    int length = 0;

    printf("Nome: ");
    fgets(nome, sizeof(nome), stdin);

    while (nome[length] != '\0' && nome[length] != '\n') {
        length++;
    }

    for (int i = 0; i < length; i++) {
        printf("%s", nome);
    }

    return 0;
}