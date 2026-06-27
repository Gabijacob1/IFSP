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

bool intercepta(const Retangulo *r1, const Retangulo *r2) {

    Ponto p[4] = {
        r2->superiorEsquerdo,
        {r2->inferiorDireito.x, r2->superiorEsquerdo.y},
        {r2->superiorEsquerdo.x, r2->inferiorDireito.y},
        r2->inferiorDireito
    };

    for (int i = 0; i < 4; i++) {
        if (contem(r1, &p[i])) {
            return true;
        }
    }

    Ponto q[4] = {
        r1->superiorEsquerdo,
        {r1->inferiorDireito.x, r1->superiorEsquerdo.y},
        {r1->superiorEsquerdo.x, r1->inferiorDireito.y},
        r1->inferiorDireito
    };

    for (int i = 0; i < 4; i++) {
        if (contem(r2, &q[i])) {
            return true;
        }
    }

    return false;
}

int main(void) {

    Ponto s1;
    Ponto i1;
    Ponto s2;
    Ponto i2;

    scanf("%d", &s1.x);
    scanf("%d", &s1.y);
    scanf("%d", &i1.x);
    scanf("%d", &i1.y);

    scanf("%d", &s2.x);
    scanf("%d", &s2.y);
    scanf("%d", &i2.x);
    scanf("%d", &i2.y);

    Retangulo r1 = novoRetangulo(&s1, &i1);
    Retangulo r2 = novoRetangulo(&s2, &i2);

    if (intercepta(&r1, &r2)) {
        printf("Os retangulos se interceptam!\n");
    } else {
        printf("Os retangulos nao se interceptam!\n");
    }

    return 0;
}