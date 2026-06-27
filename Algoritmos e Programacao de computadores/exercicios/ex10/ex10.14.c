#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct {
    int x;
    int y;
} Ponto;

typedef struct {
    Ponto superiorEsquerdo;
    Ponto inferiorDireito;
} Retangulo;

Retangulo novoRetangulo(const Ponto *sEsq, const Ponto *iDir) {

    Retangulo r;

    r.superiorEsquerdo = *sEsq;
    r.inferiorDireito = *iDir;

    return r;
}

bool contem(const Retangulo *r, const Ponto *p) {

    return p->x >= r->superiorEsquerdo.x &&
           p->x <= r->inferiorDireito.x &&
           p->y <= r->superiorEsquerdo.y &&
           p->y >= r->inferiorDireito.y;
}

int main(void) {

    Ponto sEsq;
    Ponto iDir;
    Ponto pontos[5];

    scanf("%d", &sEsq.x);
    scanf("%d", &sEsq.y);

    scanf("%d", &iDir.x);
    scanf("%d", &iDir.y);

    Retangulo r = novoRetangulo(&sEsq, &iDir);

    for (int i = 0; i < 5; i++) {
        scanf("%d", &pontos[i].x);
        scanf("%d", &pontos[i].y);
    }

    for (int i = 0; i < 5; i++) {

        printf("(%+d, %+d): ",
               pontos[i].x,
               pontos[i].y);

        if (contem(&r, &pontos[i])) {
            printf("contido!\n");
        } else {
            printf("nao contido!\n");
        }
    }

    return 0;
}