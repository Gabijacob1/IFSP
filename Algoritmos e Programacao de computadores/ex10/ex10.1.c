#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int dia;
    int mes;
    int ano;
} Data;

int compararData(const Data *d1, const Data *d2) {

    if (d1->ano != d2->ano) {
        return d1->ano - d2->ano;
    }

    if (d1->mes != d2->mes) {
        return d1->mes - d2->mes;
    }

    return d1->dia - d2->dia;
}

void imprimirData(const Data *data) {
    printf("%02d/%02d/%04d",
           data->dia,
           data->mes,
           data->ano);
}

int main(void) {

    Data d1;
    Data d2;

    scanf("%d", &d1.dia);
    scanf("%d", &d1.mes);
    scanf("%d", &d1.ano);

    scanf("%d", &d2.dia);
    scanf("%d", &d2.mes);
    scanf("%d", &d2.ano);

    if (compararData(&d1, &d2) <= 0) {
        imprimirData(&d1);
        printf(" <= ");
        imprimirData(&d2);
    } else {
        imprimirData(&d2);
        printf(" <= ");
        imprimirData(&d1);
    }

    printf("\n");

    return 0;
}