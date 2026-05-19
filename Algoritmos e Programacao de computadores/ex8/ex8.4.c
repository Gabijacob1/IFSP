#include <stdio.h>
#include <stdlib.h>

void decompoeTempo( int diaDoAno, int ano, int *mes, int *dia);
bool ehBissexto(int ano){
    return (ano % 4 == 0 && ano % 100 != 0) || (ano % 400 == 0);
}
void decompoeTempo( int diaDoAno, int ano, int *mes, int *dia){
    int diasNoMes[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    if (ehBissexto(ano)) {
        diasNoMes[2]++; 
    }
    int mesAtual = 1;
    while (diaDoAno > diasNoMes[mesAtual]) {
        diaDoAno -= diasNoMes[mesAtual];
        mesAtual++;
    }
    *mes = mesAtual;
    *dia = diaDoAno;
}