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

int calcularArea(const Retangulo *r) {

    int largura =
        r->inferiorDireito.x - r->superiorEsquerdo.x;

    int altura =
        r->superiorEsquerdo.y - r->inferiorDireito.y;

    return largura * altura;
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

    printf("Area: %d\n", calcularArea(&r));

    return 0;
}