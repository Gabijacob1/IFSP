#include <stdio.h>
#include <stdlib.h>

typedef struct {
    double numerador;
    double denominador;
} Fracao;

Fracao somar(const Fracao *f1, const Fracao *f2) {

    Fracao r;

    if (f1->denominador == f2->denominador) {
        r.numerador = f1->numerador + f2->numerador;
        r.denominador = f1->denominador;
    } else {
        r.numerador = f1->numerador * f2->denominador +
                       f2->numerador * f1->denominador;

        r.denominador = f1->denominador * f2->denominador;
    }

    return r;
}

Fracao subtrair(const Fracao *f1, const Fracao *f2) {

    Fracao r;

    if (f1->denominador == f2->denominador) {
        r.numerador = f1->numerador - f2->numerador;
        r.denominador = f1->denominador;
    } else {
        r.numerador = f1->numerador * f2->denominador -
                       f2->numerador * f1->denominador;

        r.denominador = f1->denominador * f2->denominador;
    }

    return r;
}

Fracao multiplicar(const Fracao *f1, const Fracao *f2) {

    Fracao r;

    r.numerador = f1->numerador * f2->numerador;
    r.denominador = f1->denominador * f2->denominador;

    return r;
}

Fracao dividir(const Fracao *f1, const Fracao *f2) {

    Fracao r;

    r.numerador = f1->numerador * f2->denominador;
    r.denominador = f1->denominador * f2->numerador;

    return r;
}

void imprimirFracao(const Fracao *f) {
    printf("%.2lf/%.2lf",
           f->numerador,
           f->denominador);
}

int main(void) {

    Fracao f1;
    Fracao f2;

    scanf("%lf", &f1.numerador);
    scanf("%lf", &f1.denominador);

    scanf("%lf", &f2.numerador);
    scanf("%lf", &f2.denominador);

    Fracao s = somar(&f1, &f2);
    Fracao sub = subtrair(&f1, &f2);
    Fracao mult = multiplicar(&f1, &f2);
    Fracao div = dividir(&f1, &f2);

    imprimirFracao(&f1);
    printf(" + ");
    imprimirFracao(&f2);
    printf(" = ");
    imprimirFracao(&s);
    printf("\n");

    imprimirFracao(&f1);
    printf(" - ");
    imprimirFracao(&f2);
    printf(" = ");
    imprimirFracao(&sub);
    printf("\n");

    imprimirFracao(&f1);
    printf(" * ");
    imprimirFracao(&f2);
    printf(" = ");
    imprimirFracao(&mult);
    printf("\n");

    imprimirFracao(&f1);
    printf(" / ");
    imprimirFracao(&f2);
    printf(" = ");
    imprimirFracao(&div);
    printf("\n");

    return 0;
}