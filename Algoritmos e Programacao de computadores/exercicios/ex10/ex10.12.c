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

Ponto obterCentro(const Retangulo *r) {

    Ponto centro;

    centro.x = (r->superiorEsquerdo.x +
                r->inferiorDireito.x) / 2;

    centro.y = (r->superiorEsquerdo.y +
                r->inferiorDireito.y) / 2;

    return centro;
}

void imprimirRetangulo(const Retangulo *r) {

    printf("(%+03d, %+03d) =====|\n",
           r->superiorEsquerdo.x,
           r->superiorEsquerdo.y);

    printf("|               |\n");
    printf("|               |\n");

    printf("|===== (%+03d, %+03d)\n",
           r->inferiorDireito.x,
           r->inferiorDireito.y);
}

int main(void) {

    Ponto sEsq;
    Ponto iDir;

    scanf("%d", &sEsq.x);
    scanf("%d", &sEsq.y);

    scanf("%d", &iDir.x);
    scanf("%d", &iDir.y);

    Retangulo r = novoRetangulo(&sEsq, &iDir);

    imprimirRetangulo(&r);

    Ponto centro = obterCentro(&r);

    printf("Centro: (%+d, %+d)\n",
           centro.x,
           centro.y);

    return 0;
}