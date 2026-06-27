#include <stdio.h>
#include <stdlib.h>

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

void mover(Retangulo *r, int x, int y) {

    r->superiorEsquerdo.x += x;
    r->superiorEsquerdo.y += y;

    r->inferiorDireito.x += x;
    r->inferiorDireito.y += y;
}

void imprimirRetangulo(const Retangulo *r) {

    printf("(%+d, %+d) =====|\n",
           r->superiorEsquerdo.x,
           r->superiorEsquerdo.y);

    printf("|               |\n");
    printf("|               |\n");

    printf("|===== (%+d, %+d)\n",
           r->inferiorDireito.x,
           r->inferiorDireito.y);
}

int main(void) {

    Ponto sEsq;
    Ponto iDir;
    int dx, dy;

    scanf("%d", &sEsq.x);
    scanf("%d", &sEsq.y);

    scanf("%d", &iDir.x);
    scanf("%d", &iDir.y);

    scanf("%d", &dx);
    scanf("%d", &dy);

    Retangulo r = novoRetangulo(&sEsq, &iDir);

    printf("Retangulo original:\n");
    imprimirRetangulo(&r);

    mover(&r, dx, dy);

    printf("Retangulo movido:\n");
    imprimirRetangulo(&r);

    return 0;
}