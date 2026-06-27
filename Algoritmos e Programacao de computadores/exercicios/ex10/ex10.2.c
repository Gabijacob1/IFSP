#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int dia;
    int mes;
    int ano;
} Data;

int ehBissexto(int ano) {
    return (ano % 400 == 0) ||
           (ano % 4 == 0 && ano % 100 != 0);
}

int diaDoAno(const Data *data) {

    int diasMes[] = {
        31, 28, 31, 30, 31, 30,
        31, 31, 30, 31, 30, 31
    };

    int total = data->dia;

    if (ehBissexto(data->ano)) {
        diasMes[1] = 29;
    }

    for (int i = 0; i < data->mes - 1; i++) {
        total += diasMes[i];
    }

    return total;
}

int main(void) {

    Data data;

    scanf("%d", &data.dia);
    scanf("%d", &data.mes);
    scanf("%d", &data.ano);

    printf("O dia do ano da data %02d/%02d/%04d eh %d.\n",
           data.dia,
           data.mes,
           data.ano,
           diaDoAno(&data));

    return 0;
}