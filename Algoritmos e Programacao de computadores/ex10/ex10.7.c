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

int getVermelho(const Cor *c) {
    return c->vermelho;
}

int getVerde(const Cor *c) {
    return c->verde;
}

int getAzul(const Cor *c) {
    return c->azul;
}

void imprimirCor(const Cor *c) {
    printf("Cor: rgb( %d, %d, %d )\n",
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

    Cor cor = novaCor(vermelho, verde, azul);

    imprimirCor(&cor);

    printf("getVermelho(): %d\n", getVermelho(&cor));
    printf("getVerde(): %d\n", getVerde(&cor));
    printf("getAzul(): %d\n", getAzul(&cor));

    return 0;
}