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

void imprimirCor(const Cor *c) {
    printf("rgb( %d, %d, %d )",
           c->vermelho,
           c->verde,
           c->azul);
}

Cor clarear(const Cor *c) {

    Cor nova;

    /* Caso especial 1 */
    if (c->vermelho == 0 &&
        c->verde == 0 &&
        c->azul == 0) {

        nova.vermelho = 3;
        nova.verde = 3;
        nova.azul = 3;

        return nova;
    }

    int v = c->vermelho;
    int g = c->verde;
    int a = c->azul;

    /* Caso especial 2 */
    if (v > 0 && v < 3) {
        v = 3;
    }

    if (g > 0 && g < 3) {
        g = 3;
    }

    if (a > 0 && a < 3) {
        a = 3;
    }

    nova.vermelho = (int)(v / 0.7);
    nova.verde = (int)(g / 0.7);
    nova.azul = (int)(a / 0.7);

    /* Caso especial 3 */
    if (nova.vermelho > 255) {
        nova.vermelho = 255;
    }

    if (nova.verde > 255) {
        nova.verde = 255;
    }

    if (nova.azul > 255) {
        nova.azul = 255;
    }

    return nova;
}

int main(void) {

    int vermelho;
    int verde;
    int azul;

    scanf("%d", &vermelho);
    scanf("%d", &verde);
    scanf("%d", &azul);

    Cor base = novaCor(vermelho, verde, azul);
    Cor clara = clarear(&base);

    printf("Cor base: ");
    imprimirCor(&base);
    printf("\n");

    printf("Cor clareada: ");
    imprimirCor(&clara);
    printf("\n");

    return 0;
}