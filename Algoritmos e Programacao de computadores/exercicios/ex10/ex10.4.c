#include <stdio.h>
#include <stdlib.h>

typedef struct {
    double real;
    double imaginario;
} Complexo;

Complexo somar(const Complexo *c1, const Complexo *c2) {

    Complexo resultado;

    resultado.real = c1->real + c2->real;
    resultado.imaginario = c1->imaginario + c2->imaginario;

    return resultado;
}

void imprimirComplexo(const Complexo *c) {
    printf("(%.2lf + %.2lfi)",
           c->real,
           c->imaginario);
}

int main(void) {

    Complexo c1;
    Complexo c2;
    Complexo soma;

    scanf("%lf", &c1.real);
    scanf("%lf", &c1.imaginario);

    scanf("%lf", &c2.real);
    scanf("%lf", &c2.imaginario);

    soma = somar(&c1, &c2);

    imprimirComplexo(&c1);
    printf(" + ");
    imprimirComplexo(&c2);
    printf(" = ");
    imprimirComplexo(&soma);
    printf("\n");

    return 0;
}