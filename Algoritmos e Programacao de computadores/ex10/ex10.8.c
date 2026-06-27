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

void setVermelho(Cor *c, int vermelho) {

    if (vermelho < 0) {
        c->vermelho = 0;
    } else if (vermelho > 255) {
        c->vermelho = 255;
    } else {
        c->vermelho = vermelho;
    }
}

void setVerde(Cor *c, int verde) {

    if (verde < 0) {
        c->verde = 0;
    } else if (verde > 255) {
        c->verde = 255;
    } else {
        c->verde = verde;
    }
}

void setAzul(Cor *c, int azul) {

    if (azul < 0) {
        c->azul = 0;
    } else if (azul > 255) {
        c->azul = 255;
    } else {
        c->azul = azul;
    }
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
    int novoVermelho;
    int novoVerde;
    int novoAzul;

    scanf("%d", &vermelho);
    scanf("%d", &verde);
    scanf("%d", &azul);

    Cor cor = novaCor(vermelho, verde, azul);

    printf("Cor: ");
    imprimirCor(&cor);
    printf("\n");

    scanf("%d", &novoVermelho);
    scanf("%d", &novoVerde);
    scanf("%d", &novoAzul);

    setVermelho(&cor, novoVermelho);
    setVerde(&cor, novoVerde);
    setAzul(&cor, novoAzul);

    printf("Cor alterada: ");
    imprimirCor(&cor);
    printf("\n");

    return 0;
}