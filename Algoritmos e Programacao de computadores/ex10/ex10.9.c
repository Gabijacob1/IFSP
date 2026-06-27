#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int vermelho;
    int verde;
    int azul;
} Cor;

Cor novaCor(int vermelho, int verde, int azul) {

    Cor c;

    if (vermelho < 0) {
        c.vermelho = 0;
    } else if (vermelho > 255) {
        c.vermelho = 255;
    } else {
        c.vermelho = vermelho;
    }

    if (verde < 0) {
        c.verde = 0;
    } else if (verde > 255) {
        c.verde = 255;
    } else {
        c.verde = verde;
    }

    if (azul < 0) {
        c.azul = 0;
    } else if (azul > 255) {
        c.azul = 255;
    } else {
        c.azul = azul;
    }

    return c;
}

Cor escurecer(const Cor *c) {

    Cor nova;

    nova.vermelho = (int)(c->vermelho * 0.7);
    nova.verde = (int)(c->verde * 0.7);
    nova.azul = (int)(c->azul * 0.7);

    return novaCor(nova.vermelho, nova.verde, nova.azul);
}

void imprimirCor(const Cor *c) {
    printf("rgb( %d, %d, %d )",
           c->vermelho,
           c->verde,
           c->azul);
}

int main(void) {

    int vermelho;
    int verde;
    int azul;

    scanf("%d", &vermelho);
    scanf("%d", &verde);
    scanf("%d", &azul);

    Cor base = novaCor(vermelho, verde, azul);
    Cor escura = escurecer(&base);

    printf("Cor base: ");
    imprimirCor(&base);
    printf("\n");

    printf("Cor escurecida: ");
    imprimirCor(&escura);
    printf("\n");

    return 0;
}